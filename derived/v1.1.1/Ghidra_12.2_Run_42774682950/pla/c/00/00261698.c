/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00261698; name: FUN_00261698
 */


void FUN_00261698(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float extraout_s0;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_80 [48];
  
  if (*(int *)(param_2 + 0xc4) != 0) {
    lVar7 = 0;
    lVar8 = 0;
    uVar9 = 0;
    do {
      uVar6 = FUN_0025ae80(param_1,*(long *)(param_2 + 0xb0) + lVar7 + 0x68);
      lVar3 = *(long *)(param_2 + 0xb0);
      lVar4 = *(long *)(param_2 + 0xb8);
      iVar5 = *(int *)(lVar3 + lVar7);
      if (iVar5 < 0) {
        FUN_0025e9fc(param_1,uVar6,lVar4 + lVar8,lVar3 + lVar7 + 8);
        fVar31 = extraout_s0;
      }
      else {
        FUN_0025e9fc(param_1,uVar6,local_80,lVar3 + lVar7 + 8);
        puVar1 = (undefined8 *)(lVar4 + (long)iVar5 * 0x40);
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0xb8) + lVar8);
        uVar6 = puVar1[3];
        fVar13 = (float)*puVar1;
        fVar31 = local_80._0_4_;
        fVar10 = local_80._4_4_;
        fVar11 = local_80._8_4_;
        fVar12 = local_80._12_4_;
        fVar14 = (float)((ulong)*puVar1 >> 0x20);
        fVar27 = local_80._16_4_;
        fVar28 = local_80._20_4_;
        fVar29 = local_80._24_4_;
        fVar30 = local_80._28_4_;
        fVar15 = (float)puVar1[1];
        fVar23 = local_80._32_4_;
        fVar24 = local_80._36_4_;
        fVar25 = local_80._40_4_;
        fVar26 = local_80._44_4_;
        fVar16 = (float)puVar1[2];
        fVar17 = (float)((ulong)puVar1[2] >> 0x20);
        fVar18 = (float)uVar6;
        uVar22 = puVar1[5];
        fVar19 = (float)puVar1[4];
        fVar20 = (float)((ulong)puVar1[4] >> 0x20);
        fVar21 = (float)uVar22;
        puVar2[1] = CONCAT44((float)((ulong)puVar1[1] >> 0x20) +
                             fVar12 * fVar13 + fVar30 * fVar14 + fVar26 * fVar15,
                             fVar11 * fVar13 + fVar29 * fVar14 + fVar25 * fVar15 + 0.0);
        *puVar2 = CONCAT44(fVar10 * fVar13 + fVar28 * fVar14 + fVar24 * fVar15 + 0.0,
                           fVar31 * fVar13 + fVar27 * fVar14 + fVar23 * fVar15 + 0.0);
        puVar2[3] = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                             fVar12 * fVar16 + fVar30 * fVar17 + fVar26 * fVar18,
                             fVar11 * fVar16 + fVar29 * fVar17 + fVar25 * fVar18 + 0.0);
        puVar2[2] = CONCAT44(fVar10 * fVar16 + fVar28 * fVar17 + fVar24 * fVar18 + 0.0,
                             fVar31 * fVar16 + fVar27 * fVar17 + fVar23 * fVar18 + 0.0);
        puVar2[5] = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                             fVar12 * fVar19 + fVar30 * fVar20 + fVar26 * fVar21,
                             fVar11 * fVar19 + fVar29 * fVar20 + fVar25 * fVar21 + 0.0);
        puVar2[4] = CONCAT44(fVar10 * fVar19 + fVar28 * fVar20 + fVar24 * fVar21 + 0.0,
                             fVar31 * fVar19 + fVar27 * fVar20 + fVar23 * fVar21 + 0.0);
        fVar31 = extraout_s0 * *(float *)(puVar1 + 6);
      }
      lVar3 = *(long *)(param_2 + 0xb8) + lVar8;
      lVar8 = lVar8 + 0x40;
      *(float *)(lVar3 + 0x30) = fVar31;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x78;
    } while (uVar9 < *(uint *)(param_2 + 0xc4));
  }
  return;
}


