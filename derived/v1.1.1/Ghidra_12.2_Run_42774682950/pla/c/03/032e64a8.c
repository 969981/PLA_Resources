/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e64a8; name: FUN_032e64a8
 */


ulong FUN_032e64a8(undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar5 = (byte *)param_2[1];
  pbVar6 = (byte *)param_3[1];
  if ((*pbVar5 & 1) == 0) {
    pbVar4 = *(byte **)(pbVar5 + 8);
    bVar1 = *pbVar4;
    while ((bVar1 & 1) == 0) {
      pbVar4 = *(byte **)(pbVar4 + 8);
      bVar1 = *pbVar4;
    }
  }
  else {
    pbVar4 = pbVar5;
  }
  if ((*pbVar6 & 1) == 0) {
    pbVar7 = *(byte **)(pbVar6 + 8);
    bVar1 = *pbVar7;
    while ((bVar1 & 1) == 0) {
      pbVar7 = *(byte **)(pbVar7 + 8);
      bVar1 = *pbVar7;
    }
  }
  else {
    pbVar7 = pbVar6;
  }
  uVar2 = (*(uint *)(pbVar4 + 0x10) & 0x1f) - (*(uint *)(pbVar7 + 0x10) & 0x1f);
  if (uVar2 != 0) {
    return (ulong)uVar2;
  }
  if ((pbVar5 == pbVar6) && (*param_2 == *param_3)) {
    return 0;
  }
  uVar3 = FUN_032e7390();
  return uVar3;
}


