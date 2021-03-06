/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService

+ (id)_sanitizeGraphDataDictionaryForArchiving:(id)arg1 memoryLocalIdentifier:(id)arg2;
+ (id)extractDatesAndAssetCounts:(id)arg1;
+ (id)getSummaryFromProviderItem:(id)arg1;
+ (BOOL)isServiceAvailableForProviders:(id)arg1;

- (id)_libraryStatDictionary;
- (id)_providerItemsSummary;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)collectProviderItemsSummaryAndLibraryStat;
- (id)consoleDescription;
- (id)contextualViewController;
- (id)parseProviderItemsSummary:(id)arg1 error:(id*)arg2;
- (id)settingsViewController;
- (id)snapshotMemoriesRelatedResults:(id)arg1 error:(id*)arg2;
- (id)tapToRadarURLWithTitle:(id)arg1 descriptionString:(id)arg2;
- (id)title;
- (void)writeErrorsToErrorLog:(id)arg1;
- (void)writeGraphData:(id)arg1 errorLists:(id)arg2;
- (void)writeGraphStatistics:(id)arg1 errorLists:(id)arg2;
- (void)writeLibraryStatistics:(id)arg1 analysisClient:(id)arg2 errorLists:(id)arg3;
- (void)writeMemoriesSummary:(id)arg1 analysisClient:(id)arg2 errorLists:(id)arg3;

@end
