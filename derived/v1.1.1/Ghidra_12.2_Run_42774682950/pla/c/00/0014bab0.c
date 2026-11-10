/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014bab0; name: FUN_0014bab0
 */


undefined8 * FUN_0014bab0(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  uVar5 = (param_1[1] & -param_1[1]) - 1;
  uVar1 = uVar5 >> 0xc & 0x10;
  uVar5 = uVar5 >> (ulong)uVar1;
  uVar2 = uVar5 >> (ulong)(uVar5 >> 5 & 8);
  uVar3 = uVar2 >> (ulong)(uVar2 >> 2 & 4);
  uVar4 = uVar3 >> (ulong)(uVar3 >> 1 & 2);
  puVar6 = *(undefined8 **)
            (param_1 +
            (ulong)((uVar1 | uVar5 >> 5 & 8 | uVar2 >> 2 & 4 | uVar3 >> 1 & 2 | uVar4 >> 1 & 1) +
                   (uVar4 >> (ulong)(uVar4 >> 1 & 1))) * 2 + 0x96);
  uVar8 = (puVar6[1] & 0xfffffffffffffff8) - param_2;
  puVar7 = puVar6;
  puVar14 = (undefined8 *)puVar6[4];
  if ((undefined8 *)puVar6[4] == (undefined8 *)0x0) goto LAB_0014bb58;
  do {
    do {
      puVar6 = puVar14;
      uVar9 = (puVar6[1] & 0xfffffffffffffff8) - param_2;
      puVar14 = puVar6;
      if (uVar8 <= uVar9) {
        puVar14 = puVar7;
        uVar9 = uVar8;
      }
      uVar8 = uVar9;
      puVar7 = puVar14;
      puVar14 = (undefined8 *)puVar6[4];
    } while ((undefined8 *)puVar6[4] != (undefined8 *)0x0);
LAB_0014bb58:
    puVar14 = (undefined8 *)puVar6[5];
  } while ((undefined8 *)puVar6[5] != (undefined8 *)0x0);
  puVar14 = *(undefined8 **)(param_1 + 6);
  if (((puVar7 < puVar14) || (uVar9 = puVar7[1] & 0xfffffffffffffff8, uVar9 != uVar8 + param_2)) ||
     (puVar6 = (undefined8 *)((long)puVar7 + param_2), puVar6 <= puVar7)) goto LAB_0014bd60;
  puVar12 = (undefined8 *)puVar7[3];
  uVar11 = puVar7[6];
  if (puVar12 == puVar7) {
    puVar17 = (undefined8 *)puVar7[5];
    puVar15 = puVar7 + 5;
    if (puVar17 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)puVar7[4];
      puVar15 = puVar7 + 4;
      if (puVar17 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
        goto joined_r0x0014bc14;
      }
    }
    do {
      do {
        puVar12 = puVar17;
        puVar16 = puVar15;
        puVar17 = (undefined8 *)puVar12[5];
        puVar15 = puVar12 + 5;
      } while (puVar17 != (undefined8 *)0x0);
      puVar17 = (undefined8 *)puVar12[4];
      puVar15 = puVar12 + 4;
    } while (puVar17 != (undefined8 *)0x0);
    if (puVar16 < puVar14) goto LAB_0014bd60;
    *puVar16 = 0;
  }
  else {
    puVar15 = (undefined8 *)puVar7[2];
    if (((puVar15 < puVar14) || ((undefined8 *)puVar15[3] != puVar7)) ||
       ((undefined8 *)puVar12[2] != puVar7)) goto LAB_0014bd60;
    puVar15[3] = puVar12;
    puVar12[2] = puVar15;
  }
joined_r0x0014bc14:
  if (uVar11 != 0) {
    if (puVar7 == *(undefined8 **)(param_1 + (ulong)*(uint *)(puVar7 + 7) * 2 + 0x96)) {
      *(undefined8 **)(param_1 + (ulong)*(uint *)(puVar7 + 7) * 2 + 0x96) = puVar12;
      if (puVar12 == (undefined8 *)0x0) {
        param_1[1] = param_1[1] & (1 << (ulong)(*(uint *)(puVar7 + 7) & 0x1f) ^ 0xffffffffU);
      }
      else {
LAB_0014bc64:
        if (puVar12 < *(undefined8 **)(param_1 + 6)) goto LAB_0014bd60;
        puVar12[6] = uVar11;
        uVar11 = puVar7[4];
        if (uVar11 != 0) {
          if (uVar11 < *(ulong *)(param_1 + 6)) goto LAB_0014bd60;
          puVar12[4] = uVar11;
          *(undefined8 **)(uVar11 + 0x30) = puVar12;
        }
        uVar11 = puVar7[5];
        if (uVar11 != 0) {
          if (uVar11 < *(ulong *)(param_1 + 6)) goto LAB_0014bd60;
          puVar12[5] = uVar11;
          *(undefined8 **)(uVar11 + 0x30) = puVar12;
        }
      }
    }
    else {
      if (uVar11 < *(ulong *)(param_1 + 6)) goto LAB_0014bd60;
      lVar10 = 0x20;
      if (*(undefined8 **)(uVar11 + 0x20) != puVar7) {
        lVar10 = 0x28;
      }
      *(undefined8 **)(uVar11 + lVar10) = puVar12;
      if (puVar12 != (undefined8 *)0x0) goto LAB_0014bc64;
    }
  }
  if (uVar8 < 0x20) {
    puVar7[1] = uVar9 | 3;
    *(ulong *)((long)puVar7 + uVar9 + 8) = *(ulong *)((long)puVar7 + uVar9 + 8) | 1;
    return puVar7 + 2;
  }
  puVar7[1] = param_2 | 3;
  puVar6[1] = uVar8 | 1;
  *(ulong *)((long)puVar6 + uVar8) = uVar8;
  uVar9 = *(ulong *)(param_1 + 2);
  if (0xff < uVar9) {
LAB_0014bd60:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar9 != 0) {
    if (uVar9 < 0x20) goto LAB_0014bd60;
    lVar10 = *(long *)(param_1 + 8);
    uVar11 = uVar9 >> 3 & 0x7fffffff;
    uVar1 = 1 << (ulong)((uint)(uVar9 >> 3) & 0x1f);
    if ((*param_1 & uVar1) == 0) {
      *param_1 = *param_1 | uVar1;
      puVar13 = param_1 + uVar11 * 4 + 0x12;
    }
    else {
      puVar13 = *(uint **)(param_1 + uVar11 * 4 + 0x16);
      if (*(uint **)(param_1 + uVar11 * 4 + 0x16) < *(uint **)(param_1 + 6)) goto LAB_0014bd60;
    }
    *(long *)(param_1 + uVar11 * 4 + 0x16) = lVar10;
    *(long *)(puVar13 + 6) = lVar10;
    *(uint **)(lVar10 + 0x10) = puVar13;
    *(uint **)(lVar10 + 0x18) = param_1 + uVar11 * 4 + 0x12;
  }
  *(ulong *)(param_1 + 2) = uVar8;
  *(undefined8 **)(param_1 + 8) = puVar6;
  return puVar7 + 2;
}


