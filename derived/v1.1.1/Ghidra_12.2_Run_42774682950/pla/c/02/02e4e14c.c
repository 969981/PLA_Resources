/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4e14c; name: FUN_02e4e14c
 */


bool FUN_02e4e14c(undefined8 param_1,float *param_2,undefined8 *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (((*PTR_DAT_04388660 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04388660), puVar2 = PTR_DAT_04388668, iVar3 != 0)) {
    auVar5 = NEON_fmov(0x3f800000,4);
    *(long *)(PTR_DAT_04388668 + 8) = auVar5._8_8_;
    *(long *)puVar2 = auVar5._0_8_;
    __cxa_guard_release(PTR_DAT_04388660);
  }
  if (((*PTR_DAT_04388670 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04388670), puVar2 = PTR_DAT_04388678, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_04388678 = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    __cxa_guard_release(PTR_DAT_04388670);
  }
  fVar15 = (float)*(undefined8 *)(param_2 + 10);
  fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
  fVar13 = (float)*(undefined8 *)(param_2 + 8);
  fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar6 = fVar13 * ((float)*param_3 - *param_2);
  fVar7 = fVar14 * ((float)((ulong)*param_3 >> 0x20) - param_2[1]);
  fVar8 = fVar15 * ((float)param_3[1] - param_2[2]);
  fVar9 = fVar16 * ((float)((ulong)param_3[1] >> 0x20) - param_2[3]);
  auVar4._0_4_ = (*(float *)(param_3 + 2) - *param_2) * fVar13;
  auVar4._4_4_ = (*(float *)((long)param_3 + 0x14) - param_2[1]) * fVar14;
  auVar4._8_4_ = (*(float *)(param_3 + 3) - param_2[2]) * fVar15;
  auVar4._12_4_ = (*(float *)((long)param_3 + 0x1c) - param_2[3]) * fVar16;
  auVar5._4_4_ = fVar7;
  auVar5._0_4_ = fVar6;
  auVar5._8_4_ = fVar8;
  auVar5._12_4_ = fVar9;
  auVar11 = NEON_fmin(auVar5,auVar4,4);
  auVar12._4_4_ = fVar7;
  auVar12._0_4_ = fVar6;
  auVar12._8_4_ = fVar8;
  auVar12._12_4_ = fVar9;
  auVar5 = NEON_fmax(auVar4,auVar12,4);
  auVar1._12_4_ = (int)((ulong)*(undefined8 *)(PTR_DAT_04388678 + 8) >> 0x20);
  auVar1._0_12_ = *(undefined1 (*) [12])PTR_DAT_04388678;
  auVar12 = NEON_fmax(auVar11,auVar1,4);
  auVar11._12_4_ = (int)((ulong)*(undefined8 *)(PTR_DAT_04388668 + 8) >> 0x20);
  auVar11._0_12_ = *(undefined1 (*) [12])PTR_DAT_04388668;
  auVar5 = NEON_fmin(auVar5,auVar11,4);
  uVar10 = NEON_fminnm(auVar5._4_4_,auVar5._8_4_);
  fVar6 = (float)NEON_fminnm(auVar5._0_4_,uVar10);
  *param_4 = fVar6;
  return auVar12._0_4_ <= fVar6;
}


