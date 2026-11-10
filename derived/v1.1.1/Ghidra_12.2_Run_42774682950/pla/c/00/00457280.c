/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00457280; name: FUN_00457280
 */


long FUN_00457280(int param_1)

{
  long lVar1;
  
  if (param_1 < 0) {
    return 0;
  }
  if (param_1 < 9) {
    return (long)param_1 * 0x30 + 0x41677a8;
  }
  lVar1 = FUN_00407970(DAT_0439e920,param_1 + -9);
  return lVar1;
}


