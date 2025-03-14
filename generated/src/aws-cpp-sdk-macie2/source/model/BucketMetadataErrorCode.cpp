﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketMetadataErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace BucketMetadataErrorCodeMapper
      {

        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int BUCKET_COUNT_EXCEEDS_QUOTA_HASH = HashingUtils::HashString("BUCKET_COUNT_EXCEEDS_QUOTA");


        BucketMetadataErrorCode GetBucketMetadataErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return BucketMetadataErrorCode::ACCESS_DENIED;
          }
          else if (hashCode == BUCKET_COUNT_EXCEEDS_QUOTA_HASH)
          {
            return BucketMetadataErrorCode::BUCKET_COUNT_EXCEEDS_QUOTA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BucketMetadataErrorCode>(hashCode);
          }

          return BucketMetadataErrorCode::NOT_SET;
        }

        Aws::String GetNameForBucketMetadataErrorCode(BucketMetadataErrorCode enumValue)
        {
          switch(enumValue)
          {
          case BucketMetadataErrorCode::NOT_SET:
            return {};
          case BucketMetadataErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case BucketMetadataErrorCode::BUCKET_COUNT_EXCEEDS_QUOTA:
            return "BUCKET_COUNT_EXCEEDS_QUOTA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BucketMetadataErrorCodeMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
