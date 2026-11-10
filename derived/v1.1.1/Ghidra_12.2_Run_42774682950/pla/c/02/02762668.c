/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762668; name: FUN_02762668
 */


void FUN_02762668(byte *param_1,byte *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*(long **)(param_1 + 0x18) == *(long **)(param_2 + 0x18)) ||
     (uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(), (uVar3 & 1) != 0)) {
    FUN_02762910(param_1);
    uVar1 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)param_1 = uVar1;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    return;
  }
  if (param_1 != param_2) {
    uVar3 = *(ulong *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar3 = (ulong)(*param_2 >> 1);
    }
    FUN_02762710(param_1,pbVar2,uVar3);
  }
  return;
}


