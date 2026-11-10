/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051d2e8; name: FUN_0051d2e8
 */


void FUN_0051d2e8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  byte local_70 [16];
  undefined8 local_60;
  byte local_58 [16];
  undefined8 local_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined *puStack_28;
  
  FUN_0051d490(local_70,*param_3,param_3[1]);
                    /* try { // try from 0051d310 to 0051d317 has its CatchHandler @ 0051d438 */
  lVar1 = FUN_00524da8(param_2 + 0x158,local_70);
  if (param_2 + 0x160 == lVar1) {
                    /* try { // try from 0051d3d8 to 0051d3ff has its CatchHandler @ 0051d438 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x885,2,"assertion failed: %s",
                 "cluster_names_map_it != weighted_cluster_index_map_.end()");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 0051d334 to 0051d337 has its CatchHandler @ 0051d428 */
  lVar2 = FUN_00524eb8(lVar1 + 0x40,local_58);
  if (lVar1 + 0x48 == lVar2) {
                    /* try { // try from 0051d400 to 0051d427 has its CatchHandler @ 0051d428 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x88a,2,"assertion failed: %s",
                 "cluster_weights_map_it != cluster_weights_map.end()");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puStack_38 = PTR_LAB_04374a18;
  local_30 = *(undefined8 *)(lVar2 + 0x38);
  puStack_28 = PTR_LAB_04374a10;
                    /* try { // try from 0051d364 to 0051d37f has its CatchHandler @ 0051d448 */
  local_40 = local_70;
  FUN_002e6390(param_1,"%s_%d",5,&local_40,2);
  if ((local_58[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  if ((local_70[0] & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,local_60);
  return;
}


