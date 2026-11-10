/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043c880; name: FUN_0043c880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0043c880(long *param_1,undefined8 param_2,uint param_3,char *param_4,ulong param_5,
                  long param_6)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
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
  
  if ((6 < param_3) || ((1 << (ulong)(param_3 & 0x1f) & 0x54U) == 0)) {
    uVar8 = 0x68;
    uVar9 = 0x7e;
LAB_0043c958:
    FUN_004014b0(0x10,0xa1,uVar8,"external/openssl/crypto/ec/ec2_oct.c",uVar9);
    lVar6 = 0;
    goto LAB_0043c960;
  }
  iVar4 = FUN_0042ed00();
  if (iVar4 != 0) {
    if (param_4 == (char *)0x0) {
      return 1;
    }
    if (param_5 == 0) {
      FUN_004014b0(0x10,0xa1,100,"external/openssl/crypto/ec/ec2_oct.c",0x86);
      return 0;
    }
    *param_4 = '\0';
    return 1;
  }
  iVar4 = FUN_0042e580(param_1);
  uVar1 = iVar4 + 0xe;
  if (-1 < (int)(iVar4 + 7U)) {
    uVar1 = iVar4 + 7U;
  }
  lVar12 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  uVar2 = lVar12 << 1 | 1;
  if (param_3 == 2) {
    uVar2 = lVar12 + 1;
  }
  if (param_4 == (char *)0x0) {
    lVar6 = 0;
    goto LAB_0043c99c;
  }
  if (param_5 < uVar2) {
    uVar8 = 100;
    uVar9 = 0x97;
    goto LAB_0043c958;
  }
  if (param_6 == 0) {
    lVar6 = FUN_0040de30();
    param_6 = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
  }
  else {
    lVar6 = 0;
  }
  FUN_0040e090(param_6);
  uVar8 = FUN_0040e240(param_6);
  uVar9 = FUN_0040e240(param_6);
  lVar7 = FUN_0040e240(param_6);
  if ((lVar7 != 0) && (iVar4 = FUN_0042ebc0(param_1,param_2,uVar8,uVar9,param_6), iVar4 != 0)) {
    *param_4 = (char)param_3;
    if ((param_3 != 4) && (iVar4 = FUN_0040c130(uVar8), iVar4 == 0)) {
      iVar4 = (**(code **)(*param_1 + 0x118))(param_1,lVar7,uVar9,uVar8,param_6);
      if (iVar4 == 0) goto LAB_0043cd60;
      iVar4 = FUN_0040d2b0(lVar7);
      if (iVar4 != 0) {
        *param_4 = *param_4 + '\x01';
      }
    }
    uVar1 = (int)uVar1 >> 3;
    iVar5 = FUN_0040c070(uVar8);
    iVar4 = iVar5 + 0xe;
    if (-1 < iVar5 + 7) {
      iVar4 = iVar5 + 7;
    }
    uVar3 = uVar1 - (iVar4 >> 3);
    if (uVar1 < (uint)(iVar4 >> 3)) {
      uVar8 = 0xb8;
    }
    else {
      uVar15 = lVar12 + 1;
      if (uVar3 == 0) {
        lVar12 = 1;
      }
      else {
        uVar14 = (ulong)(int)uVar3;
        memset(param_4 + 1,0,uVar14);
        if (uVar3 < 8) {
          lVar12 = 1;
          uVar13 = uVar14;
        }
        else {
          uVar10 = uVar14 & 0xfffffffffffffff8;
          uVar13 = (uVar10 - 8 >> 3) + 1;
          uVar11 = uVar13 & 1;
          lVar12 = _DAT_038894b0;
          lVar7 = _UNK_038894b8;
          if (uVar10 - 8 == 0) {
            lVar16 = 0;
            lVar18 = 0;
            lVar22 = 0;
            lVar20 = 0;
            lVar17 = 0;
            lVar24 = 0;
          }
          else {
            lVar16 = 0;
            lVar18 = 0;
            lVar22 = 0;
            lVar20 = 0;
            lVar17 = 0;
            lVar24 = 0;
            lVar19 = uVar13 - uVar11;
            do {
              lVar12 = lVar12 + 2;
              lVar7 = lVar7 + 2;
              lVar16 = lVar16 + 2;
              lVar18 = lVar18 + 2;
              lVar19 = lVar19 + -2;
              lVar20 = lVar20 + 2;
              lVar22 = lVar22 + 2;
              lVar24 = lVar24 + 2;
              lVar17 = lVar17 + 2;
            } while (lVar19 != 0);
          }
          uVar13 = uVar14 - uVar10;
          if (uVar11 != 0) {
            lVar24 = lVar24 + 1;
            lVar17 = lVar17 + 1;
            lVar20 = lVar20 + 1;
            lVar22 = lVar22 + 1;
            lVar16 = lVar16 + 1;
            lVar18 = lVar18 + 1;
            lVar12 = lVar12 + 1;
            lVar7 = lVar7 + 1;
          }
          lVar12 = lVar24 + lVar20 + lVar16 + lVar12 + lVar17 + lVar22 + lVar18 + lVar7;
          if (uVar10 == uVar14) goto LAB_0043cbac;
        }
        do {
          lVar12 = lVar12 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
LAB_0043cbac:
      iVar4 = FUN_0040caa0(uVar8,param_4 + lVar12);
      if (lVar12 + iVar4 == uVar15) {
        if ((param_3 | 2) == 6) {
          iVar5 = FUN_0040c070(uVar9);
          iVar4 = iVar5 + 0xe;
          if (-1 < iVar5 + 7) {
            iVar4 = iVar5 + 7;
          }
          uVar3 = uVar1 - (iVar4 >> 3);
          if (uVar1 < (uint)(iVar4 >> 3)) {
            uVar8 = 0xca;
            goto LAB_0043cd58;
          }
          if (uVar3 != 0) {
            uVar13 = (ulong)(int)uVar3;
            memset(param_4 + uVar15,0,uVar13);
            uVar14 = uVar13;
            if (7 < uVar3) {
              lVar12 = 0;
              uVar10 = uVar13 & 0xfffffffffffffff8;
              uVar14 = (uVar10 - 8 >> 3) + 1;
              uVar11 = uVar14 & 1;
              if (uVar10 - 8 == 0) {
                uVar14 = uVar13 - uVar10;
                lVar7 = 1;
                lVar16 = 1;
                lVar18 = 1;
                lVar20 = 1;
                lVar22 = 1;
                lVar24 = 1;
LAB_0043ccdc:
                lVar27 = lVar24;
                lVar25 = lVar22;
                lVar23 = lVar20;
                lVar21 = lVar18;
                lVar19 = lVar16;
                lVar17 = lVar7;
                uVar15 = uVar15 + 1;
                lVar12 = lVar12 + 1;
              }
              else {
                lVar7 = uVar14 - uVar11;
                lVar17 = 0;
                lVar19 = 0;
                lVar21 = 0;
                lVar23 = 0;
                lVar25 = 0;
                lVar27 = 0;
                do {
                  lVar26 = lVar27;
                  lVar24 = lVar25;
                  lVar22 = lVar23;
                  lVar20 = lVar21;
                  lVar18 = lVar19;
                  lVar16 = lVar17;
                  lVar7 = lVar7 + -2;
                  uVar15 = uVar15 + 2;
                  lVar12 = lVar12 + 2;
                  lVar17 = lVar16 + 2;
                  lVar19 = lVar18 + 2;
                  lVar21 = lVar20 + 2;
                  lVar23 = lVar22 + 2;
                  lVar25 = lVar24 + 2;
                  lVar27 = lVar26 + 2;
                } while (lVar7 != 0);
                uVar14 = uVar13 - uVar10;
                lVar7 = lVar16 + 3;
                lVar16 = lVar18 + 3;
                lVar18 = lVar20 + 3;
                lVar20 = lVar22 + 3;
                lVar22 = lVar24 + 3;
                lVar24 = lVar26 + 3;
                if (uVar11 != 0) goto LAB_0043ccdc;
              }
              uVar15 = lVar25 + lVar21 + lVar17 + uVar15 + lVar27 + lVar23 + lVar19 + lVar12;
              if (uVar10 == uVar13) goto LAB_0043cd1c;
            }
            do {
              uVar15 = uVar15 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
LAB_0043cd1c:
          iVar4 = FUN_0040caa0(uVar9,param_4 + uVar15);
          uVar15 = uVar15 + (long)iVar4;
        }
        if (uVar15 == uVar2) {
          FUN_0040e1b0(param_6);
LAB_0043c99c:
          FUN_0040def0(lVar6);
          return uVar2;
        }
        uVar8 = 0xd6;
      }
      else {
        uVar8 = 0xc2;
      }
    }
LAB_0043cd58:
    FUN_004014b0(0x10,0xa1,0x44,"external/openssl/crypto/ec/ec2_oct.c",uVar8);
  }
LAB_0043cd60:
  FUN_0040e1b0(param_6);
LAB_0043c960:
  FUN_0040def0(lVar6);
  return 0;
}


