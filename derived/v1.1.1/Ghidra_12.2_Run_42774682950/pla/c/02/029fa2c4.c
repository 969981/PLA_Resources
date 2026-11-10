/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fa2c4; name: FUN_029fa2c4
 */


void FUN_029fa2c4(long param_1,long param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  byte local_78;
  byte local_77;
  undefined2 local_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined7 uStack_43;
  undefined1 auStack_38 [8];
  
  if (*(short *)(param_2 + 0x74) == 0) {
    return;
  }
  FUN_02a3ba10(*(undefined8 *)(param_1 + 0x20),param_2,param_3,0);
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uVar1 = FUN_02956eb0(param_3 & 0xffffffff,param_4,param_2,0,&local_a0);
  if ((uVar1 & 1) != 0) {
    local_77 = 0;
    local_78 = *(byte *)(param_2 + 0x7d);
    uStack_70._4_4_ = (undefined4)uStack_98;
    uStack_68 = (undefined4)((ulong)uStack_98 >> 0x20);
    local_5c = (undefined4)uStack_88;
    uStack_58 = (undefined4)((ulong)uStack_88 >> 0x20);
    local_64 = (undefined4)local_90;
    uStack_60 = (undefined4)((ulong)local_90 >> 0x20);
    local_54 = local_80;
    uStack_74 = (undefined2)local_a0;
    uStack_72 = (undefined2)((ulong)local_a0 >> 0x10);
    uStack_70._0_4_ = (uint)((ulong)local_a0 >> 0x20);
    FUN_029e54ac(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xde0),auStack_38,&local_78);
  }
  lVar3 = DAT_043ecde0;
  switch((int)param_3) {
  case 0x10:
    uVar1 = *(ulong *)(DAT_043ecde0 + 8);
    uVar8 = *(ulong *)(DAT_043ecde0 + 0x10);
    do {
      uVar9 = uVar1 ^ uVar8;
      iVar7 = (int)uVar8;
      uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
      uVar5 = (ulong)(uint)((int)uVar1 + iVar7) & 3;
      uVar1 = uVar9 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar9 << 0x10;
    } while (uVar5 == 3);
    *(ulong *)(DAT_043ecde0 + 8) = uVar1;
    *(ulong *)(lVar3 + 0x10) = uVar8;
    if (((((*(byte *)(param_2 + 0x98) & 7) == 0) && ((*(byte *)(param_2 + 0xa0) & 7) == 0)) &&
        ((*(byte *)(param_2 + 0xa8) & 7) == 0)) &&
       ((((*(byte *)(param_2 + 0xb0) & 7) == 0 && ((*(byte *)(param_2 + 0xb8) & 7) == 0)) &&
        (((*(byte *)(param_2 + 0xc0) & 7) == 0 && ((*(byte *)(param_2 + 200) & 7) == 0)))))) {
      local_78 = *(byte *)(param_2 + 0x7d);
      uStack_68 = 0x1000000;
      local_64 = 1;
      uStack_60 = 0;
      uStack_70 = (*param_4 & 0xf8 | uVar5 << 8) + 0x202;
      local_5c = 0;
      uStack_58 = 0;
      local_54 = 0;
      uStack_50 = 0;
      local_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_43 = 0;
      uStack_74 = 2;
      uStack_72 = 0;
      local_77 = local_78;
      FUN_029ce668(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x9c0),auStack_38,&local_78);
    }
    break;
  case 0x11:
    lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 800);
    lVar3 = *(long *)(*(long *)(*(long *)(lVar6 + 0x10) + 8) + (ulong)*(byte *)(param_2 + 0x7d) * 8
                     + 0x120);
    if (*(short *)(lVar3 + 0x76) == 0) {
      return;
    }
    uVar2 = *(undefined8 *)(lVar6 + 0x38);
    uVar4 = 1;
    goto LAB_029fa4cc;
  case 0x15:
    lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 800);
    lVar3 = *(long *)(*(long *)(*(long *)(lVar6 + 0x10) + 8) + (ulong)*(byte *)(param_2 + 0x7d) * 8
                     + 0x120);
    if (*(short *)(lVar3 + 0x76) == 0) {
      return;
    }
    uVar2 = *(undefined8 *)(lVar6 + 0x38);
    uVar4 = 7;
LAB_029fa4cc:
    FUN_029825a0(uVar2,lVar3,uVar4);
    break;
  case 0x16:
    local_78 = *(byte *)(param_2 + 0x7d);
    local_77 = 0;
    uStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_58 = 0;
    local_54 = 0;
    uStack_70._4_4_ = 0;
    uStack_70._0_4_ = (uint)local_78;
    uStack_74 = 0x114;
    uStack_72 = 0x102;
    FUN_029e54ac(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xde0),auStack_38,&local_78);
    local_77 = *(undefined1 *)(param_2 + 0x7d);
    uStack_72 = 0;
    local_76 = 0;
    uStack_74 = 0;
    uStack_70._4_4_ = 0;
    uStack_68 = 0;
    local_78 = (byte)*param_4 >> 3;
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_58 = 0;
    local_54 = 0;
    uStack_50 = 0;
    local_4c = 0;
    uStack_70._0_4_ = CONCAT31(uStack_70._1_3_,0x2a);
    FUN_029e4e54(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xda0),auStack_38,&local_78);
  }
  return;
}


