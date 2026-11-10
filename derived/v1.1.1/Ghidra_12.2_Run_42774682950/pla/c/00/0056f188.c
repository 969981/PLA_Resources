/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056f188; name: FUN_0056f188
 */


void FUN_0056f188(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  size_t __n;
  bool bVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar15 = (undefined8 *)param_1[2];
  if (puVar15 != (undefined8 *)param_1[3]) goto LAB_0056f364;
  puVar14 = (undefined8 *)*param_1;
  puVar13 = (undefined8 *)param_1[1];
  if (puVar14 <= puVar13 && (long)puVar13 - (long)puVar14 != 0) {
    lVar7 = (long)puVar13 - (long)puVar14 >> 3;
    lVar11 = lVar7 + 2;
    if (-1 < lVar7 + 1) {
      lVar11 = lVar7 + 1;
    }
    __n = (long)puVar15 - (long)puVar13;
    puVar15 = puVar13 + -(lVar11 >> 1);
    if (__n != 0) {
      memmove(puVar15,puVar13,__n);
      puVar13 = (undefined8 *)param_1[1];
    }
    puVar15 = puVar15 + ((long)__n >> 3);
    param_1[1] = (ulong)(puVar13 + -(lVar11 >> 1));
    param_1[2] = (ulong)puVar15;
    goto LAB_0056f364;
  }
  lVar11 = (long)param_1[3] - (long)puVar14;
  uVar8 = lVar11 >> 2;
  if (lVar11 == 0) {
    uVar8 = 1;
  }
  if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0056de90();
  }
  pvVar6 = operator_new(uVar8 * 8);
  puVar3 = (undefined8 *)((long)pvVar6 + (uVar8 >> 2) * 8);
  pvVar4 = (void *)((long)pvVar6 + uVar8 * 8);
  if (puVar13 == puVar15) {
    *param_1 = (ulong)pvVar6;
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar3;
    param_1[3] = (ulong)pvVar4;
    puVar15 = puVar3;
  }
  else {
    uVar10 = (long)puVar15 + (-8 - (long)puVar13);
    uVar2 = (uVar10 >> 3) + 1;
    puVar9 = puVar3;
    puVar14 = puVar13;
    if (uVar2 < 8) {
LAB_0056f2e4:
      uVar8 = (long)puVar15 + (-8 - (long)puVar14);
      uVar1 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar11 = -((ulong)uVar1 & 3);
        puVar13 = puVar9;
        puVar12 = puVar14;
        do {
          puVar14 = puVar12 + 1;
          bVar5 = lVar11 != -1;
          lVar11 = lVar11 + 1;
          puVar9 = puVar13 + 1;
          *puVar13 = *puVar12;
          puVar13 = puVar9;
          puVar12 = puVar14;
        } while (bVar5);
      }
      if (0x17 < uVar8) {
        do {
          *puVar9 = *puVar14;
          puVar9[1] = puVar14[1];
          puVar9[2] = puVar14[2];
          puVar13 = puVar14 + 3;
          puVar14 = puVar14 + 4;
          puVar9[3] = *puVar13;
          puVar9 = puVar9 + 4;
        } while (puVar14 != puVar15);
      }
    }
    else {
      uVar10 = uVar10 & 0xfffffffffffffff8;
      lVar11 = (uVar8 >> 2) * 8;
      if (((void *)((long)pvVar6 + lVar11) < (void *)((long)puVar13 + uVar10 + 8)) &&
         (puVar13 < (undefined8 *)((long)pvVar6 + lVar11 + uVar10 + 8))) goto LAB_0056f2e4;
      uVar10 = uVar2 & 0x3ffffffffffffff8;
      puVar9 = puVar3 + uVar10;
      puVar14 = puVar13 + uVar10;
      puVar12 = puVar3 + 4;
      puVar13 = puVar13 + 4;
      uVar8 = uVar10;
      do {
        uVar16 = puVar13[-4];
        uVar18 = puVar13[-1];
        uVar17 = puVar13[-2];
        uVar8 = uVar8 - 8;
        uVar20 = puVar13[1];
        uVar19 = *puVar13;
        uVar22 = puVar13[3];
        uVar21 = puVar13[2];
        puVar12[-3] = puVar13[-3];
        puVar12[-4] = uVar16;
        puVar12[-1] = uVar18;
        puVar12[-2] = uVar17;
        puVar12[1] = uVar20;
        *puVar12 = uVar19;
        puVar12[3] = uVar22;
        puVar12[2] = uVar21;
        puVar12 = puVar12 + 8;
        puVar13 = puVar13 + 8;
      } while (uVar8 != 0);
      if (uVar2 != uVar10) goto LAB_0056f2e4;
    }
    puVar14 = (undefined8 *)*param_1;
    *param_1 = (ulong)pvVar6;
    param_1[1] = (ulong)puVar3;
    param_1[2] = (ulong)puVar9;
    param_1[3] = (ulong)pvVar4;
    puVar15 = puVar9;
  }
  if (puVar14 != (undefined8 *)0x0) {
    operator_delete(puVar14);
    puVar15 = (undefined8 *)param_1[2];
  }
LAB_0056f364:
  *puVar15 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}


