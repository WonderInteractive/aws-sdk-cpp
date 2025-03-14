﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/GetRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RecycleBin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRuleResult::GetRuleResult() : 
    m_resourceType(ResourceType::NOT_SET),
    m_status(RuleStatus::NOT_SET),
    m_lockState(LockState::NOT_SET)
{
}

GetRuleResult::GetRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetRuleResult()
{
  *this = result;
}

GetRuleResult& GetRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

  }

  if(jsonValue.ValueExists("RetentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetObject("RetentionPeriod");

  }

  if(jsonValue.ValueExists("ResourceTags"))
  {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("ResourceTags");
    for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
    {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RuleStatusMapper::GetRuleStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("LockConfiguration"))
  {
    m_lockConfiguration = jsonValue.GetObject("LockConfiguration");

  }

  if(jsonValue.ValueExists("LockState"))
  {
    m_lockState = LockStateMapper::GetLockStateForName(jsonValue.GetString("LockState"));

  }

  if(jsonValue.ValueExists("LockEndTime"))
  {
    m_lockEndTime = jsonValue.GetDouble("LockEndTime");

  }

  if(jsonValue.ValueExists("RuleArn"))
  {
    m_ruleArn = jsonValue.GetString("RuleArn");

  }

  if(jsonValue.ValueExists("ExcludeResourceTags"))
  {
    Aws::Utils::Array<JsonView> excludeResourceTagsJsonList = jsonValue.GetArray("ExcludeResourceTags");
    for(unsigned excludeResourceTagsIndex = 0; excludeResourceTagsIndex < excludeResourceTagsJsonList.GetLength(); ++excludeResourceTagsIndex)
    {
      m_excludeResourceTags.push_back(excludeResourceTagsJsonList[excludeResourceTagsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
