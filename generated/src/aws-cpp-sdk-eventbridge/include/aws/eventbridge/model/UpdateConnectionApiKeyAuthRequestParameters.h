﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EventBridge
{
namespace Model
{

  /**
   * <p>Contains the API key authorization parameters to use to update the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/UpdateConnectionApiKeyAuthRequestParameters">AWS
   * API Reference</a></p>
   */
  class UpdateConnectionApiKeyAuthRequestParameters
  {
  public:
    AWS_EVENTBRIDGE_API UpdateConnectionApiKeyAuthRequestParameters();
    AWS_EVENTBRIDGE_API UpdateConnectionApiKeyAuthRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API UpdateConnectionApiKeyAuthRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the API key to use for authorization.</p>
     */
    inline const Aws::String& GetApiKeyName() const{ return m_apiKeyName; }
    inline bool ApiKeyNameHasBeenSet() const { return m_apiKeyNameHasBeenSet; }
    inline void SetApiKeyName(const Aws::String& value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName = value; }
    inline void SetApiKeyName(Aws::String&& value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName = std::move(value); }
    inline void SetApiKeyName(const char* value) { m_apiKeyNameHasBeenSet = true; m_apiKeyName.assign(value); }
    inline UpdateConnectionApiKeyAuthRequestParameters& WithApiKeyName(const Aws::String& value) { SetApiKeyName(value); return *this;}
    inline UpdateConnectionApiKeyAuthRequestParameters& WithApiKeyName(Aws::String&& value) { SetApiKeyName(std::move(value)); return *this;}
    inline UpdateConnectionApiKeyAuthRequestParameters& WithApiKeyName(const char* value) { SetApiKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value associated with the API key to use for authorization.</p>
     */
    inline const Aws::String& GetApiKeyValue() const{ return m_apiKeyValue; }
    inline bool ApiKeyValueHasBeenSet() const { return m_apiKeyValueHasBeenSet; }
    inline void SetApiKeyValue(const Aws::String& value) { m_apiKeyValueHasBeenSet = true; m_apiKeyValue = value; }
    inline void SetApiKeyValue(Aws::String&& value) { m_apiKeyValueHasBeenSet = true; m_apiKeyValue = std::move(value); }
    inline void SetApiKeyValue(const char* value) { m_apiKeyValueHasBeenSet = true; m_apiKeyValue.assign(value); }
    inline UpdateConnectionApiKeyAuthRequestParameters& WithApiKeyValue(const Aws::String& value) { SetApiKeyValue(value); return *this;}
    inline UpdateConnectionApiKeyAuthRequestParameters& WithApiKeyValue(Aws::String&& value) { SetApiKeyValue(std::move(value)); return *this;}
    inline UpdateConnectionApiKeyAuthRequestParameters& WithApiKeyValue(const char* value) { SetApiKeyValue(value); return *this;}
    ///@}
  private:

    Aws::String m_apiKeyName;
    bool m_apiKeyNameHasBeenSet = false;

    Aws::String m_apiKeyValue;
    bool m_apiKeyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
