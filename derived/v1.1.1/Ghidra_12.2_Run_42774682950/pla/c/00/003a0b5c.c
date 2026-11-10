/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a0b5c; name: FUN_003a0b5c
 */


undefined8 FUN_003a0b5c(byte *param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  bVar1 = *pbVar6;
  if (bVar1 == 0x30) {
    if ((pbVar6[1] | 0x20) != 0x78) {
      uVar5 = 0x30;
      uVar4 = 8;
      goto LAB_003a0bb8;
    }
    pbVar6 = pbVar6 + 2;
    bVar1 = *pbVar6;
    uVar4 = 0x10;
  }
  else {
    uVar4 = 10;
  }
  uVar5 = (uint)bVar1;
  if (bVar1 == 0) {
    *param_3 = 0;
    return 1;
  }
LAB_003a0bb8:
  uVar8 = 0;
  while( true ) {
    pbVar6 = pbVar6 + 1;
    uVar2 = uVar5 - 0x37;
    if (0x19 < uVar5 - 0x41) {
      uVar2 = 0xffffffff;
    }
    if (uVar5 - 0x61 < 0x1a) {
      uVar2 = uVar5 - 0x57;
    }
    if ((uVar5 - 0x30 & 0xff) < 10) {
      uVar2 = uVar5 - 0x30;
    }
    if (((uint)uVar4 <= uVar2) || (uVar7 = (ulong)(int)uVar2, param_2 < uVar7)) break;
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = (param_2 - uVar7) / uVar4;
    }
    if (uVar3 < uVar8) {
      return 0;
    }
    uVar8 = uVar7 + uVar8 * uVar4;
    uVar5 = (uint)*pbVar6;
    if (uVar5 == 0) {
      *param_3 = uVar8;
      return 1;
    }
  }
  return 0;
}


