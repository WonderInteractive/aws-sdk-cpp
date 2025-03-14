﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcEndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace VpcEndpointTypeMapper
      {

        static const int Interface_HASH = HashingUtils::HashString("Interface");
        static const int Gateway_HASH = HashingUtils::HashString("Gateway");
        static const int GatewayLoadBalancer_HASH = HashingUtils::HashString("GatewayLoadBalancer");
        static const int Resource_HASH = HashingUtils::HashString("Resource");
        static const int ServiceNetwork_HASH = HashingUtils::HashString("ServiceNetwork");


        VpcEndpointType GetVpcEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Interface_HASH)
          {
            return VpcEndpointType::Interface;
          }
          else if (hashCode == Gateway_HASH)
          {
            return VpcEndpointType::Gateway;
          }
          else if (hashCode == GatewayLoadBalancer_HASH)
          {
            return VpcEndpointType::GatewayLoadBalancer;
          }
          else if (hashCode == Resource_HASH)
          {
            return VpcEndpointType::Resource;
          }
          else if (hashCode == ServiceNetwork_HASH)
          {
            return VpcEndpointType::ServiceNetwork;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEndpointType>(hashCode);
          }

          return VpcEndpointType::NOT_SET;
        }

        Aws::String GetNameForVpcEndpointType(VpcEndpointType enumValue)
        {
          switch(enumValue)
          {
          case VpcEndpointType::NOT_SET:
            return {};
          case VpcEndpointType::Interface:
            return "Interface";
          case VpcEndpointType::Gateway:
            return "Gateway";
          case VpcEndpointType::GatewayLoadBalancer:
            return "GatewayLoadBalancer";
          case VpcEndpointType::Resource:
            return "Resource";
          case VpcEndpointType::ServiceNetwork:
            return "ServiceNetwork";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcEndpointTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
