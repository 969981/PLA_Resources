/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cf864; name: FUN_032cf864
 */


undefined8 * FUN_032cf864(long *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,(long)(param_2 + 0x10),0);
  *puVar1 = param_1;
  *(int *)(puVar1 + 1) = param_2;
  return puVar1 + 2;
}


