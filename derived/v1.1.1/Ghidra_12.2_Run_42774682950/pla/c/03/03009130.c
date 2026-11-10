/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03009130; name: FUN_03009130
 */


undefined8 FUN_03009130(void)

{
  ulong uVar1;
  
  uVar1 = FUN_0331fc10(&DAT_042b1410,"Not implemented");
  if ((uVar1 & 1) != 0) {
    CallSupervisor(0x26);
  }
  return 0;
}


