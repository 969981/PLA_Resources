/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021bc50; name: FUN_0021bc50
 */


void FUN_0021bc50(float param_1,float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(long **)(param_3 + 0x28) + 0x20))();
  iVar2 = (**(code **)(**(long **)(param_3 + 0x28) + 0x28))();
  *(float *)(param_3 + 0xc) = param_1 / (float)iVar1;
  *(float *)(param_3 + 0x10) = param_2 / (float)iVar2;
  return;
}


