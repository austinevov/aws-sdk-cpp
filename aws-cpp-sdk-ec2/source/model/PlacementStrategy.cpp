﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/PlacementStrategy.h>
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
      namespace PlacementStrategyMapper
      {

        static const int cluster_HASH = HashingUtils::HashString("cluster");
        static const int spread_HASH = HashingUtils::HashString("spread");
        static const int partition_HASH = HashingUtils::HashString("partition");


        PlacementStrategy GetPlacementStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cluster_HASH)
          {
            return PlacementStrategy::cluster;
          }
          else if (hashCode == spread_HASH)
          {
            return PlacementStrategy::spread;
          }
          else if (hashCode == partition_HASH)
          {
            return PlacementStrategy::partition;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlacementStrategy>(hashCode);
          }

          return PlacementStrategy::NOT_SET;
        }

        Aws::String GetNameForPlacementStrategy(PlacementStrategy enumValue)
        {
          switch(enumValue)
          {
          case PlacementStrategy::cluster:
            return "cluster";
          case PlacementStrategy::spread:
            return "spread";
          case PlacementStrategy::partition:
            return "partition";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PlacementStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
