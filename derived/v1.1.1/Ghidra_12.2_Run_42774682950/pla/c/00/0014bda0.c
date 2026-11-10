/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014bda0; name: FUN_0014bda0
 */


undefined8 * FUN_0014bda0(uint *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  uVar7 = -param_2;
  if (param_2 >> 8 == 0) {
    uVar10 = 0;
    uVar8 = 0;
    puVar11 = *(undefined8 **)(param_1 + 0x96);
joined_r0x0014bddc:
    if (puVar11 != (undefined8 *)0x0) goto LAB_0014bde0;
LAB_0014bf7c:
    puVar11 = (undefined8 *)0x0;
    uVar10 = uVar7;
LAB_0014bfb8:
    uVar8 = 2 << (ulong)(uVar8 & 0x1f);
    uVar8 = param_1[1] & (uVar8 | -uVar8);
    if (uVar8 == 0) {
      return (undefined8 *)0x0;
    }
    uVar9 = (uVar8 & -uVar8) - 1;
    uVar8 = uVar9 >> 0xc & 0x10;
    uVar9 = uVar9 >> (ulong)uVar8;
    uVar2 = uVar9 >> (ulong)(uVar9 >> 5 & 8);
    uVar3 = uVar2 >> (ulong)(uVar2 >> 2 & 4);
    uVar4 = uVar3 >> (ulong)(uVar3 >> 1 & 2);
    puVar15 = *(undefined8 **)
               (param_1 +
               (ulong)((uVar8 | uVar9 >> 5 & 8 | uVar2 >> 2 & 4 | uVar3 >> 1 & 2 | uVar4 >> 1 & 1) +
                      (uVar4 >> (ulong)(uVar4 >> 1 & 1))) * 2 + 0x96);
  }
  else {
    if (param_2 >> 0x18 == 0) {
      iVar5 = (int)(param_2 >> 8);
      uVar8 = iVar5 + 0xfff00U >> 0x10 & 8;
      iVar5 = iVar5 << (ulong)uVar8;
      uVar9 = iVar5 + 0x7f000U >> 0x10 & 4;
      iVar5 = iVar5 << (ulong)uVar9;
      uVar2 = iVar5 + 0x3c000U >> 0x10 & 2;
      iVar5 = (0xe - (uVar9 | uVar8 | uVar2)) + ((uint)(iVar5 << (ulong)uVar2) >> 0xf);
      uVar8 = (uint)(param_2 >> ((ulong)(iVar5 + 7) & 0x3f)) & 1 | iVar5 * 2;
      uVar10 = (ulong)uVar8;
      puVar11 = *(undefined8 **)(param_1 + uVar10 * 2 + 0x96);
      goto joined_r0x0014bddc;
    }
    uVar10 = 0x1f;
    uVar8 = 0x1f;
    puVar11 = *(undefined8 **)(param_1 + 0xd4);
    if (puVar11 == (undefined8 *)0x0) goto LAB_0014bf7c;
LAB_0014bde0:
    uVar8 = (uint)uVar10;
    uVar12 = 0;
    if (uVar8 != 0x1f) {
      uVar12 = 0x3f - (ulong)((int)(uVar10 >> 1) + 6);
    }
    puVar15 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)0x0;
    uVar12 = param_2 << (uVar12 & 0x3f);
    do {
      uVar10 = (puVar11[1] & 0xfffffffffffffff8) - param_2;
      if ((uVar10 < uVar7) && (puVar6 = puVar11, uVar7 = uVar10, uVar10 == 0)) {
        puVar15 = puVar11;
        if (puVar11 == (undefined8 *)0x0) goto LAB_0014bfb8;
        goto joined_r0x0014c034;
      }
      puVar14 = (undefined8 *)puVar11[5];
      puVar11 = *(undefined8 **)((long)puVar11 + (uVar12 >> 0x3c & 8) + 0x20);
      if (puVar14 != puVar11 && puVar14 != (undefined8 *)0x0) {
        puVar15 = puVar14;
      }
      uVar12 = uVar12 << (puVar11 != (undefined8 *)0x0);
    } while (puVar11 != (undefined8 *)0x0);
    puVar11 = puVar6;
    uVar10 = uVar7;
    if (puVar15 == (undefined8 *)0x0 && puVar6 == (undefined8 *)0x0) goto LAB_0014bfb8;
  }
