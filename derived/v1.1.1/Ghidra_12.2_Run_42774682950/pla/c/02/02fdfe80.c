/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdfe80; name: FUN_02fdfe80
 */


ulong FUN_02fdfe80(ulong param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  float fVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  if (0x40 < (int)param_1) {
    uVar10 = param_1 & 0xffffffff;
    do {
      lVar7 = *param_3;
      iVar12 = 0;
      uVar6 = uVar10 - 1;
      uVar13 = 0;
      fVar14 = 3.40282e+38;
      do {
        uVar1 = uVar10;
        if (uVar13 != 0) {
          uVar1 = uVar13;
        }
        puVar15 = (undefined8 *)
                  (param_2 +
                  (ulong)*(byte *)(lVar7 + ((long)((uVar1 << 0x20) + -0x100000000) >> 0x20)) * 0xc);
        uVar25 = *puVar15;
        fVar17 = (float)uVar25;
        fVar19 = (float)((ulong)uVar25 >> 0x20);
        fVar20 = *(float *)(puVar15 + 1);
        puVar15 = (undefined8 *)(param_2 + (ulong)*(byte *)(lVar7 + uVar13) * 0xc);
        uVar25 = *puVar15;
        fVar23 = (float)uVar25;
        fVar16 = fVar17 - fVar23;
        fVar26 = (float)((ulong)uVar25 >> 0x20);
        fVar18 = fVar19 - fVar26;
        fVar3 = *(float *)(puVar15 + 1);
        uVar1 = uVar13 + 1;
        uVar2 = 0;
        if (uVar6 != uVar13) {
          uVar2 = uVar1 & 0xffffffff;
        }
        puVar15 = (undefined8 *)(param_2 + (ulong)*(byte *)(lVar7 + uVar2) * 0xc);
        uVar25 = *puVar15;
        uVar21 = NEON_ext(CONCAT44(fVar18,fVar16),CONCAT44(fVar20 - fVar3,fVar20 - fVar3),4,1);
        fVar4 = *(float *)(puVar15 + 1);
        fVar28 = (float)uVar25;
        fVar24 = fVar28 - fVar23;
        fVar29 = (float)((ulong)uVar25 >> 0x20);
        fVar27 = fVar29 - fVar26;
        uVar25 = NEON_ext(CONCAT44(fVar27,fVar24),CONCAT44(fVar4 - fVar3,fVar4 - fVar3),4,1);
        fVar17 = (fVar17 - fVar23) * (float)uVar25 - (float)uVar21 * (fVar28 - fVar23);
        fVar19 = (fVar19 - fVar26) * (float)((ulong)uVar25 >> 0x20) -
                 (float)((ulong)uVar21 >> 0x20) * (fVar29 - fVar26);
        fVar16 = (fVar20 - fVar3) * fVar24 - fVar16 * (fVar4 - fVar3);
        fVar20 = (fVar20 - fVar3) * fVar27 - fVar18 * (fVar4 - fVar3);
        auVar22._4_4_ = fVar19;
        auVar22._0_4_ = fVar17;
        auVar22._8_4_ = fVar16;
        auVar22._12_4_ = fVar20;
        auVar5._4_4_ = fVar19;
        auVar5._0_4_ = fVar17;
        auVar5._8_4_ = fVar16;
        auVar5._12_4_ = fVar20;
        auVar22 = NEON_ext(auVar22,auVar5,4,1);
        fVar20 = auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_ + fVar17 * fVar17;
        iVar9 = (int)uVar13;
        if (fVar14 <= fVar20) {
          iVar9 = iVar12;
          fVar20 = fVar14;
        }
        iVar12 = iVar9;
        uVar13 = uVar1;
        fVar14 = fVar20;
      } while (uVar10 != uVar1);
      lVar11 = (long)(int)param_3[1] + -1;
      *(int *)(param_3 + 1) = (int)lVar11;
      lVar11 = lVar11 - iVar12;
      iVar9 = (int)lVar11;
      if (0 < iVar9) {
        puVar8 = (undefined1 *)(lVar7 + iVar12);
        *puVar8 = puVar8[1];
        if (1 < iVar9) {
          puVar8 = puVar8 + 2;
          lVar7 = 1;
          do {
            lVar7 = (lVar7 << 0x20) + 0x100000000 >> 0x20;
            puVar8[-1] = *puVar8;
            puVar8 = puVar8 + 1;
          } while (lVar7 < lVar11);
        }
      }
      uVar10 = uVar6;
    } while (0x40 < (int)uVar6);
    param_1 = 0x40;
  }
  return param_1;
}


