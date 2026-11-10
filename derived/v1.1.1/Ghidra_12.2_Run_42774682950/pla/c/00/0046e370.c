/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046e370; name: FUN_0046e370
 */


uint FUN_0046e370(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0041ccc0(*param_1);
  return uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
}


