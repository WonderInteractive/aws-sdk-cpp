﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceStorageResourceType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Connect
{
namespace Model
{

  /**
   */
  class DisassociateInstanceStorageConfigRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DisassociateInstanceStorageConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateInstanceStorageConfig"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;

    AWS_CONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DisassociateInstanceStorageConfigRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DisassociateInstanceStorageConfigRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DisassociateInstanceStorageConfigRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline DisassociateInstanceStorageConfigRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline DisassociateInstanceStorageConfigRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline DisassociateInstanceStorageConfigRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid resource type.</p>
     */
    inline const InstanceStorageResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const InstanceStorageResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(InstanceStorageResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline DisassociateInstanceStorageConfigRequest& WithResourceType(const InstanceStorageResourceType& value) { SetResourceType(value); return *this;}
    inline DisassociateInstanceStorageConfigRequest& WithResourceType(InstanceStorageResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline DisassociateInstanceStorageConfigRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DisassociateInstanceStorageConfigRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DisassociateInstanceStorageConfigRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    InstanceStorageResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
