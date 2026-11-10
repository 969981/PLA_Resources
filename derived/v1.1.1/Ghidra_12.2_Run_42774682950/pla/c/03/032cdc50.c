/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cdc50; name: FUN_032cdc50
 */


void FUN_032cdc50(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  lVar1 = *(long *)(param_2 + 0x10) - lVar2;
  if (lVar1 != 0) {
    FUN_032d4514(param_3,param_4,0,lVar2,lVar1);
  }
  lVar3 = *(long *)(param_1 + 8) * *(long *)(param_2 + 0x18);
  lVar2 = (*(long *)(param_1 + 0x28) - lVar1) - lVar3;
  if (lVar2 == 0) {
    return;
  }
  FUN_032d4514(param_3,param_4,0,*(long *)(param_2 + 0x10) + lVar3,lVar2);
  return;
}


