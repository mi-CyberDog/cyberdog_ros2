// Copyright (c) 2021  Beijing Xiaomi Mobile Software Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CYBERDOG_VISION__ALGORITHM_H_
#define CYBERDOG_VISION__ALGORITHM_H_

#include <stdint.h>
typedef void * AlgoHandle;

/**
 * @brief  Algorithm input image format.
 **/
typedef enum
{
  FORMAT_BGR,
  FORMAT_RGB,
} Format;

/**
 * @brief  Struct that describe input rgb image.
 **/
typedef struct
{
  void * data;
  uint32_t width;
  uint32_t height;
  Format format;
} BufferInfo;

/**
 * @brief  Struct that describe rectangle.
 **/
typedef struct
{
  uint32_t left;
  uint32_t top;
  uint32_t width;
  uint32_t height;
} Rect;

#endif  // CYBERDOG_VISION__ALGORITHM_H__
