﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Authentication.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{
  class ModifyUserResult
  {
  public:
    AWS_ELASTICACHE_API ModifyUserResult();
    AWS_ELASTICACHE_API ModifyUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICACHE_API ModifyUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline void SetUserId(const Aws::String& value) { m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userId.assign(value); }
    inline ModifyUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline ModifyUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline ModifyUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline void SetUserName(const Aws::String& value) { m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userName.assign(value); }
    inline ModifyUserResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline ModifyUserResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline ModifyUserResult& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline ModifyUserResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ModifyUserResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ModifyUserResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options are valkey or redis.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline void SetEngine(const Aws::String& value) { m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engine.assign(value); }
    inline ModifyUserResult& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ModifyUserResult& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ModifyUserResult& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum engine version required, which is Redis OSS 6.0</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersion = value; }
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersion = std::move(value); }
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersion.assign(value); }
    inline ModifyUserResult& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}
    inline ModifyUserResult& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}
    inline ModifyUserResult& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline const Aws::String& GetAccessString() const{ return m_accessString; }
    inline void SetAccessString(const Aws::String& value) { m_accessString = value; }
    inline void SetAccessString(Aws::String&& value) { m_accessString = std::move(value); }
    inline void SetAccessString(const char* value) { m_accessString.assign(value); }
    inline ModifyUserResult& WithAccessString(const Aws::String& value) { SetAccessString(value); return *this;}
    inline ModifyUserResult& WithAccessString(Aws::String&& value) { SetAccessString(std::move(value)); return *this;}
    inline ModifyUserResult& WithAccessString(const char* value) { SetAccessString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIds() const{ return m_userGroupIds; }
    inline void SetUserGroupIds(const Aws::Vector<Aws::String>& value) { m_userGroupIds = value; }
    inline void SetUserGroupIds(Aws::Vector<Aws::String>&& value) { m_userGroupIds = std::move(value); }
    inline ModifyUserResult& WithUserGroupIds(const Aws::Vector<Aws::String>& value) { SetUserGroupIds(value); return *this;}
    inline ModifyUserResult& WithUserGroupIds(Aws::Vector<Aws::String>&& value) { SetUserGroupIds(std::move(value)); return *this;}
    inline ModifyUserResult& AddUserGroupIds(const Aws::String& value) { m_userGroupIds.push_back(value); return *this; }
    inline ModifyUserResult& AddUserGroupIds(Aws::String&& value) { m_userGroupIds.push_back(std::move(value)); return *this; }
    inline ModifyUserResult& AddUserGroupIds(const char* value) { m_userGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline const Authentication& GetAuthentication() const{ return m_authentication; }
    inline void SetAuthentication(const Authentication& value) { m_authentication = value; }
    inline void SetAuthentication(Authentication&& value) { m_authentication = std::move(value); }
    inline ModifyUserResult& WithAuthentication(const Authentication& value) { SetAuthentication(value); return *this;}
    inline ModifyUserResult& WithAuthentication(Authentication&& value) { SetAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline void SetARN(const Aws::String& value) { m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRN.assign(value); }
    inline ModifyUserResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline ModifyUserResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline ModifyUserResult& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyUserResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyUserResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userId;

    Aws::String m_userName;

    Aws::String m_status;

    Aws::String m_engine;

    Aws::String m_minimumEngineVersion;

    Aws::String m_accessString;

    Aws::Vector<Aws::String> m_userGroupIds;

    Authentication m_authentication;

    Aws::String m_aRN;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
