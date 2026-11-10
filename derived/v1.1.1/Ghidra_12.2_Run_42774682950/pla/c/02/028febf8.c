/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028febf8; name: FUN_028febf8
 */


void FUN_028febf8(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_3;
  uVar1 = FUN_028ca890(*param_1 + 0x28);
  *puVar2 = ~uVar1 & 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  return;
}


