/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025acbdc; name: FUN_025acbdc
 */


undefined4 FUN_025acbdc(long param_1)

{
  if (0x17 < *(uint *)(param_1 + 0x78)) {
                    /* WARNING: Subroutine does not return */
    FUN_025ad8d0();
  }
  return *(undefined4 *)(&DAT_03a7d720 + (long)(int)*(uint *)(param_1 + 0x78) * 4);
}


