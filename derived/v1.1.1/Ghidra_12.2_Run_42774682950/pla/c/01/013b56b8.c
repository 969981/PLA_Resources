/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b56b8; name: FUN_013b56b8
 */


void FUN_013b56b8(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_3;
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = FUN_013b586c(param_2,param_4);
  uVar2 = FUN_013b58d8(param_2,uVar1);
  FUN_013b593c(param_2,uVar2,uVar1,lVar4,param_4,param_5);
  *param_1 = *(long *)(param_2 + 0x20) + (lVar4 - lVar3);
  return;
}


