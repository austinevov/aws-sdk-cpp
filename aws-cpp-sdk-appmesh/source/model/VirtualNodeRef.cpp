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

#include <aws/appmesh/model/VirtualNodeRef.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

VirtualNodeRef::VirtualNodeRef() : 
    m_arnHasBeenSet(false),
    m_meshNameHasBeenSet(false),
    m_virtualNodeNameHasBeenSet(false)
{
}

VirtualNodeRef::VirtualNodeRef(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_meshNameHasBeenSet(false),
    m_virtualNodeNameHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualNodeRef& VirtualNodeRef::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("meshName"))
  {
    m_meshName = jsonValue.GetString("meshName");

    m_meshNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualNodeName"))
  {
    m_virtualNodeName = jsonValue.GetString("virtualNodeName");

    m_virtualNodeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualNodeRef::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_meshNameHasBeenSet)
  {
   payload.WithString("meshName", m_meshName);

  }

  if(m_virtualNodeNameHasBeenSet)
  {
   payload.WithString("virtualNodeName", m_virtualNodeName);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
