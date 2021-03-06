/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation {
    unsigned int  _articleCachePolicy;
    NSArray * _articleIDs;
    double  _articleMaximumCachedAge;
    <FCContentContext> * _context;
    NSArray * _headlines;
    FCHeldRecords * _heldArticleRecords;
    NSArray * _ignoreCacheForArticleIDs;
    BOOL  _overrideArticleCachePolicy;
    BOOL  _overrideTagCachePolicy;
    unsigned int  _tagCachePolicy;
    double  _tagMaximumCachedAge;
}

@property unsigned int articleCachePolicy;
@property (nonatomic, retain) NSArray *articleIDs;
@property double articleMaximumCachedAge;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) NSArray *headlines;
@property (nonatomic, retain) FCHeldRecords *heldArticleRecords;
@property (nonatomic, retain) NSArray *ignoreCacheForArticleIDs;
@property BOOL overrideArticleCachePolicy;
@property BOOL overrideTagCachePolicy;
@property unsigned int tagCachePolicy;
@property double tagMaximumCachedAge;

- (void).cxx_destruct;
- (unsigned int)articleCachePolicy;
- (id)articleIDs;
- (double)articleMaximumCachedAge;
- (id)completeFetchOperation;
- (id)context;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)fetchArticleRecordsWithCompletion:(id /* block */)arg1;
- (id)fetchTagRecordsWithCompletion:(id /* block */)arg1;
- (id)headlines;
- (id)heldArticleRecords;
- (id)ignoreCacheForArticleIDs;
- (id)init;
- (id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3;
- (BOOL)overrideArticleCachePolicy;
- (BOOL)overrideTagCachePolicy;
- (void)setArticleCachePolicy:(unsigned int)arg1;
- (void)setArticleIDs:(id)arg1;
- (void)setArticleMaximumCachedAge:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setHeldArticleRecords:(id)arg1;
- (void)setIgnoreCacheForArticleIDs:(id)arg1;
- (void)setOverrideArticleCachePolicy:(BOOL)arg1;
- (void)setOverrideTagCachePolicy:(BOOL)arg1;
- (void)setTagCachePolicy:(unsigned int)arg1;
- (void)setTagMaximumCachedAge:(double)arg1;
- (unsigned int)tagCachePolicy;
- (double)tagMaximumCachedAge;

@end
