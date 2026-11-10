/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c120c; name: FUN_001c120c
 */


/* WARNING: Removing unreachable block (ram,0x001c1270) */

void FUN_001c120c(long param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [512];
  
  puVar1 = PTR_DAT_04372370;
  auVar8 = *(undefined1 (*) [16])(param_1 + 0x20);
  if (auVar8._8_4_ != 0.0 || (auVar8._0_4_ != 0.0 || auVar8._4_4_ != 0.0)) {
    auVar5._0_12_ = auVar8._0_12_;
    auVar5._12_4_ = 0;
    *(ulong *)(param_1 + 0x138) = (ulong)*(uint *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x14);
    *(ulong *)(param_1 + 0x148) = (ulong)(uint)auVar8._8_4_;
    *(long *)(param_1 + 0x140) = auVar8._0_8_;
    auVar8 = NEON_frecpe(auVar5,4);
    puVar1 = PTR_DAT_04372370;
    goto LAB_001c13f0;
  }
  if (param_3 == 0) {
    return;
  }
  auVar8 = *param_2;
  auVar5 = auVar8;
  if (1 < (int)param_3) {
    if (param_3 == 2) {
      lVar4 = 1;
    }
    else {
      lVar2 = 0;
      do {
        lVar4 = lVar2;
        auVar8 = NEON_fmin(auVar8,param_2[lVar4 + 1],4);
        auVar5 = NEON_fmax(auVar5,param_2[lVar4 + 1],4);
        auVar8 = NEON_fmin(auVar8,param_2[lVar4 + 2],4);
        auVar5 = NEON_fmax(auVar5,param_2[lVar4 + 2],4);
        lVar2 = lVar4 + 2;
      } while (~((ulong)(param_3 - 1) & 1) + (ulong)param_3 != lVar4 + 2);
      lVar4 = lVar4 + 3;
      if ((param_3 - 1 & 1) == 0) goto LAB_001c12f0;
    }
    auVar5 = NEON_fmax(auVar5,param_2[lVar4],4);
    auVar8 = NEON_fmin(auVar8,param_2[lVar4],4);
  }
LAB_001c12f0:
  fVar12 = auVar8._0_4_;
  fVar13 = auVar8._4_4_;
  fVar14 = auVar8._8_4_;
  if (((fVar13 < -*(float *)(PTR_DAT_04372370 + 0x244) ||
       (*(float *)(PTR_DAT_04372370 + 0x248) < auVar5._8_4_ ||
       (*(float *)(PTR_DAT_04372370 + 0x240) < auVar5._0_4_ ||
       *(float *)(PTR_DAT_04372370 + 0x244) < auVar5._4_4_))) ||
      fVar12 < -*(float *)(PTR_DAT_04372370 + 0x240)) ||
      fVar14 < -*(float *)(PTR_DAT_04372370 + 0x248)) {
    FUN_0331fefc(auStack_240,auStack_230,0x200);
    FUN_0332448c(auStack_240,"Input domain out of range");
    iVar3 = FUN_03320b30(0x405a2174,auStack_230,
                         "../..\\Common/Internal/GeometryProcessing/ConvexHull/hkgpConvexHullInternals.h"
                         ,0x266);
    if (iVar3 != 0) {
      CallSupervisor(0x26);
    }
    FUN_0331ff7c(auStack_240);
  }
  auVar7._8_4_ = 0x37a7c5ac;
  auVar7._0_8_ = 0x37a7c5ac37a7c5ac;
  auVar7._12_4_ = 0x37a7c5ac;
  auVar10._0_4_ = auVar5._0_4_ - fVar12;
  auVar10._4_4_ = auVar5._4_4_ - fVar13;
  auVar10._8_4_ = auVar5._8_4_ - fVar14;
  auVar10._12_4_ = auVar5._12_4_ - auVar8._12_4_;
  auVar5 = NEON_fmax(auVar10,auVar7,4);
  auVar8 = *(undefined1 (*) [16])(puVar1 + 0x150);
  auVar10 = NEON_ext(auVar8,auVar8,8,1);
  auVar10 = NEON_ext(auVar10,auVar8,8,1);
  auVar8._0_4_ = auVar5._0_4_ * auVar10._0_4_;
  auVar8._4_4_ = auVar5._4_4_ * auVar10._4_4_;
  auVar8._8_4_ = auVar5._8_4_ * auVar10._8_4_;
  auVar8._12_4_ = auVar5._12_4_ * auVar10._12_4_;
  auVar5 = NEON_frecpe(auVar8,4);
  auVar10 = NEON_frecps(auVar8,auVar5,4);
  auVar11._0_4_ = auVar5._0_4_ * auVar10._0_4_;
  auVar11._4_4_ = auVar5._4_4_ * auVar10._4_4_;
  auVar11._8_4_ = auVar5._8_4_ * auVar10._8_4_;
  auVar11._12_4_ = auVar5._12_4_ * auVar10._12_4_;
  auVar10 = NEON_frecps(auVar8,auVar11,4);
  auVar5._0_8_ = CONCAT44(auVar11._4_4_ * auVar10._4_4_ * 8191.0,
                          auVar11._0_4_ * auVar10._0_4_ * 8191.0);
  auVar5._8_4_ = auVar11._8_4_ * auVar10._8_4_ * 8191.0;
  auVar5._12_4_ = 0;
  *(ulong *)(param_1 + 0x138) = (ulong)(uint)(fVar14 + auVar8._8_4_);
  *(ulong *)(param_1 + 0x130) = CONCAT44(fVar13 + auVar8._4_4_,fVar12 + auVar8._0_4_);
  *(ulong *)(param_1 + 0x148) = (ulong)(uint)auVar5._8_4_;
  *(undefined8 *)(param_1 + 0x140) = auVar5._0_8_;
  auVar8 = NEON_frecpe(auVar5,4);
LAB_001c13f0:
  auVar10 = NEON_frecps(auVar5,auVar8,4);
  auVar9._0_4_ = auVar8._0_4_ * auVar10._0_4_;
  auVar9._4_4_ = auVar8._4_4_ * auVar10._4_4_;
  auVar9._8_4_ = auVar8._8_4_ * auVar10._8_4_;
  auVar9._12_4_ = auVar8._12_4_ * auVar10._12_4_;
  auVar8 = NEON_frecps(auVar5,auVar9,4);
  uVar6 = *(undefined4 *)(puVar1 + 0x60);
  *(float *)(param_1 + 0x158) = auVar9._8_4_ * auVar8._8_4_;
  *(undefined4 *)(param_1 + 0x15c) = uVar6;
  *(float *)(param_1 + 0x150) = auVar9._0_4_ * auVar8._0_4_;
  *(float *)(param_1 + 0x154) = auVar9._4_4_ * auVar8._4_4_;
  return;
}


