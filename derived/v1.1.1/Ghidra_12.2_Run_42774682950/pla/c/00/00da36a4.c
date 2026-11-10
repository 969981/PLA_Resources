/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da36a4; name: FUN_00da36a4
 */


ulong FUN_00da36a4(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0x78) < 1) {
    return 0xffffffff;
  }
  plVar2 = *(long **)(param_1 + 200);
  uVar1 = 0;
  do {
    if (*plVar2 == *param_2) {
      return uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 + 1;
    plVar2 = plVar2 + 0xe;
  } while ((long)*(int *)(param_1 + 0x78) != uVar1);
  return 0xffffffff;
}


