﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class UpdateHubContentReferenceResult
  {
  public:
    AWS_SAGEMAKER_API UpdateHubContentReferenceResult();
    AWS_SAGEMAKER_API UpdateHubContentReferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateHubContentReferenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the private model hub that contains the updated hub content.</p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }
    inline void SetHubArn(const Aws::String& value) { m_hubArn = value; }
    inline void SetHubArn(Aws::String&& value) { m_hubArn = std::move(value); }
    inline void SetHubArn(const char* value) { m_hubArn.assign(value); }
    inline UpdateHubContentReferenceResult& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}
    inline UpdateHubContentReferenceResult& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}
    inline UpdateHubContentReferenceResult& WithHubArn(const char* value) { SetHubArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the hub content resource that was updated.</p>
     */
    inline const Aws::String& GetHubContentArn() const{ return m_hubContentArn; }
    inline void SetHubContentArn(const Aws::String& value) { m_hubContentArn = value; }
    inline void SetHubContentArn(Aws::String&& value) { m_hubContentArn = std::move(value); }
    inline void SetHubContentArn(const char* value) { m_hubContentArn.assign(value); }
    inline UpdateHubContentReferenceResult& WithHubContentArn(const Aws::String& value) { SetHubContentArn(value); return *this;}
    inline UpdateHubContentReferenceResult& WithHubContentArn(Aws::String&& value) { SetHubContentArn(std::move(value)); return *this;}
    inline UpdateHubContentReferenceResult& WithHubContentArn(const char* value) { SetHubContentArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateHubContentReferenceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateHubContentReferenceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateHubContentReferenceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_hubArn;

    Aws::String m_hubContentArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
