/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ce040; name: FUN_013ce040
 */


void FUN_013ce040(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00d73754();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x5ab) == '\0')) {
    *(undefined1 *)(param_1 + 0x5ab) = 1;
    FUN_00d7331c(param_1,0);
    FUN_00d42690(param_1,1,1);
    return;
  }
  return;
}


