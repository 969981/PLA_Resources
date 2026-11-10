/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005538cc; name: FUN_005538cc
 */


/* WARNING: Removing unreachable block (ram,0x00553900) */

void FUN_005538cc(long param_1,long param_2,undefined4 *param_3)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  int __c;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  *(undefined4 *)(param_1 + 0x420) = 0;
  uVar10 = 0;
  do {
    uVar9 = (uint)uVar10;
    uVar2 = uVar9 >> 6 & 3;
    uVar5 = *(ulong *)(param_1 + (ulong)uVar2 * 8) & -1L << (uVar10 & 0x3f);
    if (uVar5 != 0) {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar8 = (int)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) + uVar2 * 0x40;
      goto LAB_00553930;
    }
    if (uVar2 == 2) {
LAB_00553a1c:
      uVar11 = *(ulong *)(param_1 + 0x18);
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar8 = 0xffffffff;
      if (uVar11 != 0) {
        uVar8 = (int)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) + 0xc0;
      }
    }
    else if (uVar2 == 1) {
LAB_00553a04:
      uVar5 = *(ulong *)(param_1 + 0x10);
      if (uVar5 == 0) goto LAB_00553a1c;
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar8 = (uint)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | 0x80;
    }
    else {
      uVar8 = 0xffffffff;
      if (uVar2 == 0) {
        uVar5 = *(ulong *)(param_1 + 8);
        if (uVar5 == 0) goto LAB_00553a04;
        uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar8 = (int)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) + 0x40;
      }
    }
LAB_00553930:
    __c = FUN_0055377c(param_1,*(undefined4 *)(param_1 + (long)(int)uVar8 * 4 + 0x20));
    if ((int)uVar9 <= (int)uVar8) {
      uVar11 = (ulong)(int)uVar8;
      uVar10 = (ulong)(int)uVar9;
      uVar5 = uVar11;
      if ((long)uVar11 <= (long)uVar10) {
        uVar5 = uVar10;
      }
      uVar5 = (uVar5 - uVar10) + 1;
      memset((void *)(param_2 + uVar10),__c,uVar5);
      if (3 < uVar5) {
        uVar4 = uVar5 & 0xfffffffffffffffc;
        uVar1 = (uVar4 - 4 >> 2) + 1;
        uVar6 = uVar1 & 7;
        if (0x1b < uVar4 - 4) {
          lVar7 = uVar6 - uVar1;
          do {
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        uVar10 = uVar4 + uVar10;
        if (uVar6 != 0) {
          lVar7 = -uVar6;
          do {
            bVar3 = lVar7 != -1;
            lVar7 = lVar7 + 1;
          } while (bVar3);
        }
        if (uVar5 == uVar4) goto LAB_00553904;
      }
      uVar5 = uVar10;
      do {
        uVar10 = uVar5 + 1;
        bVar3 = (long)uVar5 < (long)uVar11;
        uVar5 = uVar10;
      } while (bVar3);
    }
LAB_00553904:
    if (0xff < (int)uVar10) {
      *param_3 = *(undefined4 *)(param_1 + 0x420);
      return;
    }
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(c) >= (0)","external/com_github_google_re2\\re2/bitmap256.h",0x56,
                    "FindNextSetBit");
    }
  } while( true );
}


