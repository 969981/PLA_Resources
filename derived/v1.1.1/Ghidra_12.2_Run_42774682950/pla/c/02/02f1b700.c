/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1b700; name: FUN_02f1b700
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1b700(float param_1,float param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  pauVar14 = (undefined1 (*) [16])*param_3;
  puVar16 = (undefined8 *)*param_4;
  bVar2 = *(byte *)(param_4 + 1);
  uVar3 = *(ushort *)(param_3 + 2);
  if (param_1 == param_2) {
    uVar4 = (uint)bVar2 * (uint)uVar3 >> 2;
    if (uVar4 != 0) {
      param_1 = param_1 * 32767.0;
      lVar19 = 0;
      do {
        pauVar15 = pauVar14 + lVar19;
        lVar19 = lVar19 + 2;
        auVar27._0_8_ =
             CONCAT44((int)(*(float *)(*pauVar15 + 4) * param_1),
                      (int)(*(float *)*pauVar15 * param_1));
        auVar27._8_4_ = (int)(*(float *)(*pauVar15 + 8) * param_1);
        auVar27._12_4_ = (int)(*(float *)(*pauVar15 + 0xc) * param_1);
        auVar28._8_8_ = auVar27._8_8_;
        auVar28._0_8_ = NEON_sqxtn(auVar27._0_8_,auVar27,4);
        auVar7._4_4_ = (int)((float)((ulong)*(undefined8 *)pauVar15[1] >> 0x20) * param_1);
        auVar7._0_4_ = (int)((float)*(undefined8 *)pauVar15[1] * param_1);
        auVar7._8_4_ = (int)((float)*(undefined8 *)(pauVar15[1] + 8) * param_1);
        auVar7._12_4_ = (int)((float)((ulong)*(undefined8 *)(pauVar15[1] + 8) >> 0x20) * param_1);
        auVar29 = NEON_sqxtn2(auVar28,auVar7,4);
        puVar16[1] = auVar29._8_8_;
        *puVar16 = auVar29._0_8_;
        puVar16 = puVar16 + 2;
      } while ((uint)lVar19 < uVar4);
    }
  }
  else if ((bVar2 != 0) && (uVar3 >> 2 != 0)) {
    fVar32 = param_1 * 32767.0;
    fVar25 = (param_1 * -32767.0 + param_2 * 32767.0) / (float)uVar3;
    fVar33 = fVar32 + (float)_DAT_038893a0 * fVar25;
    fVar34 = fVar32 + (float)((ulong)_DAT_038893a0 >> 0x20) * fVar25;
    fVar35 = fVar32 + (float)_UNK_038893a8 * fVar25;
    fVar32 = fVar32 + (float)((ulong)_UNK_038893a8 >> 0x20) * fVar25;
    fVar21 = fVar25 * 8.0;
    fVar22 = fVar25 * 8.0;
    fVar23 = fVar25 * 8.0;
    fVar24 = fVar25 * 8.0;
    auVar29 = NEON_fmov(0x40800000,4);
    fVar26 = fVar33 + auVar29._0_4_ * fVar25;
    fVar30 = fVar34 + auVar29._4_4_ * fVar25;
    fVar31 = fVar35 + auVar29._8_4_ * fVar25;
    fVar25 = fVar32 + auVar29._12_4_ * fVar25;
    uVar5 = (uVar3 >> 2) - 1 >> 1;
    uVar4 = uVar5 + 1;
    uVar1 = uVar4 & 1;
    uVar18 = 0;
    do {
      pauVar15 = pauVar14;
      puVar17 = puVar16;
      fVar37 = fVar26;
      fVar39 = fVar30;
      fVar41 = fVar31;
      fVar43 = fVar25;
      fVar45 = fVar33;
      fVar49 = fVar34;
      fVar51 = fVar35;
      fVar53 = fVar32;
      if (uVar5 != 0) {
        iVar20 = uVar4 - uVar1;
        do {
          iVar20 = iVar20 + -2;
          fVar36 = fVar37 + fVar21;
          fVar38 = fVar39 + fVar22;
          fVar40 = fVar41 + fVar23;
          fVar42 = fVar43 + fVar24;
          fVar44 = fVar45 + fVar21;
          fVar48 = fVar49 + fVar22;
          fVar50 = fVar51 + fVar23;
          fVar52 = fVar53 + fVar24;
          auVar54._0_8_ =
               CONCAT44((int)(*(float *)(*pauVar15 + 4) * fVar49),
                        (int)(*(float *)*pauVar15 * fVar45));
          auVar54._8_4_ = (int)(*(float *)(*pauVar15 + 8) * fVar51);
          auVar54._12_4_ = (int)(*(float *)(*pauVar15 + 0xc) * fVar53);
          auVar55._8_8_ = auVar54._8_8_;
          auVar55._0_8_ = NEON_sqxtn(auVar54._0_8_,auVar54,4);
          auVar29._4_4_ = (int)((float)((ulong)*(undefined8 *)pauVar15[1] >> 0x20) * fVar39);
          auVar29._0_4_ = (int)((float)*(undefined8 *)pauVar15[1] * fVar37);
          auVar29._8_4_ = (int)((float)*(undefined8 *)(pauVar15[1] + 8) * fVar41);
          auVar29._12_4_ = (int)((float)((ulong)*(undefined8 *)(pauVar15[1] + 8) >> 0x20) * fVar43);
          auVar29 = NEON_sqxtn2(auVar55,auVar29,4);
          puVar17[1] = auVar29._8_8_;
          *puVar17 = auVar29._0_8_;
          pauVar14 = pauVar15 + 2;
          pauVar11 = pauVar15 + 2;
          pauVar12 = pauVar15 + 2;
          pauVar13 = pauVar15 + 2;
          pauVar6 = pauVar15 + 3;
          pauVar10 = pauVar15 + 3;
          pauVar15 = pauVar15 + 4;
          fVar37 = fVar36 + fVar21;
          fVar39 = fVar38 + fVar22;
          fVar41 = fVar40 + fVar23;
          fVar43 = fVar42 + fVar24;
          fVar45 = fVar44 + fVar21;
          fVar49 = fVar48 + fVar22;
          fVar51 = fVar50 + fVar23;
          fVar53 = fVar52 + fVar24;
          auVar56._0_8_ =
               CONCAT44((int)(*(float *)(*pauVar11 + 4) * fVar48),
                        (int)(*(float *)*pauVar14 * fVar44));
          auVar56._8_4_ = (int)(*(float *)(*pauVar12 + 8) * fVar50);
          auVar56._12_4_ = (int)(*(float *)(*pauVar13 + 0xc) * fVar52);
          auVar57._8_8_ = auVar56._8_8_;
          auVar57._0_8_ = NEON_sqxtn(auVar56._0_8_,auVar56,4);
          auVar9._4_4_ = (int)((float)((ulong)*(undefined8 *)*pauVar6 >> 0x20) * fVar38);
          auVar9._0_4_ = (int)((float)*(undefined8 *)*pauVar6 * fVar36);
          auVar9._8_4_ = (int)((float)*(undefined8 *)(*pauVar10 + 8) * fVar40);
          auVar9._12_4_ = (int)((float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20) * fVar42);
          auVar29 = NEON_sqxtn2(auVar57,auVar9,4);
          puVar17[3] = auVar29._8_8_;
          puVar17[2] = auVar29._0_8_;
          puVar17 = puVar17 + 4;
        } while (iVar20 != 0);
      }
      pauVar14 = pauVar15;
      puVar16 = puVar17;
      if (uVar1 != 0) {
        pauVar14 = pauVar15 + 2;
        auVar29 = *pauVar15;
        auVar46._0_8_ = CONCAT44((int)(auVar29._4_4_ * fVar49),(int)(auVar29._0_4_ * fVar45));
        auVar46._8_4_ = (int)(auVar29._8_4_ * fVar51);
        auVar46._12_4_ = (int)(auVar29._12_4_ * fVar53);
        auVar47._8_8_ = auVar46._8_8_;
        auVar47._0_8_ = NEON_sqxtn(auVar46._0_8_,auVar46,4);
        auVar8._4_4_ = (int)((float)((ulong)*(undefined8 *)pauVar15[1] >> 0x20) * fVar39);
        auVar8._0_4_ = (int)((float)*(undefined8 *)pauVar15[1] * fVar37);
        auVar8._8_4_ = (int)((float)*(undefined8 *)(pauVar15[1] + 8) * fVar41);
        auVar8._12_4_ = (int)((float)((ulong)*(undefined8 *)(pauVar15[1] + 8) >> 0x20) * fVar43);
        auVar29 = NEON_sqxtn2(auVar47,auVar8,4);
        puVar16 = puVar17 + 2;
        puVar17[1] = auVar29._8_8_;
        *puVar17 = auVar29._0_8_;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != bVar2);
  }
  return;
}


