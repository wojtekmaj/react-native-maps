//
//  AIRGoogleMapPolyline.h
//
//  Created by Nick Italiano on 10/22/16.
//

#ifdef HAVE_GOOGLE_MAPS
#import <UIKit/UIKit.h>
#import <GoogleMaps/GoogleMaps.h>
#import <React/RCTBridge.h>
#import "AIRGMSPolyline.h"
#import "AIRGoogleMapMarker.h"

#import "AIRGoogleMapCoordinate.h"

@interface AIRGoogleMapPolyline : UIView

@property (nonatomic, weak) RCTBridge *bridge;
@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, strong) AIRGMSPolyline *polyline;
@property (nonatomic, strong) NSArray<AIRGoogleMapCoordinate *> *coordinates;
@property (nonatomic, copy) RCTBubblingEventBlock onPress;
@property (nonatomic, strong) GMSMapView *originalMap;

@property (nonatomic, strong) UIColor *strokeColor;
@property (nonatomic, strong) NSArray<UIColor *> *strokeColors;
@property (nonatomic, assign) double strokeWidth;
@property (nonatomic, strong) NSArray<NSNumber *> *lineDashPattern;
@property (nonatomic, assign) BOOL geodesic;
@property (nonatomic, assign) NSString *title;
@property (nonatomic, assign) int zIndex;
@property (nonatomic, assign) BOOL tappable;

@end

#endif
