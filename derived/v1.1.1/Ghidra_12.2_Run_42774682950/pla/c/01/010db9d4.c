/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010db9d4; name: FUN_010db9d4
 */


undefined4 FUN_010db9d4(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  ulong uVar10;
  short *psVar11;
  ulong uVar12;
  ulong uVar13;
  short *psVar14;
  undefined4 local_74;
  
  uVar9 = FUN_010dac08();
  if (param_2 == 0) {
    lVar1 = param_1 + 0x68;
  }
  else if (param_2 == 1) {
    lVar1 = param_1 + 0xaf4;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    lVar1 = param_1 + 0xc84;
  }
  if (uVar9 == 0) {
    return 0;
  }
  local_74 = 0;
  iVar7 = uVar9 - 1;
  psVar14 = (short *)(lVar1 + 6);
  uVar13 = 0;
  do {
    uVar2 = uVar13 + 1;
    if (uVar2 < uVar9) {
      psVar3 = (short *)(lVar1 + uVar13 * 4);
      if (param_2 == 0) {
        psVar11 = psVar14;
        uVar12 = uVar13;
        do {
          if (*psVar3 == psVar11[-1]) {
            if (*psVar3 != 0) {
              sVar8 = FUN_010db8e8(param_1,psVar11[-1],*psVar11,uVar13 & 0xffffffff);
              *psVar11 = sVar8;
              if (sVar8 == 0) {
                psVar11[-1] = 0;
              }
LAB_010dbc4c:
              local_74 = 1;
            }
          }
          else {
            uVar10 = FUN_0111ea04();
            if ((uVar10 & 1) == 0) {
              uVar10 = FUN_010dac08(uVar10,0);
              local_74 = 1;
              if ((uVar13 < (uVar10 & 0xffffffff)) && (uVar12 + 1 < (uVar10 & 0xffffffff))) {
                lVar4 = param_1 + uVar13 * 4;
                lVar5 = param_1 + uVar12 * 4;
                uVar6 = *(undefined4 *)(lVar4 + 0x68);
                *(undefined4 *)(lVar4 + 0x68) = *(undefined4 *)(lVar5 + 0x6c);
                *(undefined4 *)(lVar5 + 0x6c) = uVar6;
                goto LAB_010dbc4c;
              }
            }
          }
          uVar12 = uVar12 + 1;
          psVar11 = psVar11 + 2;
        } while (iVar7 != (int)uVar12);
      }
      else {
        psVar11 = psVar14;
        uVar12 = uVar13;
        if (param_2 == 1) {
          do {
            if (*psVar3 == psVar11[-1]) {
              if (*psVar3 != 0) {
                sVar8 = FUN_010db8e8(param_1,psVar11[-1],*psVar11,uVar13 & 0xffffffff);
                *psVar11 = sVar8;
                if (sVar8 == 0) {
                  psVar11[-1] = 0;
                }
                goto LAB_010dbb3c;
              }
            }
            else {
              uVar10 = FUN_0111ea04();
              if ((((uVar10 & 1) == 0) && (local_74 = 1, uVar13 < 100)) && (uVar12 + 1 < 100)) {
                lVar4 = param_1 + uVar13 * 4;
                lVar5 = param_1 + uVar12 * 4;
                uVar6 = *(undefined4 *)(lVar4 + 0xaf4);
                *(undefined4 *)(lVar4 + 0xaf4) = *(undefined4 *)(lVar5 + 0xaf8);
                *(undefined4 *)(lVar5 + 0xaf8) = uVar6;
LAB_010dbb3c:
                local_74 = 1;
              }
            }
            uVar12 = uVar12 + 1;
            psVar11 = psVar11 + 2;
          } while (iVar7 != (int)uVar12);
        }
        else {
          do {
            if (*psVar3 == psVar11[-1]) {
              if (*psVar3 != 0) {
                sVar8 = FUN_010db8e8(param_1,psVar11[-1],*psVar11,uVar13 & 0xffffffff);
                *psVar11 = sVar8;
                if (sVar8 == 0) {
                  psVar11[-1] = 0;
                }
                goto LAB_010dbbc4;
              }
            }
            else {
              uVar10 = FUN_0111ea04();
              if ((uVar10 & 1) == 0) {
                uVar10 = FUN_010dac08(uVar10,param_2);
                if (param_2 == 2) {
                  local_74 = 1;
                  if (((uVar10 & 0xffffffff) <= uVar13) || ((uVar10 & 0xffffffff) <= uVar12 + 1))
                  goto LAB_010dbb4c;
                  lVar4 = param_1 + uVar13 * 4;
                  lVar5 = param_1 + uVar12 * 4;
                  uVar6 = *(undefined4 *)(lVar4 + 0xc84);
                  *(undefined4 *)(lVar4 + 0xc84) = *(undefined4 *)(lVar5 + 0xc88);
                  *(undefined4 *)(lVar5 + 0xc88) = uVar6;
                }
LAB_010dbbc4:
                local_74 = 1;
              }
            }
LAB_010dbb4c:
            uVar12 = uVar12 + 1;
            psVar11 = psVar11 + 2;
          } while (iVar7 != (int)uVar12);
        }
      }
    }
    psVar14 = psVar14 + 2;
    uVar13 = uVar2;
    if (uVar2 == uVar9) {
      return local_74;
    }
  } while( true );
}


