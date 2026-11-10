/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdb1b0; name: FUN_02fdb1b0
 */


void FUN_02fdb1b0(long param_1,undefined8 *param_2,float *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0x44);
  puVar1 = (undefined8 *)0x0;
  if (iVar2 != 0) {
    puVar1 = (undefined8 *)((long)iVar2 + param_1 + 0x40);
  }
  if (iVar3 == 0) {
    auVar11._8_4_ = 0xff7fffee;
    auVar11._0_8_ = 0xff7fffeeff7fffee;
    auVar11._12_4_ = 0xff7fffee;
    auVar13._8_4_ = 0x7f7fffee;
    auVar13._0_8_ = 0x7f7fffee7f7fffee;
    auVar13._12_4_ = 0x7f7fffee;
  }
  else {
    fVar30 = (float)*puVar1;
    fVar14 = (float)*param_2;
    fVar15 = (float)((ulong)*param_2 >> 0x20);
    fVar16 = (float)param_2[1];
    fVar17 = (float)((ulong)param_2[1] >> 0x20);
    fVar26 = *(float *)(puVar1 + 1);
    fVar27 = (float)((ulong)*puVar1 >> 0x20);
    fVar18 = (float)param_2[2];
    fVar19 = (float)((ulong)param_2[2] >> 0x20);
    fVar20 = (float)param_2[3];
    fVar21 = (float)((ulong)param_2[3] >> 0x20);
    fVar22 = (float)param_2[4];
    fVar23 = (float)((ulong)param_2[4] >> 0x20);
    fVar24 = (float)param_2[5];
    fVar25 = (float)((ulong)param_2[5] >> 0x20);
    auVar12._8_4_ = 0x7f7fffee;
    auVar12._0_8_ = 0x7f7fffee7f7fffee;
    auVar12._12_4_ = 0x7f7fffee;
    auVar10._0_4_ = fVar14 * fVar30 + fVar18 * fVar27 + fVar22 * fVar26;
    auVar10._4_4_ = fVar15 * fVar30 + fVar19 * fVar27 + fVar23 * fVar26;
    auVar10._8_4_ = fVar16 * fVar30 + fVar20 * fVar27 + fVar24 * fVar26;
    auVar10._12_4_ = fVar17 * fVar30 + fVar21 * fVar27 + fVar25 * fVar26;
    auVar13 = NEON_fmin(auVar10,auVar12,4);
    auVar4._8_4_ = 0xff7fffee;
    auVar4._0_8_ = 0xff7fffeeff7fffee;
    auVar4._12_4_ = 0xff7fffee;
    auVar11 = NEON_fmax(auVar10,auVar4,4);
    if (iVar3 != 1) {
      fVar30 = (float)*(undefined8 *)((long)puVar1 + 0xc);
      fVar26 = (float)((ulong)*(undefined8 *)((long)puVar1 + 0xc) >> 0x20);
      fVar31 = *(float *)((long)puVar1 + 0x14);
      fVar27 = fVar14 * fVar30 + fVar18 * fVar26 + fVar22 * fVar31;
      fVar28 = fVar15 * fVar30 + fVar19 * fVar26 + fVar23 * fVar31;
      fVar29 = fVar16 * fVar30 + fVar20 * fVar26 + fVar24 * fVar31;
      fVar30 = fVar17 * fVar30 + fVar21 * fVar26 + fVar25 * fVar31;
      auVar5._4_4_ = fVar28;
      auVar5._0_4_ = fVar27;
      auVar5._8_4_ = fVar29;
      auVar5._12_4_ = fVar30;
      auVar13 = NEON_fmin(auVar13,auVar5,4);
      auVar6._4_4_ = fVar28;
      auVar6._0_4_ = fVar27;
      auVar6._8_4_ = fVar29;
      auVar6._12_4_ = fVar30;
      auVar11 = NEON_fmax(auVar11,auVar6,4);
      if (iVar3 != 2) {
        puVar9 = puVar1 + 3;
        do {
          fVar30 = (float)*puVar9;
          fVar26 = (float)((ulong)*puVar9 >> 0x20);
          fVar31 = *(float *)(puVar9 + 1);
          puVar9 = (undefined8 *)((long)puVar9 + 0xc);
          fVar27 = fVar14 * fVar30 + fVar18 * fVar26 + fVar22 * fVar31;
          fVar28 = fVar15 * fVar30 + fVar19 * fVar26 + fVar23 * fVar31;
          fVar29 = fVar16 * fVar30 + fVar20 * fVar26 + fVar24 * fVar31;
          fVar30 = fVar17 * fVar30 + fVar21 * fVar26 + fVar25 * fVar31;
          auVar7._4_4_ = fVar28;
          auVar7._0_4_ = fVar27;
          auVar7._8_4_ = fVar29;
          auVar7._12_4_ = fVar30;
          auVar13 = NEON_fmin(auVar13,auVar7,4);
          auVar8._4_4_ = fVar28;
          auVar8._0_4_ = fVar27;
          auVar8._8_4_ = fVar29;
          auVar8._12_4_ = fVar30;
          auVar11 = NEON_fmax(auVar11,auVar8,4);
        } while (puVar9 != (undefined8 *)((long)puVar1 + (long)iVar3 * 0xc));
      }
    }
  }
  fVar30 = (float)param_2[6];
  fVar27 = (float)((ulong)param_2[6] >> 0x20);
  fVar14 = (float)param_2[7];
  fVar15 = (float)((ulong)param_2[7] >> 0x20);
  param_3[2] = auVar13._8_4_ + fVar14;
  param_3[3] = auVar13._12_4_ + fVar15;
  *param_3 = auVar13._0_4_ + fVar30;
  param_3[1] = auVar13._4_4_ + fVar27;
  param_3[6] = auVar11._8_4_ + fVar14;
  param_3[7] = auVar11._12_4_ + fVar15;
  param_3[4] = auVar11._0_4_ + fVar30;
  param_3[5] = auVar11._4_4_ + fVar27;
  return;
}


