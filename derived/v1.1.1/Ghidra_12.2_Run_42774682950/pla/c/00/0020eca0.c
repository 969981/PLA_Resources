/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020eca0; name: FUN_0020eca0
 */


byte * FUN_0020eca0(uint *param_1,ulong *param_2,undefined4 *param_3,uint param_4,ulong param_5,
                   byte *param_6,byte *param_7,uint param_8)

{
  byte *pbVar1;
  uint uVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  pbVar1 = param_6;
  if (param_4 == 0) {
    param_4 = ~(-1 << (ulong)(param_8 & 0x1f)) & 0xff;
    if ((param_4 & *param_6) != param_4) {
      *param_1 = param_4 & *param_6;
      *param_3 = 1;
      return (byte *)0x1;
    }
    pbVar1 = param_6 + 1;
    if (pbVar1 == param_7) {
      *param_1 = param_4;
      return (byte *)0x1;
    }
  }
  while( true ) {
    if (pbVar1 == param_7) {
      *param_2 = param_5;
      *param_1 = param_4;
      return param_7 + -(long)param_6;
    }
    if (0x1f < param_5) {
      return (byte *)0xffffffffffffffff;
    }
    uVar2 = *pbVar1 & 0x7f;
    if (0xffffffffU >> (ulong)((uint)param_5 & 0x1f) < uVar2) {
      return (byte *)0xffffffffffffffff;
    }
    uVar2 = uVar2 << (ulong)((uint)param_5 & 0x1f);
    if (~uVar2 < param_4) break;
    param_4 = uVar2 + param_4;
    if (-1 < (char)*pbVar1) {
      *param_2 = param_5;
      *param_1 = param_4;
      *param_3 = 1;
      return pbVar1 + (1 - (long)param_6);
    }
    param_5 = param_5 + 7;
    pbVar1 = pbVar1 + 1;
  }
  return (byte *)0xffffffffffffffff;
}


