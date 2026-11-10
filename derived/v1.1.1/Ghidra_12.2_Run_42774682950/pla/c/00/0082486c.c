/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082486c; name: FUN_0082486c
 */


void FUN_0082486c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04377c68 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 4));
  FUN_0081e8a8(param_1);
  return;
}


