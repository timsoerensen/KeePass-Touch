/*
 * Copyright 2011-2013 Jason Rush and John Flanagan. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>

@protocol ImageSelectionViewDelegate;
@protocol ImageSelectionViewLayoutDelegate;

@interface ImageSelectionView : UIView

@property (nonatomic, assign) NSUInteger selectedImageIndex;
@property (nonatomic, unsafe_unretained) id<ImageSelectionViewDelegate> delegate;
@property (nonatomic, unsafe_unretained) id<ImageSelectionViewLayoutDelegate> layoutDelegate;

- (void)selectedCustomIndex:(NSUInteger)customIndex;

@end

@protocol ImageSelectionViewDelegate <NSObject>

@required
- (void)imageSelectionView:(ImageSelectionView *)imageSelectionView selectedImageIndex:(NSUInteger)selectedImageIndex;
- (void)imageSelectionView:(ImageSelectionView *)imageSelectionView selectedImageCustomWithKey:(NSString *)key;

@end

@protocol ImageSelectionViewLayoutDelegate <NSObject>

@optional
- (void)didFinishLayout;

@end
