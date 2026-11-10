/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bcac0; name: FUN_013bcac0
 */


void FUN_013bcac0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  ushort uVar10;
  ushort uVar9;
  undefined2 uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *local_120;
  byte local_118 [64];
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  
  local_d8 = param_1[6];
  lVar4 = param_1[7];
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar2 = param_1[2];
  lVar6 = param_1[3];
  lVar3 = param_1[4];
  lVar7 = param_1[5];
  uVar12 = param_1[8];
  local_c0 = param_1[9];
  local_b8 = param_1[10];
  lStack_b0 = param_1[0xb];
  local_a8 = param_1[0xc];
  lStack_a0 = param_1[0xd];
  local_98 = param_1[0xe];
  lStack_90 = param_1[0xf];
  local_88 = param_1[0x10];
  lStack_80 = param_1[0x11];
  local_78 = param_1[0x12];
  lStack_70 = param_1[0x13];
  if ((((lVar1 != 0) && (lVar5 != 0)) && (lVar2 != 0)) &&
     (((lVar6 != 0 && (lVar3 != 0)) && (lVar7 != 0)))) {
    uStack_d0._4_1_ = (undefined1)((ulong)lVar4 >> 0x20);
    local_c8._0_2_ = (ushort)uVar12;
    uVar10 = (ushort)local_c8;
    local_c8 = uVar12;
    uStack_d0 = lVar4;
    switch(uStack_d0._4_1_) {
    case 1:
      puVar14 = &DAT_cbf29ce484222645;
      thunk_FUN_02c36a60(lVar2,0,uVar12 & 0xffff);
      uVar9 = local_c8._2_2_;
      local_118[0x30] = 0;
      local_118[0x31] = 0;
      local_118[0x32] = 0;
      local_118[0x33] = 0;
      local_118[0x34] = 0;
      local_118[0x35] = 0;
      local_118[0x36] = 0;
      local_118[0x37] = 0;
      local_118[0x38] = 0;
      local_118[0x39] = 0;
      local_118[0x3a] = 0;
      local_118[0x3b] = 0;
      local_118[0x3c] = 0;
      local_118[0x3d] = 0;
      local_118[0x3e] = 0;
      local_118[0x3f] = 0;
      local_118[0x20] = 0;
      local_118[0x21] = 0;
      local_118[0x22] = 0;
      local_118[0x23] = 0;
      local_118[0x24] = 0;
      local_118[0x25] = 0;
      local_118[0x26] = 0;
      local_118[0x27] = 0;
      local_118[0x28] = 0;
      local_118[0x29] = 0;
      local_118[0x2a] = 0;
      local_118[0x2b] = 0;
      local_118[0x2c] = 0;
      local_118[0x2d] = 0;
      local_118[0x2e] = 0;
      local_118[0x2f] = 0;
      local_118[0x10] = 0;
      local_118[0x11] = 0;
      local_118[0x12] = 0;
      local_118[0x13] = 0;
      local_118[0x14] = 0;
      local_118[0x15] = 0;
      local_118[0x16] = 0;
      local_118[0x17] = 0;
      local_118[0x18] = 0;
      local_118[0x19] = 0;
      local_118[0x1a] = 0;
      local_118[0x1b] = 0;
      local_118[0x1c] = 0;
      local_118[0x1d] = 0;
      local_118[0x1e] = 0;
      local_118[0x1f] = 0;
      local_118[0] = 0;
      local_118[1] = 0;
      local_118[2] = 0;
      local_118[3] = 0;
      local_118[4] = 0;
      local_118[5] = 0;
      local_118[6] = 0;
      local_118[7] = 0;
      local_118[8] = 0;
      local_118[9] = 0;
      local_118[10] = 0;
      local_118[0xb] = 0;
      local_118[0xc] = 0;
      local_118[0xd] = 0;
      local_118[0xe] = 0;
      local_118[0xf] = 0;
      snprintf((char *)local_118,0x40,"ZKN_TYPE_%03d_%03d",(uint)uVar10,(uint)local_c8._2_2_);
      local_120 = &DAT_cbf29ce484222645;
      if (local_118[0] != 0) {
        local_120 = &DAT_cbf29ce484222645;
        pbVar13 = (byte *)((ulong)local_118 | 1);
        bVar8 = local_118[0];
        do {
          local_120 = (undefined1 *)(((ulong)local_120 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 != 0);
      }
      uVar12 = FUN_02c2e8bc(lVar3,&local_120);
      if ((uVar12 & 1) == 0) {
        snprintf((char *)local_118,0x40,"ZKN_TYPE_%03d",(uint)uVar10);
        local_120 = &DAT_cbf29ce484222645;
        if (local_118[0] != 0) {
          local_120 = &DAT_cbf29ce484222645;
          pbVar13 = (byte *)((ulong)local_118 | 1);
          bVar8 = local_118[0];
          do {
            local_120 = (undefined1 *)(((ulong)local_120 ^ (ulong)bVar8) * 0x100000001b3);
            bVar8 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar8 != 0);
        }
        uVar9 = local_c8._2_2_;
        uVar10 = (ushort)local_c8;
      }
      FUN_02c2e7d0(lVar3,&local_120,lVar5);
      FUN_02c36128(lVar2,1,lVar5,0,0);
      local_118[0x30] = 0;
      local_118[0x31] = 0;
      local_118[0x32] = 0;
      local_118[0x33] = 0;
      local_118[0x34] = 0;
      local_118[0x35] = 0;
      local_118[0x36] = 0;
      local_118[0x37] = 0;
      local_118[0x38] = 0;
      local_118[0x39] = 0;
      local_118[0x3a] = 0;
      local_118[0x3b] = 0;
      local_118[0x3c] = 0;
      local_118[0x3d] = 0;
      local_118[0x3e] = 0;
      local_118[0x3f] = 0;
      local_118[0x20] = 0;
      local_118[0x21] = 0;
      local_118[0x22] = 0;
      local_118[0x23] = 0;
      local_118[0x24] = 0;
      local_118[0x25] = 0;
      local_118[0x26] = 0;
      local_118[0x27] = 0;
      local_118[0x28] = 0;
      local_118[0x29] = 0;
      local_118[0x2a] = 0;
      local_118[0x2b] = 0;
      local_118[0x2c] = 0;
      local_118[0x2d] = 0;
      local_118[0x2e] = 0;
      local_118[0x2f] = 0;
      local_118[0x10] = 0;
      local_118[0x11] = 0;
      local_118[0x12] = 0;
      local_118[0x13] = 0;
      local_118[0x14] = 0;
      local_118[0x15] = 0;
      local_118[0x16] = 0;
      local_118[0x17] = 0;
      local_118[0x18] = 0;
      local_118[0x19] = 0;
      local_118[0x1a] = 0;
      local_118[0x1b] = 0;
      local_118[0x1c] = 0;
      local_118[0x1d] = 0;
      local_118[0x1e] = 0;
      local_118[0x1f] = 0;
      local_118[0] = 0;
      local_118[1] = 0;
      local_118[2] = 0;
      local_118[3] = 0;
      local_118[4] = 0;
      local_118[5] = 0;
      local_118[6] = 0;
      local_118[7] = 0;
      local_118[8] = 0;
      local_118[9] = 0;
      local_118[10] = 0;
      local_118[0xb] = 0;
      local_118[0xc] = 0;
      local_118[0xd] = 0;
      local_118[0xe] = 0;
      local_118[0xf] = 0;
      snprintf((char *)local_118,0x40,"ZKN_FORM_%03d_%03d",(uint)uVar10,(uint)uVar9);
      if (local_118[0] != 0) {
        pbVar13 = (byte *)((ulong)local_118 | 1);
        bVar8 = local_118[0];
        do {
          puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar8) * 0x100000001b3);
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 != 0);
      }
      local_120 = puVar14;
      FUN_02c2e7d0(lVar7,&local_120,lVar5);
      FUN_02c36128(lVar2,2,lVar5,0,0);
      FUN_02c302d0(lVar5,(long)&local_b8 + 2);
      FUN_010c6478(lVar2,3,lVar5,local_b8 & 0xff,local_b8._1_1_);
      FUN_010c5d94(lVar2,4,local_c8._4_2_);
      FUN_010c5d94(lVar2,5,local_c8._6_2_);
      FUN_010c5d94(lVar2,6,local_c0 & 0xffff);
      FUN_010c5d94(lVar2,7,local_c0._2_2_);
      FUN_02c3865c(lVar2,9,local_c0._4_2_,1);
      lVar4 = uStack_d0;
      break;
    case 2:
      local_c8._2_2_ = (ushort)(uVar12 >> 0x10);
      uVar11 = local_c8._2_2_;
      FUN_02c3865c(lVar2,8,uVar12 & 0xffff,uVar11);
      lVar4 = uStack_d0;
      break;
    case 3:
      break;
    case 4:
      FUN_02c395d0(lVar2,0xc,uVar12 & 0xffffffff,7,0,1);
      lVar4 = uStack_d0;
      break;
    default:
      goto switchD_013bcb60_default;
    }
    uStack_d0 = lVar4;
    FUN_02c2e33c(lVar6,uStack_d0._2_2_,lVar5);
    FUN_02c333a8(lVar2,lVar1,lVar5);
  }
switchD_013bcb60_default:
  return;
}


