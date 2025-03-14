﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/InlineRedactionConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class UpdateDataProtectionSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API UpdateDataProtectionSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataProtectionSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateDataProtectionSettingsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateDataProtectionSettingsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateDataProtectionSettingsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the data protection settings.</p>
     */
    inline const Aws::String& GetDataProtectionSettingsArn() const{ return m_dataProtectionSettingsArn; }
    inline bool DataProtectionSettingsArnHasBeenSet() const { return m_dataProtectionSettingsArnHasBeenSet; }
    inline void SetDataProtectionSettingsArn(const Aws::String& value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn = value; }
    inline void SetDataProtectionSettingsArn(Aws::String&& value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn = std::move(value); }
    inline void SetDataProtectionSettingsArn(const char* value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn.assign(value); }
    inline UpdateDataProtectionSettingsRequest& WithDataProtectionSettingsArn(const Aws::String& value) { SetDataProtectionSettingsArn(value); return *this;}
    inline UpdateDataProtectionSettingsRequest& WithDataProtectionSettingsArn(Aws::String&& value) { SetDataProtectionSettingsArn(std::move(value)); return *this;}
    inline UpdateDataProtectionSettingsRequest& WithDataProtectionSettingsArn(const char* value) { SetDataProtectionSettingsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data protection settings.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateDataProtectionSettingsRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDataProtectionSettingsRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDataProtectionSettingsRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the data protection settings.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateDataProtectionSettingsRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateDataProtectionSettingsRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateDataProtectionSettingsRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inline redaction configuration of the data protection settings that will
     * be applied to all sessions.</p>
     */
    inline const InlineRedactionConfiguration& GetInlineRedactionConfiguration() const{ return m_inlineRedactionConfiguration; }
    inline bool InlineRedactionConfigurationHasBeenSet() const { return m_inlineRedactionConfigurationHasBeenSet; }
    inline void SetInlineRedactionConfiguration(const InlineRedactionConfiguration& value) { m_inlineRedactionConfigurationHasBeenSet = true; m_inlineRedactionConfiguration = value; }
    inline void SetInlineRedactionConfiguration(InlineRedactionConfiguration&& value) { m_inlineRedactionConfigurationHasBeenSet = true; m_inlineRedactionConfiguration = std::move(value); }
    inline UpdateDataProtectionSettingsRequest& WithInlineRedactionConfiguration(const InlineRedactionConfiguration& value) { SetInlineRedactionConfiguration(value); return *this;}
    inline UpdateDataProtectionSettingsRequest& WithInlineRedactionConfiguration(InlineRedactionConfiguration&& value) { SetInlineRedactionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_dataProtectionSettingsArn;
    bool m_dataProtectionSettingsArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    InlineRedactionConfiguration m_inlineRedactionConfiguration;
    bool m_inlineRedactionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
