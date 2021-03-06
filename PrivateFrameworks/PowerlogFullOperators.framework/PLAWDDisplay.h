/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLAWDDisplay : PLAWDAuxMetrics {
    PLEntryNotificationOperatorComposition * _alsEnabledEventCallback;
    PLEntryNotificationOperatorComposition * _alsUserPreferencesEventCallback;
    PLEntryNotificationOperatorComposition * _backlightEventCallback;
    PLEntryNotificationOperatorComposition * _backlightRailCallback;
    PLEntryNotificationOperatorComposition * _batteryEventCallback;
    double  _bklPowerRailTimeStamp;
    double  _bklTimeStamp;
    long  _dispSubmitCnt;
    PLEntryNotificationOperatorComposition * _displayEventCallback;
    double  _displayOnTimeStamp;
    BOOL  _filterFirstEntry;
    PLEntryNotificationOperatorComposition * _ioReportEventCallback;
    double  _mieOnTimeStamp;
    BOOL  _prevAlsOn;
    long  _prevBklBucketIdx;
    double  _prevBklChgTimeStamp;
    double  _prevBklPower;
    BOOL  _prevDeviceCharging;
    BOOL  _prevDisplayOn;
    BOOL  _prevMieOn;
    long long  _startTouchEntryId;
    PLEntryNotificationOperatorComposition * _touchEventCallback;
    long  _touchSubmitCnt;
}

@property (retain) PLEntryNotificationOperatorComposition *alsEnabledEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *alsUserPreferencesEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *backlightEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *backlightRailCallback;
@property (retain) PLEntryNotificationOperatorComposition *batteryEventCallback;
@property double bklPowerRailTimeStamp;
@property double bklTimeStamp;
@property long dispSubmitCnt;
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback;
@property double displayOnTimeStamp;
@property BOOL filterFirstEntry;
@property (retain) PLEntryNotificationOperatorComposition *ioReportEventCallback;
@property double mieOnTimeStamp;
@property BOOL prevAlsOn;
@property long prevBklBucketIdx;
@property double prevBklChgTimeStamp;
@property double prevBklPower;
@property BOOL prevDeviceCharging;
@property BOOL prevDisplayOn;
@property BOOL prevMieOn;
@property long long startTouchEntryId;
@property (retain) PLEntryNotificationOperatorComposition *touchEventCallback;
@property long touchSubmitCnt;

+ (id)entryAggregateDefinitionAwdDisplayAndAls;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void).cxx_destruct;
- (void)addEntryToDisplayAlsTable:(id)arg1 withValue:(double)arg2;
- (id)alsEnabledEventCallback;
- (id)alsUserPreferencesEventCallback;
- (id)backlightEventCallback;
- (id)backlightRailCallback;
- (id)batteryEventCallback;
- (double)bklPowerRailTimeStamp;
- (double)bklTimeStamp;
- (long)dispSubmitCnt;
- (id)displayEventCallback;
- (double)displayOnTimeStamp;
- (BOOL)filterFirstEntry;
- (void)finalizeDisplayAlsTable;
- (long)getBklbucketIdx:(long)arg1 withLux:(long)arg2;
- (long)getLuxBucket:(long)arg1;
- (long)getUAmpsBucket:(long)arg1;
- (void)handleAlsEnabledCallback:(id)arg1;
- (void)handleAlsUserPreferencesCallback:(id)arg1;
- (void)handleBacklightCallback:(id)arg1;
- (void)handleBacklightRailCallback:(id)arg1;
- (void)handleBatteryCallback:(id)arg1;
- (void)handleDisplayCallback:(id)arg1;
- (void)handleIOReportCallback:(id)arg1;
- (void)handleTouchCallback:(id)arg1;
- (void)initDisplayBacklightAlsStats;
- (void)initTouchStats;
- (id)ioReportEventCallback;
- (double)mieOnTimeStamp;
- (BOOL)prevAlsOn;
- (long)prevBklBucketIdx;
- (double)prevBklChgTimeStamp;
- (double)prevBklPower;
- (BOOL)prevDeviceCharging;
- (BOOL)prevDisplayOn;
- (BOOL)prevMieOn;
- (void)processIOReportEntry:(id)arg1;
- (void)reInitDisplayBacklightAlsStats;
- (void)registerForDisplayAgentNotifications;
- (void)registerForTouchNotifications;
- (void)resetDisplayAlsTable;
- (void)setAlsEnabledEventCallback:(id)arg1;
- (void)setAlsUserPreferencesEventCallback:(id)arg1;
- (void)setBacklightEventCallback:(id)arg1;
- (void)setBacklightRailCallback:(id)arg1;
- (void)setBatteryEventCallback:(id)arg1;
- (void)setBklPowerRailTimeStamp:(double)arg1;
- (void)setBklTimeStamp:(double)arg1;
- (void)setDispSubmitCnt:(long)arg1;
- (void)setDisplayEventCallback:(id)arg1;
- (void)setDisplayOnTimeStamp:(double)arg1;
- (void)setFilterFirstEntry:(BOOL)arg1;
- (void)setIoReportEventCallback:(id)arg1;
- (void)setMieOnTimeStamp:(double)arg1;
- (void)setPrevAlsOn:(BOOL)arg1;
- (void)setPrevBklBucketIdx:(long)arg1;
- (void)setPrevBklChgTimeStamp:(double)arg1;
- (void)setPrevBklPower:(double)arg1;
- (void)setPrevDeviceCharging:(BOOL)arg1;
- (void)setPrevDisplayOn:(BOOL)arg1;
- (void)setPrevMieOn:(BOOL)arg1;
- (void)setStartTouchEntryId:(long long)arg1;
- (void)setTouchEventCallback:(id)arg1;
- (void)setTouchSubmitCnt:(long)arg1;
- (void)startMetricCollection:(id)arg1;
- (long long)startTouchEntryId;
- (void)stopMetricCollection:(id)arg1;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (id)touchEventCallback;
- (long)touchSubmitCnt;
- (void)updateDisplayMetrics:(BOOL)arg1 withState:(BOOL)arg2;
- (void)updateMieMetrics:(BOOL)arg1;

@end
