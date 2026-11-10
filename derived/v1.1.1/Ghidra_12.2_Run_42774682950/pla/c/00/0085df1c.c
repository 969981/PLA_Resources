/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085df1c; name: FUN_0085df1c
 */


void FUN_0085df1c(long param_1)

{
  int *piVar1;
  undefined4 local_40 [4];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_40[0] = 0x6c05;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      FUN_007ee578(auStack_30,local_40);
      FUN_007e5cac(piVar1,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


