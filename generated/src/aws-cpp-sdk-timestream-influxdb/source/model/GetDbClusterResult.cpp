﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/GetDbClusterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDbClusterResult::GetDbClusterResult() : 
    m_status(ClusterStatus::NOT_SET),
    m_port(0),
    m_deploymentType(ClusterDeploymentType::NOT_SET),
    m_dbInstanceType(DbInstanceType::NOT_SET),
    m_networkType(NetworkType::NOT_SET),
    m_dbStorageType(DbStorageType::NOT_SET),
    m_allocatedStorage(0),
    m_publiclyAccessible(false),
    m_failoverMode(FailoverMode::NOT_SET)
{
}

GetDbClusterResult::GetDbClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetDbClusterResult()
{
  *this = result;
}

GetDbClusterResult& GetDbClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

  }

  if(jsonValue.ValueExists("readerEndpoint"))
  {
    m_readerEndpoint = jsonValue.GetString("readerEndpoint");

  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

  }

  if(jsonValue.ValueExists("deploymentType"))
  {
    m_deploymentType = ClusterDeploymentTypeMapper::GetClusterDeploymentTypeForName(jsonValue.GetString("deploymentType"));

  }

  if(jsonValue.ValueExists("dbInstanceType"))
  {
    m_dbInstanceType = DbInstanceTypeMapper::GetDbInstanceTypeForName(jsonValue.GetString("dbInstanceType"));

  }

  if(jsonValue.ValueExists("networkType"))
  {
    m_networkType = NetworkTypeMapper::GetNetworkTypeForName(jsonValue.GetString("networkType"));

  }

  if(jsonValue.ValueExists("dbStorageType"))
  {
    m_dbStorageType = DbStorageTypeMapper::GetDbStorageTypeForName(jsonValue.GetString("dbStorageType"));

  }

  if(jsonValue.ValueExists("allocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("allocatedStorage");

  }

  if(jsonValue.ValueExists("publiclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("publiclyAccessible");

  }

  if(jsonValue.ValueExists("dbParameterGroupIdentifier"))
  {
    m_dbParameterGroupIdentifier = jsonValue.GetString("dbParameterGroupIdentifier");

  }

  if(jsonValue.ValueExists("logDeliveryConfiguration"))
  {
    m_logDeliveryConfiguration = jsonValue.GetObject("logDeliveryConfiguration");

  }

  if(jsonValue.ValueExists("influxAuthParametersSecretArn"))
  {
    m_influxAuthParametersSecretArn = jsonValue.GetString("influxAuthParametersSecretArn");

  }

  if(jsonValue.ValueExists("vpcSubnetIds"))
  {
    Aws::Utils::Array<JsonView> vpcSubnetIdsJsonList = jsonValue.GetArray("vpcSubnetIds");
    for(unsigned vpcSubnetIdsIndex = 0; vpcSubnetIdsIndex < vpcSubnetIdsJsonList.GetLength(); ++vpcSubnetIdsIndex)
    {
      m_vpcSubnetIds.push_back(vpcSubnetIdsJsonList[vpcSubnetIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("vpcSecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupIdsJsonList = jsonValue.GetArray("vpcSecurityGroupIds");
    for(unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength(); ++vpcSecurityGroupIdsIndex)
    {
      m_vpcSecurityGroupIds.push_back(vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("failoverMode"))
  {
    m_failoverMode = FailoverModeMapper::GetFailoverModeForName(jsonValue.GetString("failoverMode"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
