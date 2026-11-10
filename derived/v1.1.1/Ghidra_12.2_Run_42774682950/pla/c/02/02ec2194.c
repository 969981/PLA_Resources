/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec2194; name: FUN_02ec2194
 */


void FUN_02ec2194(int *param_1,long param_2)

{
  long *plVar1;
  
  *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
  *(undefined8 *)(param_2 + 8) = 0;
  plVar1 = (long *)(param_1 + 4);
  if (*plVar1 != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 2) + 8);
  }
  *plVar1 = param_2;
  *(long *)(param_1 + 2) = param_2;
  *param_1 = *param_1 + 1;
  return;
}


