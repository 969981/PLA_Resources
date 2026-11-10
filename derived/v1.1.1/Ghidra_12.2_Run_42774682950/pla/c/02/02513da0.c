/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02513da0; name: FUN_02513da0
 */


/* WARNING: Removing unreachable block (ram,0x02513e20) */

undefined8 FUN_02513da0(ulong param_1)

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
    uVar6 = FUN_025169e0(param_1);
    return uVar6;
  }
  local_60 = &local_58;
  FUN_02516440(&local_60);
  lVar4 = 0;
  while( true ) {
    if (lVar4 == 1) {
      pbVar5 = (byte *)FUN_020d5a08();
      goto LAB_02513e64;
    }
    if (lVar4 == 0) break;
    FUN_02516798();
    puVar1 = DAT_043e8a98;
    if ((DAT_043e8a88 & 1) == 0) {
      puVar1 = &DAT_043e8a89;
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
      pbVar5 = (byte *)FUN_020d51a4();
LAB_02513e64:
      pbVar7 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar7 = pbVar5 + 1;
      }
      FUN_00151a70(local_58,0xfff0b9d8,pbVar7);
    }
  }
  pbVar5 = (byte *)FUN_020d3fb0();
  goto LAB_02513e64;
}


