/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005530e4; name: FUN_005530e4
 */


uint FUN_005530e4(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  
  pbVar9 = (byte *)*param_1;
  if (pbVar9 == param_2) {
    uVar6 = 5;
    lVar8 = param_1[1];
  }
  else {
    uVar6 = (uint)(param_2[-1] == 10);
    lVar8 = param_1[1];
  }
  pbVar3 = pbVar9 + lVar8;
  if (pbVar3 == param_2) {
    uVar7 = uVar6 | 10;
  }
  else {
    uVar7 = uVar6;
    if ((param_2 <= pbVar3) && (uVar7 = uVar6 | 2, *param_2 != 10)) {
      uVar7 = uVar6;
    }
  }
  if (pbVar9 == param_2) {
    if ((pbVar3 != param_2) &&
       (((bVar2 = *param_2, (byte)((bVar2 & 0xdf) + 0xbf) < 0x1a || (bVar2 == 0x5f)) ||
        ((byte)(bVar2 - 0x30) < 10)))) {
      return ((uVar7 | 0x10) << 1 ^ 0xffffffff) & 0x20 | uVar7 | 0x10;
    }
  }
  else {
    bVar2 = param_2[-1];
    bVar4 = ((bVar2 & 0xffffffdf) - 0x41 & 0xff) < 0x1a;
    bVar5 = bVar2 - 0x30 < 10;
    if (pbVar3 == param_2) {
      uVar6 = uVar7 | 0x10;
      if (!bVar4 && (bVar2 != 0x5f && !bVar5)) {
        uVar6 = uVar7;
      }
      return (uVar6 << 1 ^ 0xffffffff) & 0x20 | uVar6;
    }
    bVar1 = *param_2;
    uVar6 = uVar7 | 0x10;
    if ((bVar4 || (bVar2 == 0x5f || bVar5)) ==
        (((bVar1 & 0xffffffdf) - 0x41 & 0xff) < 0x1a || (bVar1 == 0x5f || bVar1 - 0x30 < 10))) {
      uVar6 = uVar7;
    }
    uVar7 = uVar6;
  }
  return (uVar7 << 1 ^ 0xffffffff) & 0x20 | uVar7;
}


