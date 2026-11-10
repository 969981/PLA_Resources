/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a2c9f0; name: FUN_02a2c9f0
 */


void FUN_02a2c9f0(long param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long local_a0;
  undefined4 local_98;
  undefined1 local_94;
  byte local_90;
  byte local_8f;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  byte bStack_74;
  undefined2 local_73;
  undefined1 uStack_71;
  undefined5 uStack_70;
  undefined2 local_6b;
  undefined1 uStack_69;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  char local_38 [8];
  
  bVar2 = (byte)param_2;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + (ulong)param_3 * 8 + 0x120);
  uVar1 = *(byte *)(lVar6 + 0x390) + 0xff;
  if (((uVar1 >> 8 == 0) || (0x1d < (uVar1 & 0xff))) && ((*(byte *)(lVar6 + 0x1b0) & 7) == 0)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x300);
    if ((*(int *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x28) + 0x1b0) == 0) &&
       (uVar3 = FUN_029701e4(*(undefined8 *)(lVar5 + 0x38),lVar6,1), (uVar3 & 1) != 0)) {
      local_8c = 0x22;
      local_88 = (ulong)(param_2 << 3 | 1) & 0xff;
      local_80 = 0;
      local_7c = 1;
      uStack_70 = 0;
      local_6b = 0;
      uStack_69 = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      local_58 = 0;
      uStack_78 = 0x820165;
      local_73 = 0;
      uStack_71 = 0;
      local_90 = bVar2;
      local_8f = param_3;
      bStack_74 = param_3;
      FUN_029ce668(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x9c0),&local_a0,&local_90);
      if ((*(byte *)(lVar6 + 0x198) & 7) != 0) {
        uStack_68 = 0x1000000;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_78 = 0;
        bStack_74 = 0;
        local_73 = 0;
        uStack_71 = 0;
        uStack_70 = 0;
        local_6b = 0x100;
        local_48 = 0;
        local_8c = 0x21;
        local_80 = 0;
        local_7c = 0;
        local_88 = (ulong)param_3;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        local_90 = bVar2;
        FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb40),&local_a0,&local_90);
      }
      if ((*(byte *)(lVar6 + 0x1a8) & 7) != 0) {
        uStack_68 = 0x1000000;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_78 = 0;
        bStack_74 = 0;
        local_73 = 0;
        uStack_71 = 0;
        uStack_70 = 0;
        local_6b = 0x100;
        local_48 = 0;
        local_8c = 0x23;
        local_80 = 0;
        local_7c = 0;
        local_88 = (ulong)param_3;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        local_90 = bVar2;
        FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb40),&local_a0,&local_90);
      }
      bVar4 = true;
      bVar2 = *(byte *)(lVar6 + 0x387);
    }
    else {
      bVar4 = false;
      bVar2 = *(byte *)(lVar6 + 0x387);
    }
    if ((bVar2 >> 3 & 1) != 0) {
      uStack_68 = 0;
      uStack_78 = 0;
      bStack_74 = 0;
      local_73 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      local_6b = 0;
      uStack_69 = 0;
      local_8c = 3;
      local_88 = 0;
      local_80 = 0;
      local_7c = 0;
      if (!bVar4) {
        local_88 = CONCAT44((uint)param_3,0x820165);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x11e0);
      local_a0 = *(long *)(*(long *)(*(long *)(lVar6 + 0x10) + 8) + (ulong)param_3 * 8 + 0x120);
      if (*(short *)(local_a0 + 0x74) != 0) {
        local_98 = 3;
        local_94 = 0;
        local_90 = param_3;
        FUN_029f83f8(*(undefined8 *)(*(long *)(lVar6 + 0x60) + 0x1840),local_38,&local_a0);
        if (local_38[0] != '\0') {
          FUN_02a3a6c4(*(undefined8 *)(lVar6 + 0x20),&local_88);
        }
      }
    }
  }
  return;
}


