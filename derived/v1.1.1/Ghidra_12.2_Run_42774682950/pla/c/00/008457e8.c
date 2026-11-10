/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008457e8; name: FUN_008457e8
 */


ulong FUN_008457e8(int *param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = param_1 + 0x600;
  if (*piVar1 < 1) {
    return 0xffffffff;
  }
  uVar2 = 0;
  do {
    if (*param_1 == param_2) {
      return uVar2 & 0xffffffff;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0xc;
  } while ((long)uVar2 < (long)*piVar1);
  return 0xffffffff;
}


