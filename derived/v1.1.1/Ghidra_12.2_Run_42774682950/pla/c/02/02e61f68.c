/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e61f68; name: FUN_02e61f68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02e61f68(float *param_1,undefined1 (*param_2) [16],float *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar9;
  float fVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  auVar6 = NEON_fmov(0x3f800000,4);
  fVar15 = *param_3;
  fVar16 = param_3[1];
  uVar2 = *(undefined8 *)param_3;
  fVar19 = param_3[3];
  fVar20 = param_3[4];
  uVar3 = *(undefined8 *)(param_3 + 3);
  fVar17 = param_3[2];
  fVar21 = param_3[5];
  if ((DAT_04409df0 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_04409df0);
    fVar19 = (float)uVar3;
    fVar20 = (float)((ulong)uVar3 >> 0x20);
    fVar15 = (float)uVar2;
    fVar16 = (float)((ulong)uVar2 >> 0x20);
    if (iVar4 != 0) {
      _DAT_04409de0 = auVar6._0_8_;
      uRam0000000004409de8 = auVar6._8_8_;
      __cxa_guard_release(&DAT_04409df0);
    }
  }
  if (((DAT_04409e10 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04409e10), iVar4 != 0)) {
    DAT_04409e00 = 0;
    DAT_04409e08 = 0;
    __cxa_guard_release(&DAT_04409e10);
  }
  auVar12 = NEON_frecpe(*param_2,4);
  fVar14 = (float)((ulong)uRam0000000004409de8 >> 0x20);
  auVar7 = NEON_frecps(*param_2,auVar12,4);
  fVar5 = auVar12._0_4_ * (float)_DAT_04409de0 * auVar7._0_4_;
  fVar9 = auVar12._4_4_ * (float)((ulong)_DAT_04409de0 >> 0x20) * auVar7._4_4_;
  fVar10 = auVar12._8_4_ * (float)uRam0000000004409de8 * auVar7._8_4_;
  fVar11 = auVar12._12_4_ * fVar14 * auVar7._12_4_;
  fVar15 = (fVar15 - *param_1) * fVar5;
  fVar16 = (fVar16 - param_1[1]) * fVar9;
  fVar17 = (fVar17 - param_1[2]) * fVar10;
  fVar18 = (auVar6._12_4_ - param_1[3]) * fVar11;
  auVar8._0_4_ = (fVar19 - *param_1) * fVar5;
  auVar8._4_4_ = (fVar20 - param_1[1]) * fVar9;
  auVar8._8_4_ = (fVar21 - param_1[2]) * fVar10;
  auVar8._12_4_ = (auVar6._12_4_ - param_1[3]) * fVar11;
  auVar7._4_4_ = fVar16;
  auVar7._0_4_ = fVar15;
  auVar7._8_4_ = fVar17;
  auVar7._12_4_ = fVar18;
  auVar6 = NEON_fmin(auVar7,auVar8,4);
  auVar12._4_4_ = fVar16;
  auVar12._0_4_ = fVar15;
  auVar12._8_4_ = fVar17;
  auVar12._12_4_ = fVar18;
  auVar7 = NEON_fmax(auVar8,auVar12,4);
  auVar1._8_4_ = (int)DAT_04409e08;
  auVar1._0_8_ = DAT_04409e00;
  auVar1._12_4_ = (int)((ulong)DAT_04409e08 >> 0x20);
  auVar12 = NEON_fmax(auVar6,auVar1,4);
  auVar6._8_4_ = (float)uRam0000000004409de8;
  auVar6._0_8_ = _DAT_04409de0;
  auVar6._12_4_ = fVar14;
  auVar6 = NEON_fmin(auVar7,auVar6,4);
  fVar15 = auVar12._4_4_;
  if (auVar12._4_4_ <= auVar12._8_4_) {
    fVar15 = auVar12._8_4_;
  }
  fVar16 = auVar12._0_4_;
  if (auVar12._0_4_ <= fVar15) {
    fVar16 = fVar15;
  }
  uVar13 = NEON_fminnm(auVar6._4_4_,auVar6._8_4_);
  fVar15 = (float)NEON_fminnm(auVar6._0_4_,uVar13);
  return fVar16 <= fVar15;
}


