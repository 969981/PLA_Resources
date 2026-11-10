/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00608800; name: FUN_00608800
 */


/* WARNING: Removing unreachable block (ram,0x006088bc) */
/* WARNING: Removing unreachable block (ram,0x0060888c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff08 : 0x006088c8 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00608800(char *param_1,undefined8 ******param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  char *__s;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 ******ppppppuVar15;
  byte *pbVar16;
  long lVar17;
  long lStack_100;
  undefined8 *******local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long alStack_c0 [7];
  long *plVar18;
  undefined8 local_70;
  byte local_68 [8];
  ulong local_60;
  ulong local_58;
  
  local_f0 = param_3;
  local_e8 = param_4;
  local_e0 = param_5;
  local_d8 = param_6;
  local_d0 = param_7;
  local_c8 = param_8;
  if (*param_1 == '\x0e') {
    local_70 = -0x7f00000030;
    uVar12 = *(undefined4 *)(local_f8 + 2);
    uVar13 = *(undefined4 *)((long)local_f8 + 0x14);
  }
  else {
    if (*param_1 != '\r') {
      local_f8 = (undefined8 *******)param_2;
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc/rtc_base/logging.cc",0x1eb,"false",PTR_DAT_043752a0);
    }
    local_70 = -0x7f00000028;
    uVar12 = 0;
    uVar13 = 0;
    local_f8 = &local_f8;
  }
  uVar2 = *(uint *)(local_f8 + 1);
  uVar1 = uVar2 & 7;
  ppppppuVar15 = *local_f8;
  local_f8 = (undefined8 *******)param_2;
  if (((int)uVar1 < DAT_0418ffec) && ((int)uVar1 < DAT_0418fff0)) {
    FUN_00607e90(alStack_c0,&DAT_0439f2d8);
    lVar17 = *(long *)(PTR_DAT_043752c0 + 0x10);
    FUN_00607e9c(alStack_c0);
    if (lVar17 == 0) {
      return;
    }
  }
  FUN_00607f44(alStack_c0,ppppppuVar15,uVar2 >> 3,uVar1,uVar12,uVar13);
  puVar4 = PTR_LAB_04373088;
  uVar14 = (ulong)local_68 | 1;
  pbVar16 = (byte *)(param_1 + 1);
  bVar3 = *pbVar16;
  plVar18 = (long *)register0x00000008;
  lVar17 = local_70;
joined_r0x00608964:
  do {
    if (0xc < bVar3) {
                    /* try { // try from 00608e6c to 00608e8b has its CatchHandler @ 00608f18 */
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc/rtc_base/logging.cc",0x224,"false",PTR_DAT_043752a0);
    }
    local_70._0_4_ = (int)lVar17;
    local_70._4_4_ = (int)((ulong)lVar17 >> 0x20);
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar3) {
    case 0:
      FUN_006085a0(alStack_c0);
      return;
    case 1:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        plVar9 = (long *)((long)alStack_c0 + lVar8);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18;
        plVar18 = plVar18 + 1;
      }
      FUN_00609740(local_68,(int)*plVar9);
      uVar6 = (ulong)(local_68[0] >> 1);
      uVar7 = uVar14;
      if ((local_68[0] & 1) != 0) {
        uVar6 = local_60;
        uVar7 = local_58;
      }
                    /* try { // try from 006089e0 to 006089e7 has its CatchHandler @ 00608f1c */
      FUN_002e4094(alStack_c0,uVar7,uVar6);
      break;
    case 2:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        plVar9 = (long *)((long)alStack_c0 + lVar8);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18;
        plVar18 = plVar18 + 1;
      }
                    /* try { // try from 00608b24 to 00608b2b has its CatchHandler @ 00608fcc */
      FUN_00609900(local_68,*plVar9);
      uVar6 = (ulong)(local_68[0] >> 1);
      uVar7 = uVar14;
      if ((local_68[0] & 1) != 0) {
        uVar6 = local_60;
        uVar7 = local_58;
      }
                    /* try { // try from 00608b44 to 00608b4b has its CatchHandler @ 00608f2c */
      FUN_002e4094(alStack_c0,uVar7,uVar6);
      break;
    case 3:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        plVar9 = (long *)((long)alStack_c0 + lVar8);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18;
        plVar18 = plVar18 + 1;
      }
                    /* try { // try from 00608b78 to 00608b7f has its CatchHandler @ 00608fcc */
      FUN_00609ac0(local_68,*plVar9);
      uVar6 = (ulong)(local_68[0] >> 1);
      uVar7 = uVar14;
      if ((local_68[0] & 1) != 0) {
        uVar6 = local_60;
        uVar7 = local_58;
      }
                    /* try { // try from 00608b98 to 00608b9f has its CatchHandler @ 00608f3c */
      FUN_002e4094(alStack_c0,uVar7,uVar6);
      break;
    case 4:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        plVar9 = (long *)((long)alStack_c0 + lVar8);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18;
        plVar18 = plVar18 + 1;
      }
      FUN_00609820(local_68,(int)*plVar9);
      uVar6 = (ulong)(local_68[0] >> 1);
      uVar7 = uVar14;
      if ((local_68[0] & 1) != 0) {
        uVar6 = local_60;
        uVar7 = local_58;
      }
                    /* try { // try from 00608a6c to 00608a73 has its CatchHandler @ 00608f4c */
      FUN_002e4094(alStack_c0,uVar7,uVar6);
      break;
    case 5:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        plVar9 = (long *)((long)alStack_c0 + lVar8);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18;
        plVar18 = plVar18 + 1;
      }
                    /* try { // try from 00608c20 to 00608c27 has its CatchHandler @ 00608fcc */
      FUN_006099e0(local_68,*plVar9);
      uVar6 = (ulong)(local_68[0] >> 1);
      uVar7 = uVar14;
      if ((local_68[0] & 1) != 0) {
        uVar6 = local_60;
        uVar7 = local_58;
      }
                    /* try { // try from 00608c40 to 00608c47 has its CatchHandler @ 00608f5c */
      FUN_002e4094(alStack_c0,uVar7,uVar6);
      break;
    case 6:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        plVar9 = (long *)((long)alStack_c0 + lVar8);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18;
        plVar18 = plVar18 + 1;
      }
                    /* try { // try from 00608c74 to 00608c7b has its CatchHandler @ 00608fcc */
      FUN_00609ba0(local_68,*plVar9);
      uVar6 = (ulong)(local_68[0] >> 1);
      uVar7 = uVar14;
      if ((local_68[0] & 1) != 0) {
        uVar6 = local_60;
        uVar7 = local_58;
      }
                    /* try { // try from 00608c94 to 00608c9b has its CatchHandler @ 00608f6c */
      FUN_002e4094(alStack_c0,uVar7,uVar6);
      break;
    case 7:
      lVar8 = (long)local_70._4_4_;
      if ((lVar17 < 0) &&
         (local_70._4_4_ = local_70._4_4_ + 0x10, lVar17 = local_70, local_70._4_4_ < 1)) {
        plVar9 = (long *)((long)alStack_c0 + lVar8 + -0x40);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18;
        plVar18 = plVar18 + 1;
      }
                    /* try { // try from 00608bcc to 00608bd3 has its CatchHandler @ 00608fcc */
      FUN_00609c80(local_68,*plVar9);
      uVar6 = (ulong)(local_68[0] >> 1);
      uVar7 = uVar14;
      if ((local_68[0] & 1) != 0) {
        uVar6 = local_60;
        uVar7 = local_58;
      }
                    /* try { // try from 00608bec to 00608bf3 has its CatchHandler @ 00608f7c */
      FUN_002e4094(alStack_c0,uVar7,uVar6);
      break;
    case 8:
      lVar8 = (long)local_70._4_4_;
      if ((lVar17 < 0) &&
         (local_70._4_4_ = local_70._4_4_ + 0x10, lVar17 = local_70, local_70._4_4_ < 1)) {
        puVar11 = (undefined8 *)((long)alStack_c0 + lVar8 + -0x40);
      }
      else {
        local_70 = lVar17;
        puVar11 = (undefined8 *)((long)plVar18 + 0xfU & 0xfffffffffffffff0);
        plVar18 = puVar11 + 2;
      }
                    /* try { // try from 00608d10 to 00608d17 has its CatchHandler @ 00608fcc */
      FUN_00609d60(local_68,*puVar11);
      uVar6 = (ulong)(local_68[0] >> 1);
      uVar7 = uVar14;
      if ((local_68[0] & 1) != 0) {
        uVar6 = local_60;
        uVar7 = local_58;
      }
                    /* try { // try from 00608d30 to 00608d37 has its CatchHandler @ 00608f8c */
      FUN_002e4094(alStack_c0,uVar7,uVar6);
      break;
    case 9:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        __s = *(char **)((long)alStack_c0 + lVar8);
        if (__s == (char *)0x0) goto LAB_00608da8;
