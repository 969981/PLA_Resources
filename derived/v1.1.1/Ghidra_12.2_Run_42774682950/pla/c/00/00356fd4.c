/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00356fd4; name: FUN_00356fd4
 */


byte * FUN_00356fd4(long param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  bool bVar2;
  byte *pbVar3;
  long lVar4;
  byte *local_d8;
  ulong local_d0;
  undefined *local_a8;
  undefined8 uStack_a0;
  byte *local_78;
  ulong local_70;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0) {
    pbVar3 = (byte *)FUN_00340fec(lVar4,param_3);
    return pbVar3;
  }
  pbVar3 = (byte *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (pbVar3 != (byte *)0x0) {
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3[0x10] = 0;
    pbVar3[0x11] = 0;
    pbVar3[0x12] = 0;
    pbVar3[0x13] = 0;
    pbVar3[0x14] = 0;
    pbVar3[0x15] = 0;
    pbVar3[0x16] = 0;
    pbVar3[0x17] = 0;
  }
  local_78 = pbVar3;
  FUN_003410d8(lVar4 + 0xd0,&local_78);
  bVar2 = (*param_2 & 1) == 0;
  local_78 = *(byte **)(param_2 + 0x10);
  if (bVar2) {
    local_78 = param_2 + 1;
  }
  local_70 = (ulong)(*param_2 >> 1);
  if (!bVar2) {
    local_70 = *(ulong *)(param_2 + 8);
  }
  local_a8 = &DAT_0389ff53;
  uStack_a0 = 1;
  local_d8 = *(byte **)(param_3 + 0x10);
  bVar2 = (*param_3 & 1) == 0;
  if (bVar2) {
    local_d8 = param_3 + 1;
  }
  local_d0 = (ulong)(*param_3 >> 1);
  if (!bVar2) {
    local_d0 = *(ulong *)(param_3 + 8);
  }
  FUN_00321500(&local_48,&local_78,&local_a8,&local_d8);
  if ((*pbVar3 & 1) == 0) {
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  else {
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    if ((*pbVar3 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar3 + 0x10));
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
    }
  }
  *(undefined8 *)(pbVar3 + 0x10) = local_38;
  *(undefined8 *)(pbVar3 + 8) = uStack_40;
  *(undefined8 *)pbVar3 = local_48;
  return pbVar3;
}


