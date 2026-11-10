/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dd4b8; name: FUN_032dd4b8
 */


void FUN_032dd4b8(ulong *param_1)

{
  ulong *puVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  short *psVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  long *plVar14;
  
  uVar7 = *param_1;
  uVar6 = (uint)uVar7;
  if ((~uVar6 & 0x208000) != 0) {
    return;
  }
  uVar5 = (uVar6 & 0x1fffff) - (uVar6 >> 1 & 0x55555);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  if ((param_1[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] & 1) != 0) {
    return;
  }
  puVar10 = param_1;
  if ((uVar7 & 1) == 0) {
    puVar10 = (ulong *)param_1[1];
    bVar2 = (byte)*puVar10;
    while ((bVar2 & 1) == 0) {
      puVar10 = (ulong *)puVar10[1];
      bVar2 = (byte)*puVar10;
    }
  }
  if ((puVar10[2] & 0x1f) == 8) {
    puVar10 = param_1;
    if ((uVar6 >> 1 & 1) == 0) {
      do {
        puVar10 = (ulong *)puVar10[1];
        if (puVar10 == (ulong *)0x0) {
          return;
        }
      } while (((byte)*puVar10 >> 1 & 1) == 0);
    }
    puVar10 = (ulong *)puVar10[3];
    if (puVar10 == (ulong *)0x0) {
      return;
    }
    FUN_032dd4b8(puVar10);
    uVar7 = 0;
    do {
      uVar6 = (uint)*puVar10;
      if ((uVar6 >> 0x15 & 1) != 0) {
        uVar6 = (uVar6 & 0x1fffff) - (uVar6 >> 1 & 0x55555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar7 = puVar10[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] | uVar7
        ;
      }
    } while (((*puVar10 & 1) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
    if ((uVar7 & 1) == 0) {
      return;
    }
LAB_032dd8e4:
    uVar6 = (uint)*param_1;
    if ((uVar6 >> 0x15 & 1) == 0) {
      uVar7 = 1;
    }
    else {
      uVar6 = (uVar6 & 0x1fffff) - (uVar6 >> 1 & 0x55555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar7 = param_1[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] | 1;
    }
    puVar10 = (ulong *)FUN_032e1fa4(param_1,0x200000);
    *puVar10 = uVar7;
    return;
  }
  puVar10 = param_1;
  if ((uVar7 & 1) == 0) {
    puVar10 = (ulong *)param_1[1];
    bVar2 = (byte)*puVar10;
    while ((bVar2 & 1) == 0) {
      puVar10 = (ulong *)puVar10[1];
      bVar2 = (byte)*puVar10;
    }
  }
  if ((puVar10[2] & 0x1f) != 7) {
    return;
  }
  puVar13 = (ulong *)param_1[1];
  puVar10 = param_1;
  if (puVar13 != (ulong *)0x0) {
    FUN_032dd4b8(puVar13);
    uVar7 = 0;
    do {
      uVar6 = (uint)*puVar13;
      if ((uVar6 >> 0x15 & 1) != 0) {
        uVar6 = (uVar6 & 0x1fffff) - (uVar6 >> 1 & 0x55555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar7 = puVar13[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] | uVar7
        ;
      }
    } while (((*puVar13 & 1) == 0) && (puVar13 = (ulong *)puVar13[1], puVar13 != (ulong *)0x0));
    if ((uVar7 & 1) != 0) goto LAB_032dd8e4;
  }
  do {
    uVar6 = (uint)*puVar10;
    puVar13 = param_1;
    if ((uVar6 >> 0xe & 1) != 0) {
      if (puVar10 == (ulong *)0x0) goto LAB_032dd6b0;
      uVar6 = (uVar6 & 0x3fff) - (uVar6 >> 1 & 0x1555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      plVar11 = (long *)puVar10[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
      ;
      if (plVar11 == (long *)0x0) goto LAB_032dd6b0;
      lVar12 = *plVar11;
      if (lVar12 == 0) goto LAB_032dd6b0;
      plVar14 = plVar11 + 1;
      goto LAB_032dd74c;
    }
  } while (((*puVar10 & 1) == 0) &&
          (puVar1 = puVar10 + 1, puVar10 = (ulong *)*puVar1, (ulong *)*puVar1 != (ulong *)0x0));
  goto LAB_032dd7c4;
  while (plVar14 = plVar14 + 2, plVar14 != plVar11 + lVar12 * 2 + 1) {
LAB_032dd74c:
    FUN_032dd4b8(*plVar14);
    puVar10 = (ulong *)*plVar14;
    uVar7 = 0;
    do {
      uVar6 = (uint)*puVar10;
      if ((uVar6 >> 0x15 & 1) != 0) {
        uVar6 = (uVar6 & 0x1fffff) - (uVar6 >> 1 & 0x55555);
        uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
        uVar7 = puVar10[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] | uVar7
        ;
      }
    } while (((*puVar10 & 1) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
    if ((uVar7 & 1) != 0) goto LAB_032dd8e4;
  }
LAB_032dd7c4:
  uVar6 = (uint)*param_1;
  while ((uVar6 >> 0x17 & 1) == 0) {
    puVar10 = puVar13 + 1;
    puVar13 = (ulong *)*puVar10;
    if ((ulong *)*puVar10 == (ulong *)0x0) {
      return;
    }
LAB_032dd6b0:
    uVar6 = (uint)*puVar13;
  }
  uVar6 = (uVar6 & 0x7fffff) - (uVar6 >> 1 & 0x155555);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  psVar8 = (short *)puVar13[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
  if ((psVar8 != (short *)0x0) &&
     (sVar3 = *psVar8, sVar4 = psVar8[1], (long)sVar4 + (long)sVar3 != 0)) {
    plVar11 = (long *)(psVar8 + 4);
    do {
      puVar9 = (undefined8 *)*plVar11;
      uVar6 = (uint)*puVar9;
      if (((uVar6 >> 0x11 & 1) == 0) ||
         (uVar6 = (uVar6 & 0x1ffff) - (uVar6 >> 1 & 0x5555),
         uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333),
         ((uint)puVar9[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] >> 0x10
         & 1) == 0)) {
        puVar10 = (ulong *)puVar9[1];
        FUN_032dd4b8(puVar10);
        uVar7 = 0;
        do {
          uVar6 = (uint)*puVar10;
          if ((uVar6 >> 0x15 & 1) != 0) {
            uVar6 = (uVar6 & 0x1fffff) - (uVar6 >> 1 & 0x55555);
            uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
            uVar7 = puVar10[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] |
                    uVar7;
          }
        } while (((*puVar10 & 1) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
        if ((uVar7 & 1) != 0) goto LAB_032dd8e4;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != (long *)(psVar8 + ((long)sVar4 + (long)sVar3) * 4 + 4));
  }
  return;
}


