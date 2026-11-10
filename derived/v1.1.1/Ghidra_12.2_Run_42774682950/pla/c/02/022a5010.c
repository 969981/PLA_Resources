/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022a5010; name: FUN_022a5010
 */


/* WARNING: Removing unreachable block (ram,0x022a5090) */

undefined8 FUN_022a5010(ulong param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong local_80;
  undefined4 local_78;
  ulong local_70;
  undefined4 local_68;
  ulong *local_60;
  ulong local_58;
  undefined1 auStack_48 [8];
  
  local_70 = local_70 & 0xffffffff00000000;
  local_58 = param_1;
  lVar4 = FUN_00150ba0(param_1,0xfff0b9d3,&local_70);
  if ((lVar4 != 0xccc2ccc1) || ((int)local_70 == 0)) {
    uVar6 = FUN_022a9190(param_1);
    return uVar6;
  }
  local_60 = &local_58;
  FUN_022a8604(&local_60);
  lVar4 = 0;
  while( true ) {
    if (lVar4 == 1) {
      pbVar5 = (byte *)FUN_022a8b3c();
      goto LAB_022a50d4;
    }
    if (lVar4 == 0) break;
    FUN_022a8f54();
    puVar1 = DAT_043e0840;
    if ((DAT_043e0830 & 1) == 0) {
      puVar1 = &DAT_043e0831;
    }
    FUN_00151a70(local_58,0xfff0b9d8,puVar1);
    FUN_00152090(local_58,0xffffffff);
    while( true ) {
      uVar2 = FUN_0014fef0(local_58);
      iVar3 = FUN_00150310(local_58,uVar2);
      if (iVar3 != 0) {
        local_70 = local_58;
        local_68 = 2;
        local_80 = local_58;
        local_78 = 3;
        FUN_008ea660(auStack_48,local_58,&local_70,&local_80,uVar2);
      }
      FUN_0014ff10(local_58,3);
      lVar4 = lVar4 + 1;
      if (lVar4 == 4) {
        FUN_0014ff10(local_58,0);
        return 0;
      }
      if (lVar4 != 2) break;
      pbVar5 = (byte *)FUN_022a8d1c();
LAB_022a50d4:
      pbVar7 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar7 = pbVar5 + 1;
      }
      FUN_00151a70(local_58,0xfff0b9d8,pbVar7);
    }
  }
  pbVar5 = (byte *)FUN_022a895c();
  goto LAB_022a50d4;
}


