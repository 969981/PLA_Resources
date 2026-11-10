/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056c43c; name: FUN_0056c43c
 */


void FUN_0056c43c(long param_1,ulong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  byte abStack_59 [17];
  uint local_48;
  uint auStack_44 [17];
  
  do {
    auStack_44[0] = (uint)param_2;
    if ((int)param_3 < (int)auStack_44[0]) {
      return;
    }
    local_48 = param_3;
    if ((auStack_44[0] == 0x80) && (param_3 == 0x10ffff)) {
      FUN_0056c964(param_1);
      return;
    }
    if (((int)auStack_44[0] < 0x80) && (0x7f < (int)param_3)) {
      iVar7 = 0x7f;
      uVar12 = 0x80;
LAB_0056c508:
      FUN_0056c43c(param_1,param_2,iVar7,param_4 & 1);
    }
    else {
      if (((int)auStack_44[0] < 0x800) && (0x7ff < (int)param_3)) {
        iVar7 = 0x7ff;
        uVar12 = 0x800;
        goto LAB_0056c508;
      }
      if (((int)auStack_44[0] < 0x10000) && (0xffff < (int)param_3)) {
        iVar7 = 0xffff;
        uVar12 = 0x10000;
        goto LAB_0056c508;
      }
      if ((int)param_3 < 0x80) {
        uVar4 = FUN_0056b1a8(param_1,auStack_44[0] & 0xff,param_3 & 0xff,param_4 & 1);
        uVar1 = *(uint *)(param_1 + 0xa4);
        uVar8 = (uint)((ulong)uVar4 >> 0x20);
        uVar2 = uVar8;
        if ((uVar1 != 0) && (uVar2 = uVar1, uVar8 != 0)) {
          lVar9 = *(long *)(param_1 + 0x58);
          do {
            uVar11 = uVar1;
            uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8);
            if ((uVar11 & 1) == 0) {
              uVar1 = uVar1 >> 4;
            }
            else {
              if ((uVar1 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                              "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
              }
              uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4);
            }
          } while (uVar1 != 0);
          if ((uVar11 & 1) == 0) {
            lVar10 = (ulong)(uVar11 >> 1) * 8;
            uVar1 = *(uint *)(lVar9 + lVar10);
            *(uint *)(lVar9 + lVar10) = uVar1 & 8 | uVar8 << 4 | uVar1 & 7;
          }
          else {
            *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4) = uVar8;
          }
        }
        *(uint *)(param_1 + 0xa4) = uVar2;
        FUN_0056bd14(param_1,uVar4);
        return;
      }
      uVar12 = (ulong)(param_3 & 0xffffffc0);
      if ((auStack_44[0] & 0xffffffc0) == (param_3 & 0xffffffc0)) {
LAB_0056c5e8:
        uVar12 = (ulong)(param_3 & 0xfffff000);
        if ((auStack_44[0] & 0xfffff000) != (param_3 & 0xfffff000)) {
          if ((param_2 & 0xfff) != 0) {
            uVar1 = 0xfff;
            goto LAB_0056c728;
          }
          if ((~param_3 & 0xfff) != 0) goto LAB_0056c7fc;
        }
        uVar12 = (ulong)(param_3 & 0xfffc0000);
        if ((auStack_44[0] & 0xfffc0000) != (param_3 & 0xfffc0000)) {
          if ((param_2 & 0x3ffff) != 0) {
            uVar1 = 0x3ffff;
            goto LAB_0056c728;
          }
          if ((~param_3 & 0x3ffff) != 0) goto LAB_0056c7fc;
        }
        uVar1 = FUN_00550a10(abStack_59 + 5,auStack_44);
        uVar2 = FUN_00550a10(abStack_59 + 1,&local_48);
        if (uVar1 != uVar2) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(n) == (m)","external/com_github_google_re2/re2/compile.cc",0x2f2,
                        "AddRuneRangeUTF8");
        }
        if (*(char *)(param_1 + 0x50) == '\0') {
          uVar3 = 0;
          uVar12 = (ulong)(uVar1 - 1);
          if ((int)uVar1 < 1) goto LAB_0056c808;
          lVar9 = (long)(int)uVar1;
          break;
        }
        if (0 < (int)uVar1) {
          uVar12 = 0;
          uVar3 = 0;
LAB_0056c6a0:
          bVar6 = abStack_59[1];
          bVar5 = abStack_59[5];
          do {
            uVar3 = FUN_0056b7f0(param_1,bVar5,bVar6,0,uVar3);
            uVar13 = uVar12;
            while( true ) {
              uVar12 = uVar13 + 1;
              if (uVar1 == uVar12) goto LAB_0056c808;
              if (uVar12 == 0) goto LAB_0056c6a0;
              bVar6 = abStack_59[uVar13 + 6];
              if ((uVar1 - 1 != uVar12) && (bVar6 == abStack_59[uVar13 + 2])) break;
              uVar3 = FUN_0056b698(param_1,bVar6,abStack_59[uVar13 + 2],0);
              uVar13 = uVar12;
            }
            bVar5 = bVar6;
          } while( true );
        }
        uVar3 = 0;
        goto LAB_0056c808;
      }
      if ((param_2 & 0x3f) == 0) {
        if ((~param_3 & 0x3f) == 0) goto LAB_0056c5e8;
LAB_0056c7fc:
        iVar7 = (int)uVar12 + -1;
        goto LAB_0056c508;
      }
      uVar1 = 0x3f;
LAB_0056c728:
      uVar1 = uVar1 | auStack_44[0];
      FUN_0056c43c(param_1,param_2,uVar1,param_4 & 1);
      uVar12 = (ulong)(uVar1 + 1);
    }
    param_4 = param_4 & 1;
    param_2 = uVar12;
  } while( true );
LAB_0056c7a0:
  lVar10 = lVar9 + -1;
  if (uVar12 + 1 == lVar9) {
    bVar6 = abStack_59[uVar12 + 5];
    bVar5 = abStack_59[uVar12 + 1];
LAB_0056c7d0:
    uVar3 = FUN_0056b7f0(param_1,bVar6,bVar5,0);
  }
  else {
    bVar6 = abStack_59[lVar9 + 4];
    bVar5 = abStack_59[lVar9];
    if ((lVar9 != 1) && (bVar6 < bVar5)) goto LAB_0056c7d0;
    uVar3 = FUN_0056b698(param_1,bVar6,bVar5,0);
  }
  lVar9 = lVar10;
  if (lVar10 < 1) {
LAB_0056c808:
    FUN_0056bd14(param_1,uVar3);
    return;
  }
  goto LAB_0056c7a0;
}


