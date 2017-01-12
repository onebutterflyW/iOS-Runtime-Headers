/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewInteractionStateRecognizer : NSObject {
    float  _actualHintForce;
    double  _actualHintTime;
    float  _actualPeekForce;
    double  _actualPeekTime;
    float  _actualPopForce;
    double  _actualPopTime;
    BOOL  _allowsPopOffsetDecay;
    int  _currentState;
    double  _currentTime;
    float  _currentTouchForce;
    unsigned int  _deepPressCount;
    float  _distanceThreshold;
    float  _highPopThreshold;
    float  _hintAndPeekInterval;
    float  _hintReductionForce;
    BOOL  _isFirstForceEvaluation;
    float  _lowpassDistanceAlpha;
    float  _lowpassForceAlpha;
    float  _maximumForce;
    float  _popAlwaysThreshold;
    float  _popDecayingOffset;
    float  _popForceReductionThreshold;
    float  _popOffsetDecayAlpha;
    float  _popOffsetInitial;
    float  _popOffsetLongterm;
    float  _popReductionForce;
    float  _previousEffectiveTouchForce;
    float  _previousPopThreshold;
    struct CGPoint { 
        float x; 
        float y; 
    }  _previousSceneReferenceLocation;
    double  _previousTime;
    float  _progressToStrongThreshold;
    float  _revealThreshold;
    float  _saturationForce;
    float  _smoothedDistance;
    float  _smoothedForce;
    float  _standardThreshold;
    float  _strongThreshold;
    double  _timeMark;
    double  _transitionInterval;
}

@property (nonatomic) int currentState;
@property (nonatomic) float currentTouchForce;
@property (nonatomic, readonly) float velocity;

- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (float)_currentTouchForceMultiplier;
- (float)_denormalizedTouchForceValue:(float)arg1;
- (float)_normalizedTouchForceValue:(float)arg1;
- (float)_thresholdForForceLevel:(int)arg1;
- (float)currentProgressToState:(int)arg1;
- (int)currentState;
- (float)currentTouchForce;
- (void)dealloc;
- (id)description;
- (void)evaluateWithTouchForce:(float)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { float x1; float x2; })arg3;
- (id)init;
- (void)reset;
- (void)setCurrentState:(int)arg1;
- (void)setCurrentTouchForce:(float)arg1;
- (float)velocity;

@end