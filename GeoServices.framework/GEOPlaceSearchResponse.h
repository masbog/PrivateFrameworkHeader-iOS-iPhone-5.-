/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSMutableArray;

@interface GEOPlaceSearchResponse : PBCodable  {
    int _status;
    NSMutableArray *_placeResults;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_searchs;
}

@property int status;
@property(retain) NSMutableArray * placeResults;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(retain) NSMutableArray * searchs;


- (void)setStatus:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)placeResultsCount;
- (void)addPlaceResult:(id)arg1;
- (void)setSearchs:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (id)searchs;
- (id)searchAtIndex:(unsigned int)arg1;
- (unsigned int)searchsCount;
- (id)placeResultAtIndex:(unsigned int)arg1;
- (void)addSearch:(id)arg1;
- (BOOL)hasMapRegion;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (int)status;
- (id)mapRegion;
- (id)placeResults;
- (void)setMapRegion:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLBSWrapperResponse:(id)arg1 atLatLng:(id)arg2;
- (id)_bestAddressInResponse:(id)arg1;

@end