joined_r0x0014c034:
  for (; puVar6 = puVar11, uVar7 = uVar10, puVar15 != (undefined8 *)0x0;
      puVar15 = (undefined8 *)puVar15[5]) {
    while( true ) {
      uVar12 = (puVar15[1] & 0xfffffffffffffff8) - param_2;
      uVar10 = uVar12;
      if (uVar7 <= uVar12) {
        uVar10 = uVar7;
      }
      puVar14 = (undefined8 *)puVar15[4];
      puVar11 = puVar15;
      if (uVar7 <= uVar12) {
        puVar11 = puVar6;
      }
      if (puVar14 == (undefined8 *)0x0) break;
      puVar6 = puVar11;
      uVar7 = uVar10;
      puVar15 = puVar14;
      if (puVar14 == (undefined8 *)0x0) goto LAB_0014be98;
    }
  }
LAB_0014be98:
  if (puVar11 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (*(long *)(param_1 + 2) - param_2 <= uVar10) {
    return (undefined8 *)0x0;
  }
  puVar15 = *(undefined8 **)(param_1 + 6);
  if (((puVar11 < puVar15) || (uVar7 = puVar11[1] & 0xfffffffffffffff8, uVar7 != uVar10 + param_2))
     || (puVar6 = (undefined8 *)((long)puVar11 + param_2), puVar6 <= puVar11)) goto LAB_0014c358;
  puVar14 = (undefined8 *)puVar11[3];
  uVar12 = puVar11[6];
  if (puVar14 == puVar11) {
    puVar19 = (undefined8 *)puVar11[5];
    puVar17 = puVar11 + 5;
    if (puVar19 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)puVar11[4];
      puVar17 = puVar11 + 4;
      if (puVar19 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x0;
        goto joined_r0x0014c08c;
      }
    }
    do {
      do {
        puVar14 = puVar19;
        puVar18 = puVar17;
        puVar19 = (undefined8 *)puVar14[5];
        puVar17 = puVar14 + 5;
      } while (puVar19 != (undefined8 *)0x0);
      puVar19 = (undefined8 *)puVar14[4];
      puVar17 = puVar14 + 4;
    } while (puVar19 != (undefined8 *)0x0);
    if (puVar18 < puVar15) goto LAB_0014c358;
    *puVar18 = 0;
  }
  else {
    puVar17 = (undefined8 *)puVar11[2];
    if (((puVar17 < puVar15) || ((undefined8 *)puVar17[3] != puVar11)) ||
       ((undefined8 *)puVar14[2] != puVar11)) goto LAB_0014c358;
    puVar17[3] = puVar14;
    puVar14[2] = puVar17;
  }
