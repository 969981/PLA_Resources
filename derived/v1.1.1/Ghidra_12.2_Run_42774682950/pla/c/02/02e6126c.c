/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6126c; name: FUN_02e6126c
 */


uint FUN_02e6126c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  local_70 = *param_2;
  local_6c = param_2[1];
  local_68 = param_2[2];
  if (*(int *)(param_4 + 0x38) == 0) {
    uVar3 = 1;
  }
  else {
    uVar4 = 0;
    uVar3 = 1;
    do {
      lVar7 = *(long *)(*(long *)(param_4 + 0x30) + uVar4 * 8);
      if (*(char *)(lVar7 + 0x80) == '\0') {
        iVar1 = FUN_02e4bb18(lVar7,&local_70);
        if (iVar1 < 0) {
          if (iVar1 == -1) {
            lVar5 = *(long *)(*(long *)(lVar7 + 0x70) + 0x38);
            if (lVar5 == param_4) {
              lVar5 = *(long *)(*(long *)(lVar7 + 0x78) + 0x38);
            }
            if (*(int *)(lVar5 + 0x38) != 0) {
              uVar6 = 0;
              do {
                lVar8 = *(long *)(*(long *)(lVar5 + 0x30) + uVar6 * 8);
                if ((lVar8 != lVar7 && *(char *)(lVar8 + 0x80) == '\0') &&
                   (iVar1 = FUN_02e4bb18(lVar8,&local_70), -1 < iVar1)) {
                  uVar2 = FUN_02e6145c(param_1,lVar8,iVar1,param_2,param_3,param_5,param_6,param_7,
                                       param_8,param_9);
                  uVar3 = uVar3 & uVar2;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(uint *)(lVar5 + 0x38));
            }
          }
        }
        else {
          uVar2 = FUN_02e6145c(param_1,lVar7,iVar1,param_2,param_3,param_5,param_6,param_7,param_8,
                               param_9);
          uVar3 = uVar3 & uVar2;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_4 + 0x38));
  }
  return uVar3;
}


