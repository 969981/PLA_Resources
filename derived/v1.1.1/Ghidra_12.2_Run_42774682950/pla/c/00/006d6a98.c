/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d6a98; name: FUN_006d6a98
 */


void FUN_006d6a98(long *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x28))((int)param_1,*(undefined8 *)(param_1[3] + 0x10));
  *(byte *)(param_1 + 0xe) = bVar1 & 1;
  return;
}