joined_r0x0014c08c:
  if (uVar12 != 0) {
    if (puVar11 == *(undefined8 **)(param_1 + (ulong)*(uint *)(puVar11 + 7) * 2 + 0x96)) {
      *(undefined8 **)(param_1 + (ulong)*(uint *)(puVar11 + 7) * 2 + 0x96) = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        param_1[1] = param_1[1] & (1 << (ulong)(*(uint *)(puVar11 + 7) & 0x1f) ^ 0xffffffffU);
      }
      else {
LAB_0014c0dc:
        if (puVar14 < *(undefined8 **)(param_1 + 6)) goto LAB_0014c358;
        puVar14[6] = uVar12;
        uVar12 = puVar11[4];
        if (uVar12 != 0) {
          if (uVar12 < *(ulong *)(param_1 + 6)) goto LAB_0014c358;
          puVar14[4] = uVar12;
          *(undefined8 **)(uVar12 + 0x30) = puVar14;
        }
        uVar12 = puVar11[5];
        if (uVar12 != 0) {
          if (uVar12 < *(ulong *)(param_1 + 6)) goto LAB_0014c358;
          puVar14[5] = uVar12;
          *(undefined8 **)(uVar12 + 0x30) = puVar14;
        }
      }
    }
    else {
      if (uVar12 < *(ulong *)(param_1 + 6)) goto LAB_0014c358;
      lVar1 = 0x20;
      if (*(undefined8 **)(uVar12 + 0x20) != puVar11) {
        lVar1 = 0x28;
      }
      *(undefined8 **)(uVar12 + lVar1) = puVar14;
      if (puVar14 != (undefined8 *)0x0) goto LAB_0014c0dc;
    }
  }
  if (uVar10 < 0x20) {
    puVar11[1] = uVar7 | 3;
    *(ulong *)((long)puVar11 + uVar7 + 8) = *(ulong *)((long)puVar11 + uVar7 + 8) | 1;
    return puVar11 + 2;
  }
  puVar11[1] = param_2 | 3;
  puVar6[1] = uVar10 | 1;
  *(ulong *)((long)puVar6 + uVar10) = uVar10;
  if (uVar10 < 0x100) {
    uVar12 = uVar10 & 0x3fffffff8;
    uVar8 = 1 << (ulong)((uint)(uVar10 >> 3) & 0x1f);
    uVar7 = (long)param_1 + uVar12 * 2 + 0x48;
    if ((*param_1 & uVar8) == 0) {
      *param_1 = *param_1 | uVar8;
      uVar10 = uVar7;
    }
    else {
      uVar10 = *(ulong *)((long)param_1 + uVar12 * 2 + 0x58);
      if (uVar10 < *(ulong *)(param_1 + 6)) goto LAB_0014c358;
    }
    *(undefined8 **)((long)param_1 + uVar12 * 2 + 0x58) = puVar6;
    *(undefined8 **)(uVar10 + 0x18) = puVar6;
    puVar6[2] = uVar10;
    puVar6[3] = uVar7;
    return puVar11 + 2;
  }
  uVar7 = 0;
  if (uVar10 >> 8 != 0) {
    if (uVar10 >> 0x18 == 0) {
      iVar5 = (int)(uVar10 >> 8);
      uVar8 = iVar5 + 0xfff00U >> 0x10 & 8;
      iVar5 = iVar5 << (ulong)uVar8;
      uVar9 = iVar5 + 0x7f000U >> 0x10 & 4;
      iVar5 = iVar5 << (ulong)uVar9;
      uVar2 = iVar5 + 0x3c000U >> 0x10 & 2;
      iVar5 = (0xe - (uVar9 | uVar8 | uVar2)) + ((uint)(iVar5 << (ulong)uVar2) >> 0xf);
      uVar7 = (ulong)((uint)(uVar10 >> ((ulong)(iVar5 + 7) & 0x3f)) & 1 | iVar5 * 2);
    }
    else {
      uVar7 = 0x1f;
    }
  }
  uVar9 = (uint)uVar7;
  *(uint *)(puVar6 + 7) = uVar9;
  puVar6[4] = 0;
  puVar6[5] = 0;
  uVar8 = 1 << (ulong)(uVar9 & 0x1f);
  puVar16 = (ulong *)(param_1 + uVar7 * 2 + 0x96);
  if ((param_1[1] & uVar8) == 0) {
    param_1[1] = param_1[1] | uVar8;
    *puVar16 = (ulong)puVar6;
    puVar6[6] = puVar16;
    puVar6[2] = puVar6;
    puVar6[3] = puVar6;
    return puVar11 + 2;
  }
  if (uVar9 == 0x1f) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x3f - (ulong)((int)(uVar7 >> 1) + 6);
  }
  uVar12 = uVar10 << (uVar7 & 0x3f);
  uVar7 = *puVar16;
  do {
    uVar13 = uVar7;
    if ((*(ulong *)(uVar13 + 8) & 0xfffffffffffffff8) == uVar10) {
      uVar7 = *(ulong *)(uVar13 + 0x10);
      if ((*(ulong *)(param_1 + 6) <= uVar7) && (*(ulong *)(param_1 + 6) <= uVar13)) {
        *(undefined8 **)(uVar7 + 0x18) = puVar6;
        *(undefined8 **)(uVar13 + 0x10) = puVar6;
        puVar6[6] = 0;
        puVar6[2] = uVar7;
        puVar6[3] = uVar13;
        return puVar11 + 2;
      }
      goto LAB_0014c358;
    }
    uVar7 = uVar12 >> 0x3c;
    uVar12 = uVar12 << 1;
    puVar16 = (ulong *)(uVar13 + (uVar7 & 8) + 0x20);
    uVar7 = *puVar16;
  } while (*puVar16 != 0);
  if (*(ulong **)(param_1 + 6) <= puVar16) {
    *puVar16 = (ulong)puVar6;
    puVar6[6] = uVar13;
    puVar6[2] = puVar6;
    puVar6[3] = puVar6;
    return puVar11 + 2;
  }
LAB_0014c358:
                    /* WARNING: Subroutine does not return */
  abort();
}


