/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008f2c60; name: FUN_008f2c60
 */


undefined8 FUN_008f2c60(ulong param_1,void *param_2)

{
  ulong uVar1;
  size_t sVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  
  lVar6 = FUN_008cca50();
  bVar3 = *(byte *)(lVar6 + 0x18);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(lVar6 + 0x20);
  }
  sVar2 = uVar1;
  if (param_1 <= uVar1) {
    sVar2 = param_1;
  }
  if (sVar2 == 0) {
    iVar5 = 0;
  }
  else {
    pvVar7 = *(void **)(lVar6 + 0x28);
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)(lVar6 + 0x19);
    }
    iVar5 = memcmp(pvVar7,param_2,sVar2);
  }
  bVar4 = iVar5 != 0;
  if (iVar5 == 0) {
    iVar5 = -1;
  }
  if (uVar1 < param_1 || bVar4) {
    if (iVar5 == 0) {
      return 1;
    }
  }
  else if (uVar1 <= param_1) {
    return 1;
  }
  lVar6 = FUN_008cca50();
  bVar3 = *(byte *)(lVar6 + 0x30);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(lVar6 + 0x38);
  }
  sVar2 = uVar1;
  if (param_1 <= uVar1) {
    sVar2 = param_1;
  }
  if (sVar2 == 0) {
    iVar5 = 0;
  }
  else {
    pvVar7 = *(void **)(lVar6 + 0x40);
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)(lVar6 + 0x31);
    }
    iVar5 = memcmp(pvVar7,param_2,sVar2);
  }
  bVar4 = iVar5 != 0;
  if (iVar5 == 0) {
    iVar5 = -1;
  }
  if (uVar1 < param_1 || bVar4) {
    if (iVar5 == 0) {
      return 2;
    }
  }
  else if (uVar1 <= param_1) {
    return 2;
  }
  return 0;
}


