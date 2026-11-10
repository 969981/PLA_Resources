/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033726b0; name: FUN_033726b0
 */


ulong FUN_033726b0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      return param_1;
    }
    uVar5 = (uint)(param_1 >> 0x20);
    uVar3 = (-(uint)param_1 & (uint)param_1) - 1;
    uVar5 = (-uVar5 & uVar5) - 1;
    uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar4 = (-(uint)param_2 & (uint)param_2) - 1;
    uVar2 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101;
    uVar3 = uVar2 >> 0x18;
    if (uVar2 >> 0x1d != 0) {
      uVar3 = ((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0x20;
    }
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar5 = (uint)(param_2 >> 0x20);
    uVar2 = (-uVar5 & uVar5) - 1;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar5 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar4 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101;
    uVar5 = uVar4 >> 0x18;
    if (uVar4 >> 0x1d != 0) {
      uVar5 = ((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0x20;
    }
    uVar2 = uVar3;
    if (uVar5 <= uVar3) {
      uVar2 = uVar5;
    }
    param_2 = param_2 >> ((ulong)uVar2 & 0x3f);
    uVar6 = param_1 >> ((ulong)uVar3 & 0x3f);
    do {
      uVar5 = (uint)(param_2 >> 0x20);
      uVar3 = (-(uint)param_2 & (uint)param_2) - 1;
      uVar5 = (-uVar5 & uVar5) - 1;
      uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar4 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101;
      uVar3 = uVar4 >> 0x18;
      if (uVar4 >> 0x1d != 0) {
        uVar3 = ((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0x20;
      }
      uVar7 = param_2 >> ((ulong)uVar3 & 0x3f);
      uVar1 = uVar7;
      param_2 = uVar6 - uVar7;
      if (uVar6 <= uVar7) {
        uVar1 = uVar6;
        param_2 = uVar7 - uVar6;
      }
      uVar6 = uVar1;
    } while (param_2 != 0);
    param_2 = uVar1 << ((ulong)uVar2 & 0x3f);
  }
  return param_2;
}


