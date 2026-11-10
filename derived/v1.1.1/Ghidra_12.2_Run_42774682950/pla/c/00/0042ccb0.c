/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042ccb0; name: FUN_0042ccb0
 */


void FUN_0042ccb0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)(int)param_1[1];
  if ((int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
    lVar2 = *param_1;
    do {
      *(undefined4 *)(lVar2 + lVar1 * 4) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)((long)param_1 + 0xc));
  }
  return;
}


