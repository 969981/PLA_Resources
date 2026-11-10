/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005bfb90; name: FUN_005bfb90
 */


void FUN_005bfb90(int param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  byte *local_90;
  byte *pbStack_88;
  ulong local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  byte local_48 [8];
  ulong local_40;
  byte *local_38;
  
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = (char *)0x202004;
                    /* try { // try from 005bfbc8 to 005bfbd3 has its CatchHandler @ 005c000c */
  FUN_005c0030(&local_90,(long)param_1,&local_c0);
                    /* try { // try from 005bfbd8 to 005bfbeb has its CatchHandler @ 005bff8c */
  FUN_002e5790(local_48,local_90,pbStack_88,&DAT_03996322,0);
  pbVar5 = local_90;
  puVar4 = PTR_LAB_04373088;
  if (local_90 != (byte *)0x0) {
    if (pbStack_88 != local_90) {
      bVar2 = pbStack_88[-0x18];
      pbVar6 = pbStack_88 + -0x18;
      while( true ) {
        pbVar3 = pbVar6;
        if ((bVar2 & 1) != 0) {
          FUN_002e2ea0(puVar4,*(undefined8 *)(pbStack_88 + -8));
        }
        if (pbVar5 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar6 = pbVar3 + -0x18;
        pbStack_88 = pbVar3;
      }
    }
    pbStack_88 = pbVar5;
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
  if (((ulong)local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_b0);
  }
  if ((local_48[0] & 1) == 0) {
    local_90 = (byte *)((ulong)local_48 | 1);
    uVar7 = (ulong)(local_48[0] >> 1);
  }
  else {
    local_90 = local_38;
    uVar7 = local_40;
    if ((long)local_40 < 0) {
                    /* try { // try from 005bfea4 to 005bfec3 has its CatchHandler @ 005bff0c */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
  }
  local_c0 = "region";
  uStack_b8 = 6;
                    /* try { // try from 005bfcb0 to 005bfcc3 has its CatchHandler @ 005bff78 */
  pbStack_88 = (byte *)uVar7;
  FUN_002eced0(&local_60,&local_90,&local_c0);
  puVar8 = (undefined1 *)((ulong)&local_60 | 1);
  pbStack_88 = (byte *)param_2[1];
  local_90 = (byte *)*param_2;
  puVar1 = puVar8;
  if ((local_60 & 1) != 0) {
    puVar1 = local_50;
  }
                    /* try { // try from 005bfce0 to 005bfcef has its CatchHandler @ 005bff50 */
  FUN_005be370(puVar1,&local_90,param_3,0);
  if ((local_48[0] & 1) == 0) {
    local_90 = (byte *)((ulong)local_48 | 1);
    uVar7 = (ulong)(local_48[0] >> 1);
  }
  else {
    local_90 = local_38;
    uVar7 = local_40;
    if ((long)local_40 < 0) {
                    /* try { // try from 005bfec4 to 005bfee3 has its CatchHandler @ 005bff08 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
  }
  local_c0 = "zone";
  uStack_b8 = 4;
                    /* try { // try from 005bfd2c to 005bfd3b has its CatchHandler @ 005bff40 */
  pbStack_88 = (byte *)uVar7;
  FUN_002eced0(&local_d8,&local_90,&local_c0);
  if (((byte)local_60 & 1) != 0) {
    *local_50 = 0;
    uStack_58 = 0;
    if (((byte)local_60 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
  }
  local_50 = local_c8;
  uStack_58 = uStack_d0;
  local_60 = local_d8;
  local_90 = (byte *)param_2[2];
  pbStack_88 = (byte *)param_2[3];
  puVar1 = puVar8;
  if ((local_d8 & 1) != 0) {
    puVar1 = local_c8;
  }
                    /* try { // try from 005bfd98 to 005bfda7 has its CatchHandler @ 005bff30 */
  FUN_005be370(puVar1,&local_90,param_3,0);
  if ((local_48[0] & 1) == 0) {
    local_90 = (byte *)((ulong)local_48 | 1);
    local_40 = (ulong)(local_48[0] >> 1);
  }
  else {
    local_90 = local_38;
    if ((long)local_40 < 0) {
                    /* try { // try from 005bfee4 to 005bff03 has its CatchHandler @ 005bff04 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
  }
  local_c0 = "sub_zone";
  uStack_b8 = 8;
                    /* try { // try from 005bfde4 to 005bfdf3 has its CatchHandler @ 005bff20 */
  pbStack_88 = (byte *)local_40;
  FUN_002eced0(&local_d8,&local_90,&local_c0);
  if ((local_60 & 1) != 0) {
    *local_50 = 0;
    uStack_58 = 0;
    if ((local_60 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
  }
  local_50 = local_c8;
  uStack_58 = uStack_d0;
  local_60 = local_d8;
  local_90 = (byte *)param_2[4];
  pbStack_88 = (byte *)param_2[5];
  if ((local_d8 & 1) != 0) {
    puVar8 = local_c8;
  }
                    /* try { // try from 005bfe50 to 005bfe5f has its CatchHandler @ 005bff10 */
  FUN_005be370(puVar8,&local_90,param_3,0);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if ((local_48[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38);
  }
  return;
}


