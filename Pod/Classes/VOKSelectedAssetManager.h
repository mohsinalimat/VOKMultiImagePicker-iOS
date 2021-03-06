//
//  VOKSelectedAssetManager.h
//  VOKMultiImagePicker-iOS
//
//  Created by Luke Quigley on 12/11/14.
//  Copyright (c) 2014 VOKAL LLC. All rights reserved.
//
//  This is singleton object that holds references to
//  selected assets.
//

@import Foundation;

@import Photos;

@interface VOKSelectedAssetManager : NSObject

/**
 *  @return Shared instance containing a reference to selected assets.
 */
+ (instancetype)sharedManager;

/**
 *  Resets the singleton manager to use again.
 */
- (void)resetManager;

/**
 *  The media type that can only be added to the selected asssets list.
 */
@property (nonatomic) PHAssetMediaType mediaType;

/**
 *  The class used to display assets with.
 *  You can subclass VOKAssetCollectionViewCell.
 */
@property (nonatomic) Class assetCollectionViewCellClass;

/**
 *  The number of columns in the asset collection view grid.
 */
@property (nonatomic) NSInteger assetCollectionViewColumnCount;

/**
 *  Adds an asset to the selected assets array IF it matches the media type.
 *
 *  @param asset The asset to add.
 *
 *  @return YES if it was added, NO if it wasn't.
 */
- (BOOL)addSelectedAsset:(PHAsset *)asset;

/**
 *  Removes an asset from the selected assets array.
 *
 *  @param asset The asset to remove.
 */
- (void)removeSelectedAsset:(PHAsset *)asset;

/**
 *  @return A list of all the assets that were added as selected.
 */
- (NSArray *)selectedAssets;


@end
