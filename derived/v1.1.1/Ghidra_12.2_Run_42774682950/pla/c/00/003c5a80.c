/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c5a80; name: FUN_003c5a80
 */


undefined8
FUN_003c5a80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  
  if (0 < *(int *)(param_3 + 0x38)) {
    iVar3 = 0;
    do {
      uVar1 = FUN_00365e80(param_3 + 0x30,iVar3);
      uVar2 = FUN_003c5a80(param_1,param_2,uVar1,param_4,param_5);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_3 + 0x38));
  }
  if (0 < *(int *)(param_3 + 0x80)) {
    iVar3 = 0;
    do {
      uVar1 = FUN_00366138(param_3 + 0x78,iVar3);
      uVar2 = FUN_003c5b5c(param_1,param_2,uVar1,param_4,param_5);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_3 + 0x80));
  }
  return 1;
}


