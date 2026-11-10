/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001514b0; name: FUN_001514b0
 */


void FUN_001514b0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 1) = 3;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
  return;
}


