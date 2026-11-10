/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c3460; name: FUN_032c3460
 */


ulong FUN_032c3460(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  uVar2 = (ulong)(uVar1 & (int)(param_2 >> 4) * -0x61c8864f);
  uVar3 = *(ulong *)(*param_1 + uVar2 * 0x10);
  if (uVar3 != 0xffffffffffffffff) {
    if (uVar3 == param_2) {
      return uVar2;
    }
    while( true ) {
      uVar2 = (ulong)((int)uVar2 + 1U & uVar1);
      uVar3 = *(ulong *)(*param_1 + uVar2 * 0x10);
      if (uVar3 == 0xffffffffffffffff) break;
      if (uVar3 == param_2) {
        return uVar2;
      }
    }
  }
  return (long)(int)(uVar1 + 1);
}


