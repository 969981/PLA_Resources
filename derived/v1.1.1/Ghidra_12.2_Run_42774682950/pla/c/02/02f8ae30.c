/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f8ae30; name: FUN_02f8ae30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f8ae30(long *param_1,long *param_2,undefined8 *param_3,long param_4,undefined2 *param_5,
                 undefined8 *param_6,undefined8 param_7,uint param_8,undefined8 param_9)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_11c0;
  undefined8 uStack_11b8;
  undefined8 local_11b0;
  uint local_11a8;
  int local_11a4;
  undefined8 local_11a0;
  undefined8 uStack_1198;
  undefined1 local_1190;
  undefined4 local_118c;
  undefined4 local_1188;
  undefined8 local_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined8 uStack_1168;
  uint local_1160 [2];
  long local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined1 local_1140;
  uint local_1138 [255];
  int local_d3c;
  int local_d38;
  int local_d34;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined8 local_ce0;
  undefined4 local_bd8;
  undefined8 local_bd0;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  long local_bb0;
  undefined *local_ba0;
  long *local_b98;
  undefined1 *local_b90;
  undefined4 local_b88;
  undefined1 auStack_b80 [2632];
  undefined2 local_138;
  long local_118;
  long *local_110;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined2 local_d8 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  undefined2 local_a0 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  long local_70;
  
  uVar10 = DAT_0388a148;
  uVar9 = DAT_0388a140;
  uVar8 = _UNK_0388a138;
  uVar7 = _DAT_0388a130;
  uVar6 = _UNK_03889a88;
  uVar5 = _DAT_03889a80;
  uVar4 = _UNK_03888d18;
  uVar3 = _DAT_03888d10;
  local_118 = *param_2;
  local_110 = (long *)param_2[1];
  lVar14 = param_2[2];
  local_100 = (undefined4)param_2[3];
  uStack_fc = (undefined4)((ulong)param_2[3] >> 0x20);
  local_108 = (undefined2)lVar14;
  uStack_106 = (undefined2)((ulong)lVar14 >> 0x10);
  uStack_104 = (undefined4)((ulong)lVar14 >> 0x20);
  local_e8 = param_2[6];
  local_e0 = param_2[7];
  local_b90 = auStack_b80;
  local_f8 = param_2[4];
  local_f0 = param_2[5];
  local_b98 = (long *)0x0;
  local_b88 = 0x800;
  local_ba0 = PTR_DAT_043724f8 + 0x10;
  local_bd0 = 0xd;
  uStack_d28 = _UNK_03889a88;
  local_d30 = _DAT_03889a80;
  uStack_d18 = DAT_0388a148;
  local_d20 = DAT_0388a140;
  local_bb0 = 0;
  local_ce0 = 0;
  local_bd8 = 0;
  local_ce8 = 0;
  local_cf0 = 0;
  local_138 = 0xffff;
  uStack_d08 = _UNK_03888d18;
  local_d10 = _DAT_03888d10;
  uStack_cf8 = _UNK_0388a138;
  local_d00 = _DAT_0388a130;
  auVar15 = NEON_fmov(0x3f800000,4);
  local_1158 = param_2[5];
  local_1148 = 0;
  local_1140 = 0xf;
  local_1138[0] = 0xffffffff;
  uStack_1150 = 0xffffffff;
  local_bc0 = auVar15._0_8_;
  uStack_bb8 = auVar15._8_8_;
  local_d38 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_1158 + 0x18) * 0x200 + 0xb0))
                        (local_1158,local_1138,0x100);
  local_d34 = 0;
  if (0 < local_d38) {
    do {
      local_bd0 = 0xd;
      uStack_d18 = uVar10;
      local_d20 = uVar9;
      local_138 = 0xffff;
      uStack_d28 = uVar6;
      local_d30 = uVar5;
      uStack_cf8 = uVar8;
      local_d00 = uVar7;
      local_1160[0] = local_1138[local_d34];
      local_bb0 = 0;
      uStack_d08 = uVar4;
      local_d10 = uVar3;
      local_ce0 = 0;
      local_bd8 = 0;
      local_ce8 = 0;
      local_cf0 = 0;
      local_bc0 = auVar15._0_8_;
      uStack_bb8 = auVar15._8_8_;
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_2[5] + 0x18) * 0x200 + 0xb8))
                (param_2[5],local_1160,1,&local_d30);
      if (((byte)local_bd0 >> 4 & 1) == 0) {
        local_f0 = local_bb0;
      }
      else {
        local_f0 = FUN_02fed7a0(&local_d30,0,param_1[2]);
      }
      local_11c0 = *param_3;
      uStack_11b8 = param_3[1];
      local_11b0 = param_3[2];
      iVar1 = *(int *)((long)param_3 + 0x1c);
      local_11a0 = param_3[4];
      uStack_1198 = 0;
      local_1190 = *(undefined1 *)(param_3 + 6);
      local_118c = *(undefined4 *)((long)param_3 + 0x34);
      local_1180 = param_3[8];
      uStack_1178 = param_3[9];
      uStack_1168 = SUB168(*(undefined1 (*) [16])(param_3 + 10),8);
      local_1170 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
      local_1188 = *(undefined4 *)(param_3 + 7);
      bVar2 = *(byte *)(param_2[5] + 0x1c);
      local_11a4 = iVar1 + (uint)bVar2;
      local_11a8 = ((local_1160[0] >> (ulong)(-(uint)bVar2 & 0x1f)) + 1 <<
                   (ulong)((0x20 - (uint)bVar2) - iVar1 & 0x1f)) - 1 |
                   (&DAT_03aa74b0)[iVar1] & *(uint *)(param_3 + 3);
      plVar11 = (long *)*param_2;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x40))(plVar11,local_138,5);
      }
      lVar14 = *param_1;
      if (local_110 == (long *)0x0) {
LAB_02f8b1d0:
        (**(code **)(lVar14 + (ulong)*(byte *)(local_f0 + 0x18) * 0xf8 +
                     (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0))
                  (param_1,&local_118,&local_11c0,param_4,param_5,param_6,param_7,param_8 & 1,
                   param_9);
      }
      else {
        local_a0[0] = local_108;
        *(undefined4 *)((undefined8 *)((ulong)local_a0 | 4) + 1) = uStack_fc;
        *(undefined8 *)((ulong)local_a0 | 4) = CONCAT44(local_100,uStack_104);
        local_90 = local_11c0;
        uStack_88 = uStack_11b8;
        local_80 = local_11b0;
        local_78 = local_11a8;
        local_70 = local_f0;
        local_d8[0] = *param_5;
        uVar13 = *(undefined8 *)(param_5 + 2);
        *(undefined4 *)((undefined8 *)((ulong)local_d8 | 4) + 1) = *(undefined4 *)(param_5 + 6);
        *(undefined8 *)((ulong)local_d8 | 4) = uVar13;
        local_c8 = *param_6;
        local_c0 = param_6[1];
        local_b8 = param_6[2];
        local_b0 = *(undefined4 *)(param_6 + 3);
        local_a8 = param_4;
        uVar12 = (**(code **)(*local_110 + 0x40))(local_110,5,(param_8 ^ 1) & 1,local_a0,local_d8);
        if ((uVar12 & 1) != 0) goto LAB_02f8b1d0;
      }
      iVar1 = local_d34;
      local_d34 = local_d34 + 1;
      if ((0xfe < iVar1) && (local_d38 == 0x100)) {
        local_1138[0] = 0xffffffff;
        local_d38 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_1158 + 0x18) * 0x200 + 0xb0))
                              (local_1158,local_1138,0x100,
                               local_d3c << (ulong)(uStack_1150._4_4_ & 0x1f) |
                               -1 << (ulong)(uStack_1150._4_4_ & 0x1f) ^ 0xffffffffU,&uStack_1150);
        local_d34 = 0;
      }
    } while (local_d34 < local_d38);
  }
  local_ba0 = PTR_DAT_043724f0 + 0x10;
  if (local_b98 != (long *)0x0) {
    (**(code **)(*local_b98 + 8))();
  }
  return;
}


