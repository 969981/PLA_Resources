/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5124; name: FUN_032c5124
 */


ulong FUN_032c5124(undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  pbVar3 = (byte *)*param_1;
  if (*pbVar3 == 0) {
    return 0xffffffff;
  }
  if (*param_2 == 0) {
    return 0;
  }
  uVar4 = 0;
  pbVar5 = pbVar3;
  do {
    pbVar7 = pbVar5;
    uVar8 = (uint)*param_2;
    pbVar6 = param_2;
    while( true ) {
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar7;
      uVar9 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar9 = (uint)bVar2;
      }
      uVar1 = uVar8 + 0x20;
      if (0x19 < (uVar8 - 0x41 & 0xff)) {
        uVar1 = uVar8;
      }
      if ((uVar9 & 0xff) != (uVar1 & 0xff)) break;
      uVar8 = (uint)*pbVar6;
      pbVar7 = pbVar7 + 1;
      if (uVar8 == 0) {
        return uVar4 & 0xffffffff;
      }
    }
    uVar4 = uVar4 + 1;
    pbVar5 = pbVar5 + 1;
    if (pbVar3[uVar4] == 0) {
      return 0xffffffff;
    }
  } while( true );
}


