/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005479c8; name: FUN_005479c8
 */


void FUN_005479c8(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  byte local_b0 [8];
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  char *local_68;
  undefined8 uStack_60;
  byte local_38 [8];
  ulong local_30;
  ulong local_28;
  undefined1 auStack_18 [8];
  
  uVar2 = *param_2;
  if (1 < uVar2) {
    local_68 = "Resolution event: ";
    uStack_60 = 0x12;
    puVar1 = param_2 + 1;
    if ((uVar2 & 1) != 0) {
      puVar1 = (ulong *)param_2[1];
    }
    FUN_00548b50(local_b0,puVar1,(long)puVar1 + (uVar2 & 0x3ffffffffffffffe) * 4,&DAT_0398d5c8,2,
                 auStack_18);
    if ((local_b0[0] & 1) == 0) {
      local_98 = (ulong)local_b0 | 1;
      local_a8 = (ulong)(local_b0[0] >> 1);
    }
    else {
      local_98 = local_a0;
      if ((long)local_a8 < 0) {
                    /* try { // try from 00547ad8 to 00547af7 has its CatchHandler @ 00547b1c */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
    }
                    /* try { // try from 00547a50 to 00547a5f has its CatchHandler @ 00547b34 */
    local_90 = local_a8;
    FUN_002eced0(local_38,&local_68,&local_98);
    if ((local_b0[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_a0);
    }
    if ((local_38[0] & 1) == 0) {
      local_30 = (ulong)(local_38[0] >> 1);
      uVar2 = (ulong)local_38 | 1;
    }
    else {
      if ((long)local_30 < 0) {
                    /* try { // try from 00547af8 to 00547b17 has its CatchHandler @ 00547b18 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("false && \"len <= kMaxSize\"",
                      "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
      }
      uVar2 = local_28;
    }
                    /* try { // try from 00547aa8 to 00547aaf has its CatchHandler @ 00547b20 */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x28))(*(long **)(param_1 + 0x30),0,uVar2,local_30);
    if ((local_38[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_28);
    }
  }
  return;
}


