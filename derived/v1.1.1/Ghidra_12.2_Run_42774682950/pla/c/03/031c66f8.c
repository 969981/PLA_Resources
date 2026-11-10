/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c66f8; name: FUN_031c66f8
 */


void FUN_031c66f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  long *plVar8;
  void *__s;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_LAB_04305fd0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[0x22] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0x8000000000000000;
  FUN_032c2320(param_1 + 0x2b);
  param_1[0x48] = 0x8000000000000000;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_031b078c(param_1 + 0x4e,0);
  FUN_031bd5e0(param_1 + 0x6e,0);
  *(undefined4 *)(param_1 + 0x86) = 1;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)((long)param_1 + 0x4bc) = 0x3b449ba6;
  *(undefined1 *)(param_1 + 0x97) = 0;
  FUN_031c9b64(param_1 + 0x98);
  param_1[0x99] = 0;
  param_1[0xa0] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  FUN_032c7b0c(param_1 + 0xa1,param_2 + 0x4e);
  uVar9 = *param_2;
  param_1[0x25] = param_2[1];
  param_1[0x24] = uVar9;
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)((long)param_2 + 0x11);
  memcpy(param_1 + 0x36,(void *)((long)param_2 + 0x14),0x80);
  *(undefined4 *)((long)param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((long)param_1 + 0x264) = *(undefined4 *)((long)param_2 + 0x9c);
  FUN_031b0d28(param_1 + 0x4e,param_2 + 0x16);
  FUN_031bd934(param_1 + 0x6e,param_2 + 0x36);
  lVar2 = tpidr_el0;
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  __s = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,0x330,0);
  memset(__s,0,0x330);
  FUN_0317be5c(__s);
  lVar11 = param_1[0x28];
  param_1[0x28] = __s;
  if (lVar11 != 0) {
    FUN_032d647c();
  }
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0xf0,0);
  FUN_0317545c(uVar9,param_1[0x28]);
  lVar11 = param_1[0x26];
  param_1[0x26] = uVar9;
  if (lVar11 != 0) {
    FUN_032d647c();
  }
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,0);
  *puVar10 = &DAT_0430adf0;
  puVar10[1] = 0xffffffff;
  puVar10[2] = 1;
  lVar11 = param_1[0x49];
  param_1[0x49] = puVar10;
  if (lVar11 != 0) {
    FUN_032d647c();
  }
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x100,0);
  FUN_031c9b6c();
  lVar11 = param_1[0x27];
  param_1[0x27] = uVar9;
  if (lVar11 != 0) {
    FUN_032d647c();
    uVar9 = param_1[0x27];
  }
  FUN_031ca4f4(uVar9,param_1 + 0x24,param_1[0x26]);
  *(undefined1 *)(param_1[0x27] + 0x98) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(param_1[0x27] + 0xa0) = *(undefined1 *)(param_1 + 0x2d);
  *(undefined4 *)(param_1[0x27] + 0xa4) = *(undefined4 *)(param_2 + 0x14);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x24);
  fVar14 = (float)param_1[0x25];
  fVar16 = (float)((ulong)param_1[0x25] >> 0x20);
  uVar9 = *(undefined8 *)*pauVar1;
  fVar15 = (float)uVar9;
  fVar17 = (float)((ulong)uVar9 >> 0x20);
  local_70 = 0;
  uStack_68 = 0;
  uVar20 = CONCAT44(ABS(fVar17),ABS(fVar15));
  fVar19 = ABS(fVar14);
  uVar20 = NEON_fmaxp(uVar20,uVar20,4);
  uVar20 = NEON_fmax(CONCAT44(fVar19,fVar19),uVar20,4);
  auVar21._12_4_ = fVar16;
  auVar21._0_12_ = *pauVar1;
  auVar3._12_4_ = fVar16;
  auVar3._0_12_ = *pauVar1;
  auVar21 = NEON_ext(auVar21,auVar3,8,1);
  uVar9 = NEON_ext(uVar9,auVar21._0_8_,4,1);
  uVar12 = ((char)(&DAT_03aadfd0)
                  [(-(uint)((float)((ulong)uVar20 >> 0x20) <= ABS(fVar17)) & 2) +
                   (uint)((float)uVar20 <= ABS(fVar15)) | -(uint)((float)uVar20 <= fVar19) & 4] + 2)
           % 3;
  if (2 < uVar12) {
    uVar12 = 3;
  }
  *(undefined4 *)((long)&local_70 + (ulong)uVar12 * 4) = 0x3f800000;
  auVar6._8_8_ = uStack_68;
  auVar6._0_8_ = local_70;
  auVar21 = NEON_ext(auVar6,auVar6,8,1);
  uVar20 = NEON_ext(local_70,auVar21._0_8_,4,1);
  fVar18 = (float)((ulong)local_70 >> 0x20);
  fVar19 = (float)uVar9 * (float)local_70 - fVar15 * (float)uVar20;
  fVar13 = (float)((ulong)uVar9 >> 0x20) * fVar18 - fVar17 * (float)((ulong)uVar20 >> 0x20);
  fVar15 = fVar15 * (float)uStack_68 - fVar14 * (float)local_70;
  fVar17 = fVar17 * (float)((ulong)uStack_68 >> 0x20) - fVar16 * fVar18;
  auVar4._4_4_ = fVar13;
  auVar4._0_4_ = fVar19;
  auVar4._8_4_ = fVar15;
  auVar4._12_4_ = fVar17;
  auVar5._4_4_ = fVar13;
  auVar5._0_4_ = fVar19;
  auVar5._8_4_ = fVar15;
  auVar5._12_4_ = fVar17;
  auVar21 = NEON_ext(auVar4,auVar5,4,1);
  uStack_58 = CONCAT44(fVar13,fVar19);
  local_60 = auVar21._0_8_;
  FUN_031e7cd8(param_1 + 0x30,param_1 + 0x24,&local_60);
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1a0,0);
  FUN_031e7d58(uVar9,param_1 + 0x30);
  lVar11 = param_1[0x2e];
  param_1[0x2e] = uVar9;
  if (lVar11 != 0) {
    FUN_032d647c();
    uVar9 = param_1[0x2e];
  }
  FUN_031e7e28(uVar9,param_1 + 0x36,param_1 + 0x46);
  *(undefined4 *)(param_1[0x2e] + 0x188) = *(undefined4 *)((long)param_2 + 0x94);
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x30,0);
  FUN_031c3524();
  lVar11 = param_1[0x4a];
  param_1[0x4a] = uVar9;
  if (lVar11 != 0) {
    FUN_032d647c();
    uVar9 = param_1[0x4a];
  }
  uVar7 = FUN_031c37f0(uVar9);
  *(undefined1 *)(param_1 + 0x4b) = uVar7;
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x30,0);
  FUN_031f7098(uVar9,param_1);
  lVar11 = param_1[0x87];
  param_1[0x87] = uVar9;
  if (lVar11 != 0) {
    FUN_032d647c();
  }
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x38,0);
  FUN_031f71c8(uVar9,param_1);
  lVar11 = param_1[0x8f];
  param_1[0x8f] = uVar9;
  if (lVar11 != 0) {
    FUN_032d647c();
  }
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x60,0);
  FUN_032bd56c(uVar9,0,0);
  lVar11 = param_1[0x99];
  param_1[0x99] = uVar9;
  if (lVar11 != 0) {
    FUN_032d647c();
  }
  lVar11 = *(long *)(lVar2 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar11;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
  uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x60,0);
  FUN_032be30c(uVar9,param_1[0x99]);
  param_1[0x9a] = uVar9;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  return;
}


