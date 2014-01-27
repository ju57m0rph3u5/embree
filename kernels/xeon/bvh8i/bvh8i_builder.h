// ======================================================================== //
// Copyright 2009-2013 Intel Corporation                                    //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#ifndef __EMBREE_BVH8I_BUILDER_H__
#define __EMBREE_BVH8I_BUILDER_H__

#include "bvh4i/bvh4i.h"
#include "builders/heuristics.h"
#include "bvh4i/bvh4i_builder.h"

namespace embree
{
  namespace isa
  {
    typedef BVH4iBuilder< HeuristicSpatial<3> > BVH4iBuilder8;

    class BVH8iBuilderTriangle8 : public Builder
    {
      ALIGNED_CLASS;
    public:
      BVH4iBuilder8 *bvh4i_builder8;
      
      /*! Constructor. */
      BVH8iBuilderTriangle8(BVH4i* bvh, BuildSource* source, void* geometry, const size_t minLeafSize = 1, const size_t maxLeafSize = inf);
                  
      /* build function */
      void build(size_t threadIndex, size_t threadCount);
      
    };
  }  
}
 
#endif
  
