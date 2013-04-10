//
//  ImagePicker.h
//  CCImagePicker
//
//  Created by w2moon on 13-4-8.
//  Copyright (c) 2013年 w2moon. All rights reserved.
//

#ifndef __CCImagePicker__
#define __CCImagePicker__

namespace cocos2d { namespace extension {

class CCImagePicker
{
public:
    static bool canUseCamera();
    static bool canUsePhotoLibrary();
    static void useCamera(bool edit = false);
    static void usePhotoLibrary(bool edit = false);
};
}}

#endif /* defined__CCImagePicker__) */
