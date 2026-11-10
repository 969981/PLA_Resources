/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00411c90; name: FUN_00411c90
 */


ulong FUN_00411c90(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cl >= 0","external/openssl/crypto/bn/bn_mul.c",0x21,"nnopenssl_bn_sub_part_words"
                 );
  }
  uVar6 = FUN_0040f430();
  if (param_5 != 0) {
    piVar7 = (int *)(param_1 + (long)param_4 * 4);
    lVar9 = (long)param_4;
    uVar5 = (uint)uVar6;
    if (param_5 < 0) {
      iVar3 = *(int *)(param_3 + lVar9 * 4);
      iVar4 = iVar3 + uVar5;
      if (iVar3 != 0) {
        uVar5 = 1;
      }
      uVar6 = (ulong)uVar5;
      *piVar7 = -iVar4;
      if (param_5 != -1) {
        param_5 = param_5 + 4;
        piVar7 = (int *)(lVar9 * 4 + param_1 + 8);
        piVar10 = (int *)(lVar9 * 4 + param_3);
        do {
          uVar5 = (uint)uVar6;
          iVar4 = piVar10[1] + uVar5;
          if (piVar10[1] != 0) {
            uVar5 = 1;
          }
          piVar7[-1] = -iVar4;
          if (param_5 == 2) {
            return (ulong)uVar5;
          }
          iVar4 = piVar10[2] + uVar5;
          if (piVar10[2] != 0) {
            uVar5 = 1;
          }
          *piVar7 = -iVar4;
          if (-4 < param_5 + -4) {
            return (ulong)uVar5;
          }
          iVar4 = piVar10[3] + uVar5;
          if (piVar10[3] != 0) {
            uVar5 = 1;
          }
          piVar7[1] = -iVar4;
          if (-1 < param_5) {
            return (ulong)uVar5;
          }
          iVar3 = piVar10[4];
          iVar4 = iVar3 + uVar5;
          param_5 = param_5 + 4;
          if (iVar3 != 0) {
            uVar5 = 1;
          }
          uVar6 = (ulong)uVar5;
          piVar7[2] = -iVar4;
          piVar7 = piVar7 + 4;
          piVar10 = piVar10 + 4;
        } while (param_5 != 3);
      }
    }
    else {
      if (uVar5 == 0) {
        piVar10 = (int *)(param_2 + lVar9 * 4);
LAB_00411e4c:
        *piVar7 = *piVar10;
        iVar8 = param_5;
      }
      else {
        lVar9 = lVar9 * 4;
        iVar4 = param_5;
        do {
          iVar8 = iVar4 + -4;
          uVar5 = (uint)uVar6;
          iVar3 = *(int *)(param_2 + lVar9) - uVar5;
          if (*(int *)(param_2 + lVar9) != 0) {
            uVar5 = 0;
          }
          uVar6 = (ulong)uVar5;
          *(int *)(param_1 + lVar9) = iVar3;
          if (iVar4 < 2) {
            param_5 = iVar4 + -1;
            piVar7 = (int *)(param_1 + lVar9);
            piVar10 = (int *)(param_2 + lVar9);
            if (0 < param_5) {
              piVar7[1] = piVar10[1];
              param_5 = iVar4 + -2;
              if (2 < iVar4) {
                piVar7[2] = piVar10[2];
                if (iVar4 + -2 < 2) {
                  param_5 = iVar4 + -3;
                }
                else {
                  piVar7[3] = piVar10[3];
                  param_5 = iVar8;
                }
              }
              piVar10 = piVar10 + 4;
              piVar7 = piVar7 + 4;
            }
            if (param_5 < 1) {
              return uVar6;
            }
            goto LAB_00411e4c;
          }
          lVar1 = param_2 + lVar9;
          iVar3 = *(int *)(lVar1 + 4) - uVar5;
          lVar2 = param_1 + lVar9;
          if (*(int *)(lVar1 + 4) != 0) {
            uVar5 = 0;
          }
          *(int *)(lVar2 + 4) = iVar3;
          if (iVar8 == -2) {
            return (ulong)uVar5;
          }
          iVar3 = *(int *)(lVar1 + 8) - uVar5;
          if (*(int *)(lVar1 + 8) != 0) {
            uVar5 = 0;
          }
          uVar6 = (ulong)uVar5;
          *(int *)(lVar2 + 8) = iVar3;
          if (iVar4 < 4) {
            return uVar6;
          }
          iVar4 = *(int *)(lVar1 + 0xc) - uVar5;
          if (*(int *)(lVar1 + 0xc) != 0) {
            uVar5 = 0;
          }
          *(int *)(lVar2 + 0xc) = iVar4;
          if (iVar8 < 1) {
            return (ulong)uVar5;
          }
          param_2 = param_2 + 0x10;
          param_1 = param_1 + 0x10;
          iVar4 = iVar8;
        } while (uVar5 != 0);
        uVar6 = 0;
        piVar7 = (int *)(param_1 + lVar9);
        piVar10 = (int *)(param_2 + lVar9);
        *piVar7 = *piVar10;
      }
      if (iVar8 != 1) {
        piVar7 = piVar7 + 2;
        while( true ) {
          piVar7[-1] = piVar10[1];
          if (iVar8 == 2) break;
          iVar4 = iVar8 + -4;
          *piVar7 = piVar10[2];
          if (iVar8 < 4) {
            return uVar6;
          }
          piVar7[1] = piVar10[3];
          if (iVar4 < 1) {
            return uVar6;
          }
          piVar7[2] = piVar10[4];
          piVar7 = piVar7 + 4;
          iVar8 = iVar4;
          piVar10 = piVar10 + 4;
          if (iVar4 == 1) {
            return uVar6;
          }
        }
      }
    }
  }
  return uVar6;
}


