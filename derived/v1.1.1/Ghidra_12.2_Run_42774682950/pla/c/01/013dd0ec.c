/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013dd0ec; name: FUN_013dd0ec
 */


void FUN_013dd0ec(long param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 < *(uint *)(param_1 + 0x3390)) {
    if (1099 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_013dd720();
    }
    puVar2 = (undefined4 *)(param_1 + (ulong)param_2 * 0xc);
    uVar1 = puVar2[2];
    *param_3 = *puVar2;
    param_3[1] = uVar1;
  }
  return;
}


