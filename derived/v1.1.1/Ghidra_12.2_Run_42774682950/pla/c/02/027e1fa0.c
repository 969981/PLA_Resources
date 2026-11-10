/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027e1fa0; name: FUN_027e1fa0
 */


/* WARNING: Removing unreachable block (ram,0x027e2040) */

undefined8 FUN_027e1fa0(ulong param_1)

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
    uVar4 = FUN_027e5800(param_1);
    return uVar4;
  }
  local_78 = &local_70;
  FUN_027e4c28(&local_78);
  lVar3 = 0;
  while( true ) {
    if (lVar3 == 1) {
      FUN_027e5174();
      puVar5 = DAT_043eab10;
      if ((DAT_043eab00 & 1) != 0) goto LAB_027e20b4;
      puVar5 = &DAT_043eab01;
      goto LAB_027e20b4;
    }
    if (lVar3 == 0) break;
    FUN_027e55a8();
    puVar5 = DAT_043eac00;
    if ((DAT_043eabf0 & 1) == 0) {
      puVar5 = &DAT_043eabf1;
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
      FUN_027e5368();
      puVar5 = DAT_043eab88;
      if ((DAT_043eab78 & 1) == 0) {
        puVar5 = &DAT_043eab79;
      }
LAB_027e20b4:
      FUN_00151a70(local_70,0xfff0b9d8,puVar5);
    }
  }
  FUN_027e4f80();
  puVar5 = DAT_043eaa98;
  if ((DAT_043eaa88 & 1) != 0) goto LAB_027e20b4;
  puVar5 = &DAT_043eaa89;
  goto LAB_027e20b4;
}


