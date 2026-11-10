/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00556034; name: FUN_00556034
 */


void FUN_00556034(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar7 = *param_1;
  uVar5 = (uint)param_2;
  if (0 < (int)uVar5) {
    if (0x100 < (int)uVar5) goto LAB_005562f0;
    uVar9 = (long)(int)uVar5 - 1;
    uVar10 = (ulong)((uint)uVar9 >> 6 & 3);
    uVar11 = *(ulong *)(lVar7 + uVar10 * 8);
    uVar12 = 1L << (uVar9 & 0x3f);
    if ((uVar11 & uVar12) != 0) goto LAB_005560ac;
    *(ulong *)(lVar7 + uVar10 * 8) = uVar11 | uVar12;
    if (0xff < (int)uVar5) goto LAB_00556330;
    uVar6 = uVar5 >> 6 & 3;
    uVar10 = *(ulong *)(lVar7 + (ulong)uVar6 * 8) & -1L << (param_2 & 0x3f);
    if (uVar10 == 0) {
      if (uVar6 == 2) {
LAB_005562b0:
        uVar10 = *(ulong *)(lVar7 + 0x18);
        if (uVar10 != 0) {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar6 = (int)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + 0xc0;
          goto LAB_005560a0;
        }
      }
      else {
        if (uVar6 == 1) {
LAB_00556298:
          uVar10 = *(ulong *)(lVar7 + 0x10);
          if (uVar10 != 0) {
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar6 = (uint)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | 0x80;
            goto LAB_005560a0;
          }
          goto LAB_005562b0;
        }
        if (uVar6 == 0) {
          uVar10 = *(ulong *)(lVar7 + 8);
          if (uVar10 != 0) {
            uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar6 = (int)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + 0x40;
            goto LAB_005560a0;
          }
          goto LAB_00556298;
        }
      }
      uVar6 = 0xffffffff;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar6 = (int)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + uVar6 * 0x40;
    }
LAB_005560a0:
    *(undefined4 *)(param_1[1] + uVar9 * 4) = *(undefined4 *)(param_1[1] + (long)(int)uVar6 * 4);
  }
LAB_005560ac:
  uVar6 = (uint)param_3;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(c) >= (0)","external/com_github_google_re2\\re2/bitmap256.h",0x20,"Test");
  }
  if (0xff < (int)uVar6) {
LAB_005562f0:
                    /* WARNING: Subroutine does not return */
    __assert_fail("(c) <= (255)","external/com_github_google_re2\\re2/bitmap256.h",0x21,"Test");
  }
  uVar9 = (ulong)(uVar6 >> 6 & 3);
  uVar10 = *(ulong *)(lVar7 + uVar9 * 8);
  uVar11 = 1L << (param_3 & 0x3f);
  if ((uVar10 & uVar11) != 0) goto joined_r0x00556134;
  *(ulong *)(lVar7 + uVar9 * 8) = uVar10 | uVar11;
  uVar8 = uVar6 + 1;
  if (0xff < (int)uVar8) {
LAB_00556330:
                    /* WARNING: Subroutine does not return */
    __assert_fail("(c) <= (255)","external/com_github_google_re2\\re2/bitmap256.h",0x57,
                  "FindNextSetBit");
  }
  uVar4 = uVar8 >> 6 & 3;
  uVar9 = *(ulong *)(lVar7 + (ulong)uVar4 * 8) & -1L << ((ulong)uVar8 & 0x3f);
  if (uVar9 == 0) {
    if (uVar4 == 2) {
LAB_00556278:
      uVar9 = *(ulong *)(lVar7 + 0x18);
      if (uVar9 != 0) {
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = (int)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + 0xc0;
        goto LAB_0055611c;
      }
    }
    else {
      if (uVar4 == 1) {
LAB_00556260:
        uVar9 = *(ulong *)(lVar7 + 0x10);
        if (uVar9 != 0) {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar8 = (uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | 0x80;
          goto LAB_0055611c;
        }
        goto LAB_00556278;
      }
      if (uVar4 == 0) {
        uVar9 = *(ulong *)(lVar7 + 8);
        if (uVar9 != 0) {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar8 = (int)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + 0x40;
          goto LAB_0055611c;
        }
        goto LAB_00556260;
      }
    }
    uVar8 = 0xffffffff;
  }
  else {
    uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar8 = (int)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar4 * 0x40;
  }
LAB_0055611c:
  *(undefined4 *)(param_1[1] + (long)(int)uVar6 * 4) =
       *(undefined4 *)(param_1[1] + (long)(int)uVar8 * 4);
joined_r0x00556134:
  do {
    if (0xff < (int)uVar5) {
      return;
    }
    if ((int)(uint)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(c) >= (0)","external/com_github_google_re2\\re2/bitmap256.h",0x56,
                    "FindNextSetBit");
    }
    uVar5 = (uint)param_2 >> 6 & 3;
    uVar9 = *(ulong *)(lVar7 + (ulong)uVar5 * 8) & -1L << (param_2 & 0x3f);
    if (uVar9 != 0) {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = (ulong)((int)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + uVar5 * 0x40);
      goto LAB_00556148;
    }
    if (uVar5 == 2) {
LAB_005561e4:
      uVar10 = *(ulong *)(lVar7 + 0x18);
      uVar9 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar5 = 0xffffffff;
      if (uVar10 != 0) {
        uVar5 = (int)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + 0xc0;
      }
      uVar9 = (ulong)uVar5;
    }
    else if (uVar5 == 1) {
LAB_005561cc:
      uVar9 = *(ulong *)(lVar7 + 0x10);
      if (uVar9 == 0) goto LAB_005561e4;
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = (ulong)((uint)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | 0x80);
    }
    else {
      uVar9 = 0xffffffff;
      if (uVar5 == 0) {
        uVar9 = *(ulong *)(lVar7 + 8);
        if (uVar9 == 0) goto LAB_005561cc;
        uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = (ulong)((int)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + 0x40);
      }
    }
LAB_00556148:
    lVar1 = param_1[1];
    uVar10 = -(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2;
    iVar3 = *(int *)(lVar1 + uVar10);
    iVar2 = *(int *)param_1[2];
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    *(int *)param_1[2] = iVar3;
    uVar5 = (uint)uVar9 + 1;
    param_2 = (ulong)uVar5;
    *(undefined4 *)(lVar1 + uVar10) = *(undefined4 *)param_1[3];
    if ((uint)uVar9 == uVar6) {
      return;
    }
  } while( true );
}


