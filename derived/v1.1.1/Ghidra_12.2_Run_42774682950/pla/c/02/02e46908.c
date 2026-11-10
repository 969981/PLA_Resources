/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e46908; name: FUN_02e46908
 */


void FUN_02e46908(long param_1,long param_2)

{
  long lVar1;
  
  if ((0 < *(int *)(param_2 + 0x284)) && (0 < *(int *)(param_2 + 0x280))) {
    lVar1 = 0;
    do {
      FUN_02e46908(param_1,*(undefined8 *)(param_2 + 0x200 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_2 + 0x280));
  }
  FUN_02e46974(param_1 + 0x18,param_2);
  return;
}


