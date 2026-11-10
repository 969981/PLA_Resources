/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044d590; name: FUN_0044d590
 */


undefined8 FUN_0044d590(byte *param_1,ulong param_2,byte *param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar4 = param_2;
  if ((param_5 >> 0xf & 1) != 0) {
    pbVar5 = param_1;
    uVar7 = param_2;
    if (param_4 < param_2) {
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pbVar5 == 0) break;
          uVar7 = uVar7 - 1;
          pbVar5 = pbVar5 + 1;
        } while (param_4 < uVar7);
      }
      else {
        do {
          if ((*pbVar5 == 0) || (*pbVar5 == 0x2e)) break;
          uVar7 = uVar7 - 1;
          pbVar5 = pbVar5 + 1;
        } while (param_4 < uVar7);
      }
    }
    uVar4 = param_4;
    if (uVar7 != param_4) {
      uVar4 = param_2;
      pbVar5 = param_1;
    }
    param_1 = pbVar5;
  }
  if (uVar4 == param_4) {
    while( true ) {
      if (param_4 == 0) {
        return 1;
      }
      bVar2 = *param_1;
      if (bVar2 == 0) break;
      bVar3 = *param_3;
      if ((uint)bVar2 != (uint)bVar3) {
        uVar6 = (uint)bVar2;
        uVar1 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar1 = uVar6;
        }
        uVar6 = bVar3 + 0x20;
        if (0x19 < bVar3 - 0x41) {
          uVar6 = (uint)bVar3;
        }
        if ((uVar1 & 0xff) != (uVar6 & 0xff)) {
          return 0;
        }
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 - 1;
    }
  }
  return 0;
}


