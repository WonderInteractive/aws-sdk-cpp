﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ActivateMessageTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ActivateMessageTemplateRequest::ActivateMessageTemplateRequest() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_messageTemplateIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
}

Aws::String ActivateMessageTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("versionNumber", m_versionNumber);

  }

  return payload.View().WriteReadable();
}




