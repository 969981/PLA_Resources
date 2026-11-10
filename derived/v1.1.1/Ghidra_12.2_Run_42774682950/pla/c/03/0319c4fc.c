/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319c4fc; name: FUN_0319c4fc
 */


void FUN_0319c4fc(long param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar3 = PTR_PTR_0434a080;
  uVar2 = *param_2;
  puVar10 = (uint *)((long)param_3 + 0xc);
  uVar6 = *puVar10;
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar2) {
    lVar4 = *param_3;
    lVar11 = param_3[1];
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
      uVar6 = *puVar10;
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    if ((int)uVar2 <= (int)uVar6) {
      uVar2 = uVar6;
    }
    lVar11 = FUN_032bd1d4(puVar3,uVar2,0x10,lVar4,(int)lVar11,puVar10);
    *param_3 = lVar11;
    uVar2 = *param_2;
  }
  if (0 < (int)uVar2) {
    lVar11 = 0;
    do {
      uVar2 = *(uint *)(*(long *)(param_2 + 2) + lVar11 * 4);
      uVar7 = (ulong)uVar2 & 0x3fffff;
      lVar4 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar2 >> 0x16) * 0xf0);
      lVar9 = *(long *)(lVar4 + 0x20);
      iVar5 = (int)uVar7;
      if (iVar5 < *(int *)(lVar9 + 0x40)) {
        puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar7 * 0x10);
      }
      else {
        puVar8 = (undefined8 *)
                 (*(long *)(lVar9 + 0xf0) + (long)(iVar5 - *(int *)(lVar9 + 0x40)) * 0x10);
      }
      uVar16 = *(undefined8 *)(lVar4 + 0x68);
      uVar15 = *(undefined8 *)(lVar4 + 0x60);
      uVar18 = *(undefined8 *)(lVar4 + 0x78);
      uVar17 = *(undefined8 *)(lVar4 + 0x70);
      fVar13 = (float)((ulong)*puVar8 >> 0x20);
      uVar20 = *(undefined8 *)(lVar4 + 0x88);
      uVar19 = *(undefined8 *)(lVar4 + 0x80);
      uVar22 = *(undefined8 *)(lVar4 + 0x98);
      uVar21 = *(undefined8 *)(lVar4 + 0x90);
      iVar5 = (int)param_3[1];
      uVar6 = *(uint *)((long)param_3 + 0xc);
      fVar12 = (float)*puVar8;
      uVar2 = iVar5 + 1;
      fVar14 = (float)puVar8[1];
      if (iVar5 < (int)(uVar6 & 0x3fffffff)) {
        lVar4 = *param_3;
      }
      else {
        lVar4 = *param_3;
        if (0x3ffffffe < iVar5) {
          FUN_032bd0a8(uVar2);
          uVar6 = *puVar10;
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar1 = uVar2;
        if ((int)uVar2 <= (int)uVar6) {
          uVar1 = uVar6;
        }
        lVar4 = FUN_032bd1d4(puVar3,uVar1,0x10,lVar4,iVar5,puVar10);
        *param_3 = lVar4;
        iVar5 = (int)param_3[1];
      }
      puVar8 = (undefined8 *)(lVar4 + (long)iVar5 * 0x10);
      puVar8[1] = CONCAT44((float)((ulong)uVar22 >> 0x20) +
                           (float)((ulong)uVar20 >> 0x20) * fVar14 +
                           (float)((ulong)uVar16 >> 0x20) * fVar12 +
                           (float)((ulong)uVar18 >> 0x20) * fVar13,
                           (float)uVar22 +
                           (float)uVar20 * fVar14 + (float)uVar16 * fVar12 + (float)uVar18 * fVar13)
      ;
      *puVar8 = CONCAT44((float)((ulong)uVar21 >> 0x20) +
                         (float)((ulong)uVar19 >> 0x20) * fVar14 +
                         (float)((ulong)uVar15 >> 0x20) * fVar12 +
                         (float)((ulong)uVar17 >> 0x20) * fVar13,
                         (float)uVar21 +
                         (float)uVar19 * fVar14 + (float)uVar15 * fVar12 + (float)uVar17 * fVar13);
      lVar11 = lVar11 + 1;
      *(uint *)(param_3 + 1) = uVar2;
    } while (lVar11 < (int)*param_2);
  }
  return;
}


