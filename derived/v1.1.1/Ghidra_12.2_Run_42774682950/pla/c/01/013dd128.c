/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013dd128; name: FUN_013dd128
 */


void FUN_013dd128(long param_1,void *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  memset(param_2,0,0x3394);
  uVar1 = (ulong)*(uint *)(param_1 + 0x3390);
  if (*(uint *)(param_1 + 0x3390) != 0) {
    uVar1 = 0;
    puVar2 = (undefined4 *)((long)param_2 + 4);
    puVar3 = (undefined4 *)(param_1 + 4);
    do {
      if (uVar1 == 0x44c) {
                    /* WARNING: Subroutine does not return */
        FUN_013dd720();
      }
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
    } while (uVar1 < *(uint *)(param_1 + 0x3390));
  }
  *(int *)((long)param_2 + 0x3390) = (int)uVar1;
  return;
}


