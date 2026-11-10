/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055e598; name: FUN_0055e598
 */


undefined2 *
FUN_0055e598(int param_1,undefined8 *param_2,uint param_3,undefined4 param_4,ulong param_5)

{
  undefined2 uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined2 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar1 = (undefined2)param_4;
  if (param_3 == 0) {
    puVar13 = (undefined2 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (param_1 == 6) {
      if (puVar13 == (undefined2 *)0x0) {
        return (undefined2 *)0x0;
      }
      puVar13[1] = uVar1;
      *puVar13 = 1;
      puVar13[2] = 1;
    }
    else {
      if (puVar13 == (undefined2 *)0x0) {
        return (undefined2 *)0x0;
      }
      puVar13[1] = uVar1;
      *puVar13 = 2;
      puVar13[2] = 1;
    }
    *(undefined8 *)(puVar13 + 7) = 0;
    *(undefined8 *)(puVar13 + 3) = 0;
    puVar13[0x13] = 0;
    *(undefined8 *)(puVar13 + 0xf) = 0;
    *(undefined8 *)(puVar13 + 0xb) = 0;
    return puVar13;
  }
  uVar14 = (ulong)param_3;
  if (param_3 == 1) {
    return (undefined2 *)*param_2;
  }
  puVar5 = param_2;
  puVar15 = (undefined8 *)0x0;
  if ((param_1 == 6) && ((param_5 & 1) != 0)) {
    uVar12 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3;
    puVar5 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
    memmove(puVar5,param_2,uVar12);
                    /* try { // try from 0055e644 to 0055e653 has its CatchHandler @ 0055e9b8 */
    uVar4 = FUN_00563390(puVar5,uVar14,param_4);
    uVar14 = (ulong)uVar4;
    puVar15 = puVar5;
    if (uVar4 == 1) {
      puVar13 = (undefined2 *)*puVar5;
      goto joined_r0x0055e7b4;
    }
  }
  uVar4 = (uint)uVar14;
  if ((int)uVar4 < 0x10000) {
    puVar13 = (undefined2 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (puVar13 != (undefined2 *)0x0) {
      *(char *)puVar13 = (char)param_1;
      *(undefined1 *)((long)puVar13 + 1) = 0;
      puVar13[1] = uVar1;
      puVar13[2] = 1;
      puVar13[0x13] = 0;
      *(undefined8 *)(puVar13 + 7) = 0;
      *(undefined8 *)(puVar13 + 3) = 0;
      *(undefined8 *)(puVar13 + 0xf) = 0;
      *(undefined8 *)(puVar13 + 0xb) = 0;
    }
    if ((int)uVar4 < 0) {
                    /* try { // try from 0055e964 to 0055e987 has its CatchHandler @ 0055e988 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("n >= 0 && static_cast<uint16_t>(n) == n",
                    "external/com_github_google_re2\\re2/regexp.h",0x202,"AllocSub");
    }
    if (1 < (int)uVar4) {
      uVar6 = FUN_002e2ec0(PTR_FUN_04373078,-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3);
      *(undefined8 *)(puVar13 + 4) = uVar6;
    }
    puVar11 = (undefined8 *)(puVar13 + 4);
    puVar13[3] = (short)uVar14;
    if (1 < (uVar4 & 0xffff)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    if (0 < (int)uVar4) {
      if ((uVar4 < 8) || ((puVar11 < puVar5 + uVar14 && (puVar5 < puVar11 + uVar14)))) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar14 & 0xfffffff8;
        puVar8 = puVar11 + 4;
        puVar9 = puVar5 + 4;
        uVar10 = uVar12;
        do {
          uVar6 = puVar9[-4];
          uVar17 = puVar9[-1];
          uVar16 = puVar9[-2];
          uVar10 = uVar10 - 8;
          uVar19 = puVar9[1];
          uVar18 = *puVar9;
          uVar21 = puVar9[3];
          uVar20 = puVar9[2];
          puVar8[-3] = puVar9[-3];
          puVar8[-4] = uVar6;
          puVar8[-1] = uVar17;
          puVar8[-2] = uVar16;
          puVar8[1] = uVar19;
          *puVar8 = uVar18;
          puVar8[3] = uVar21;
          puVar8[2] = uVar20;
          puVar8 = puVar8 + 8;
          puVar9 = puVar9 + 8;
        } while (uVar10 != 0);
        if (uVar12 == uVar14) goto joined_r0x0055e7b4;
      }
      uVar3 = uVar12;
      for (uVar10 = uVar14 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        puVar11[uVar3] = puVar5[uVar3];
        uVar3 = uVar3 + 1;
      }
      if (2 < ~uVar12 + uVar14) {
        lVar7 = uVar14 - uVar3;
        puVar11 = puVar11 + uVar3 + 2;
        puVar5 = puVar5 + uVar3 + 2;
        do {
          puVar11[-2] = puVar5[-2];
          puVar11[-1] = puVar5[-1];
          *puVar11 = *puVar5;
          puVar8 = puVar5 + 1;
          lVar7 = lVar7 + -4;
          puVar5 = puVar5 + 4;
          puVar11[1] = *puVar8;
          puVar11 = puVar11 + 4;
        } while (lVar7 != 0);
      }
    }
  }
  else {
    puVar13 = (undefined2 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (puVar13 != (undefined2 *)0x0) {
      *(char *)puVar13 = (char)param_1;
      *(undefined1 *)((long)puVar13 + 1) = 0;
      puVar13[1] = uVar1;
      puVar13[2] = 1;
      puVar13[0x13] = 0;
      *(undefined8 *)(puVar13 + 7) = 0;
      *(undefined8 *)(puVar13 + 3) = 0;
      *(undefined8 *)(puVar13 + 0xf) = 0;
      *(undefined8 *)(puVar13 + 0xb) = 0;
    }
    if ((int)(uVar4 + 0xfffe) < -0xfffe) {
                    /* try { // try from 0055e944 to 0055e963 has its CatchHandler @ 0055e998 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("n >= 0 && static_cast<uint16_t>(n) == n",
                    "external/com_github_google_re2\\re2/regexp.h",0x202,"AllocSub");
    }
    uVar2 = (int)(uVar4 + 0xfffe) / 0xffff;
    uVar6 = FUN_002e2ec0(PTR_FUN_04373078,
                         -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
    puVar11 = (undefined8 *)(puVar13 + 4);
    *puVar11 = uVar6;
    puVar13[3] = (short)uVar2;
    if (1 < (uVar2 & 0xffff)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    uVar14 = (long)(int)uVar2 - 1;
    if (0 < (int)uVar14) {
      puVar8 = puVar5;
      puVar9 = puVar11;
      uVar12 = uVar14;
      do {
                    /* try { // try from 0055e760 to 0055e777 has its CatchHandler @ 0055e9cc */
        uVar6 = FUN_0055e598(param_1,puVar8,0xffff,param_4,0);
        puVar8 = puVar8 + 0xffff;
        uVar12 = uVar12 - 1;
        *puVar9 = uVar6;
        puVar9 = puVar9 + 1;
      } while (uVar12 != 0);
    }
    lVar7 = (-(uVar14 >> 0x1f & 1) & 0xffff000000000000 | uVar14 * 0x10000 & 0xffffffff0000) -
            (long)(int)uVar14;
                    /* try { // try from 0055e79c to 0055e7ab has its CatchHandler @ 0055e9a8 */
    uVar6 = FUN_0055e598(param_1,puVar5 + lVar7,uVar4 - (int)lVar7,param_4,0);
    puVar11[uVar14] = uVar6;
  }
joined_r0x0055e7b4:
  if (puVar15 != (undefined8 *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,puVar15);
  }
  return puVar13;
}


