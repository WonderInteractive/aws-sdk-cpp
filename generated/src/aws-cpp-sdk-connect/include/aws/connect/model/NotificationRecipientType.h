﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The type of notification recipient.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/NotificationRecipientType">AWS
   * API Reference</a></p>
   */
  class NotificationRecipientType
  {
  public:
    AWS_CONNECT_API NotificationRecipientType();
    AWS_CONNECT_API NotificationRecipientType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API NotificationRecipientType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }. Amazon Connect users
     * with the specified tags will be notified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserTags() const{ return m_userTags; }
    inline bool UserTagsHasBeenSet() const { return m_userTagsHasBeenSet; }
    inline void SetUserTags(const Aws::Map<Aws::String, Aws::String>& value) { m_userTagsHasBeenSet = true; m_userTags = value; }
    inline void SetUserTags(Aws::Map<Aws::String, Aws::String>&& value) { m_userTagsHasBeenSet = true; m_userTags = std::move(value); }
    inline NotificationRecipientType& WithUserTags(const Aws::Map<Aws::String, Aws::String>& value) { SetUserTags(value); return *this;}
    inline NotificationRecipientType& WithUserTags(Aws::Map<Aws::String, Aws::String>&& value) { SetUserTags(std::move(value)); return *this;}
    inline NotificationRecipientType& AddUserTags(const Aws::String& key, const Aws::String& value) { m_userTagsHasBeenSet = true; m_userTags.emplace(key, value); return *this; }
    inline NotificationRecipientType& AddUserTags(Aws::String&& key, const Aws::String& value) { m_userTagsHasBeenSet = true; m_userTags.emplace(std::move(key), value); return *this; }
    inline NotificationRecipientType& AddUserTags(const Aws::String& key, Aws::String&& value) { m_userTagsHasBeenSet = true; m_userTags.emplace(key, std::move(value)); return *this; }
    inline NotificationRecipientType& AddUserTags(Aws::String&& key, Aws::String&& value) { m_userTagsHasBeenSet = true; m_userTags.emplace(std::move(key), std::move(value)); return *this; }
    inline NotificationRecipientType& AddUserTags(const char* key, Aws::String&& value) { m_userTagsHasBeenSet = true; m_userTags.emplace(key, std::move(value)); return *this; }
    inline NotificationRecipientType& AddUserTags(Aws::String&& key, const char* value) { m_userTagsHasBeenSet = true; m_userTags.emplace(std::move(key), value); return *this; }
    inline NotificationRecipientType& AddUserTags(const char* key, const char* value) { m_userTagsHasBeenSet = true; m_userTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of user IDs. Supports variable injection of
     * <code>$.ContactLens.ContactEvaluation.Agent.AgentId</code> for
     * <code>OnContactEvaluationSubmit</code> event source. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }
    inline NotificationRecipientType& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}
    inline NotificationRecipientType& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}
    inline NotificationRecipientType& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    inline NotificationRecipientType& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }
    inline NotificationRecipientType& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_userTags;
    bool m_userTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
