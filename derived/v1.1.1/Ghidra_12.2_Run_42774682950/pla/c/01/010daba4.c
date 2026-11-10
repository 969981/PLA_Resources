/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010daba4; name: FUN_010daba4
 */


ulong FUN_010daba4(long param_1)

{
  ulong uVar1;
  short *psVar2;
  ulong uVar3;
  
  uVar1 = FUN_010dac08(param_1,0);
  if ((int)uVar1 != 0) {
    uVar3 = 0;
    psVar2 = (short *)(param_1 + 0x6a);
    do {
      if ((psVar2[-1] != 0) && (*psVar2 != 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar1 = FUN_010dac08(uVar1,0);
      psVar2 = psVar2 + 2;
    } while (uVar3 < (uVar1 & 0xffffffff));
    uVar1 = 0;
  }
  return uVar1;
}


