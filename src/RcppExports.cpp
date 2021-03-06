// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// test_merge
IntegerVector test_merge(const List& data);
RcppExport SEXP _Mapper_test_merge(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(test_merge(data));
    return rcpp_result_gen;
END_RCPP
}
// test_merge2
IntegerVector test_merge2(const List& data);
RcppExport SEXP _Mapper_test_merge2(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(test_merge2(data));
    return rcpp_result_gen;
END_RCPP
}
// valid_pairs
IntegerMatrix valid_pairs(const IntegerMatrix& level_set_pairs);
RcppExport SEXP _Mapper_valid_pairs(SEXP level_set_pairsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type level_set_pairs(level_set_pairsSEXP);
    rcpp_result_gen = Rcpp::wrap(valid_pairs(level_set_pairs));
    return rcpp_result_gen;
END_RCPP
}
// constructLevelSetIndex
IntegerVector constructLevelSetIndex(const NumericMatrix& x, const NumericMatrix& bnds);
RcppExport SEXP _Mapper_constructLevelSetIndex(SEXP xSEXP, SEXP bndsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type bnds(bndsSEXP);
    rcpp_result_gen = Rcpp::wrap(constructLevelSetIndex(x, bnds));
    return rcpp_result_gen;
END_RCPP
}
// constructIsoAlignedLevelSets
List constructIsoAlignedLevelSets(const NumericMatrix& x, const NumericMatrix& bnds, bool save_bounds);
RcppExport SEXP _Mapper_constructIsoAlignedLevelSets(SEXP xSEXP, SEXP bndsSEXP, SEXP save_boundsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type bnds(bndsSEXP);
    Rcpp::traits::input_parameter< bool >::type save_bounds(save_boundsSEXP);
    rcpp_result_gen = Rcpp::wrap(constructIsoAlignedLevelSets(x, bnds, save_bounds));
    return rcpp_result_gen;
END_RCPP
}
// constructFixedLevelSets
List constructFixedLevelSets(const NumericMatrix& filter_values, const IntegerMatrix& index_set, const NumericVector& overlap, const IntegerVector& number_intervals, const NumericMatrix& filter_range, const NumericVector& filter_len);
RcppExport SEXP _Mapper_constructFixedLevelSets(SEXP filter_valuesSEXP, SEXP index_setSEXP, SEXP overlapSEXP, SEXP number_intervalsSEXP, SEXP filter_rangeSEXP, SEXP filter_lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type filter_values(filter_valuesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type index_set(index_setSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type overlap(overlapSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type number_intervals(number_intervalsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type filter_range(filter_rangeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type filter_len(filter_lenSEXP);
    rcpp_result_gen = Rcpp::wrap(constructFixedLevelSets(filter_values, index_set, overlap, number_intervals, filter_range, filter_len));
    return rcpp_result_gen;
END_RCPP
}
// constructRestrainedLevelSets
List constructRestrainedLevelSets(const NumericMatrix& filter_values, const IntegerMatrix& index_set, const NumericVector& interval_length, const NumericVector& step_size, const NumericVector& filter_min);
RcppExport SEXP _Mapper_constructRestrainedLevelSets(SEXP filter_valuesSEXP, SEXP index_setSEXP, SEXP interval_lengthSEXP, SEXP step_sizeSEXP, SEXP filter_minSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type filter_values(filter_valuesSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type index_set(index_setSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type interval_length(interval_lengthSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type step_size(step_sizeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type filter_min(filter_minSEXP);
    rcpp_result_gen = Rcpp::wrap(constructRestrainedLevelSets(filter_values, index_set, interval_length, step_size, filter_min));
    return rcpp_result_gen;
END_RCPP
}
// createCoverMap
NumericMatrix createCoverMap(const List& ls1, const List& ls2, const int d);
RcppExport SEXP _Mapper_createCoverMap(SEXP ls1SEXP, SEXP ls2SEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type ls1(ls1SEXP);
    Rcpp::traits::input_parameter< const List& >::type ls2(ls2SEXP);
    Rcpp::traits::input_parameter< const int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(createCoverMap(ls1, ls2, d));
    return rcpp_result_gen;
END_RCPP
}
// edgelist_to_adjacencylist
List edgelist_to_adjacencylist(const IntegerMatrix& el);
RcppExport SEXP _Mapper_edgelist_to_adjacencylist(SEXP elSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type el(elSEXP);
    rcpp_result_gen = Rcpp::wrap(edgelist_to_adjacencylist(el));
    return rcpp_result_gen;
END_RCPP
}
// findFirstEqual
int findFirstEqual(const IntegerVector& x, int value);
RcppExport SEXP _Mapper_findFirstEqual(SEXP xSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(findFirstEqual(x, value));
    return rcpp_result_gen;
END_RCPP
}
// dist_to_boxes
List dist_to_boxes(const IntegerVector& positions, const double interval_length, const int num_intervals, const NumericVector& dist_to_lower, const NumericVector& dist_to_upper);
RcppExport SEXP _Mapper_dist_to_boxes(SEXP positionsSEXP, SEXP interval_lengthSEXP, SEXP num_intervalsSEXP, SEXP dist_to_lowerSEXP, SEXP dist_to_upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type positions(positionsSEXP);
    Rcpp::traits::input_parameter< const double >::type interval_length(interval_lengthSEXP);
    Rcpp::traits::input_parameter< const int >::type num_intervals(num_intervalsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type dist_to_lower(dist_to_lowerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type dist_to_upper(dist_to_upperSEXP);
    rcpp_result_gen = Rcpp::wrap(dist_to_boxes(positions, interval_length, num_intervals, dist_to_lower, dist_to_upper));
    return rcpp_result_gen;
END_RCPP
}
// dist_subset
NumericVector dist_subset(const NumericVector& dist, IntegerVector idx);
RcppExport SEXP _Mapper_dist_subset(SEXP distSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type dist(distSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(dist_subset(dist, idx));
    return rcpp_result_gen;
END_RCPP
}
// concatDist
NumericVector concatDist(const NumericVector& dist, const int n_new, const NumericVector& new_dists);
RcppExport SEXP _Mapper_concatDist(SEXP distSEXP, SEXP n_newSEXP, SEXP new_distsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type dist(distSEXP);
    Rcpp::traits::input_parameter< const int >::type n_new(n_newSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type new_dists(new_distsSEXP);
    rcpp_result_gen = Rcpp::wrap(concatDist(dist, n_new, new_dists));
    return rcpp_result_gen;
END_RCPP
}
// dist_from_to
NumericVector dist_from_to(const NumericMatrix& X_query, const NumericMatrix& X_ref);
RcppExport SEXP _Mapper_dist_from_to(SEXP X_querySEXP, SEXP X_refSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X_query(X_querySEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X_ref(X_refSEXP);
    rcpp_result_gen = Rcpp::wrap(dist_from_to(X_query, X_ref));
    return rcpp_result_gen;
END_RCPP
}
// gh_make_A
IntegerMatrix gh_make_A(const IntegerMatrix& idx);
RcppExport SEXP _Mapper_gh_make_A(SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(gh_make_A(idx));
    return rcpp_result_gen;
END_RCPP
}
// gh_make_Q
NumericMatrix gh_make_Q(const NumericMatrix& x_dist, const NumericMatrix& y_dist);
RcppExport SEXP _Mapper_gh_make_Q(SEXP x_distSEXP, SEXP y_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x_dist(x_distSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type y_dist(y_distSEXP);
    rcpp_result_gen = Rcpp::wrap(gh_make_Q(x_dist, y_dist));
    return rcpp_result_gen;
END_RCPP
}
// all_correspondences
NumericMatrix all_correspondences(const NumericVector& X, const NumericVector& Y);
RcppExport SEXP _Mapper_all_correspondences(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(all_correspondences(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// eccentricity
NumericVector eccentricity(const NumericMatrix& from, const NumericMatrix& x, const int type);
RcppExport SEXP _Mapper_eccentricity(SEXP fromSEXP, SEXP xSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type from(fromSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(eccentricity(from, x, type));
    return rcpp_result_gen;
END_RCPP
}
// landmark_maxmin
IntegerVector landmark_maxmin(const NumericMatrix& x, const int n, const int seed);
RcppExport SEXP _Mapper_landmark_maxmin(SEXP xSEXP, SEXP nSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(landmark_maxmin(x, n, seed));
    return rcpp_result_gen;
END_RCPP
}
// nondecreasing_seq
List nondecreasing_seq(const List& lst);
RcppExport SEXP _Mapper_nondecreasing_seq(SEXP lstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type lst(lstSEXP);
    rcpp_result_gen = Rcpp::wrap(nondecreasing_seq(lst));
    return rcpp_result_gen;
END_RCPP
}
// connected_pullbacks
List connected_pullbacks(std::vector< std::string > pullback_ids, const List& pullback, SEXP stree);
RcppExport SEXP _Mapper_connected_pullbacks(SEXP pullback_idsSEXP, SEXP pullbackSEXP, SEXP streeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type pullback_ids(pullback_idsSEXP);
    Rcpp::traits::input_parameter< const List& >::type pullback(pullbackSEXP);
    Rcpp::traits::input_parameter< SEXP >::type stree(streeSEXP);
    rcpp_result_gen = Rcpp::wrap(connected_pullbacks(pullback_ids, pullback, stree));
    return rcpp_result_gen;
END_RCPP
}
// decompose_preimages
List decompose_preimages(const StringVector pullback_ids, const Function cluster_f, const Function level_set_f, const List& vertices, List& pullback);
RcppExport SEXP _Mapper_decompose_preimages(SEXP pullback_idsSEXP, SEXP cluster_fSEXP, SEXP level_set_fSEXP, SEXP verticesSEXP, SEXP pullbackSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const StringVector >::type pullback_ids(pullback_idsSEXP);
    Rcpp::traits::input_parameter< const Function >::type cluster_f(cluster_fSEXP);
    Rcpp::traits::input_parameter< const Function >::type level_set_f(level_set_fSEXP);
    Rcpp::traits::input_parameter< const List& >::type vertices(verticesSEXP);
    Rcpp::traits::input_parameter< List& >::type pullback(pullbackSEXP);
    rcpp_result_gen = Rcpp::wrap(decompose_preimages(pullback_ids, cluster_f, level_set_f, vertices, pullback));
    return rcpp_result_gen;
END_RCPP
}
// build_0_skeleton
void build_0_skeleton(const IntegerVector vids, SEXP st);
RcppExport SEXP _Mapper_build_0_skeleton(SEXP vidsSEXP, SEXP stSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type vids(vidsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type st(stSEXP);
    build_0_skeleton(vids, st);
    return R_NilValue;
END_RCPP
}
// build_1_skeleton
List build_1_skeleton(const CharacterMatrix& pullback_ids, const int min_sz, const List& vertices, const List& pullback, SEXP stree, const bool modify);
RcppExport SEXP _Mapper_build_1_skeleton(SEXP pullback_idsSEXP, SEXP min_szSEXP, SEXP verticesSEXP, SEXP pullbackSEXP, SEXP streeSEXP, SEXP modifySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterMatrix& >::type pullback_ids(pullback_idsSEXP);
    Rcpp::traits::input_parameter< const int >::type min_sz(min_szSEXP);
    Rcpp::traits::input_parameter< const List& >::type vertices(verticesSEXP);
    Rcpp::traits::input_parameter< const List& >::type pullback(pullbackSEXP);
    Rcpp::traits::input_parameter< SEXP >::type stree(streeSEXP);
    Rcpp::traits::input_parameter< const bool >::type modify(modifySEXP);
    rcpp_result_gen = Rcpp::wrap(build_1_skeleton(pullback_ids, min_sz, vertices, pullback, stree, modify));
    return rcpp_result_gen;
END_RCPP
}
// build_k_skeleton
List build_k_skeleton(CharacterMatrix pullback_ids, const List& pullback, List& vertices, int k, SEXP stree, const bool modify);
RcppExport SEXP _Mapper_build_k_skeleton(SEXP pullback_idsSEXP, SEXP pullbackSEXP, SEXP verticesSEXP, SEXP kSEXP, SEXP streeSEXP, SEXP modifySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterMatrix >::type pullback_ids(pullback_idsSEXP);
    Rcpp::traits::input_parameter< const List& >::type pullback(pullbackSEXP);
    Rcpp::traits::input_parameter< List& >::type vertices(verticesSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< SEXP >::type stree(streeSEXP);
    Rcpp::traits::input_parameter< const bool >::type modify(modifySEXP);
    rcpp_result_gen = Rcpp::wrap(build_k_skeleton(pullback_ids, pullback, vertices, k, stree, modify));
    return rcpp_result_gen;
END_RCPP
}
// build_flag_complex
void build_flag_complex(const size_t k, SEXP stree);
RcppExport SEXP _Mapper_build_flag_complex(SEXP kSEXP, SEXP streeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< SEXP >::type stree(streeSEXP);
    build_flag_complex(k, stree);
    return R_NilValue;
END_RCPP
}
// intersectNodes
List intersectNodes(const List& nodes1, const List& nodes2, const IntegerVector& node_ids1, const IntegerVector& node_ids2);
RcppExport SEXP _Mapper_intersectNodes(SEXP nodes1SEXP, SEXP nodes2SEXP, SEXP node_ids1SEXP, SEXP node_ids2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type nodes1(nodes1SEXP);
    Rcpp::traits::input_parameter< const List& >::type nodes2(nodes2SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type node_ids1(node_ids1SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type node_ids2(node_ids2SEXP);
    rcpp_result_gen = Rcpp::wrap(intersectNodes(nodes1, nodes2, node_ids1, node_ids2));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_segment_tree_module();
RcppExport SEXP _rcpp_module_boot_union_find_module();
RcppExport SEXP _rcpp_module_boot_multiscale_module();

static const R_CallMethodDef CallEntries[] = {
    {"_Mapper_test_merge", (DL_FUNC) &_Mapper_test_merge, 1},
    {"_Mapper_test_merge2", (DL_FUNC) &_Mapper_test_merge2, 1},
    {"_Mapper_valid_pairs", (DL_FUNC) &_Mapper_valid_pairs, 1},
    {"_Mapper_constructLevelSetIndex", (DL_FUNC) &_Mapper_constructLevelSetIndex, 2},
    {"_Mapper_constructIsoAlignedLevelSets", (DL_FUNC) &_Mapper_constructIsoAlignedLevelSets, 3},
    {"_Mapper_constructFixedLevelSets", (DL_FUNC) &_Mapper_constructFixedLevelSets, 6},
    {"_Mapper_constructRestrainedLevelSets", (DL_FUNC) &_Mapper_constructRestrainedLevelSets, 5},
    {"_Mapper_createCoverMap", (DL_FUNC) &_Mapper_createCoverMap, 3},
    {"_Mapper_edgelist_to_adjacencylist", (DL_FUNC) &_Mapper_edgelist_to_adjacencylist, 1},
    {"_Mapper_findFirstEqual", (DL_FUNC) &_Mapper_findFirstEqual, 2},
    {"_Mapper_dist_to_boxes", (DL_FUNC) &_Mapper_dist_to_boxes, 5},
    {"_Mapper_dist_subset", (DL_FUNC) &_Mapper_dist_subset, 2},
    {"_Mapper_concatDist", (DL_FUNC) &_Mapper_concatDist, 3},
    {"_Mapper_dist_from_to", (DL_FUNC) &_Mapper_dist_from_to, 2},
    {"_Mapper_gh_make_A", (DL_FUNC) &_Mapper_gh_make_A, 1},
    {"_Mapper_gh_make_Q", (DL_FUNC) &_Mapper_gh_make_Q, 2},
    {"_Mapper_all_correspondences", (DL_FUNC) &_Mapper_all_correspondences, 2},
    {"_Mapper_eccentricity", (DL_FUNC) &_Mapper_eccentricity, 3},
    {"_Mapper_landmark_maxmin", (DL_FUNC) &_Mapper_landmark_maxmin, 3},
    {"_Mapper_nondecreasing_seq", (DL_FUNC) &_Mapper_nondecreasing_seq, 1},
    {"_Mapper_connected_pullbacks", (DL_FUNC) &_Mapper_connected_pullbacks, 3},
    {"_Mapper_decompose_preimages", (DL_FUNC) &_Mapper_decompose_preimages, 5},
    {"_Mapper_build_0_skeleton", (DL_FUNC) &_Mapper_build_0_skeleton, 2},
    {"_Mapper_build_1_skeleton", (DL_FUNC) &_Mapper_build_1_skeleton, 6},
    {"_Mapper_build_k_skeleton", (DL_FUNC) &_Mapper_build_k_skeleton, 6},
    {"_Mapper_build_flag_complex", (DL_FUNC) &_Mapper_build_flag_complex, 2},
    {"_Mapper_intersectNodes", (DL_FUNC) &_Mapper_intersectNodes, 4},
    {"_rcpp_module_boot_segment_tree_module", (DL_FUNC) &_rcpp_module_boot_segment_tree_module, 0},
    {"_rcpp_module_boot_union_find_module", (DL_FUNC) &_rcpp_module_boot_union_find_module, 0},
    {"_rcpp_module_boot_multiscale_module", (DL_FUNC) &_rcpp_module_boot_multiscale_module, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_Mapper(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
