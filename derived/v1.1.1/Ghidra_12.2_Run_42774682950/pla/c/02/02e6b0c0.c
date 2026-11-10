/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6b0c0; name: FUN_02e6b0c0
 */


ulong FUN_02e6b0c0(uint param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = param_1;
  if (param_2 <= param_1) {
    uVar2 = param_2;
  }
  uVar1 = (ulong)uVar2;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = param_2 / uVar2;
  }
  param_2 = param_2 - uVar4 * uVar2;
  if (param_2 != 0) {
    if (((param_2 | uVar2) & 1) == 0) {
      uVar2 = 0;
      do {
        uVar1 = uVar1 >> 1;
        param_2 = param_2 >> 1;
        uVar2 = uVar2 + 1;
      } while (((param_2 | (uint)uVar1) & 1) == 0);
    }
    else {
      uVar2 = 0;
    }
    do {
      uVar6 = uVar1;
      uVar4 = (uint)uVar6;
      uVar1 = uVar6 >> 1;
    } while ((uVar6 & 1) == 0);
    do {
      uVar3 = param_2;
      param_2 = uVar3 >> 1;
    } while ((uVar3 & 1) == 0);
    if (uVar4 != uVar3) {
      do {
        uVar5 = (uint)uVar6;
        uVar4 = uVar5;
        if (uVar3 <= uVar5) {
          uVar4 = uVar3;
          uVar3 = uVar5;
        }
        uVar1 = (ulong)(uVar3 - uVar4);
        do {
          uVar6 = uVar1 >> 1;
          uVar3 = (uint)uVar1;
          uVar1 = uVar6;
        } while ((uVar3 >> 1 & 1) == 0);
        uVar3 = uVar4;
      } while ((uint)uVar6 != uVar4);
    }
    uVar1 = (ulong)(uVar4 << (ulong)(uVar2 & 0x1f));
  }
  return uVar1;
}


