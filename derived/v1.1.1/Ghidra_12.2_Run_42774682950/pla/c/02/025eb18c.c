/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025eb18c; name: FUN_025eb18c
 */


void FUN_025eb18c(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = 1L << (*param_2 & 0x3f);
  if ((uVar1 & *(ulong *)(param_1 + 0x260)) != 0) {
    if (2 < *param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_025ed820();
    }
    *(ulong *)(param_1 + 0x260) = *(ulong *)(param_1 + 0x260) & (uVar1 ^ 0xffffffffffffffff);
    *(undefined4 *)(param_1 + 0x21c) = 0;
  }
  return;
}