LAB_00608ae8:
        sVar5 = strlen(__s);
        if ((long)sVar5 < 0) {
                    /* try { // try from 00608eac to 00608ecb has its CatchHandler @ 00608f10 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18 + 1;
        __s = (char *)*plVar18;
        plVar18 = plVar9;
        if (__s != (char *)0x0) goto LAB_00608ae8;
LAB_00608da8:
        sVar5 = 0;
      }
                    /* try { // try from 00608dac to 00608db7 has its CatchHandler @ 00608fcc */
      FUN_002e4094(alStack_c0,__s,sVar5);
      goto LAB_0060897c;
    case 10:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        pbVar10 = *(byte **)((long)alStack_c0 + lVar8);
        bVar3 = *pbVar10;
        if ((bVar3 & 1) == 0) goto LAB_0060896c;
LAB_00608cd0:
        uVar6 = *(ulong *)(pbVar10 + 8);
        if ((long)uVar6 < 0) {
                    /* try { // try from 00608ecc to 00608eeb has its CatchHandler @ 00608f0c */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        pbVar10 = *(byte **)(pbVar10 + 0x10);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18 + 1;
        pbVar10 = (byte *)*plVar18;
        bVar3 = *pbVar10;
        plVar18 = plVar9;
        if ((bVar3 & 1) != 0) goto LAB_00608cd0;
LAB_0060896c:
        pbVar10 = pbVar10 + 1;
        uVar6 = (ulong)(bVar3 >> 1);
      }
                    /* try { // try from 00608974 to 006089c7 has its CatchHandler @ 00608fcc */
      FUN_002e4094(alStack_c0,pbVar10,uVar6);
      goto LAB_0060897c;
    case 0xb:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        plVar9 = (long *)((long)alStack_c0 + lVar8);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18;
        plVar18 = plVar18 + 1;
      }
                    /* try { // try from 00608a18 to 00608a53 has its CatchHandler @ 00608fcc */
      FUN_002e4094(alStack_c0,*(undefined8 *)*plVar9,((undefined8 *)*plVar9)[1]);
      goto LAB_0060897c;
    case 0xc:
      lVar8 = (long)(int)local_70;
      if (((int)local_70 < 0) &&
         (local_70._0_4_ = (int)local_70 + 8, lVar17 = local_70, (int)local_70 < 1)) {
        plVar9 = (long *)((long)alStack_c0 + lVar8);
      }
      else {
        local_70 = lVar17;
        plVar9 = plVar18;
        plVar18 = plVar18 + 1;
      }
                    /* try { // try from 00608aa0 to 00608aa7 has its CatchHandler @ 00608fc8 */
      FUN_00609510(local_68,(int)*plVar9);
      if ((local_68[0] & 1) == 0) {
        uVar6 = uVar14;
        uVar7 = (ulong)(local_68[0] >> 1);
      }
      else {
        if ((long)local_60 < 0) {
                    /* try { // try from 00608e8c to 00608eab has its CatchHandler @ 00608f14 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        uVar6 = local_58;
        uVar7 = local_60;
      }
                    /* try { // try from 00608d48 to 00608d4f has its CatchHandler @ 00608f9c */
      FUN_002e4094(alStack_c0,uVar6,uVar7);
    }
    if ((local_68[0] & 1) == 0) {
LAB_0060897c:
      pbVar16 = pbVar16 + 1;
      bVar3 = *pbVar16;
      lVar17 = local_70;
      goto joined_r0x00608964;
    }
    FUN_002e2ea0(puVar4,local_58);
    pbVar16 = pbVar16 + 1;
    bVar3 = *pbVar16;
    lVar17 = local_70;
  } while( true );
}


