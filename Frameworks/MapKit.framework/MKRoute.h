/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GMMNewRoute, MKRouteStep, NSMutableArray;

@interface MKRoute : NSObject {
    BOOL _displaysDistanceInMetric;
    NSInteger _mode;
    NSUInteger _pointCount;
    struct { double x1; double x2; } *_points;
    MKRouteStep *_previousStep;
    GMMNewRoute *_route;
    NSMutableArray *_simplifiedSteps;
    MKRouteStep *_step;
    NSMutableArray *_steps;
}

@property(readonly) NSString *abbreviatedTravelTime;
@property(readonly) NSString *abbreviatedTravelTimeWithTraffic;
@property(readonly) NSCalendarDate *arrivalDate;
@property(readonly) NSString *cost;
@property(readonly) NSCalendarDate *departureDate;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *distanceSummary;
@property(readonly) MKSearchResult *endSearchResult;
@property(readonly) NSString *expandedDistance;
@property(readonly) NSString *expandedTravelTime;
@property(readonly) NSString *expandedTravelTimeWithTraffic;
@property(readonly) MKRouteStep *firstMiddleStep;
@property(readonly) MKRouteStep *lastMiddleStep;
@property(readonly) ? *points;
@property(readonly) MKRouteStep *previousStep;
@property(readonly) NSArray *simplifiedSteps;
@property(readonly) MKSearchResult *startSearchResult;
@property(retain) MKRouteStep *step;
@property(readonly) NSArray *steps;
@property(readonly) NSInteger durationSeconds;
@property(readonly) ? endCoordinate;
@property(readonly) BOOL hasTraffic;
@property(readonly) NSInteger mode;
@property(readonly) NSUInteger pointCount;
@property(readonly) ? startCoordinate;

- (void)_createSteps;
- (BOOL)_createTransitStepsWithEndSearchResult:(id)arg1;
- (id)_initWithRoute:(id)arg1 response:(id)arg2 startSearchResult:(id)arg3 endSearchResult:(id)arg4 dictionaryRepresentation:(id)arg5;
- (id)_initWithRoute:(id)arg1 response:(id)arg2 startSearchResult:(id)arg3 endSearchResult:(id)arg4;
- (id)_timeForSeconds:(NSUInteger)arg1 withTraffic:(BOOL)arg2 abbreviated:(BOOL)arg3;
- (id)abbreviatedTravelTime;
- (id)abbreviatedTravelTimeWithTraffic;
- (id)arrivalDate;
- (id)cost;
- (void)dealloc;
- (id)departureDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distanceSummary;
- (NSInteger)durationSeconds;
- (struct { double x1; double x2; })endCoordinate;
- (id)endSearchResult;
- (id)expandedDistance;
- (id)expandedTravelTime;
- (id)expandedTravelTimeWithTraffic;
- (id)firstMiddleStep;
- (BOOL)hasTraffic;
- (id)lastMiddleStep;
- (NSInteger)mode;
- (NSUInteger)pointCount;
- (struct { double x1; double x2; }*)points;
- (id)previousStep;
- (id)route;
- (void)setStep:(id)arg1;
- (id)simplifiedSteps;
- (struct { double x1; double x2; })startCoordinate;
- (id)startSearchResult;
- (id)step;
- (id)steps;

@end