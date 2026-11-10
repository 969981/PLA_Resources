/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043d450; name: FUN_0043d450
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0043d450(long param_1,undefined8 param_2,uint param_3,undefined1 *param_4,ulong param_5,
                  long param_6)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  
  if ((6 < param_3) || ((1 << (ulong)(param_3 & 0x1f) & 0x54U) == 0)) {
    uVar7 = 0xa7;
    uVar6 = 0x68;
LAB_0043d528:
    FUN_004014b0(0x10,0x68,uVar6,"external/openssl/crypto/ec/ecp_oct.c",uVar7);
    lVar12 = 0;
    goto LAB_0043d530;
  }
  iVar3 = FUN_0042ed00();
  if (iVar3 != 0) {
    if (param_4 == (undefined1 *)0x0) {
      return 1;
    }
    if (param_5 == 0) {
      FUN_004014b0(0x10,0x68,100,"external/openssl/crypto/ec/ecp_oct.c",0xaf);
      return 0;
    }
    *param_4 = 0;
    return 1;
  }
  iVar3 = FUN_0040c070(*(undefined8 *)(param_1 + 0x40));
  uVar1 = iVar3 + 0xe;
  if (-1 < (int)(iVar3 + 7U)) {
    uVar1 = iVar3 + 7U;
  }
  lVar15 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  uVar2 = lVar15 << 1 | 1;
  if (param_3 == 2) {
    uVar2 = lVar15 + 1;
  }
  if (param_4 == (undefined1 *)0x0) {
    lVar12 = 0;
    goto LAB_0043d58c;
  }
  if (param_5 < uVar2) {
    uVar6 = 100;
    uVar7 = 0xc0;
    goto LAB_0043d528;
  }
  if (param_6 == 0) {
    param_6 = FUN_0040de30();
    lVar12 = param_6;
    if (param_6 == 0) {
      return 0;
    }
  }
  else {
    lVar12 = 0;
  }
  FUN_0040e090(param_6);
  uVar6 = FUN_0040e240(param_6);
  lVar5 = FUN_0040e240(param_6);
  if ((lVar5 != 0) && (iVar3 = FUN_0042ebc0(param_1,param_2,uVar6,lVar5,param_6), iVar3 != 0)) {
    uVar1 = (int)uVar1 >> 3;
    uVar8 = param_3;
    if (((param_3 | 4) == 6) && (iVar3 = FUN_0040d2b0(lVar5), iVar3 != 0)) {
      uVar8 = param_3 + 1;
    }
    *param_4 = (char)uVar8;
    iVar4 = FUN_0040c070(uVar6);
    iVar3 = iVar4 + 0xe;
    if (-1 < iVar4 + 7) {
      iVar3 = iVar4 + 7;
    }
    uVar8 = uVar1 - (iVar3 >> 3);
    if (uVar1 < (uint)(iVar3 >> 3)) {
      uVar6 = 0xde;
    }
    else {
      uVar16 = lVar15 + 1;
      if (uVar8 == 0) {
        lVar15 = 1;
      }
      else {
        uVar14 = (ulong)(int)uVar8;
        memset(param_4 + 1,0,uVar14);
        if (uVar8 < 8) {
          lVar15 = 1;
          uVar13 = uVar14;
        }
        else {
          uVar9 = uVar14 & 0xfffffffffffffff8;
          uVar13 = (uVar9 - 8 >> 3) + 1;
          uVar10 = uVar13 & 1;
          lVar15 = _DAT_038894b0;
          lVar11 = _UNK_038894b8;
          if (uVar9 - 8 == 0) {
            lVar17 = 0;
            lVar19 = 0;
            lVar23 = 0;
            lVar21 = 0;
            lVar18 = 0;
            lVar25 = 0;
          }
          else {
            lVar17 = 0;
            lVar19 = 0;
            lVar23 = 0;
            lVar21 = 0;
            lVar18 = 0;
            lVar25 = 0;
            lVar20 = uVar13 - uVar10;
            do {
              lVar15 = lVar15 + 2;
              lVar11 = lVar11 + 2;
              lVar17 = lVar17 + 2;
              lVar19 = lVar19 + 2;
              lVar20 = lVar20 + -2;
              lVar21 = lVar21 + 2;
              lVar23 = lVar23 + 2;
              lVar25 = lVar25 + 2;
              lVar18 = lVar18 + 2;
            } while (lVar20 != 0);
          }
          uVar13 = uVar14 - uVar9;
          if (uVar10 != 0) {
            lVar25 = lVar25 + 1;
            lVar18 = lVar18 + 1;
            lVar21 = lVar21 + 1;
            lVar23 = lVar23 + 1;
            lVar17 = lVar17 + 1;
            lVar19 = lVar19 + 1;
            lVar15 = lVar15 + 1;
            lVar11 = lVar11 + 1;
          }
          lVar15 = lVar25 + lVar21 + lVar17 + lVar15 + lVar18 + lVar23 + lVar19 + lVar11;
          if (uVar9 == uVar14) goto LAB_0043d744;
        }
        do {
          lVar15 = lVar15 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
LAB_0043d744:
      iVar3 = FUN_0040caa0(uVar6,param_4 + lVar15);
      if (lVar15 + iVar3 == uVar16) {
        if ((param_3 | 2) == 6) {
          iVar4 = FUN_0040c070(lVar5);
          iVar3 = iVar4 + 0xe;
          if (-1 < iVar4 + 7) {
            iVar3 = iVar4 + 7;
          }
          uVar8 = uVar1 - (iVar3 >> 3);
          if (uVar1 < (uint)(iVar3 >> 3)) {
            uVar6 = 0xf0;
            goto LAB_0043d8fc;
          }
          if (uVar8 != 0) {
            uVar13 = (ulong)(int)uVar8;
            memset(param_4 + uVar16,0,uVar13);
            uVar14 = uVar13;
            if (7 < uVar8) {
              lVar15 = 0;
              uVar9 = uVar13 & 0xfffffffffffffff8;
              uVar14 = (uVar9 - 8 >> 3) + 1;
              uVar10 = uVar14 & 1;
              if (uVar9 - 8 == 0) {
                uVar14 = uVar13 - uVar9;
                lVar11 = 1;
                lVar17 = 1;
                lVar19 = 1;
                lVar21 = 1;
                lVar23 = 1;
                lVar25 = 1;
LAB_0043d880:
                lVar28 = lVar25;
                lVar26 = lVar23;
                lVar24 = lVar21;
                lVar22 = lVar19;
                lVar20 = lVar17;
                lVar18 = lVar11;
                uVar16 = uVar16 + 1;
                lVar15 = lVar15 + 1;
              }
              else {
                lVar11 = uVar14 - uVar10;
                lVar18 = 0;
                lVar20 = 0;
                lVar22 = 0;
                lVar24 = 0;
                lVar26 = 0;
                lVar28 = 0;
                do {
                  lVar27 = lVar28;
                  lVar25 = lVar26;
                  lVar23 = lVar24;
                  lVar21 = lVar22;
                  lVar19 = lVar20;
                  lVar17 = lVar18;
                  lVar11 = lVar11 + -2;
                  uVar16 = uVar16 + 2;
                  lVar15 = lVar15 + 2;
                  lVar18 = lVar17 + 2;
                  lVar20 = lVar19 + 2;
                  lVar22 = lVar21 + 2;
                  lVar24 = lVar23 + 2;
                  lVar26 = lVar25 + 2;
                  lVar28 = lVar27 + 2;
                } while (lVar11 != 0);
                uVar14 = uVar13 - uVar9;
                lVar11 = lVar17 + 3;
                lVar17 = lVar19 + 3;
                lVar19 = lVar21 + 3;
                lVar21 = lVar23 + 3;
                lVar23 = lVar25 + 3;
                lVar25 = lVar27 + 3;
                if (uVar10 != 0) goto LAB_0043d880;
              }
              uVar16 = lVar26 + lVar22 + lVar18 + uVar16 + lVar28 + lVar24 + lVar20 + lVar15;
              if (uVar9 == uVar13) goto LAB_0043d8c0;
            }
            do {
              uVar16 = uVar16 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
LAB_0043d8c0:
          iVar3 = FUN_0040caa0(lVar5,param_4 + uVar16);
          uVar16 = uVar16 + (long)iVar3;
        }
        if (uVar16 == uVar2) {
          FUN_0040e1b0(param_6);
LAB_0043d58c:
          FUN_0040def0(lVar12);
          return uVar2;
        }
        uVar6 = 0xfc;
      }
      else {
        uVar6 = 0xe8;
      }
    }
LAB_0043d8fc:
    FUN_004014b0(0x10,0x68,0x44,"external/openssl/crypto/ec/ecp_oct.c",uVar6);
  }
  FUN_0040e1b0(param_6);
LAB_0043d530:
  FUN_0040def0(lVar12);
  return 0;
}


