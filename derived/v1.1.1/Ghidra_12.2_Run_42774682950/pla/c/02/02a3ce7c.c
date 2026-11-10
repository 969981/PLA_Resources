/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3ce7c; name: FUN_02a3ce7c
 */


uint FUN_02a3ce7c(long param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_02a38fa0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x65,param_2,param_3);
  return uVar1 & 1;
}


