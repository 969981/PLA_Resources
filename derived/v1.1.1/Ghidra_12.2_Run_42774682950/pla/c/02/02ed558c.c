/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed558c; name: FUN_02ed558c
 */


void FUN_02ed558c(long param_1,undefined8 param_2,ulong param_3)

{
  if (*(ulong **)(param_1 + 0x38) != (ulong *)0x0) {
    if ((**(ulong **)(param_1 + 0x38) &
        1L << ((ulong)*(uint *)(&DAT_03a9f0d0 + (param_3 & 0xffffffff) * 4) & 0x3f)) != 0) {
      FUN_02eea76c(param_1 + 0x30);
      return;
    }
  }
  return;
}


