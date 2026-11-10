/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03073190; name: FUN_03073190
 */


undefined1  [16]
FUN_03073190(undefined8 *param_1,undefined1 (*param_2) [12],long param_3,long param_4,
            undefined8 *param_5,undefined4 *param_6)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_c0 [24];
  float fStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0x7f7fffee7f7fffee;
  uStack_38 = 0x3fb3333300000000;
  uStack_78 = param_1[1];
  local_80 = *param_1;
  uStack_68 = param_1[3];
  local_70 = param_1[2];
  uStack_58 = param_1[5];
  local_60 = param_1[4];
  uStack_48 = param_1[7];
  local_50 = param_1[6];
  local_88 = *param_6;
  local_84 = *(undefined1 *)(param_6 + 1);
  iVar2 = *(int *)(param_4 + 0x40);
  if (iVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (long)iVar2 + param_4 + 0x40;
  }
  FUN_001ca810(*(undefined8 *)(param_3 + 8),*(undefined4 *)(param_3 + 0x10),lVar6,
               *(undefined4 *)(param_4 + 0x44),&local_80,&local_88,local_c0);
  fVar13 = (float)*param_5;
  fVar14 = (float)((ulong)*param_5 >> 0x20);
  fVar17 = (float)param_5[1];
  fVar7 = local_c0._16_4_ * (fVar13 - (float)uStack_a0);
  fVar9 = local_c0._20_4_ * (fVar14 - (float)((ulong)uStack_a0 >> 0x20));
  fVar10 = fStack_a8 * (fVar17 - fStack_98);
  fVar11 = *(float *)(param_3 + 0x14) + *(float *)(param_4 + 0x20);
  fVar8 = (local_c0._0_4_ + fVar7 + fVar9 + fVar10) - fVar11;
  uVar12 = 0;
  if (0.0 < fVar8) {
    uVar22 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    pauVar3 = (undefined1 (*) [16])(param_2[1] + 4);
    auVar24 = NEON_ext(*pauVar3,*pauVar3,8,1);
    auVar23._12_4_ = uVar22;
    auVar23._0_12_ = *param_2;
    auVar5._12_4_ = uVar22;
    auVar5._0_12_ = *param_2;
    auVar23 = NEON_ext(auVar23,auVar5,8,1);
    pauVar1 = (undefined1 (*) [12])(param_2[2] + 8);
    uVar22 = (undefined4)((ulong)*(undefined8 *)(param_2[3] + 4) >> 0x20);
    auVar25._12_4_ = uVar22;
    auVar25._0_12_ = *pauVar1;
    auVar4._12_4_ = uVar22;
    auVar4._0_12_ = *pauVar1;
    auVar25 = NEON_ext(auVar25,auVar4,8,1);
    fVar19 = fVar13 - (float)*(undefined8 *)param_2[4];
    fVar20 = fVar14 - (float)((ulong)*(undefined8 *)param_2[4] >> 0x20);
    fVar21 = fVar17 - (float)*(undefined8 *)(param_2[4] + 8);
    fVar13 = local_c0._16_4_ *
             ((auVar23._0_4_ * fVar21 +
              (float)*(undefined8 *)*param_2 * fVar19 +
              (float)((ulong)*(undefined8 *)*param_2 >> 0x20) * fVar20) - fVar13);
    fVar16 = local_c0._20_4_ *
             ((auVar24._0_4_ * fVar21 +
              (float)*(undefined8 *)*pauVar3 * fVar19 +
              (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20) * fVar20) - fVar14);
    fStack_a8 = fStack_a8 *
                ((auVar25._0_4_ * fVar21 +
                 (float)*(undefined8 *)*pauVar1 * fVar19 +
                 (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar20) - fVar17);
    fVar14 = fVar13 + fVar16 + fStack_a8;
    uVar15 = CONCAT44(fVar13 + fVar16 + fStack_a8,fVar14);
    if (fVar14 < 0.0) {
      uVar12 = NEON_frecpe(uVar15,4);
      uVar18 = NEON_frecps(uVar15,uVar12,4);
      fVar13 = (float)uVar12 * (float)uVar18;
      fVar14 = (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar18 >> 0x20);
      uVar12 = NEON_frecps(uVar15,CONCAT44(fVar14,fVar13),4);
      uVar12 = CONCAT44(-(((local_c0._4_4_ + fVar7 + fVar9 + fVar10) - fVar11) *
                         fVar14 * (float)((ulong)uVar12 >> 0x20)),-(fVar8 * fVar13 * (float)uVar12))
      ;
    }
  }
  auVar24._0_8_ = NEON_fmin(uVar12,0x4000000040000000,4);
  auVar24._8_8_ = 0;
  return auVar24;
}


