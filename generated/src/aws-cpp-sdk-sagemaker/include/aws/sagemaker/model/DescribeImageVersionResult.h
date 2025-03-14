﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ImageVersionStatus.h>
#include <aws/sagemaker/model/VendorGuidance.h>
#include <aws/sagemaker/model/JobType.h>
#include <aws/sagemaker/model/Processor.h>
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
  class DescribeImageVersionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeImageVersionResult();
    AWS_SAGEMAKER_API DescribeImageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeImageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry path of the container image on which this image version is
     * based.</p>
     */
    inline const Aws::String& GetBaseImage() const{ return m_baseImage; }
    inline void SetBaseImage(const Aws::String& value) { m_baseImage = value; }
    inline void SetBaseImage(Aws::String&& value) { m_baseImage = std::move(value); }
    inline void SetBaseImage(const char* value) { m_baseImage.assign(value); }
    inline DescribeImageVersionResult& WithBaseImage(const Aws::String& value) { SetBaseImage(value); return *this;}
    inline DescribeImageVersionResult& WithBaseImage(Aws::String&& value) { SetBaseImage(std::move(value)); return *this;}
    inline DescribeImageVersionResult& WithBaseImage(const char* value) { SetBaseImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry path of the container image that contains this image
     * version.</p>
     */
    inline const Aws::String& GetContainerImage() const{ return m_containerImage; }
    inline void SetContainerImage(const Aws::String& value) { m_containerImage = value; }
    inline void SetContainerImage(Aws::String&& value) { m_containerImage = std::move(value); }
    inline void SetContainerImage(const char* value) { m_containerImage.assign(value); }
    inline DescribeImageVersionResult& WithContainerImage(const Aws::String& value) { SetContainerImage(value); return *this;}
    inline DescribeImageVersionResult& WithContainerImage(Aws::String&& value) { SetContainerImage(std::move(value)); return *this;}
    inline DescribeImageVersionResult& WithContainerImage(const char* value) { SetContainerImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeImageVersionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeImageVersionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeImageVersionResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeImageVersionResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeImageVersionResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }
    inline void SetImageArn(const Aws::String& value) { m_imageArn = value; }
    inline void SetImageArn(Aws::String&& value) { m_imageArn = std::move(value); }
    inline void SetImageArn(const char* value) { m_imageArn.assign(value); }
    inline DescribeImageVersionResult& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}
    inline DescribeImageVersionResult& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}
    inline DescribeImageVersionResult& WithImageArn(const char* value) { SetImageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the version.</p>
     */
    inline const Aws::String& GetImageVersionArn() const{ return m_imageVersionArn; }
    inline void SetImageVersionArn(const Aws::String& value) { m_imageVersionArn = value; }
    inline void SetImageVersionArn(Aws::String&& value) { m_imageVersionArn = std::move(value); }
    inline void SetImageVersionArn(const char* value) { m_imageVersionArn.assign(value); }
    inline DescribeImageVersionResult& WithImageVersionArn(const Aws::String& value) { SetImageVersionArn(value); return *this;}
    inline DescribeImageVersionResult& WithImageVersionArn(Aws::String&& value) { SetImageVersionArn(std::move(value)); return *this;}
    inline DescribeImageVersionResult& WithImageVersionArn(const char* value) { SetImageVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the version.</p>
     */
    inline const ImageVersionStatus& GetImageVersionStatus() const{ return m_imageVersionStatus; }
    inline void SetImageVersionStatus(const ImageVersionStatus& value) { m_imageVersionStatus = value; }
    inline void SetImageVersionStatus(ImageVersionStatus&& value) { m_imageVersionStatus = std::move(value); }
    inline DescribeImageVersionResult& WithImageVersionStatus(const ImageVersionStatus& value) { SetImageVersionStatus(value); return *this;}
    inline DescribeImageVersionResult& WithImageVersionStatus(ImageVersionStatus&& value) { SetImageVersionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the version was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeImageVersionResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeImageVersionResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline void SetVersion(int value) { m_version = value; }
    inline DescribeImageVersionResult& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stability of the image version specified by the maintainer.</p> <ul> <li>
     * <p> <code>NOT_PROVIDED</code>: The maintainers did not provide a status for
     * image version stability.</p> </li> <li> <p> <code>STABLE</code>: The image
     * version is stable.</p> </li> <li> <p> <code>TO_BE_ARCHIVED</code>: The image
     * version is set to be archived. Custom image versions that are set to be archived
     * are automatically archived after three months.</p> </li> <li> <p>
     * <code>ARCHIVED</code>: The image version is archived. Archived image versions
     * are not searchable and are no longer actively supported. </p> </li> </ul>
     */
    inline const VendorGuidance& GetVendorGuidance() const{ return m_vendorGuidance; }
    inline void SetVendorGuidance(const VendorGuidance& value) { m_vendorGuidance = value; }
    inline void SetVendorGuidance(VendorGuidance&& value) { m_vendorGuidance = std::move(value); }
    inline DescribeImageVersionResult& WithVendorGuidance(const VendorGuidance& value) { SetVendorGuidance(value); return *this;}
    inline DescribeImageVersionResult& WithVendorGuidance(VendorGuidance&& value) { SetVendorGuidance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates SageMaker AI job type compatibility.</p> <ul> <li> <p>
     * <code>TRAINING</code>: The image version is compatible with SageMaker AI
     * training jobs.</p> </li> <li> <p> <code>INFERENCE</code>: The image version is
     * compatible with SageMaker AI inference jobs.</p> </li> <li> <p>
     * <code>NOTEBOOK_KERNEL</code>: The image version is compatible with SageMaker AI
     * notebook kernels.</p> </li> </ul>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline void SetJobType(const JobType& value) { m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobType = std::move(value); }
    inline DescribeImageVersionResult& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline DescribeImageVersionResult& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning framework vended in the image version.</p>
     */
    inline const Aws::String& GetMLFramework() const{ return m_mLFramework; }
    inline void SetMLFramework(const Aws::String& value) { m_mLFramework = value; }
    inline void SetMLFramework(Aws::String&& value) { m_mLFramework = std::move(value); }
    inline void SetMLFramework(const char* value) { m_mLFramework.assign(value); }
    inline DescribeImageVersionResult& WithMLFramework(const Aws::String& value) { SetMLFramework(value); return *this;}
    inline DescribeImageVersionResult& WithMLFramework(Aws::String&& value) { SetMLFramework(std::move(value)); return *this;}
    inline DescribeImageVersionResult& WithMLFramework(const char* value) { SetMLFramework(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported programming language and its version.</p>
     */
    inline const Aws::String& GetProgrammingLang() const{ return m_programmingLang; }
    inline void SetProgrammingLang(const Aws::String& value) { m_programmingLang = value; }
    inline void SetProgrammingLang(Aws::String&& value) { m_programmingLang = std::move(value); }
    inline void SetProgrammingLang(const char* value) { m_programmingLang.assign(value); }
    inline DescribeImageVersionResult& WithProgrammingLang(const Aws::String& value) { SetProgrammingLang(value); return *this;}
    inline DescribeImageVersionResult& WithProgrammingLang(Aws::String&& value) { SetProgrammingLang(std::move(value)); return *this;}
    inline DescribeImageVersionResult& WithProgrammingLang(const char* value) { SetProgrammingLang(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates CPU or GPU compatibility.</p> <ul> <li> <p> <code>CPU</code>: The
     * image version is compatible with CPU.</p> </li> <li> <p> <code>GPU</code>: The
     * image version is compatible with GPU.</p> </li> </ul>
     */
    inline const Processor& GetProcessor() const{ return m_processor; }
    inline void SetProcessor(const Processor& value) { m_processor = value; }
    inline void SetProcessor(Processor&& value) { m_processor = std::move(value); }
    inline DescribeImageVersionResult& WithProcessor(const Processor& value) { SetProcessor(value); return *this;}
    inline DescribeImageVersionResult& WithProcessor(Processor&& value) { SetProcessor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates Horovod compatibility.</p>
     */
    inline bool GetHorovod() const{ return m_horovod; }
    inline void SetHorovod(bool value) { m_horovod = value; }
    inline DescribeImageVersionResult& WithHorovod(bool value) { SetHorovod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintainer description of the image version.</p>
     */
    inline const Aws::String& GetReleaseNotes() const{ return m_releaseNotes; }
    inline void SetReleaseNotes(const Aws::String& value) { m_releaseNotes = value; }
    inline void SetReleaseNotes(Aws::String&& value) { m_releaseNotes = std::move(value); }
    inline void SetReleaseNotes(const char* value) { m_releaseNotes.assign(value); }
    inline DescribeImageVersionResult& WithReleaseNotes(const Aws::String& value) { SetReleaseNotes(value); return *this;}
    inline DescribeImageVersionResult& WithReleaseNotes(Aws::String&& value) { SetReleaseNotes(std::move(value)); return *this;}
    inline DescribeImageVersionResult& WithReleaseNotes(const char* value) { SetReleaseNotes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeImageVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeImageVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeImageVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_baseImage;

    Aws::String m_containerImage;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_failureReason;

    Aws::String m_imageArn;

    Aws::String m_imageVersionArn;

    ImageVersionStatus m_imageVersionStatus;

    Aws::Utils::DateTime m_lastModifiedTime;

    int m_version;

    VendorGuidance m_vendorGuidance;

    JobType m_jobType;

    Aws::String m_mLFramework;

    Aws::String m_programmingLang;

    Processor m_processor;

    bool m_horovod;

    Aws::String m_releaseNotes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
