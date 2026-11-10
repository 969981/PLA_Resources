/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00524aa8; name: FUN_00524aa8
 */


long FUN_00524aa8(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,long *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  long local_58;
  undefined8 local_48;
  
  lVar7 = FUN_002e2e80(PTR_FUN_04373078,0xb0);
  if (lVar7 == 0) {
    return 0;
  }
  local_48 = *param_1;
  *param_1 = 0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  if ((*param_3 & 1) == 0) {
    pbVar12 = param_3 + 1;
    uVar11 = (ulong)(*param_3 >> 1);
    bVar4 = *param_4;
  }
  else {
    uVar11 = *(ulong *)(param_3 + 8);
    if ((long)uVar11 < 0) {
                    /* try { // try from 00524c08 to 00524c27 has its CatchHandler @ 00524c4c */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    pbVar12 = *(byte **)(param_3 + 0x10);
    bVar4 = *param_4;
  }
  if ((bVar4 & 1) == 0) {
    param_4 = param_4 + 1;
    uVar13 = (ulong)(bVar4 >> 1);
    lVar9 = *param_5;
  }
  else {
    uVar13 = *(ulong *)(param_4 + 8);
    if ((long)uVar13 < 0) {
                    /* try { // try from 00524c28 to 00524c47 has its CatchHandler @ 00524c48 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
    param_4 = *(byte **)(param_4 + 0x10);
    lVar9 = *param_5;
  }
  if (lVar9 != 0) {
    local_58 = 0;
    plVar1 = (long *)(lVar9 + 0x10);
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = *(long *)(lVar9 + 8);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 00524b88 to 00524ba3 has its CatchHandler @ 00524c50 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar10 + 8),(long *)(lVar9 + 8),lVar8,
                   lVar8 + 1);
    }
  }
  local_58 = *param_5;
                    /* try { // try from 00524bac to 00524bd7 has its CatchHandler @ 00524c64 */
  FUN_005b6d38(lVar7,&local_48,uVar2,uVar3,pbVar12,uVar11,param_4,uVar13,&local_58);
  FUN_0051f4ac(&local_58);
  FUN_0050df34(&local_48);
  return lVar7;
}


