/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a39f0; name: FUN_031a39f0
 */


void FUN_031a39f0(long param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5,
                 long *param_6,uint *param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int local_68 [2];
  int local_58 [2];
  
  iVar1 = *(int *)(param_1 + 0x30);
  *param_3 = *param_5 + iVar1;
  uVar2 = *param_7;
  iVar5 = param_3[2];
  iVar4 = (int)(short)iVar5;
  *param_7 = uVar2 + 0x3ed35b;
  if (uVar2 < 0xffc12ca5) {
    if ((short)iVar5 < 1) goto LAB_031a3ac0;
  }
  else {
    FUN_033299e0(0xdcd396);
    if (iVar4 < 1) goto LAB_031a3ac0;
  }
  iVar5 = iVar4;
  do {
    lVar3 = param_6[1];
    *(int *)(*param_6 + (long)(int)lVar3 * 4) = *param_5 + iVar1;
    *(int *)(param_6 + 1) = (int)lVar3 + 1;
    local_58[0] = *param_5;
    local_68[0] = *param_4;
    FUN_031997c0(param_2,param_1,local_58,local_68);
    *param_5 = *param_5 + 1;
    iVar5 = iVar5 + -1;
    *param_4 = *param_4 + 1;
  } while (iVar5 != 0);
LAB_031a3ac0:
  uVar2 = *param_7;
  *param_7 = uVar2 + iVar4 * 0x48d3a2;
  if (CARRY4(uVar2,iVar4 * 0x48d3a2)) {
    FUN_033299e0(0xdcd396);
  }
  return;
}


