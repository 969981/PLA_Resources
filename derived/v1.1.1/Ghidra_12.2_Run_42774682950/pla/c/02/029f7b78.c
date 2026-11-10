/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f7b78; name: FUN_029f7b78
 */


void FUN_029f7b78(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_48;
  
  uVar3 = (ulong)*(byte *)(param_3 + 0x1e);
  if (uVar3 != 0) {
    puVar4 = param_3;
    do {
      uStack_5c = 0;
      local_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_60 = 0;
      local_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      local_48 = *puVar4;
      uVar1 = FUN_029f7ed0(param_1,&local_b0,&local_48,0);
      if (((uVar1 & 1) != 0) && ((ulong)*(byte *)(param_2 + 0xd88) < 0x24)) {
        lVar2 = param_2 + (ulong)*(byte *)(param_2 + 0xd88) * 0x60;
        *(undefined8 *)(lVar2 + 0x18) = local_a0;
        *(undefined8 *)(lVar2 + 0x20) = uStack_98;
        *(undefined8 *)(lVar2 + 8) = local_b0;
        *(undefined8 *)(lVar2 + 0x10) = uStack_a8;
        *(ulong *)(lVar2 + 0x38) = CONCAT44(local_7c,uStack_80);
        *(ulong *)(lVar2 + 0x40) = CONCAT44(uStack_74,uStack_78);
        *(undefined8 *)(lVar2 + 0x28) = local_90;
        *(undefined8 *)(lVar2 + 0x30) = uStack_88;
        *(ulong *)(lVar2 + 0x58) = CONCAT44(uStack_5c,local_60);
        *(undefined8 *)(lVar2 + 0x60) = uStack_58;
        *(ulong *)(lVar2 + 0x48) = CONCAT44(local_6c,uStack_70);
        *(ulong *)(lVar2 + 0x50) = CONCAT44(uStack_64,uStack_68);
        *(char *)(param_2 + 0xd88) = *(char *)(param_2 + 0xd88) + '\x01';
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  uVar3 = (ulong)*(byte *)((long)param_3 + 0xf1);
  if (uVar3 != 0) {
    puVar4 = param_3 + 6;
    do {
      uStack_5c = 0;
      local_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_60 = 0;
      local_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      local_48 = *puVar4;
      uVar1 = FUN_029f7ed0(param_1,&local_b0,&local_48,1);
      if (((uVar1 & 1) != 0) && ((ulong)*(byte *)(param_2 + 0xd88) < 0x24)) {
        lVar2 = param_2 + (ulong)*(byte *)(param_2 + 0xd88) * 0x60;
        *(undefined8 *)(lVar2 + 0x18) = local_a0;
        *(undefined8 *)(lVar2 + 0x20) = uStack_98;
        *(undefined8 *)(lVar2 + 8) = local_b0;
        *(undefined8 *)(lVar2 + 0x10) = uStack_a8;
        *(ulong *)(lVar2 + 0x38) = CONCAT44(local_7c,uStack_80);
        *(ulong *)(lVar2 + 0x40) = CONCAT44(uStack_74,uStack_78);
        *(undefined8 *)(lVar2 + 0x28) = local_90;
        *(undefined8 *)(lVar2 + 0x30) = uStack_88;
        *(ulong *)(lVar2 + 0x58) = CONCAT44(uStack_5c,local_60);
        *(undefined8 *)(lVar2 + 0x60) = uStack_58;
        *(ulong *)(lVar2 + 0x48) = CONCAT44(local_6c,uStack_70);
        *(ulong *)(lVar2 + 0x50) = CONCAT44(uStack_64,uStack_68);
        *(char *)(param_2 + 0xd88) = *(char *)(param_2 + 0xd88) + '\x01';
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  uVar3 = (ulong)*(byte *)((long)param_3 + 0xf2);
  if (uVar3 != 0) {
    puVar4 = param_3 + 0xc;
    do {
      uStack_5c = 0;
      local_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_60 = 0;
      local_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      local_48 = *puVar4;
      uVar1 = FUN_029f7ed0(param_1,&local_b0,&local_48,2);
      if (((uVar1 & 1) != 0) && ((ulong)*(byte *)(param_2 + 0xd88) < 0x24)) {
        lVar2 = param_2 + (ulong)*(byte *)(param_2 + 0xd88) * 0x60;
        *(undefined8 *)(lVar2 + 0x18) = local_a0;
        *(undefined8 *)(lVar2 + 0x20) = uStack_98;
        *(undefined8 *)(lVar2 + 8) = local_b0;
        *(undefined8 *)(lVar2 + 0x10) = uStack_a8;
        *(ulong *)(lVar2 + 0x38) = CONCAT44(local_7c,uStack_80);
        *(ulong *)(lVar2 + 0x40) = CONCAT44(uStack_74,uStack_78);
        *(undefined8 *)(lVar2 + 0x28) = local_90;
        *(undefined8 *)(lVar2 + 0x30) = uStack_88;
        *(ulong *)(lVar2 + 0x58) = CONCAT44(uStack_5c,local_60);
        *(undefined8 *)(lVar2 + 0x60) = uStack_58;
        *(ulong *)(lVar2 + 0x48) = CONCAT44(local_6c,uStack_70);
        *(ulong *)(lVar2 + 0x50) = CONCAT44(uStack_64,uStack_68);
        *(char *)(param_2 + 0xd88) = *(char *)(param_2 + 0xd88) + '\x01';
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  uVar3 = (ulong)*(byte *)((long)param_3 + 0xf3);
  if (uVar3 != 0) {
    puVar4 = param_3 + 0x12;
    do {
      uStack_5c = 0;
      local_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_60 = 0;
      local_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      local_48 = *puVar4;
      uVar1 = FUN_029f7ed0(param_1,&local_b0,&local_48,3);
      if (((uVar1 & 1) != 0) && ((ulong)*(byte *)(param_2 + 0xd88) < 0x24)) {
        lVar2 = param_2 + (ulong)*(byte *)(param_2 + 0xd88) * 0x60;
        *(undefined8 *)(lVar2 + 0x18) = local_a0;
        *(undefined8 *)(lVar2 + 0x20) = uStack_98;
        *(undefined8 *)(lVar2 + 8) = local_b0;
        *(undefined8 *)(lVar2 + 0x10) = uStack_a8;
        *(ulong *)(lVar2 + 0x38) = CONCAT44(local_7c,uStack_80);
        *(ulong *)(lVar2 + 0x40) = CONCAT44(uStack_74,uStack_78);
        *(undefined8 *)(lVar2 + 0x28) = local_90;
        *(undefined8 *)(lVar2 + 0x30) = uStack_88;
        *(ulong *)(lVar2 + 0x58) = CONCAT44(uStack_5c,local_60);
        *(undefined8 *)(lVar2 + 0x60) = uStack_58;
        *(ulong *)(lVar2 + 0x48) = CONCAT44(local_6c,uStack_70);
        *(ulong *)(lVar2 + 0x50) = CONCAT44(uStack_64,uStack_68);
        *(char *)(param_2 + 0xd88) = *(char *)(param_2 + 0xd88) + '\x01';
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  uVar3 = (ulong)*(byte *)((long)param_3 + 0xf4);
  if (uVar3 != 0) {
    param_3 = param_3 + 0x18;
    do {
      uStack_5c = 0;
      local_6c = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      local_60 = 0;
      local_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      local_48 = *param_3;
      uVar1 = FUN_029f7ed0(param_1,&local_b0,&local_48,4);
      if (((uVar1 & 1) != 0) && ((ulong)*(byte *)(param_2 + 0xd88) < 0x24)) {
        lVar2 = param_2 + (ulong)*(byte *)(param_2 + 0xd88) * 0x60;
        *(undefined8 *)(lVar2 + 0x18) = local_a0;
        *(undefined8 *)(lVar2 + 0x20) = uStack_98;
        *(undefined8 *)(lVar2 + 8) = local_b0;
        *(undefined8 *)(lVar2 + 0x10) = uStack_a8;
        *(ulong *)(lVar2 + 0x38) = CONCAT44(local_7c,uStack_80);
        *(ulong *)(lVar2 + 0x40) = CONCAT44(uStack_74,uStack_78);
        *(undefined8 *)(lVar2 + 0x28) = local_90;
        *(undefined8 *)(lVar2 + 0x30) = uStack_88;
        *(ulong *)(lVar2 + 0x58) = CONCAT44(uStack_5c,local_60);
        *(undefined8 *)(lVar2 + 0x60) = uStack_58;
        *(ulong *)(lVar2 + 0x48) = CONCAT44(local_6c,uStack_70);
        *(ulong *)(lVar2 + 0x50) = CONCAT44(uStack_64,uStack_68);
        *(char *)(param_2 + 0xd88) = *(char *)(param_2 + 0xd88) + '\x01';
      }
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}


