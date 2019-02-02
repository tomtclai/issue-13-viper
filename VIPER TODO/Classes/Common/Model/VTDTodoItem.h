//
// VTDEntry.h
//
// Copyright (c) 2014 Mutual Mobile (http://www.mutualmobile.com/)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

///--------------------------------------------------
/// Entity
/// Entities are the model objects manipulated by an Interactor.
/// The interactor never passes entities to the presentation layer.
/// if you use core data, you will want your managed objects remain behind
/// your data later.
/// Interactors should not work with NSManagedObjects.
/// Don't be surprised if your entities are just data structures.
/// Any application dependent logic will most likely be an interactor.
///--------------------------------------------------

@interface VTDTodoItem : NSObject

@property (nonatomic, strong)   NSDate*     dueDate;
@property (nonatomic, copy)     NSString*   name;

+ (instancetype)todoItemWithDueDate:(NSDate *)dueDate name:(NSString *)name;

@end
