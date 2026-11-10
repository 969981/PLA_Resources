/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fbc760; name: FUN_00fbc760
 */


/* WARNING: Removing unreachable block (ram,0x00fbc7f4) */

undefined8 FUN_00fbc760(ulong param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong local_90;
  undefined4 local_88;
  ulong local_80;
  undefined4 local_78;
  ulong *local_70;
  ulong local_68;
  undefined1 auStack_58 [8];
  
  local_80 = local_80 & 0xffffffff00000000;
  local_68 = param_1;
  lVar4 = FUN_00150ba0(param_1,0xfff0b9d3,&local_80);
  if ((lVar4 != 0xccc2ccc1) || ((int)local_80 == 0)) {
    uVar6 = FUN_00fbfa20(param_1);
    return uVar6;
  }
  local_70 = &local_68;
  FUN_00fbee38(&local_70);
  lVar4 = 0;
  while( true ) {
    if (lVar4 == 1) {
      FUN_00fbf384();
      pbVar7 = DAT_043b6f78;
      if ((DAT_043b6f68 & 1) != 0) goto LAB_00fbc868;
      pbVar7 = &DAT_043b6f69;
      goto LAB_00fbc868;
    }
    if (lVar4 == 0) break;
    FUN_00fbf7c8();
    puVar1 = DAT_043b7068;
    if ((DAT_043b7058 & 1) == 0) {
      puVar1 = &DAT_043b7059;
    }
    FUN_00151a70(local_68,0xfff0b9d8,puVar1);
    FUN_00152090(local_68,0xffffffff);
    while( true ) {
      uVar2 = FUN_0014fef0(local_68);
      iVar3 = FUN_00150310(local_68,uVar2);
      if (iVar3 != 0) {
        local_80 = local_68;
        local_78 = 2;
        local_90 = local_68;
        local_88 = 3;
        FUN_008ea660(auStack_58,local_68,&local_80,&local_90,uVar2);
      }
      FUN_0014ff10(local_68,3);
      lVar4 = lVar4 + 1;
      if (lVar4 == 4) {
        FUN_0014ff10(local_68,0);
        return 0;
      }
      if (lVar4 != 2) break;
      pbVar5 = (byte *)FUN_00fbf578();
      pbVar7 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar7 = pbVar5 + 1;
      }
LAB_00fbc868:
      FUN_00151a70(local_68,0xfff0b9d8,pbVar7);
    }
  }
  FUN_00fbf190();
  pbVar7 = DAT_043b6f00;
  if ((DAT_043b6ef0 & 1) != 0) goto LAB_00fbc868;
  pbVar7 = &DAT_043b6ef1;
  goto LAB_00fbc868;
}


