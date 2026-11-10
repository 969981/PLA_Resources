/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8fb3c; name: FUN_02e8fb3c
 */


int FUN_02e8fb3c(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (param_2[0xc] == 1) {
    iVar4 = FUN_02e946e4(param_1,param_2[0xe]);
  }
  else {
    if (param_2[0xc] != 0) {
      uVar7 = 0;
      do {
        iVar4 = FUN_02e946e4(param_1,*(undefined4 *)(*(long *)(param_2 + 0xe) + uVar7 * 4));
        if (iVar4 != 1) goto LAB_02e8fba8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2[0xc]);
    }
    iVar4 = 1;
LAB_02e8fba8:
    (*DAT_0442d150)(0,*(undefined8 *)(param_2 + 0xe));
    param_2[0xe] = 0;
    param_2[0xf] = 0;
  }
  uVar5 = *param_2;
  if (1 < uVar5) {
    if (uVar5 - 2 < 2) {
      uVar5 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar5 = 0;
      }
      goto LAB_02e8fbd0;
    }
    if (1 < uVar5 - 6) {
      uVar5 = 0;
      goto LAB_02e8fbd0;
    }
  }
  uVar5 = param_2[1];
LAB_02e8fbd0:
  uVar3 = param_2[10];
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0xf4) = iVar4;
  if (uVar3 != 2) {
    uVar6 = 0;
  }
  FUN_02e9823c(param_1 + 0xf8,uVar1,uVar5,uVar6,iVar4,uVar2);
  return iVar4;
}


