/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e344fc; name: FUN_02e344fc
 */


void FUN_02e344fc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  FUN_02e044f4();
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_02e34b20(*(long *)(param_1 + 0x50) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (uVar2 < *(uint *)(param_1 + 0x38));
  }
  return;
}


