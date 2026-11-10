/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024be550; name: FUN_024be550
 */


/* WARNING: Removing unreachable block (ram,0x024be5f0) */

undefined8 FUN_024be550(ulong param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong local_98;
  undefined4 local_90;
  ulong local_88;
  undefined4 local_80;
  ulong *local_78;
  ulong local_70;
  undefined1 auStack_68 [8];
  
  local_88 = local_88 & 0xffffffff00000000;
  local_70 = param_1;
  lVar4 = FUN_00150ba0(param_1,0xfff0b9d3,&local_88);
  if ((lVar4 != 0xccc2ccc1) || ((int)local_88 == 0)) {
    uVar5 = FUN_024c1950(param_1);
    return uVar5;
  }
  local_78 = &local_70;
  FUN_024c0d84(&local_78);
  lVar4 = 0;
  while( true ) {
    if (lVar4 == 1) {
      FUN_024c12d0();
      puVar6 = DAT_043e7628;
      if ((DAT_043e7618 & 1) != 0) goto LAB_024be664;
      puVar6 = &DAT_043e7619;
      goto LAB_024be664;
    }
    if (lVar4 == 0) break;
    FUN_024c1704();
    puVar1 = DAT_043e7718;
    if ((DAT_043e7708 & 1) == 0) {
      puVar1 = &DAT_043e7709;
    }
    FUN_00151a70(local_70,0xfff0b9d8,puVar1);
    FUN_00152090(local_70,0xffffffff);
    while( true ) {
      uVar2 = FUN_0014fef0(local_70);
      iVar3 = FUN_00150310(local_70,uVar2);
      if (iVar3 != 0) {
        local_88 = local_70;
        local_80 = 2;
        local_98 = local_70;
        local_90 = 3;
        FUN_008ea660(auStack_68,local_70,&local_88,&local_98,uVar2);
      }
      FUN_0014ff10(local_70,3);
      lVar4 = lVar4 + 1;
      if (lVar4 == 4) {
        FUN_0014ff10(local_70,0);
        return 0;
      }
      if (lVar4 != 2) break;
      FUN_024c14c4();
      puVar6 = DAT_043e76a0;
      if ((DAT_043e7690 & 1) == 0) {
        puVar6 = (undefined8 *)&DAT_043e7691;
      }
LAB_024be664:
      FUN_00151a70(local_70,0xfff0b9d8,puVar6);
    }
  }
  FUN_024c10dc();
  puVar6 = DAT_043e75b0;
  if ((DAT_043e75a0 & 1) != 0) goto LAB_024be664;
  puVar6 = (undefined8 *)&DAT_043e75a1;
  goto LAB_024be664;
}


