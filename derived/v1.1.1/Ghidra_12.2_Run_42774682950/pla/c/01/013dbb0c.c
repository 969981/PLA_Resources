/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013dbb0c; name: FUN_013dbb0c
 */


void FUN_013dbb0c(long param_1,undefined8 param_2,undefined4 param_3,uint param_4,uint param_5,
                 uint param_6)

{
  undefined2 *puVar1;
  
  if (*(uint *)(param_1 + 0x528) <= param_4) {
    return;
  }
  if (0x6d < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_013dd720();
  }
  puVar1 = (undefined2 *)(param_1 + (ulong)param_4 * 0xc);
  FUN_013db000(param_2,param_3,*(undefined4 *)(param_1 + 0x52c),*puVar1,
               (*(uint *)(puVar1 + 2) | 4) == 5,param_5 & 1,param_6 & 1);
  return;
}


