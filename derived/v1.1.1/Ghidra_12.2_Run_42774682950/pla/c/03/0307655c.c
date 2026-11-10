/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307655c; name: FUN_0307655c
 */


void FUN_0307655c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_0331fc10(&DAT_042b2c48,"Not implemented");
  if ((uVar1 & 1) != 0) {
    CallSupervisor(0x26);
  }
  return;
}


