/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020fdd4; name: FUN_0020fdd4
 */


undefined8 FUN_0020fdd4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_40 [16];
  
  uVar1 = FUN_0020ff04(param_2,param_3);
  uVar9 = uVar1;
  if (param_3 <= uVar1) {
    uVar9 = param_3;
  }
  uVar4 = uVar9 - 0x7f;
  if (uVar9 < 0x7f) {
    local_40[0] = (byte)uVar9 | (uVar1 < param_3) << 7;
    lVar3 = 1;
  }
  else {
    if (uVar4 < 0x80) {
      local_40[0] = 0x7f;
      if (uVar1 < param_3) {
        local_40[0] = 0xff;
      }
      pbVar6 = (byte *)((ulong)local_40 | 1);
      lVar3 = 2;
    }
    else {
      uVar9 = 1;
      uVar8 = uVar4;
      do {
        uVar5 = uVar9;
        uVar10 = uVar8 >> 0xe;
        uVar8 = uVar8 >> 7;
        uVar9 = uVar5 + 1;
      } while (uVar10 != 0);
      if (0xf < uVar9) {
        return 0xfffffdf5;
      }
      lVar3 = uVar5 + 2;
      local_40[0] = 0x7f;
      if (uVar1 < param_3) {
        local_40[0] = 0xff;
      }
      pbVar6 = (byte *)((ulong)local_40 | 1);
      if (0x7f < uVar4) {
        pbVar7 = pbVar6;
        uVar9 = uVar4;
        do {
          uVar4 = uVar9 >> 7;
          uVar8 = uVar9 >> 0xe;
          pbVar6 = pbVar7 + 1;
          *pbVar7 = (byte)uVar9 | 0x80;
          pbVar7 = pbVar6;
          uVar9 = uVar4;
        } while (uVar8 != 0);
      }
    }
    *pbVar6 = (byte)uVar4;
  }
  uVar2 = FUN_0020c4a8(param_1,local_40,lVar3);
  if ((int)uVar2 == 0) {
    if (uVar1 < param_3) {
      uVar2 = FUN_0020ff40();
    }
    else {
      uVar2 = FUN_0020c4a8(param_1,param_2,param_3);
    }
  }
  return uVar2;
}


