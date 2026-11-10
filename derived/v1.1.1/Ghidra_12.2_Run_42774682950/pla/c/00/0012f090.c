/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0012f090; name: FUN_0012f090
 */


long FUN_0012f090(long *param_1,long *param_2,int *param_3,int *param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong local_88 [5];
  
  uVar15 = param_1[3];
  uVar14 = param_2[3];
  puVar8 = (ulong *)*param_1;
  lVar7 = *param_2;
  lVar19 = 0x46 - uVar15;
  if (-1 < (long)(0x3f - uVar15)) {
    lVar19 = 0x3f - uVar15;
  }
  lVar13 = 0x46 - uVar14;
  if (-1 < (long)(0x3f - uVar14)) {
    lVar13 = 0x3f - uVar14;
  }
  uVar4 = (long)puVar8 - (lVar19 >> 3);
  lVar13 = lVar13 >> 3;
  uVar9 = lVar7 + lVar13;
  if (uVar9 < uVar4) {
    FUN_0010a430();
    if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
      (**(code **)PTR_PTR_043722f8)
                (0,"v:\\devel\\projects\\oodle2\\core\\newlz_offsets.cpp",0x4fd,
                 "OODLE ERROR : corruption : vb1_init <= vb2_init\n");
    }
    FUN_0010a450();
  }
  else {
    uVar16 = param_2[2];
    uVar17 = param_1[2];
    lVar19 = lVar7 - (long)puVar8;
    if (lVar19 < 0x21) {
      piVar6 = param_3;
    }
    else {
      piVar10 = param_3;
      do {
        if (param_4 < piVar10) {
          return -1;
        }
        uVar12 = (*puVar8 & 0xff00ff00ff00ff00) >> 8 | (*puVar8 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar17 = (uVar12 >> 0x20 | uVar12 << 0x20) >> (0x3f - uVar15 & 0x3f) | uVar17;
        if (uVar17 >> 0x33 == 0) {
          return -1;
        }
        uVar16 = *(ulong *)(lVar7 + -8) >> (0x3f - uVar14 & 0x3f) | uVar16;
        if (uVar16 >> 0x33 == 0) {
          return -1;
        }
        uVar2 = LZCOUNT(uVar17) << 1 | 1;
        uVar12 = uVar2 + 6;
        uVar1 = uVar12 + (uVar15 & 7);
        uVar11 = LZCOUNT(uVar16) << 1 | 1;
        puVar8 = (ulong *)((long)puVar8 + ((long)uVar15 >> 3));
        *piVar10 = (int)(uVar17 >> (0x3a - uVar2 & 0x3f)) + -0x40;
        piVar10[1] = (int)(uVar16 >> (0x3a - uVar11 & 0x3f)) + -0x40;
        uVar15 = *puVar8;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar12 = (uVar15 >> 0x20 | uVar15 << 0x20) >> (0x3f - uVar1 & 0x3f) |
                 uVar17 << (uVar12 & 0x3f);
        if (uVar12 >> 0x33 == 0) {
          return -1;
        }
        lVar7 = lVar7 - ((long)uVar14 >> 3);
        uVar11 = uVar11 + 6;
        uVar2 = uVar11 + (uVar14 & 7);
        uVar11 = *(ulong *)(lVar7 + -8) >> (0x3f - uVar2 & 0x3f) | uVar16 << (uVar11 & 0x3f);
        if (uVar11 >> 0x33 == 0) {
          return -1;
        }
        uVar3 = LZCOUNT(uVar12) << 1 | 1;
        puVar8 = (ulong *)((long)puVar8 + (uVar1 >> 3));
        lVar7 = lVar7 - (uVar2 >> 3);
        lVar19 = lVar7 - (long)puVar8;
        uVar14 = uVar3 + 6;
        uVar15 = uVar14 + (uVar1 & 7);
        uVar1 = LZCOUNT(uVar11) << 1 | 1;
        uVar17 = uVar12 << (uVar14 & 0x3f);
        uVar14 = uVar1 + 6;
        uVar16 = uVar11 << (uVar14 & 0x3f);
        piVar6 = piVar10 + 4;
        uVar14 = uVar14 + (uVar2 & 7);
        piVar10[2] = (int)(uVar12 >> (0x3a - uVar3 & 0x3f)) + -0x40;
        piVar10[3] = (int)(uVar11 >> (0x3a - uVar1 & 0x3f)) + -0x40;
        piVar10 = piVar6;
      } while (0x20 < lVar19);
      lVar13 = 0x46 - uVar14;
      if (-1 < (long)(0x3f - uVar14)) {
        lVar13 = 0x3f - uVar14;
      }
      lVar13 = lVar13 >> 3;
    }
    lVar5 = (long)puVar8 - uVar4;
    puVar18 = local_88;
    lVar7 = uVar9 - lVar7;
    if (7 < lVar5) {
      lVar5 = 8;
    }
    local_88[3] = 0;
    local_88[4] = 0;
    if (7 < lVar7) {
      lVar7 = 8;
    }
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[0] = 0;
    memcpy((void *)((long)puVar18 - lVar5),(void *)((long)puVar8 - lVar5),lVar19 + lVar7 + lVar5);
    if (piVar6 <= param_4) {
      lVar19 = (long)puVar18 + lVar19;
      uVar9 = lVar19 + lVar13;
      piVar6 = piVar6 + 1;
      while( true ) {
        uVar4 = (*puVar18 & 0xff00ff00ff00ff00) >> 8 | (*puVar18 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar17 = (uVar4 >> 0x20 | uVar4 << 0x20) >> (0x3f - uVar15 & 0x3f) | uVar17;
        puVar18 = (ulong *)((long)puVar18 + ((long)uVar15 >> 3));
        if (uVar17 >> 0x33 == 0) break;
        uVar12 = LZCOUNT(uVar17) << 1 | 1;
        uVar4 = uVar12 + 6;
        uVar15 = uVar4 + (uVar15 & 7);
        lVar7 = 0x46 - uVar15;
        if (-1 < (long)(0x3f - uVar15)) {
          lVar7 = 0x3f - uVar15;
        }
        uVar11 = (long)puVar18 - (lVar7 >> 3);
        if (uVar9 < uVar11) goto LAB_0012f3f0;
        piVar6[-1] = (int)(uVar17 >> (0x3a - uVar12 & 0x3f)) + -0x40;
        uVar12 = *(ulong *)(lVar19 + -8) >> (0x3f - uVar14 & 0x3f) | uVar16;
        lVar19 = lVar19 - ((long)uVar14 >> 3);
        if (uVar12 >> 0x33 == 0) {
          if (uVar11 <= lVar19 + (0x32 - (uVar14 & 7) >> 3)) {
            return -1;
          }
          goto joined_r0x0012f3f8;
        }
        uVar1 = LZCOUNT(uVar12) << 1 | 1;
        uVar16 = uVar1 + 6;
        uVar14 = uVar16 + (uVar14 & 7);
        lVar7 = 0x46 - uVar14;
        if (-1 < (long)(0x3f - uVar14)) {
          lVar7 = 0x3f - uVar14;
        }
        uVar9 = lVar19 + (lVar7 >> 3);
        if (uVar9 < uVar11) goto joined_r0x0012f3f8;
        uVar17 = uVar17 << (uVar4 & 0x3f);
        uVar16 = uVar12 << (uVar16 & 0x3f);
        piVar10 = piVar6 + 1;
        *piVar6 = (int)(uVar12 >> (0x3a - uVar1 & 0x3f)) + -0x40;
        piVar6 = piVar6 + 2;
        if (param_4 < piVar10) {
          return -1;
        }
      }
      if ((long)puVar18 - (0x32 - (uVar15 & 7) >> 3) <= uVar9) {
        return -1;
      }
LAB_0012f3f0:
      piVar6 = piVar6 + -1;
joined_r0x0012f3f8:
      if (param_4 < piVar6) {
        return -1;
      }
      lVar19 = (long)piVar6 - (long)param_3 >> 2;
      if (lVar19 != param_5 && param_5 != 0) {
        lVar19 = -1;
      }
      return lVar19;
    }
  }
  return -1;
}


