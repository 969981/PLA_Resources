/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00542758; name: FUN_00542758
 */


void FUN_00542758(void)

{
  if (DAT_0439ecd0 != (undefined8 *)0x0) {
    return;
  }
  DAT_0439ecd0 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (DAT_0439ecd0 != (undefined8 *)0x0) {
    *DAT_0439ecd0 = 0;
    DAT_0439ecd0[1] = 0;
    DAT_0439ecd0[2] = 0;
  }
  return;
}


