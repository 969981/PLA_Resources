/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ef3ec; name: FUN_001ef3ec
 */


int FUN_001ef3ec(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  char *__s1;
  
  FUN_001e3920(param_2);
  if (param_3 == (long *)0x0) {
    iVar1 = 0;
  }
  else {
    lVar2 = FUN_001e3f70(param_1);
    if (lVar2 == 0) {
LAB_001ef658:
      iVar1 = 0x1b;
    }
    else {
      iVar1 = FUN_001e3fec(param_2,lVar2);
      if (iVar1 == 0) {
        uVar6 = *(undefined8 *)PTR_stdin_04372360;
        iVar10 = iVar1;
        do {
          lVar4 = lVar2;
          iVar1 = iVar10;
          if (param_3[9] != 0) {
            lVar3 = FUN_001e3ff4(lVar2);
            iVar1 = 0x1b;
            if (lVar3 != 0) {
              iVar1 = iVar10;
            }
            if ((iVar1 != 0) || (iVar1 = FUN_001ef698(lVar3,param_3[1],param_3[2]), iVar1 != 0))
            goto LAB_001ef664;
            lVar4 = FUN_001e3f70(param_1);
            if (lVar4 == 0) goto LAB_001ef658;
            iVar1 = FUN_001e3fec(lVar3,lVar4);
          }
          if (iVar1 == 0) {
            plVar9 = param_3;
            do {
              lVar3 = FUN_001e3ff4(lVar4);
              if (lVar3 == 0) {
                iVar1 = 0x1b;
                break;
              }
              iVar1 = FUN_001e4074(lVar3,plVar9[8],0);
              if (((iVar1 != 0) || ((plVar9[7] != 0 && (iVar1 = FUN_001e40ec(lVar3), iVar1 != 0))))
                 || ((param_3[9] == 0 &&
                     (iVar1 = FUN_001ef698(lVar3,param_3[1],param_3[2]), iVar1 != 0))))
              goto LAB_001ef664;
              uVar7 = param_3[10];
              lVar8 = 0x20;
              if ((uVar7 & 0x80) != 0) {
                lVar8 = 0x68;
              }
              lVar8 = *(long *)((long)param_3 + lVar8);
              if (lVar8 == 0) {
                lVar8 = -1;
              }
              if ((uVar7 & 3) == 0) {
                if (((uint)uVar7 >> 4 & 1) == 0) {
                  if (((uint)uVar7 >> 6 & 1) != 0) {
                    iVar1 = FUN_001e3edc(lVar3,lVar8,param_4,0,0,param_3[0xc]);
                    goto LAB_001ef600;
                  }
                  lVar5 = param_3[3];
                }
                else {
                  lVar5 = param_3[5];
                  lVar8 = param_3[6];
                  if (lVar8 == 0) {
                    lVar8 = -1;
                  }
                }
                iVar1 = FUN_001e3c70(lVar3,lVar5,lVar8);
LAB_001ef600:
                if (iVar1 != 0) goto LAB_001ef664;
              }
              else {
                __s1 = (char *)plVar9[3];
                iVar1 = strcmp(__s1,"-");
                if (iVar1 == 0) {
                  iVar1 = FUN_001e3edc(lVar3,0xffffffffffffffff,PTR_FUN_04372778,PTR_FUN_04372780,0,
                                       uVar6);
                }
                else {
                  iVar1 = FUN_001e3d5c(lVar3,__s1);
                }
                if (iVar1 != 0) goto LAB_001ef664;
                if ((*(byte *)(param_3 + 10) >> 1 & 1) != 0) {
                  iVar1 = FUN_001e419c(lVar3,0);
                  goto LAB_001ef600;
                }
              }
              if ((param_3[0xb] == 0) ||
                 ((param_3[9] == 0 && ((*(byte *)(param_3 + 10) & 0x51) == 0)))) {
                iVar1 = 0;
              }
              else {
                iVar1 = FUN_001e419c(lVar3);
                if (iVar1 != 0) break;
              }
              plVar9 = (long *)plVar9[9];
            } while (plVar9 != (long *)0x0);
          }
          param_3 = (long *)*param_3;
        } while ((param_3 != (long *)0x0) && (iVar10 = iVar1, iVar1 == 0));
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
LAB_001ef664:
    FUN_001e3920(param_2);
  }
  return iVar1;
}


