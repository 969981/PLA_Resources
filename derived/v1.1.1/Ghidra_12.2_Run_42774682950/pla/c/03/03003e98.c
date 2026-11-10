/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03003e98; name: FUN_03003e98
 */


void FUN_03003e98(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_3 + 0x42) >> 2 & 1) == 0) {
    *(int *)(param_3 + 0x44) = param_2;
  }
  else {
    if (*(int *)(param_3 + 0x34) != 0x7fffffff) {
      if (*(int *)(param_3 + 0x34) == param_2) {
        return;
      }
      FUN_03003f7c(param_1,param_3);
    }
    lVar2 = *(long *)(param_1 + 0x38);
    lVar3 = lVar2 + (long)param_2 * 0x38;
    *(int *)(param_3 + 0x34) = param_2;
    iVar1 = *(int *)(lVar3 + 0x1c);
    *(int *)(lVar3 + 0x1c) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 *)(lVar2 + (long)param_2 * 0x38 + 0x18) = *(undefined4 *)(param_3 + 0x30);
    }
    else {
      lVar2 = *(long *)(param_1 + 8) + (long)*(int *)(lVar2 + (long)param_2 * 0x38 + 0x18) * 0x68;
      lVar3 = *(long *)(param_1 + 8) + (long)*(int *)(lVar2 + 0x38) * 0x68;
      *(undefined4 *)(lVar3 + 0x3c) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(lVar3 + 0x30);
      *(undefined4 *)(param_3 + 0x3c) = *(undefined4 *)(lVar2 + 0x30);
    }
  }
  return;
}


