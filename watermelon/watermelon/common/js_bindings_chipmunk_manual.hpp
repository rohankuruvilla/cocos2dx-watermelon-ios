/*
 * cocos2d for iPhone: http://www.cocos2d-iphone.org
 *
 * Copyright (c) 2012 Zynga Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __js_bindings_chipmunk_manual
#define __js_bindings_chipmunk_manual

#include "chipmunk.h"
#include "jsapi.h"
#include "js_bindings_chipmunk_functions.hpp"

JSBool JSPROXY_cpSpaceAddCollisionHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSPROXY_cpSpaceRemoveCollisionHandler(JSContext *cx, uint32_t argc, jsval *vp);

JSBool JSPROXY_cpArbiterGetBodies(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSPROXY_cpArbiterGetShapes(JSContext *cx, uint32_t argc, jsval *vp);

JSBool JSPROXY_cpBodySetUserData(JSContext *cx, uint32_t argc, jsval *vp);
JSBool JSPROXY_cpBodyGetUserData(JSContext *cx, uint32_t argc, jsval *vp);


void register_chipmunk_manual(JSContext* cx, JSObject* obj);
#endif // __js_bindings_chipmunk_manual
