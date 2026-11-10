/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053ae58; name: FUN_0053ae58
 */


void FUN_0053ae58(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  size_t __n;
  bool bVar4;
  undefined8 *__src;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  __src = (undefined8 *)param_1[1];
  if (__src != (undefined8 *)*param_1) goto LAB_0053b044;
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  if (uVar5 < uVar2) {
    lVar7 = (long)(uVar2 - uVar5) >> 3;
    lVar6 = lVar7 + 2;
    if (-1 < lVar7 + 1) {
      lVar6 = lVar7 + 1;
    }
    __n = uVar5 - (long)__src;
    puVar13 = (undefined8 *)(uVar5 + (lVar6 >> 1) * 8);
    if (__n == 0) {
      __src = puVar13;
    }
    else {
      puVar13 = (undefined8 *)((long)puVar13 - __n);
      memmove(puVar13,__src,__n);
      uVar5 = param_1[2];
      __src = puVar13;
    }
    param_1[1] = (long)__src;
    param_1[2] = uVar5 + (lVar6 >> 1) * 8;
    goto LAB_0053b044;
  }
  lVar7 = uVar2 - *param_1;
  lVar6 = lVar7 >> 2;
  if (lVar7 == 0) {
    lVar6 = 1;
  }
  uVar5 = lVar6 + 3U >> 2;
  lVar7 = FUN_002e2e80(PTR_FUN_04373078,lVar6 * 8);
  puVar13 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  __src = (undefined8 *)(lVar7 + uVar5 * 8);
  lVar6 = lVar7 + lVar6 * 8;
  if (puVar13 == puVar3) {
    lVar12 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)__src;
    param_1[2] = (long)__src;
    param_1[3] = lVar6;
  }
  else {
    uVar11 = (long)puVar3 + (-8 - (long)puVar13);
    uVar2 = (uVar11 >> 3) + 1;
    puVar8 = __src;
    puVar9 = puVar13;
    if (uVar2 < 8) {
LAB_0053afbc:
      uVar5 = (long)puVar3 + (-8 - (long)puVar9);
      uVar1 = ((uint)(uVar5 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar12 = -((ulong)uVar1 & 3);
        puVar13 = puVar8;
        puVar10 = puVar9;
        do {
          puVar9 = puVar10 + 1;
          bVar4 = lVar12 != -1;
          lVar12 = lVar12 + 1;
          puVar8 = puVar13 + 1;
          *puVar13 = *puVar10;
          puVar13 = puVar8;
          puVar10 = puVar9;
        } while (bVar4);
      }
      if (0x17 < uVar5) {
        do {
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          puVar8[2] = puVar9[2];
          puVar13 = puVar9 + 3;
          puVar9 = puVar9 + 4;
          puVar8[3] = *puVar13;
          puVar8 = puVar8 + 4;
        } while (puVar9 != puVar3);
      }
    }
    else {
      uVar11 = uVar11 & 0xfffffffffffffff8;
      lVar12 = uVar5 * 8;
      if (((ulong)(lVar7 + lVar12) < (long)puVar13 + uVar11 + 8) &&
         (puVar13 < (undefined8 *)(uVar11 + lVar12 + lVar7 + 8))) goto LAB_0053afbc;
      uVar11 = uVar2 & 0x3ffffffffffffff8;
      puVar8 = __src + uVar11;
      puVar9 = puVar13 + uVar11;
      puVar13 = puVar13 + 4;
      puVar10 = __src + 4;
      uVar5 = uVar11;
      do {
        uVar14 = puVar13[-4];
        uVar16 = puVar13[-1];
        uVar15 = puVar13[-2];
        uVar5 = uVar5 - 8;
        uVar18 = puVar13[1];
        uVar17 = *puVar13;
        uVar20 = puVar13[3];
        uVar19 = puVar13[2];
        puVar10[-3] = puVar13[-3];
        puVar10[-4] = uVar14;
        puVar10[-1] = uVar16;
        puVar10[-2] = uVar15;
        puVar10[1] = uVar18;
        *puVar10 = uVar17;
        puVar10[3] = uVar20;
        puVar10[2] = uVar19;
        puVar13 = puVar13 + 8;
        puVar10 = puVar10 + 8;
      } while (uVar5 != 0);
      if (uVar2 != uVar11) goto LAB_0053afbc;
    }
    lVar12 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)__src;
    param_1[2] = (long)puVar8;
    param_1[3] = lVar6;
  }
  if (lVar12 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,lVar12);
    __src = (undefined8 *)param_1[1];
  }
LAB_0053b044:
  __src[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


