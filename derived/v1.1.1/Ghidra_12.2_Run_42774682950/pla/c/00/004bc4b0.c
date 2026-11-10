/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bc4b0; name: FUN_004bc4b0
 */


void FUN_004bc4b0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + param_2 * 0x10);
  *param_3 = *puVar1;
  *param_4 = puVar1[1];
  return;
}


