/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056f390; name: FUN_0056f390
 */


void FUN_0056f390(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *pvVar2;
  size_t __n;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 != (undefined8 *)*param_1) {
    puVar11 = puVar13;
    goto LAB_0056f574;
  }
  puVar14 = (undefined8 *)param_1[2];
  puVar11 = (undefined8 *)param_1[3];
  if (puVar14 < puVar11) {
    lVar5 = (long)puVar11 - (long)puVar14 >> 3;
    lVar9 = lVar5 + 2;
    if (-1 < lVar5 + 1) {
      lVar9 = lVar5 + 1;
    }
    __n = (long)puVar14 - (long)puVar13;
    puVar11 = puVar14 + (lVar9 >> 1);
    if (__n != 0) {
      puVar11 = (undefined8 *)((long)puVar11 - __n);
      memmove(puVar11,puVar13,__n);
      puVar14 = (undefined8 *)param_1[2];
    }
    param_1[1] = (long)puVar11;
    param_1[2] = (long)(puVar14 + (lVar9 >> 1));
    goto LAB_0056f574;
  }
  lVar9 = (long)puVar11 - *param_1;
  uVar6 = lVar9 >> 2;
  if (lVar9 == 0) {
    uVar6 = 1;
  }
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0056de90();
  }
  uVar15 = uVar6 + 3 >> 2;
  pvVar4 = operator_new(uVar6 * 8);
  puVar11 = (undefined8 *)((long)pvVar4 + uVar15 * 8);
  pvVar2 = (void *)((long)pvVar4 + uVar6 * 8);
  if (puVar13 == puVar14) {
    *param_1 = (long)pvVar4;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)puVar11;
    param_1[3] = (long)pvVar2;
  }
  else {
    uVar8 = (long)puVar14 + (-8 - (long)puVar13);
    uVar6 = (uVar8 >> 3) + 1;
    puVar7 = puVar11;
    puVar12 = puVar13;
    if (uVar6 < 8) {
LAB_0056f4f4:
      uVar6 = (long)puVar14 + (-8 - (long)puVar12);
      uVar1 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar9 = -((ulong)uVar1 & 3);
        puVar13 = puVar7;
        puVar10 = puVar12;
        do {
          puVar12 = puVar10 + 1;
          bVar3 = lVar9 != -1;
          lVar9 = lVar9 + 1;
          puVar7 = puVar13 + 1;
          *puVar13 = *puVar10;
          puVar13 = puVar7;
          puVar10 = puVar12;
        } while (bVar3);
      }
      if (0x17 < uVar6) {
        do {
          *puVar7 = *puVar12;
          puVar7[1] = puVar12[1];
          puVar7[2] = puVar12[2];
          puVar13 = puVar12 + 3;
          puVar12 = puVar12 + 4;
          puVar7[3] = *puVar13;
          puVar7 = puVar7 + 4;
        } while (puVar12 != puVar14);
      }
    }
    else {
      uVar8 = uVar8 & 0xfffffffffffffff8;
      lVar9 = uVar15 * 8;
      if (((void *)((long)pvVar4 + lVar9) < (void *)((long)puVar13 + uVar8 + 8)) &&
         (puVar13 < (undefined8 *)((long)pvVar4 + uVar8 + lVar9 + 8))) goto LAB_0056f4f4;
      uVar8 = uVar6 & 0x3ffffffffffffff8;
      puVar7 = puVar11 + uVar8;
      puVar12 = puVar13 + uVar8;
      puVar10 = puVar11 + 4;
      puVar13 = puVar13 + 4;
      uVar15 = uVar8;
      do {
        uVar16 = puVar13[-4];
        uVar18 = puVar13[-1];
        uVar17 = puVar13[-2];
        uVar15 = uVar15 - 8;
        uVar20 = puVar13[1];
        uVar19 = *puVar13;
        uVar22 = puVar13[3];
        uVar21 = puVar13[2];
        puVar10[-3] = puVar13[-3];
        puVar10[-4] = uVar16;
        puVar10[-1] = uVar18;
        puVar10[-2] = uVar17;
        puVar10[1] = uVar20;
        *puVar10 = uVar19;
        puVar10[3] = uVar22;
        puVar10[2] = uVar21;
        puVar10 = puVar10 + 8;
        puVar13 = puVar13 + 8;
      } while (uVar15 != 0);
      if (uVar6 != uVar8) goto LAB_0056f4f4;
    }
    puVar13 = (undefined8 *)*param_1;
    *param_1 = (long)pvVar4;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)puVar7;
    param_1[3] = (long)pvVar2;
  }
  if (puVar13 != (undefined8 *)0x0) {
    operator_delete(puVar13);
    puVar11 = (undefined8 *)param_1[1];
  }
LAB_0056f574:
  puVar11[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}


