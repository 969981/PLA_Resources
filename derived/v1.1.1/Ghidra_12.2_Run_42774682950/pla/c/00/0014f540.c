/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014f540; name: FUN_0014f540
 */


void FUN_0014f540(long param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = param_2[1];
  if (((((uVar1 & 3) != 0) || ((*(byte *)(param_1 + 0x370) & 1) == 0)) ||
      ((((int)param_2 + 0x10U & 0xf) != 0 && (uVar1 != 0xb)))) ||
     ((((param_2 < *(long **)(param_1 + 0x18) || (uVar1 < 0x100)) ||
       (uVar1 = uVar1 & 0xfffffffffffffff8, (DAT_0438e198 - 1U & *param_2 + uVar1 + 0x20) != 0)) ||
      ((*(long *)((long)param_2 + uVar1 + 8) != 0xb ||
       (*(long *)((long)param_2 + uVar1 + 0x10) != 0)))))) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


