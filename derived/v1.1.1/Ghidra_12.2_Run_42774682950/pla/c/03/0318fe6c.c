/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318fe6c; name: FUN_0318fe6c
 */


undefined8 FUN_0318fe6c(long param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x168) + (long)*param_2 * 4);
  if (iVar2 < 0) {
    iVar2 = -1;
    uVar1 = 0;
    uVar4 = 0xffffffff;
  }
  else {
    lVar3 = (long)iVar2;
    uVar1 = 1;
    do {
      lVar3 = lVar3 + 1;
      uVar4 = (undefined4)lVar3;
      if (*(int *)(param_1 + 0x170) <= lVar3) break;
    } while (*(int *)(*(long *)(param_1 + 0x168) + lVar3 * 4) == *param_2);
  }
  *param_3 = iVar2;
  *param_4 = uVar4;
  return uVar1;
}


