/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00491610; name: FUN_00491610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00491610(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_10a0 [64];
  undefined1 auStack_1060 [64];
  undefined1 auStack_1020 [64];
  undefined1 auStack_fe0 [64];
  undefined1 auStack_fa0 [64];
  undefined1 auStack_f60 [64];
  undefined1 auStack_f20 [64];
  undefined1 auStack_ee0 [64];
  undefined1 auStack_ea0 [64];
  undefined1 auStack_e60 [64];
  undefined1 auStack_e20 [64];
  undefined1 auStack_de0 [64];
  undefined1 auStack_da0 [64];
  undefined1 auStack_d60 [64];
  undefined1 auStack_d20 [64];
  undefined1 auStack_ce0 [64];
  undefined1 auStack_ca0 [64];
  undefined1 auStack_c60 [64];
  undefined1 auStack_c20 [64];
  undefined1 auStack_be0 [64];
  undefined1 auStack_ba0 [64];
  undefined1 auStack_b60 [64];
  undefined1 auStack_b20 [64];
  undefined1 auStack_ae0 [64];
  undefined1 auStack_aa0 [64];
  undefined1 auStack_a60 [64];
  undefined1 auStack_a20 [64];
  undefined1 auStack_9e0 [64];
  undefined1 auStack_9a0 [64];
  undefined1 auStack_960 [64];
  undefined1 auStack_920 [64];
  undefined1 auStack_8e0 [72];
  uint local_898 [154];
  uint local_630 [228];
  undefined1 auStack_2a0 [64];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [64];
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [64];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [64];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  iVar6 = FUN_00492050(local_898,param_2,5);
  iVar7 = FUN_00492050(local_630,param_4,3);
  FUN_004943a0(auStack_10a0,param_3 + 0x40,param_3);
  FUN_00494000(auStack_1060,param_3,param_3 + 0x40);
  FUN_00495240(auStack_1020,param_3 + 0xc0,0x13154);
  FUN_004943a0(auStack_1020,&DAT_03a15a90,auStack_1020);
  FUN_00494000(auStack_fe0,param_3 + 0x80,param_3 + 0x80);
  FUN_0048dad0(auStack_1a0,param_3,0);
  FUN_004943a0(auStack_2a0,auStack_160,auStack_1a0);
  FUN_00494000(auStack_260,auStack_1a0,auStack_160);
  FUN_00495240(auStack_220,auStack_e0,0x13154);
  FUN_004943a0(auStack_220,&DAT_03a15a90,auStack_220);
  FUN_00494000(auStack_1e0,&local_120,&local_120);
  FUN_00494d70(&local_a0,&local_120,auStack_fe0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_0048f610(auStack_1a0,auStack_10a0,0);
  FUN_004943a0(auStack_fa0,auStack_160,auStack_1a0);
  FUN_00494000(auStack_f60,auStack_1a0,auStack_160);
  FUN_00495240(auStack_f20,auStack_e0,0x13154);
  FUN_004943a0(auStack_f20,&DAT_03a15a90,auStack_f20);
  FUN_00494000(auStack_ee0,&local_120,&local_120);
  FUN_00494d70(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_0048f610(auStack_1a0,auStack_2a0,0);
  FUN_004943a0(auStack_ea0,auStack_160,auStack_1a0);
  FUN_00494000(auStack_e60,auStack_1a0,auStack_160);
  FUN_00495240(auStack_e20,auStack_e0,0x13154);
  FUN_004943a0(auStack_e20,&DAT_03a15a90,auStack_e20);
  FUN_00494000(auStack_de0,&local_120,&local_120);
  FUN_00494d70(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_0048f610(auStack_1a0,auStack_2a0,0);
  FUN_004943a0(auStack_da0,auStack_160,auStack_1a0);
  FUN_00494000(auStack_d60,auStack_1a0,auStack_160);
  FUN_00495240(auStack_d20,auStack_e0,0x13154);
  FUN_004943a0(auStack_d20,&DAT_03a15a90,auStack_d20);
  FUN_00494000(auStack_ce0,&local_120,&local_120);
  FUN_00494d70(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_0048f610(auStack_1a0,auStack_2a0,0);
  FUN_004943a0(auStack_ca0,auStack_160,auStack_1a0);
  FUN_00494000(auStack_c60,auStack_1a0,auStack_160);
  FUN_00495240(auStack_c20,auStack_e0,0x13154);
  FUN_004943a0(auStack_c20,&DAT_03a15a90,auStack_c20);
  FUN_00494000(auStack_be0,&local_120,&local_120);
  FUN_00494d70(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_0048f610(auStack_1a0,auStack_2a0,0);
  FUN_004943a0(auStack_ba0,auStack_160,auStack_1a0);
  FUN_00494000(auStack_b60,auStack_1a0,auStack_160);
  FUN_00495240(auStack_b20,auStack_e0,0x13154);
  FUN_004943a0(auStack_b20,&DAT_03a15a90,auStack_b20);
  FUN_00494000(auStack_ae0,&local_120,&local_120);
  FUN_00494d70(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_0048f610(auStack_1a0,auStack_2a0,0);
  FUN_004943a0(auStack_aa0,auStack_160,auStack_1a0);
  FUN_00494000(auStack_a60,auStack_1a0,auStack_160);
  FUN_00495240(auStack_a20,auStack_e0,0x13154);
  FUN_004943a0(auStack_a20,&DAT_03a15a90,auStack_a20);
  FUN_00494000(auStack_9e0,&local_120,&local_120);
  FUN_00494d70(&local_a0,&local_120,auStack_1e0);
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_f8 = uStack_78;
  local_100 = local_80;
  uStack_108 = uStack_88;
  local_110 = local_90;
  uStack_e8 = uStack_68;
  local_f0 = local_70;
  FUN_0048f610(auStack_1a0,auStack_2a0,0);
  FUN_004943a0(auStack_9a0,auStack_160,auStack_1a0);
  FUN_00494000(auStack_960,auStack_1a0,auStack_160);
  FUN_00495240(auStack_920,auStack_e0,0x13154);
  FUN_004943a0(auStack_920,&DAT_03a15a90,auStack_920);
  FUN_00494000(auStack_8e0,&local_120,&local_120);
  FUN_004006a0(auStack_1a0,0x100);
  FUN_004006a0(auStack_2a0,0x100);
  puVar5 = PTR_DAT_04374518;
  if ((int)local_630[0] < 0) {
    uVar12 = *(undefined8 *)(PTR_DAT_04374518 + 0x20);
    uVar14 = *(undefined8 *)(PTR_DAT_04374518 + 0x38);
    uVar13 = *(undefined8 *)(PTR_DAT_04374518 + 0x30);
    param_1[5] = *(undefined8 *)(PTR_DAT_04374518 + 0x28);
    param_1[4] = uVar12;
    param_1[7] = uVar14;
    param_1[6] = uVar13;
    uVar12 = *(undefined8 *)puVar5;
    uVar14 = *(undefined8 *)(puVar5 + 0x18);
    uVar13 = *(undefined8 *)(puVar5 + 0x10);
    param_1[1] = *(undefined8 *)(puVar5 + 8);
    *param_1 = uVar12;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    uVar13 = *(undefined8 *)(puVar5 + 0x48);
    uVar12 = *(undefined8 *)(puVar5 + 0x40);
    uVar15 = *(undefined8 *)(puVar5 + 0x58);
    uVar14 = *(undefined8 *)(puVar5 + 0x50);
    uVar16 = *(undefined8 *)(puVar5 + 0x60);
    uVar18 = *(undefined8 *)(puVar5 + 0x78);
    uVar17 = *(undefined8 *)(puVar5 + 0x70);
    param_1[0xd] = *(undefined8 *)(puVar5 + 0x68);
    param_1[0xc] = uVar16;
    param_1[0xf] = uVar18;
    param_1[0xe] = uVar17;
    param_1[9] = uVar13;
    param_1[8] = uVar12;
    param_1[0xb] = uVar15;
    param_1[10] = uVar14;
    uVar13 = *(undefined8 *)(puVar5 + 0x88);
    uVar12 = *(undefined8 *)(puVar5 + 0x80);
    uVar15 = *(undefined8 *)(puVar5 + 0x98);
    uVar14 = *(undefined8 *)(puVar5 + 0x90);
    uVar16 = *(undefined8 *)(puVar5 + 0xa0);
    uVar18 = *(undefined8 *)(puVar5 + 0xb8);
    uVar17 = *(undefined8 *)(puVar5 + 0xb0);
    param_1[0x15] = *(undefined8 *)(puVar5 + 0xa8);
    param_1[0x14] = uVar16;
    param_1[0x17] = uVar18;
    param_1[0x16] = uVar17;
    param_1[0x11] = uVar13;
    param_1[0x10] = uVar12;
    param_1[0x13] = uVar15;
    param_1[0x12] = uVar14;
    uVar13 = *(undefined8 *)(puVar5 + 200);
    uVar12 = *(undefined8 *)(puVar5 + 0xc0);
    uVar15 = *(undefined8 *)(puVar5 + 0xd8);
    uVar14 = *(undefined8 *)(puVar5 + 0xd0);
    uVar16 = *(undefined8 *)(puVar5 + 0xe0);
    uVar18 = *(undefined8 *)(puVar5 + 0xf8);
    uVar17 = *(undefined8 *)(puVar5 + 0xf0);
    param_1[0x1d] = *(undefined8 *)(puVar5 + 0xe8);
    param_1[0x1c] = uVar16;
    param_1[0x1f] = uVar18;
    param_1[0x1e] = uVar17;
    param_1[0x19] = uVar13;
    param_1[0x18] = uVar12;
    param_1[0x1b] = uVar15;
    param_1[0x1a] = uVar14;
  }
  else {
    uVar9 = local_630[0];
    if ((int)local_898[0] < (int)local_630[0]) {
      lVar8 = ((long)((ulong)local_630[1] << 0x20) >> 0x21) * 0x100;
      FUN_00494000(&local_a0,auStack_1060 + lVar8,auStack_10a0 + lVar8);
      puVar1 = param_1 + 8;
      FUN_004943a0(puVar1,auStack_1060 + lVar8,auStack_10a0 + lVar8);
      FUN_00494d70(param_1 + 0x18,puVar1,&local_a0);
      puVar2 = auStack_fe0 + lVar8;
      FUN_00494d70(param_1,puVar2,puVar1);
      FUN_00494d70(puVar1,puVar2,&local_a0);
      FUN_004953f0(param_1 + 0x10,puVar2);
      uVar11 = 0;
      uVar10 = 1;
    }
    else if (local_630[0] == local_898[0]) {
      lVar8 = ((long)((ulong)local_630[1] << 0x20) >> 0x21) * 0x100;
      FUN_00494000(&local_a0,auStack_1060 + lVar8,auStack_10a0 + lVar8);
      puVar1 = param_1 + 8;
      FUN_004943a0(puVar1,auStack_1060 + lVar8,auStack_10a0 + lVar8);
      FUN_00494d70(param_1 + 0x18,puVar1,&local_a0);
      puVar2 = auStack_fe0 + lVar8;
      FUN_00494d70(param_1,puVar2,puVar1);
      FUN_00494d70(puVar1,puVar2,&local_a0);
      FUN_004953f0(param_1 + 0x10,puVar2);
      FUN_0048f610(param_1,*(long *)PTR_PTR_04374520 + (long)((int)local_898[1] >> 1) * 0xc0,
                   local_630[0]);
      uVar10 = 1;
      uVar11 = 1;
    }
    else {
      lVar8 = *(long *)PTR_PTR_04374520 + (long)((int)local_898[1] >> 1) * 0xc0;
      FUN_00494000(param_1 + 8,lVar8 + 0x40,lVar8);
      FUN_004943a0(param_1,lVar8 + 0x40,lVar8);
      FUN_00494d70(param_1 + 0x18,param_1 + 8,param_1);
      uVar14 = _UNK_03a15b48;
      uVar13 = _DAT_03a15b40;
      uVar12 = _DAT_03a15b30;
      uVar10 = 0;
      param_1[0x15] = _UNK_03a15b38;
      param_1[0x14] = uVar12;
      param_1[0x17] = uVar14;
      param_1[0x16] = uVar13;
      uVar14 = _UNK_03a15b28;
      uVar13 = _DAT_03a15b20;
      uVar12 = _DAT_03a15b10;
      uVar11 = 1;
      param_1[0x11] = _UNK_03a15b18;
      param_1[0x10] = uVar12;
      param_1[0x13] = uVar14;
      param_1[0x12] = uVar13;
      uVar9 = local_898[0];
    }
    if (0 < (int)uVar9) {
      puVar1 = param_1 + 0x10;
      do {
        uVar9 = uVar9 - 1;
        uVar3 = *(uint *)((long)local_630 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3));
        uVar4 = *(uint *)((long)local_898 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3));
        FUN_0048dad0(param_1,param_1,uVar9 != 0 && (uVar9 != uVar3 && uVar9 != uVar4));
        if (uVar9 == uVar3) {
          uVar3 = local_630[(long)(int)uVar10 * 2 + 1];
          if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("control_var[contv].addend",
                          "external/openssl/crypto/ec/curve448/curve448.c",0x2a0,
                          "nnopenssl_curve448_base_double_scalarmul_non_secret");
          }
          if ((int)uVar3 < 1) {
            lVar8 = ((long)((ulong)-uVar3 << 0x20) >> 0x21) * 0x100;
            FUN_00494d70(&local_a0,puVar1,auStack_fe0 + lVar8);
            param_1[0x15] = uStack_78;
            param_1[0x14] = local_80;
            param_1[0x17] = uStack_68;
            param_1[0x16] = local_70;
            param_1[0x11] = uStack_98;
            *puVar1 = local_a0;
            param_1[0x13] = uStack_88;
            param_1[0x12] = local_90;
            FUN_00492280(param_1,auStack_10a0 + lVar8,uVar9 != 0 && uVar9 != uVar4);
          }
          else {
            lVar8 = ((ulong)uVar3 & 0xfffffffe) * 0x80;
            FUN_00494d70(&local_a0,puVar1,auStack_fe0 + lVar8);
            param_1[0x15] = uStack_78;
            param_1[0x14] = local_80;
            param_1[0x17] = uStack_68;
            param_1[0x16] = local_70;
            param_1[0x11] = uStack_98;
            *puVar1 = local_a0;
            param_1[0x13] = uStack_88;
            param_1[0x12] = local_90;
            FUN_0048f610(param_1,auStack_10a0 + lVar8,uVar9 != 0 && uVar9 != uVar4);
          }
          uVar10 = (ulong)((int)uVar10 + 1);
        }
        if (uVar9 == uVar4) {
          uVar3 = local_898[(long)(int)uVar11 * 2 + 1];
          if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("control_pre[contp].addend",
                          "external/openssl/crypto/ec/curve448/curve448.c",0x2ae,
                          "nnopenssl_curve448_base_double_scalarmul_non_secret");
          }
          if ((int)uVar3 < 1) {
            FUN_00492280(param_1,*(long *)PTR_PTR_04374520 + (long)((int)-uVar3 >> 1) * 0xc0,uVar9);
          }
          else {
            FUN_0048f610(param_1,*(long *)PTR_PTR_04374520 + (ulong)(uVar3 >> 1) * 0xc0,uVar9);
          }
          uVar11 = (ulong)((int)uVar11 + 1);
        }
      } while (0 < (int)uVar9);
    }
    FUN_004006a0(local_630,0x390);
    FUN_004006a0(local_898,0x268);
    FUN_004006a0(auStack_10a0,0x800);
    if ((int)uVar10 != iVar7) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("contv == ncb_var","external/openssl/crypto/ec/curve448/curve448.c",0x2c1,
                    "nnopenssl_curve448_base_double_scalarmul_non_secret");
    }
    if ((int)uVar11 != iVar6) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("contp == ncb_pre","external/openssl/crypto/ec/curve448/curve448.c",0x2c3,
                    "nnopenssl_curve448_base_double_scalarmul_non_secret");
    }
  }
  return;
}


