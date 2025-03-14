﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingTypeProperties.h>
#include <aws/iot/model/ThingTypeMetadata.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output for the DescribeThingType operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingTypeResponse">AWS
   * API Reference</a></p>
   */
  class DescribeThingTypeResult
  {
  public:
    AWS_IOT_API DescribeThingTypeResult();
    AWS_IOT_API DescribeThingTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeThingTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the thing type.</p>
     */
    inline const Aws::String& GetThingTypeName() const{ return m_thingTypeName; }
    inline void SetThingTypeName(const Aws::String& value) { m_thingTypeName = value; }
    inline void SetThingTypeName(Aws::String&& value) { m_thingTypeName = std::move(value); }
    inline void SetThingTypeName(const char* value) { m_thingTypeName.assign(value); }
    inline DescribeThingTypeResult& WithThingTypeName(const Aws::String& value) { SetThingTypeName(value); return *this;}
    inline DescribeThingTypeResult& WithThingTypeName(Aws::String&& value) { SetThingTypeName(std::move(value)); return *this;}
    inline DescribeThingTypeResult& WithThingTypeName(const char* value) { SetThingTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type ID.</p>
     */
    inline const Aws::String& GetThingTypeId() const{ return m_thingTypeId; }
    inline void SetThingTypeId(const Aws::String& value) { m_thingTypeId = value; }
    inline void SetThingTypeId(Aws::String&& value) { m_thingTypeId = std::move(value); }
    inline void SetThingTypeId(const char* value) { m_thingTypeId.assign(value); }
    inline DescribeThingTypeResult& WithThingTypeId(const Aws::String& value) { SetThingTypeId(value); return *this;}
    inline DescribeThingTypeResult& WithThingTypeId(Aws::String&& value) { SetThingTypeId(std::move(value)); return *this;}
    inline DescribeThingTypeResult& WithThingTypeId(const char* value) { SetThingTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing type ARN.</p>
     */
    inline const Aws::String& GetThingTypeArn() const{ return m_thingTypeArn; }
    inline void SetThingTypeArn(const Aws::String& value) { m_thingTypeArn = value; }
    inline void SetThingTypeArn(Aws::String&& value) { m_thingTypeArn = std::move(value); }
    inline void SetThingTypeArn(const char* value) { m_thingTypeArn.assign(value); }
    inline DescribeThingTypeResult& WithThingTypeArn(const Aws::String& value) { SetThingTypeArn(value); return *this;}
    inline DescribeThingTypeResult& WithThingTypeArn(Aws::String&& value) { SetThingTypeArn(std::move(value)); return *this;}
    inline DescribeThingTypeResult& WithThingTypeArn(const char* value) { SetThingTypeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ThingTypeProperties contains information about the thing type including
     * description, a list of searchable thing attribute names, and MQTT5
     * configuration.</p>
     */
    inline const ThingTypeProperties& GetThingTypeProperties() const{ return m_thingTypeProperties; }
    inline void SetThingTypeProperties(const ThingTypeProperties& value) { m_thingTypeProperties = value; }
    inline void SetThingTypeProperties(ThingTypeProperties&& value) { m_thingTypeProperties = std::move(value); }
    inline DescribeThingTypeResult& WithThingTypeProperties(const ThingTypeProperties& value) { SetThingTypeProperties(value); return *this;}
    inline DescribeThingTypeResult& WithThingTypeProperties(ThingTypeProperties&& value) { SetThingTypeProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ThingTypeMetadata contains additional information about the thing type
     * including: creation date and time, a value indicating whether the thing type is
     * deprecated, and a date and time when it was deprecated.</p>
     */
    inline const ThingTypeMetadata& GetThingTypeMetadata() const{ return m_thingTypeMetadata; }
    inline void SetThingTypeMetadata(const ThingTypeMetadata& value) { m_thingTypeMetadata = value; }
    inline void SetThingTypeMetadata(ThingTypeMetadata&& value) { m_thingTypeMetadata = std::move(value); }
    inline DescribeThingTypeResult& WithThingTypeMetadata(const ThingTypeMetadata& value) { SetThingTypeMetadata(value); return *this;}
    inline DescribeThingTypeResult& WithThingTypeMetadata(ThingTypeMetadata&& value) { SetThingTypeMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeThingTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeThingTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeThingTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_thingTypeName;

    Aws::String m_thingTypeId;

    Aws::String m_thingTypeArn;

    ThingTypeProperties m_thingTypeProperties;

    ThingTypeMetadata m_thingTypeMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
