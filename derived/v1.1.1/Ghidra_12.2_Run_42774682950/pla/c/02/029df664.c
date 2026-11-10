/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029df664; name: FUN_029df664
 */


void FUN_029df664(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  undefined4 local_11c;
  long local_118 [10];
  undefined6 uStack_c8;
  undefined2 local_c2;
  undefined2 uStack_c0;
  byte bStack_be;
  undefined1 uStack_bd;
  bool bStack_bc;
  undefined1 uStack_bb;
  byte local_b8 [3];
  char local_b5;
  int local_a8;
  undefined4 local_a4;
  long local_a0;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  byte *pbStack_70;
  byte *local_68;
  undefined4 *puStack_60;
  undefined8 local_58;
  
  FUN_029828bc(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1],param_3[4]);
  FUN_02991b68(*(undefined8 *)(param_1 + 0x38),*param_3,*(undefined4 *)param_3[1],local_b8,
               (char)param_3[5]);
  local_118[0] = *param_3;
  local_118[1] = param_3[1];
  local_118[2] = param_3[4];
  FUN_029e00bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x860),&local_a0,local_118);
  uStack_c0 = 0;
  bStack_be = 0;
  uStack_bd = 0;
  bStack_bc = false;
  uStack_bb = 0;
  local_118[0] = 0;
  local_11c = 0xffffffff;
  local_118[9] = 0;
  uStack_c8 = 0;
  local_c2 = 0;
  local_118[7] = 0;
  local_118[8] = 0;
  local_118[5] = 0;
  local_118[6] = 0;
  local_118[3] = 0;
  local_118[4] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  if (*(char *)(param_3[4] + 0x5a) != '\0') {
    iVar2 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),*param_3,*(undefined4 *)param_3[1]);
    if (iVar2 != 9) {
      if (local_b5 == '\0') {
        local_88 = (long *)param_3[3];
        local_78 = (long *)param_3[4];
        local_a0 = *param_3;
        local_90 = param_3[1];
        local_98 = param_3[2];
        if ((*(char *)((long)local_78 + 0x5b) != '\x01') || (local_b8[0] < 2)) {
          pbStack_70 = (byte *)local_118;
          local_80 = (long *)CONCAT71(local_80._1_7_,(char)param_3[5]);
          puStack_60 = &local_11c;
          local_68 = local_b8;
          local_58 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x108);
          local_a8 = 0;
          FUN_029dfb78(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x940),&local_a8,&local_a0);
          iVar2 = local_a8;
          goto LAB_029df7cc;
        }
      }
      else {
        local_a0 = *param_3;
        local_90 = param_3[1];
        local_78 = (long *)param_3[4];
        local_98 = param_3[2];
        local_88 = (long *)param_3[3];
      }
      pbStack_70 = local_b8;
      local_a4 = 0xffffffff;
      local_80 = local_78;
      local_78 = local_118;
      FUN_029de4dc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8a0),&local_a8,&local_a0);
      local_11c = local_a4;
      iVar2 = local_a8;
      goto LAB_029df7cc;
    }
    local_90 = *param_3;
    local_98 = param_3[1];
    local_a0 = param_3[3];
    local_88 = (long *)param_3[4];
    local_80 = local_118;
    FUN_029dd9e4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x880),&local_a8,&local_a0);
  }
  iVar2 = 0;
LAB_029df7cc:
  local_a0 = *param_3;
  local_98 = param_3[1];
  local_90 = CONCAT44(local_90._4_4_,iVar2);
  FUN_029de1d0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x960),&local_a8,&local_a0);
  local_98 = param_3[1];
  local_a0 = param_3[2];
  local_90 = *param_3;
  local_80 = (long *)CONCAT71(local_80._1_7_,(char)param_3[5]);
  local_88 = local_118;
  FUN_029df26c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x8c0),&local_a8,&local_a0);
  if (local_11c._2_2_ != -1) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    lVar7 = lVar7 + (ulong)*(byte *)(lVar7 + 0x1c8) * 0x40;
    lVar6 = param_3[1];
    if (*(char *)(lVar7 + 0x21) == '\0') {
      *(char *)(lVar7 + 0x21) = '\x01';
      *(undefined1 *)(lVar7 + 0x22) = 1;
    }
    *(undefined1 *)(lVar7 + 0x26) = 1;
    lVar8 = *(long *)(param_1 + 0x28);
    sVar9 = local_11c._2_2_;
    if (local_11c._2_2_ == -1) {
      sVar9 = (short)**(undefined4 **)(lVar8 + 8);
    }
    *(short *)(lVar7 + 0x24) = sVar9;
    FUN_02a3bf4c(*(undefined8 *)(lVar8 + 0x10),lVar6,lVar7 + 0x18,&local_11c);
  }
  if (iVar2 != 0) {
    if (bStack_be == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = local_118[0];
    }
    bStack_bc = bStack_be != 0;
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x20);
    while (lVar7 != 0) {
      uVar1 = *(undefined1 *)(lVar7 + 0x7d);
      uVar4 = FUN_029cddec(uVar5,lVar6);
      if (((uVar4 & 1) == 0) &&
         (uVar3 = FUN_02957720(*(undefined8 *)(lVar6 + 0x188),2,uVar1,0,0), -1 < (int)uVar3)) {
        uVar3 = uVar3 & 0xff;
        if (uVar3 < 10) {
          *(undefined1 *)
           (*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x10) + 0x188) + (ulong)uVar3 + 0x10) = 1;
        }
        FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x6d,(ulong)uVar3,2);
      }
      uVar4 = (ulong)bStack_bc;
      if (bStack_be <= bStack_bc) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        lVar6 = *(long *)(param_1 + 0x10);
        lVar8 = *(long *)(param_1 + 0x20);
        break;
      }
      bStack_bc = (bool)(bStack_bc + 1);
      lVar8 = *(long *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 8);
      lVar6 = *(long *)(param_1 + 0x10);
      lVar7 = local_118[uVar4];
    }
    uVar4 = FUN_029cddec(uVar5,lVar6);
    if (((uVar4 & 1) == 0) &&
       (uVar3 = FUN_02957720(*(undefined8 *)(lVar6 + 0x188),5,0x1f,0,0), -1 < (int)uVar3)) {
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 10) {
        *(undefined1 *)
         (*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x10) + 0x188) + (ulong)uVar3 + 0x10) = 1;
      }
      FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x6d,(ulong)uVar3,5);
    }
  }
  return;
}


