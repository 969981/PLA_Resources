/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850bf0; name: FUN_00850bf0
 */


undefined8 FUN_00850bf0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    if (*(char *)(param_1 + 0x28) != -3) {
      uVar1 = FUN_0085031c(*(long *)(param_1 + 0x40),*(char *)(param_1 + 0x28),param_2);
      return uVar1;
    }
  }
  return 0xffffffff;
}


