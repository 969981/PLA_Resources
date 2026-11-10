/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02947d70; name: FUN_02947d70
 */


undefined8 FUN_02947d70(undefined8 param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 < 6) {
    uVar2 = 0;
  }
  else {
    uVar4 = 3;
    if (0x17 < param_3) {
      uVar4 = (uint)(param_3 < 0x1e) << 2;
    }
    uVar3 = 1;
    if (0x11 < param_3) {
      uVar3 = uVar4;
    }
    uVar4 = 2;
    if (0xb < param_3) {
      uVar4 = uVar3;
    }
    uVar2 = (ulong)uVar4;
  }
  uVar4 = (uint)*(byte *)(param_2 + uVar2 * 0x38 + 0x38);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(byte *)(*(long *)(param_2 + uVar2 * 0x38 + (ulong)(uVar3 & 0xff) * 8 + 8) + 0x7d) ==
          param_3) {
        uVar1 = FUN_0294753c(param_1,uVar2,uVar3);
        if (((uint)uVar1 & 0xff) == 6) {
          return 6;
        }
        return uVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
  }
  return 6;
}


