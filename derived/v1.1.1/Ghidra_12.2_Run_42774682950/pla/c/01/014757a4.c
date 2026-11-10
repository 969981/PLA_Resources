/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014757a4; name: FUN_014757a4
 */


void FUN_014757a4(long param_1)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x2c8) != 0) &&
     (uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),&DAT_043acdb8), (uVar1 & 1) == 0)) {
    FUN_00d73864(param_1);
  }
  if (*(char *)(*(long *)(param_1 + 0x5b0) + 0x241) != '\0') {
    FUN_00d7331c(param_1,1);
    *(undefined1 *)(*(long *)(param_1 + 0x5b0) + 0x241) = 0;
  }
  return;
}


