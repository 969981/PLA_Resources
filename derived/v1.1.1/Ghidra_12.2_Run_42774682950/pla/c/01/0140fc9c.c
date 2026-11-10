/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0140fc9c; name: FUN_0140fc9c
 */


void FUN_0140fc9c(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_2[1] * 10;
  FUN_0141081c(param_1,iVar1);
  FUN_013db31c(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xa0),iVar1);
  return;
}


