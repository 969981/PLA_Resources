/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c30730; name: FUN_02c30730
 */


ulong FUN_02c30730(short *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  
  if (param_2 == 0) {
LAB_02c30784:
    if (param_1 == (short *)0x0) {
      return 0;
    }
  }
  else {
    do {
      while( true ) {
        for (; sVar1 = *param_1, sVar1 == 0x10; param_1 = param_1 + (ulong)(ushort)param_1[1] + 2) {
        }
        if (sVar1 == 0) {
          if (param_2 != 0) {
            return 0;
          }
          goto LAB_02c30784;
        }
        if (sVar1 == 10) break;
        param_1 = param_1 + 1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  psVar2 = param_1;
  while( true ) {
    for (; sVar1 = *psVar2, sVar1 == 0x10; psVar2 = psVar2 + (ulong)(ushort)psVar2[1] + 2) {
    }
    if ((sVar1 == 0) || (sVar1 == 10)) break;
    psVar2 = psVar2 + 1;
  }
  return (ulong)((long)psVar2 - (long)param_1) >> 1;
}


