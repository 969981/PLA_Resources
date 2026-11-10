/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecf380; name: FUN_02ecf380
 */


void FUN_02ecf380(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x2f0) != 0) {
    plVar1 = *(long **)(param_1 + 0x2e8);
    do {
      FUN_02ed3888(*plVar1,param_1);
      if ((*(byte *)(param_1 + 0x2a6) >> 2 & 1) != 0) {
        *(short *)(*plVar1 + 0x2a) = *(short *)(*plVar1 + 0x2a) + -1;
      }
      plVar1 = plVar1 + 1;
    } while (plVar1 != (long *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8))
    ;
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  return;
}


