/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055342c; name: FUN_0055342c
 */


void FUN_0055342c(long param_1)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  
  puVar13 = *(uint **)(param_1 + 0x440);
  if (puVar13 != *(uint **)(param_1 + 0x448)) {
    uVar5 = *puVar13;
    uVar3 = puVar13[1];
    do {
      uVar6 = (ulong)uVar5;
      if (0 < (int)uVar5) {
        uVar7 = uVar5 - 1;
        if (0x100 < (int)uVar5) goto LAB_0055371c;
        uVar8 = (ulong)(uVar7 >> 6 & 3);
        uVar10 = *(ulong *)(param_1 + uVar8 * 8);
        uVar12 = 1L << ((ulong)uVar7 & 0x3f);
        if ((uVar10 & uVar12) == 0) {
          *(ulong *)(param_1 + uVar8 * 8) = uVar10 | uVar12;
          if (0xff < (int)uVar5) goto LAB_0055375c;
          uVar10 = (ulong)(uVar5 >> 6) & 3;
          uVar8 = *(ulong *)(param_1 + uVar10 * 8) & -1L << (uVar6 & 0x3f);
          iVar11 = (int)uVar10;
          if (uVar8 != 0) {
            uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar9 = (int)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + iVar11 * 0x40;
            goto LAB_005534d8;
          }
          if (iVar11 == 2) {
LAB_005536ac:
            uVar8 = *(ulong *)(param_1 + 0x18);
            if (uVar8 == 0) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
              uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              uVar9 = (int)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + 0xc0;
            }
          }
          else if (iVar11 == 1) {
LAB_00553694:
            uVar8 = *(ulong *)(param_1 + 0x10);
            if (uVar8 == 0) goto LAB_005536ac;
            uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
            uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
            uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
            uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
            uVar9 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0x80;
          }
          else {
            uVar9 = 0xffffffff;
            if (iVar11 == 0) {
              uVar8 = *(ulong *)(param_1 + 8);
              if (uVar8 == 0) goto LAB_00553694;
              uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
              uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              uVar9 = (int)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + 0x40;
            }
          }
LAB_005534d8:
          *(undefined4 *)(param_1 + 0x20 + (long)(int)uVar7 * 4) =
               *(undefined4 *)(param_1 + 0x20 + (long)(int)uVar9 * 4);
        }
      }
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(c) >= (0)","external/com_github_google_re2\\re2/bitmap256.h",0x20,"Test");
      }
      if (0xff < (int)uVar3) {
LAB_0055371c:
                    /* WARNING: Subroutine does not return */
        __assert_fail("(c) <= (255)","external/com_github_google_re2\\re2/bitmap256.h",0x21,"Test");
      }
      uVar8 = (ulong)(uVar3 >> 6) & 3;
      uVar10 = *(ulong *)(param_1 + uVar8 * 8);
      uVar12 = 1L << ((ulong)uVar3 & 0x3f);
      if ((uVar10 & uVar12) != 0) goto LAB_00553580;
      *(ulong *)(param_1 + uVar8 * 8) = uVar10 | uVar12;
      uVar8 = (ulong)uVar3 + 1;
      if (0xff < (int)uVar8) {
LAB_0055375c:
                    /* WARNING: Subroutine does not return */
        __assert_fail("(c) <= (255)","external/com_github_google_re2\\re2/bitmap256.h",0x57,
                      "FindNextSetBit");
      }
      uVar10 = uVar8 >> 6 & 3;
      uVar8 = *(ulong *)(param_1 + uVar10 * 8) & -1L << (uVar8 & 0x3f);
      iVar11 = (int)uVar10;
      if (uVar8 != 0) {
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar7 = (int)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + iVar11 * 0x40;
        goto LAB_0055353c;
      }
      if (iVar11 == 2) {
LAB_0055367c:
        uVar8 = *(ulong *)(param_1 + 0x18);
        if (uVar8 == 0) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar7 = (int)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + 0xc0;
        }
      }
      else if (iVar11 == 1) {
LAB_00553664:
        uVar8 = *(ulong *)(param_1 + 0x10);
        if (uVar8 == 0) goto LAB_0055367c;
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar7 = (uint)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | 0x80;
      }
      else {
        uVar7 = 0xffffffff;
        if (iVar11 == 0) {
          uVar8 = *(ulong *)(param_1 + 8);
          if (uVar8 == 0) goto LAB_00553664;
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar7 = (int)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) + 0x40;
        }
      }
LAB_0055353c:
      *(undefined4 *)(param_1 + 0x20 + (long)(int)uVar3 * 4) =
           *(undefined4 *)(param_1 + 0x20 + (long)(int)uVar7 * 4);
      while ((int)uVar5 < 0x100) {
        if ((int)(uint)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(c) >= (0)","external/com_github_google_re2\\re2/bitmap256.h",0x56,
                        "FindNextSetBit");
        }
        uVar5 = (uint)uVar6 >> 6 & 3;
        uVar6 = *(ulong *)(param_1 + (ulong)uVar5 * 8) & -1L << (uVar6 & 0x3f);
        if (uVar6 != 0) {
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar7 = (int)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + uVar5 * 0x40;
          goto LAB_00553560;
        }
        if (uVar5 == 2) {
LAB_005535e8:
          uVar8 = *(ulong *)(param_1 + 0x18);
          uVar6 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar7 = 0xffffffff;
          if (uVar8 != 0) {
            uVar7 = (int)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + 0xc0;
          }
        }
        else if (uVar5 == 1) {
LAB_005535d0:
          uVar6 = *(ulong *)(param_1 + 0x10);
          if (uVar6 == 0) goto LAB_005535e8;
          uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar7 = (uint)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | 0x80;
        }
        else {
          uVar7 = 0xffffffff;
          if (uVar5 == 0) {
            uVar6 = *(ulong *)(param_1 + 8);
            if (uVar6 == 0) goto LAB_005535d0;
            uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
            uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar7 = (int)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) + 0x40;
          }
        }
LAB_00553560:
        lVar1 = param_1 + (long)(int)uVar7 * 4;
        uVar4 = FUN_0055377c(param_1,*(undefined4 *)(lVar1 + 0x20));
        uVar6 = (ulong)(uVar7 + 1);
        *(undefined4 *)(lVar1 + 0x20) = uVar4;
        if (uVar7 == uVar3) break;
LAB_00553580:
        uVar5 = (uint)uVar6;
      }
      puVar2 = puVar13 + 2;
      if (puVar2 == *(uint **)(param_1 + 0x448)) goto LAB_005536d4;
      uVar5 = *puVar2;
      uVar3 = puVar13[3];
      puVar13 = puVar2;
    } while( true );
  }
LAB_005536d8:
  *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_1 + 0x428);
  *(uint **)(param_1 + 0x448) = puVar13;
  return;
LAB_005536d4:
  puVar13 = *(uint **)(param_1 + 0x440);
  goto LAB_005536d8;
}


