/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014fe80; name: FUN_0014fe80
 */


undefined8 FUN_0014fe80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xc0);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xc0) = param_2;
  return uVar1;
}


