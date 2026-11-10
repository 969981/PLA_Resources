/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015a6d00; name: FUN_015a6d00
 */


/* WARNING: Removing unreachable block (ram,0x015a6da0) */

undefined8 FUN_015a6d00(ulong param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong local_98;
  undefined4 local_90;
  ulong local_88;
  undefined4 local_80;
  ulong *local_78;
  ulong local_70;
  undefined1 auStack_68 [8];
  
  local_88 = local_88 & 0xffffffff00000000;
  local_70 = param_1;
  lVar3 = FUN_00150ba0(param_1,0xfff0b9d3,&local_88);
  if ((lVar3 != 0xccc2ccc1) || ((int)local_88 == 0)) {
    uVar4 = FUN_015aa190(param_1);
    return uVar4;
  }
  local_78 = &local_70;
  FUN_015a961c(&local_78);
  lVar3 = 0;
  while( true ) {
    if (lVar3 == 1) {
      FUN_015a9b50();
      puVar5 = DAT_043ca120;
      if ((DAT_043ca110 & 1) != 0) goto LAB_015a6e14;
      puVar5 = &DAT_043ca111;
      goto LAB_015a6e14;
    }
    if (lVar3 == 0) break;
    FUN_015a9f54();
    puVar5 = DAT_043ca210;
    if ((DAT_043ca200 & 1) == 0) {
      puVar5 = &DAT_043ca201;
    }
    FUN_00151a70(local_70,0xfff0b9d8,puVar5);
    FUN_00152090(local_70,0xffffffff);
    while( true ) {
      uVar1 = FUN_0014fef0(local_70);
      iVar2 = FUN_00150310(local_70,uVar1);
      if (iVar2 != 0) {
        local_88 = local_70;
        local_80 = 2;
        local_98 = local_70;
        local_90 = 3;
        FUN_008ea660(auStack_68,local_70,&local_88,&local_98,uVar1);
      }
      FUN_0014ff10(local_70,3);
      lVar3 = lVar3 + 1;
      if (lVar3 == 4) {
        FUN_0014ff10(local_70,0);
        return 0;
      }
      if (lVar3 != 2) break;
      FUN_015a9d2c();
      puVar5 = DAT_043ca198;
      if ((DAT_043ca188 & 1) == 0) {
        puVar5 = &DAT_043ca189;
      }
LAB_015a6e14:
      FUN_00151a70(local_70,0xfff0b9d8,puVar5);
    }
  }
  FUN_015a9974();
  puVar5 = DAT_043ca0a8;
  if ((DAT_043ca098 & 1) != 0) goto LAB_015a6e14;
  puVar5 = &DAT_043ca099;
  goto LAB_015a6e14;
}


