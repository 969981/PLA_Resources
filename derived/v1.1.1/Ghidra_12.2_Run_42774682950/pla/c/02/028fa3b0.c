/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fa3b0; name: FUN_028fa3b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028fa3b0(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar14 = (undefined8 *)FUN_02b690d4();
  pauVar1 = (undefined1 (*) [12])(puVar14 + 2);
  fStack_44 = (float)((ulong)puVar14[3] >> 0x20);
  pauVar2 = (undefined1 (*) [12])(param_3 + 2);
  fVar22 = (float)((ulong)param_3[3] >> 0x20);
  uVar12 = *(undefined8 *)*pauVar2;
  fVar21 = (float)((ulong)uVar12 >> 0x20);
  auVar6._12_4_ = fVar22;
  auVar6._0_12_ = *pauVar2;
  uVar26 = a64_TBL(ZEXT816(0),auVar6,DAT_0388a6c8);
  uStack_58 = CONCAT44((float)((ulong)puVar14[1] >> 0x20) + (float)((ulong)param_3[1] >> 0x20),
                       (float)puVar14[1] + (float)param_3[1]);
  local_60 = CONCAT44((float)((ulong)*puVar14 >> 0x20) + (float)((ulong)*param_3 >> 0x20),
                      (float)*puVar14 + (float)*param_3);
  fVar15 = (float)*(undefined8 *)*pauVar1;
  fVar16 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar3._12_4_ = fStack_44;
  auVar3._0_12_ = *pauVar1;
  uVar19 = a64_TBL(ZEXT816(0),auVar3,DAT_0388a580);
  auVar4._12_4_ = fStack_44;
  auVar4._0_12_ = *pauVar1;
  uVar24 = a64_TBL(ZEXT816(0),auVar4,DAT_0388a680);
  auVar7._12_4_ = fVar22;
  auVar7._0_12_ = *pauVar2;
  uVar17 = a64_TBL(ZEXT816(0),auVar7,DAT_0388a580);
  fVar25 = (float)((ulong)uVar24 >> 0x20);
  auVar8._12_4_ = fVar22;
  auVar8._0_12_ = *pauVar2;
  uVar23 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a680);
  fVar20 = (float)((ulong)uVar19 >> 0x20);
  fVar27 = (float)((ulong)_DAT_03889ad0 >> 0x20);
  fVar28 = (float)((ulong)_UNK_03889ad8 >> 0x20);
  auVar5._12_4_ = fStack_44;
  auVar5._0_12_ = *pauVar1;
  uVar29 = a64_TBL(ZEXT816(0),auVar5,DAT_0388a880);
  auVar9._12_4_ = fVar22;
  auVar9._0_12_ = *pauVar2;
  uVar18 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a880);
  auVar10._12_4_ = fVar22;
  auVar10._0_12_ = *pauVar2;
  uVar31 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a790);
  fVar30 = (float)((ulong)uVar29 >> 0x20);
  auVar11._8_4_ = (float)uVar12;
  auVar11._0_8_ = uVar12;
  auVar11._12_4_ = fVar21;
  uVar13 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a648);
  local_50 = CONCAT44((fVar21 * fVar20 + fVar27 * fVar16 * (float)((ulong)uVar17 >> 0x20) +
                      fVar27 * fVar30 * (float)((ulong)uVar23 >> 0x20)) -
                      fVar25 * (float)((ulong)uVar18 >> 0x20),
                      ((float)uVar12 * (float)uVar19 + (float)_DAT_03889ad0 * fVar15 * (float)uVar17
                      + (float)_DAT_03889ad0 * (float)uVar29 * (float)uVar23) -
                      (float)uVar24 * (float)uVar18);
  fStack_48 = ((float)param_3[3] * (float)uVar19 +
               (float)_UNK_03889ad8 * (float)uVar24 * (float)uVar26 +
              (float)_UNK_03889ad8 * fVar15 * (float)uVar13) - (float)uVar29 * (float)uVar31;
  fStack_44 = (fVar22 * fVar20 + fVar28 * fVar25 * (float)((ulong)uVar26 >> 0x20) +
              fVar28 * fVar16 * (float)((ulong)uVar13 >> 0x20)) -
              fVar30 * (float)((ulong)uVar31 >> 0x20);
  uStack_38 = CONCAT44((float)((ulong)puVar14[5] >> 0x20) + (float)((ulong)param_3[5] >> 0x20),
                       (float)puVar14[5] + (float)param_3[5]);
  local_40 = CONCAT44((float)((ulong)puVar14[4] >> 0x20) + (float)((ulong)param_3[4] >> 0x20),
                      (float)puVar14[4] + (float)param_3[4]);
  FUN_02b6ae80(param_1,param_2,&local_60);
  return;
}


