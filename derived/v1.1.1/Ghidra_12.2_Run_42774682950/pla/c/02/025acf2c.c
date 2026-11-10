/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025acf2c; name: FUN_025acf2c
 */


undefined4 FUN_025acf2c(long param_1)

{
  if (*(uint *)(param_1 + 0x78) < 0x18) {
    if (*(int *)(&DAT_03a7d720 + (long)(int)*(uint *)(param_1 + 0x78) * 4) != 3) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xa8) < 8) {
      return *(undefined4 *)(&DAT_03888ba0 + (long)(int)*(uint *)(param_1 + 0xa8) * 4);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_025ad8d0();
}


