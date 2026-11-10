/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d8450; name: FUN_032d8450
 */


void FUN_032d8450(undefined8 *param_1,int param_2,undefined8 param_3,byte param_4,undefined8 param_5
                 ,int param_6,long *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_2c8;
  undefined8 *puStack_2c0;
  undefined8 *local_2b8;
  undefined1 auStack_2b0 [112];
  ulong local_240;
  undefined8 *local_1a0;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  
  FUN_032d8ac8(auStack_2b0);
  FUN_032d8f98(auStack_2b0,&DAT_04358310);
  local_240 = local_240 | 0x80000;
  local_1a0 = (undefined8 *)0x0;
  iVar4 = FUN_032d90d8(auStack_2b0);
  iVar4 = iVar4 + param_2 * 0x10 + 0x40;
  iVar5 = FUN_032e2188(param_3);
  iVar6 = FUN_032e2188(param_3);
  uVar3 = (iVar5 + iVar4) - 1U & -iVar6;
  local_2c8 = (undefined8 *)FUN_032cf864(param_5,uVar3 + param_6);
  *param_7 = (long)local_2c8 + (long)(int)uVar3;
  puStack_2c0 = (undefined8 *)((long)local_2c8 + (long)iVar4);
  local_2b8 = local_2c8;
  pbVar7 = (byte *)FUN_032d6888(&local_2c8,0x30);
  *(undefined8 *)(pbVar7 + 8) = param_3;
  *pbVar7 = param_4 & 1;
  *(int *)(pbVar7 + 0x10) = param_2;
  puVar1 = (undefined8 *)
           (((long)local_2c8 + (7 - (long)local_2b8) & 0xfffffffffffffff8U) + (long)local_2b8);
  local_2c8 = puVar1 + 2;
  if (puStack_2c0 < local_2c8) {
    local_70 = 0;
    local_80 = 0;
    puStack_78 = PTR_DAT_04372528;
    FUN_03320b50(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x2f,
                 "hkLinearBuffer exhausted",&local_80);
  }
  *puVar1 = &PTR_LAB_0434a9b0;
  puVar1[1] = param_5;
  local_240 = local_240 | 0x80000;
  local_1a0 = puVar1;
  lVar8 = FUN_032d9e80(auStack_2b0,&local_2c8);
  lVar11 = 7 - (long)local_2b8;
  lVar10 = (long)*(int *)(pbVar7 + 0x10) * 8;
  lVar2 = (lVar11 + (long)local_2c8 & 0xfffffffffffffff8U) + (long)local_2b8;
  local_2c8 = (undefined8 *)(lVar2 + lVar10);
  if (puStack_2c0 < local_2c8) {
    local_70 = 0;
    local_80 = 0;
    puStack_78 = PTR_DAT_04372528;
    FUN_03320b50(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x2f,
                 "hkLinearBuffer exhausted",&local_80);
    lVar10 = (long)*(int *)(pbVar7 + 0x10) << 3;
    lVar11 = 7 - (long)local_2b8;
  }
  *(long *)(pbVar7 + 0x18) = lVar2;
  lVar2 = ((long)local_2c8 + lVar11 & 0xfffffffffffffff8U) + (long)local_2b8;
  local_2c8 = (undefined8 *)(lVar2 + lVar10);
  if (puStack_2c0 < local_2c8) {
    local_70 = 0;
    local_80 = 0;
    puStack_78 = PTR_DAT_04372528;
    FUN_03320b50(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",0x2f,
                 "hkLinearBuffer exhausted",&local_80);
  }
  *(long *)(pbVar7 + 0x20) = lVar2;
  pbVar7[0x28] = 0;
  pbVar7[0x29] = 0;
  pbVar7[0x2a] = 0;
  pbVar7[0x2b] = 0;
  pbVar7[0x2c] = 0;
  pbVar7[0x2d] = 0;
  pbVar7[0x2e] = 0;
  pbVar7[0x2f] = 0;
  *param_1 = pbVar7;
  param_1[1] = lVar8;
  if (lVar8 == 0) {
    param_1[2] = 0;
  }
  else {
    uVar9 = FUN_032e3508(lVar8);
    param_1[2] = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_032e0c28(uVar9 & 0xfffffffffffffffe);
    }
  }
  FUN_032d8c08(auStack_2b0);
  return;
}


