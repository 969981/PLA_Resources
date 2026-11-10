/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029489ec; name: FUN_029489ec
 */


undefined8 FUN_029489ec(long param_1,byte param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_2 < 6) {
    uVar4 = 0;
  }
  else {
    uVar4 = 3;
    if (0x17 < param_2) {
      uVar4 = (uint)(param_2 < 0x1e) << 2;
    }
    uVar1 = 1;
    if (0x11 < param_2) {
      uVar1 = uVar4;
    }
    uVar4 = 2;
    if (0xb < param_2) {
      uVar4 = uVar1;
    }
  }
  uVar2 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                       *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),uVar4);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + (ulong)uVar4 * 8 + 0x150);
  }
  return uVar3;
}


