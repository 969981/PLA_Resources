/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00524878; name: FUN_00524878
 */


long FUN_00524878(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_38;
  
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x88);
  if (lVar2 == 0) {
    return 0;
  }
  local_38 = *param_1;
  *param_1 = 0;
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar4 = (ulong)(*param_3 >> 1);
    bVar1 = *param_4;
  }
  else {
    uVar4 = *(ulong *)(param_3 + 8);
    if ((long)uVar4 < 0) {
                    /* try { // try from 00524930 to 0052494f has its CatchHandler @ 00524974 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    pbVar3 = *(byte **)(param_3 + 0x10);
    bVar1 = *param_4;
  }
  if ((bVar1 & 1) == 0) {
    param_4 = param_4 + 1;
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_4 + 8);
    if ((long)uVar5 < 0) {
                    /* try { // try from 00524950 to 0052496f has its CatchHandler @ 00524970 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    param_4 = *(byte **)(param_4 + 0x10);
  }
                    /* try { // try from 00524904 to 0052490f has its CatchHandler @ 00524978 */
  FUN_005b69b8(lVar2,&local_38,*param_2,param_2[1],pbVar3,uVar4,param_4,uVar5);
  FUN_0050df34(&local_38);
  return lVar2;
}


