/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053ac58; name: FUN_0053ac58
 */


void FUN_0053ac58(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  size_t __n;
  bool bVar6;
  ulong uVar7;
  void *__src;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar10 = (undefined8 *)param_1[2];
  if (puVar10 != (undefined8 *)param_1[3]) goto LAB_0053ae34;
  pvVar16 = (void *)*param_1;
  __src = (void *)param_1[1];
  if (pvVar16 <= __src && (long)__src - (long)pvVar16 != 0) {
    lVar11 = (long)__src - (long)pvVar16 >> 3;
    lVar15 = lVar11 + 2;
    if (-1 < lVar11 + 1) {
      lVar15 = lVar11 + 1;
    }
    __n = (long)puVar10 - (long)__src;
    pvVar16 = (void *)((long)__src + (lVar15 >> 1) * -8);
    if (__n != 0) {
      memmove(pvVar16,__src,__n);
      __src = (void *)param_1[1];
    }
    puVar10 = (undefined8 *)((long)pvVar16 + ((long)__n >> 3) * 8);
    param_1[1] = (ulong)((long)__src + (lVar15 >> 1) * -8);
    param_1[2] = (ulong)puVar10;
    goto LAB_0053ae34;
  }
  lVar15 = (long)param_1[3] - (long)pvVar16;
  uVar8 = lVar15 >> 2;
  if (lVar15 == 0) {
    uVar8 = 1;
  }
  uVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar8 * 8);
  puVar9 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)param_1[2];
  puVar3 = (undefined8 *)(uVar7 + (uVar8 >> 2) * 8);
  uVar4 = uVar7 + uVar8 * 8;
  puVar10 = puVar3;
  if (puVar9 == puVar5) {
    uVar8 = *param_1;
    *param_1 = uVar7;
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar3;
    param_1[3] = uVar4;
  }
  else {
    uVar14 = (long)puVar5 + (-8 - (long)puVar9);
    uVar2 = (uVar14 >> 3) + 1;
    puVar12 = puVar9;
    if (uVar2 < 8) {
LAB_0053adb0:
      uVar8 = (long)puVar5 + (-8 - (long)puVar12);
      uVar1 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar15 = -((ulong)uVar1 & 3);
        puVar9 = puVar10;
        puVar13 = puVar12;
        do {
          puVar12 = puVar13 + 1;
          bVar6 = lVar15 != -1;
          lVar15 = lVar15 + 1;
          puVar10 = puVar9 + 1;
          *puVar9 = *puVar13;
          puVar9 = puVar10;
          puVar13 = puVar12;
        } while (bVar6);
      }
      if (0x17 < uVar8) {
        do {
          *puVar10 = *puVar12;
          puVar10[1] = puVar12[1];
          puVar10[2] = puVar12[2];
          puVar9 = puVar12 + 3;
          puVar12 = puVar12 + 4;
          puVar10[3] = *puVar9;
          puVar10 = puVar10 + 4;
        } while (puVar12 != puVar5);
      }
    }
    else {
      uVar14 = uVar14 & 0xfffffffffffffff8;
      lVar15 = (uVar8 >> 2) * 8;
      if ((uVar7 + lVar15 < (long)puVar9 + uVar14 + 8) &&
         (puVar9 < (undefined8 *)(lVar15 + uVar14 + uVar7 + 8))) goto LAB_0053adb0;
      uVar14 = uVar2 & 0x3ffffffffffffff8;
      puVar10 = puVar3 + uVar14;
      puVar12 = puVar9 + uVar14;
      puVar9 = puVar9 + 4;
      puVar13 = puVar3 + 4;
      uVar8 = uVar14;
      do {
        uVar17 = puVar9[-4];
        uVar19 = puVar9[-1];
        uVar18 = puVar9[-2];
        uVar8 = uVar8 - 8;
        uVar21 = puVar9[1];
        uVar20 = *puVar9;
        uVar23 = puVar9[3];
        uVar22 = puVar9[2];
        puVar13[-3] = puVar9[-3];
        puVar13[-4] = uVar17;
        puVar13[-1] = uVar19;
        puVar13[-2] = uVar18;
        puVar13[1] = uVar21;
        *puVar13 = uVar20;
        puVar13[3] = uVar23;
        puVar13[2] = uVar22;
        puVar9 = puVar9 + 8;
        puVar13 = puVar13 + 8;
      } while (uVar8 != 0);
      if (uVar2 != uVar14) goto LAB_0053adb0;
    }
    uVar8 = *param_1;
    *param_1 = uVar7;
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar10;
    param_1[3] = uVar4;
  }
  if (uVar8 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
    puVar10 = (undefined8 *)param_1[2];
  }
LAB_0053ae34:
  *puVar10 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


