/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060a008; name: FUN_0060a008
 */


byte * FUN_0060a008(byte *param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    FUN_00291910(param_1,pbVar2,uVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  param_1[0x40] = param_2[0x40];
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  return param_1;
}


