/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03002b00; name: FUN_03002b00
 */


ulong FUN_03002b00(long *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    uVar2 = *param_2;
    uVar5 = (uint)uVar2 * -0x61c8864f;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar4 = (ulong)((uVar5 >> 0x10 | uVar5 << 0x10) & uVar1);
    uVar5 = (uint)*(ushort *)(*param_1 + uVar4 * 0x10);
    if (uVar5 != 0xffff) {
      if (uVar5 == uVar2) {
        return uVar4;
      }
      while( true ) {
        uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
        uVar3 = *(ushort *)(*param_1 + uVar4 * 0x10);
        if (uVar3 == 0xffff) break;
        if (uVar3 == uVar2) {
          return uVar4;
        }
      }
    }
  }
  return (long)(int)uVar1 + 1;
}


