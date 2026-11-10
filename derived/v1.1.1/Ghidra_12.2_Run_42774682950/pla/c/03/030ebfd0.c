/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ebfd0; name: FUN_030ebfd0
 */


ulong FUN_030ebfd0(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = (int)param_1[1] - 1;
  if (0 < (int)uVar2) {
    uVar1 = (int)param_2 * -0x61c8864f;
    uVar3 = (int)((ulong)param_2 >> 0x20) * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar3 = uVar1 + (uVar1 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3;
    while( true ) {
      uVar3 = uVar2 & uVar3;
      lVar4 = *(long *)(*param_1 + (long)(int)uVar3 * 8);
      if (lVar4 == -1) break;
      if (lVar4 == param_2) {
        return (ulong)uVar3;
      }
      uVar3 = uVar3 + 1;
    }
  }
  return (long)(int)param_1[1];
}


