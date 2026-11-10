/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0223d200; name: FUN_0223d200
 */


/* WARNING: Removing unreachable block (ram,0x0223d2a0) */

undefined8 FUN_0223d200(ulong param_1)

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
    uVar4 = FUN_02240920(param_1);
    return uVar4;
  }
  local_78 = &local_70;
  FUN_0223fd38(&local_78);
  lVar3 = 0;
  while( true ) {
    if (lVar3 == 1) {
      FUN_02240284();
      puVar5 = DAT_043df050;
      if ((DAT_043df040 & 1) != 0) goto LAB_0223d314;
      puVar5 = &DAT_043df041;
      goto LAB_0223d314;
    }
    if (lVar3 == 0) break;
    FUN_022406c0();
    puVar5 = DAT_043df140;
    if ((DAT_043df130 & 1) == 0) {
      puVar5 = &DAT_043df131;
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
      FUN_02240478();
      puVar5 = DAT_043df0c8;
      if ((DAT_043df0b8 & 1) == 0) {
        puVar5 = &DAT_043df0b9;
      }
LAB_0223d314:
      FUN_00151a70(local_70,0xfff0b9d8,puVar5);
    }
  }
  FUN_02240090();
  puVar5 = DAT_043defd8;
  if ((DAT_043defc8 & 1) != 0) goto LAB_0223d314;
  puVar5 = &DAT_043defc9;
  goto LAB_0223d314;
}


