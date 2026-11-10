/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f6380; name: FUN_031f6380
 */


undefined8 FUN_031f6380(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_30 [4];
  
  puVar5 = local_30;
  uVar4 = FUN_031f62f0();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  bVar3 = (*(byte *)(param_1 + 0x18) & 1) != 0;
  iVar2 = (int)((uint)*(byte *)(param_1 + 0x18) << 0x18) >> 0x19;
  iVar6 = 1;
  if (bVar3) {
    iVar6 = 2;
  }
  iVar7 = 1;
  if (!bVar3) {
    iVar7 = 2;
  }
  iVar6 = (iVar6 + iVar2) % 3;
  iVar2 = (iVar7 + iVar2) % 3;
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      local_30[0] = *(undefined4 *)((ulong)local_30 | 4);
    }
    else if (iVar6 == 2) {
      local_30[0] = *(undefined4 *)((ulong)local_30 | 8);
    }
    else {
      local_30[0] = *(undefined4 *)((ulong)local_30 | 0xc);
    }
  }
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      puVar5 = (undefined4 *)((ulong)local_30 | 4);
    }
    else if (iVar2 == 2) {
      puVar5 = (undefined4 *)((ulong)local_30 | 8);
    }
    else {
      puVar5 = (undefined4 *)((ulong)local_30 | 0xc);
    }
  }
  uVar1 = *puVar5;
  *param_4 = local_30[0];
  param_4[1] = uVar1;
  return 1;
}


