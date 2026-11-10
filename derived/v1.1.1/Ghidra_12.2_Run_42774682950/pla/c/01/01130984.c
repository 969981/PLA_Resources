/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01130984; name: FUN_01130984
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01130984(long param_1,uint param_2,uint param_3,undefined1 *param_4,uint *param_5,
                undefined1 *param_6)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  uint local_1000 [2];
  undefined8 local_ff8;
  undefined4 local_ff0;
  undefined1 local_fec;
  undefined4 local_fe8;
  undefined8 local_fe0;
  undefined1 *puStack_fd8;
  undefined1 *local_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined1 local_fa8;
  undefined8 local_fa4;
  undefined8 local_f98;
  undefined4 local_f90;
  undefined1 local_f8c;
  undefined4 local_f88;
  undefined8 local_f80;
  undefined1 *puStack_f78;
  undefined1 *local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined1 local_f48;
  undefined8 local_f44;
  undefined8 local_f38;
  undefined4 local_f30;
  undefined1 local_f2c;
  undefined4 local_f28;
  undefined8 local_f20;
  undefined1 *puStack_f18;
  undefined1 *local_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 local_ef0;
  undefined1 local_ee8;
  undefined8 local_ee4;
  undefined8 local_ed8;
  undefined4 local_ed0;
  undefined1 local_ecc;
  undefined4 local_ec8;
  undefined8 local_ec0;
  undefined1 *puStack_eb8;
  undefined1 *local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined1 local_e88;
  undefined8 local_e84;
  undefined8 local_e78;
  undefined4 local_e70;
  undefined1 local_e6c;
  undefined4 local_e68;
  undefined8 local_e60;
  undefined1 *puStack_e58;
  undefined1 *local_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined8 local_e38;
  undefined8 local_e30;
  undefined1 local_e28;
  undefined8 local_e24;
  undefined8 local_e18;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined8 local_e00;
  undefined1 *local_df8;
  undefined1 *local_df0;
  undefined8 local_de8;
  undefined8 local_de0;
  undefined8 local_dd8;
  undefined8 local_dd0;
  undefined1 local_dc8;
  undefined8 local_dc4;
  undefined8 local_db8;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined8 local_da0;
  undefined1 *local_d98;
  undefined1 *local_d90;
  undefined8 local_d88;
  undefined8 local_d80;
  undefined8 local_d78;
  undefined8 local_d70;
  undefined1 local_d68;
  undefined8 local_d64;
  undefined8 local_d58;
  undefined4 local_d50;
  undefined1 local_d4c;
  undefined4 local_d48;
  undefined8 local_d40;
  undefined1 *local_d38;
  undefined1 *local_d30;
  undefined8 local_d28;
  undefined8 local_d20;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined1 local_d08;
  undefined8 local_d04;
  undefined8 local_cf8;
  undefined4 local_cf0;
  undefined1 local_cec;
  undefined4 local_ce8;
  undefined8 local_ce0;
  undefined1 *local_cd8;
  undefined1 *local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined1 local_ca8;
  undefined8 local_ca4;
  undefined8 local_c98;
  undefined4 local_c90;
  undefined1 local_c8c;
  undefined4 local_c88;
  undefined8 local_c80;
  undefined1 *local_c78;
  undefined1 *local_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  undefined8 local_c58;
  undefined8 local_c50;
  undefined1 local_c48;
  undefined8 local_c44;
  uint local_c38 [2];
  undefined8 local_c30;
  undefined4 local_c28;
  undefined1 local_c24;
  undefined4 local_c20;
  undefined1 *local_c18 [7];
  undefined1 local_be0;
  undefined8 local_bdc;
  undefined8 local_bd0;
  undefined4 local_bc8;
  undefined1 local_bc4;
  undefined4 local_bc0;
  undefined8 local_bb8;
  undefined1 *local_bb0;
  undefined1 *local_ba8;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined1 local_b80;
  undefined8 local_b7c;
  undefined8 local_b70;
  undefined4 local_b68;
  undefined1 local_b64;
  undefined4 local_b60;
  undefined8 local_b58;
  undefined1 *local_b50;
  undefined1 *local_b48;
  undefined8 local_b40;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 local_b28;
  undefined1 local_b20;
  undefined8 local_b1c;
  undefined8 local_b10;
  undefined4 local_b08;
  undefined1 local_b04;
  undefined4 local_b00;
  undefined8 local_af8;
  undefined1 *local_af0;
  undefined1 *local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined1 local_ac0;
  undefined8 local_abc;
  undefined8 local_ab0;
  undefined4 local_aa8;
  undefined1 local_aa4;
  undefined4 local_aa0;
  undefined8 local_a98;
  undefined1 *local_a90;
  undefined1 *local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined1 local_a60;
  undefined8 local_a5c;
  undefined8 local_a50;
  undefined4 local_a48;
  undefined1 local_a44;
  undefined4 local_a40;
  undefined8 local_a38;
  undefined1 *local_a30;
  undefined1 *local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined1 local_a00;
  undefined8 local_9fc;
  undefined8 local_9f0;
  undefined4 local_9e8;
  undefined1 local_9e4;
  undefined4 local_9e0;
  undefined8 local_9d8;
  undefined1 *local_9d0;
  undefined1 *local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined1 local_9a0;
  undefined8 local_99c;
  undefined8 local_990;
  undefined4 local_988;
  undefined1 local_984;
  undefined4 local_980;
  undefined8 local_978;
  undefined1 *local_970;
  undefined1 *local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined1 local_940;
  undefined8 local_93c;
  undefined8 local_930;
  undefined4 local_928;
  undefined1 local_924;
  undefined4 local_920;
  undefined8 local_918;
  undefined1 *local_910;
  undefined1 *local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined1 local_8e0;
  undefined8 local_8dc;
  undefined8 local_8d0;
  undefined4 local_8c8;
  undefined1 local_8c4;
  undefined4 local_8c0;
  undefined8 local_8b8;
  undefined1 *local_8b0;
  undefined1 *local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined1 local_880;
  undefined8 local_87c;
  uint local_870;
  undefined2 local_86c [2];
  uint local_868 [510];
  uint local_70 [4];
  
  puVar8 = PTR_DAT_04379678;
  if (0x3d4 < (int)param_2) {
    uVar17 = 0;
    uVar20 = 0;
    uVar16 = 0;
    goto joined_r0x011317c8;
  }
  uVar19 = (ulong)param_2;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar18 = _DAT_000001c8;
  plVar10 = *(long **)(lVar13 + 0xd0);
  if (plVar10 == (long *)0x0) {
    if (_DAT_000001c8 != (long *)0x0) {
      plVar10 = _DAT_000001c8 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  else {
    plVar11 = plVar10 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar18 = (long *)plVar10[0x39];
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  local_1000[0] = 0;
  local_ff8 = 0;
  local_ff0 = 0;
  local_fec = 0x12;
  local_fe8 = 5;
  local_fe0 = 0xc0ea47549ab5f3d9;
  puStack_fd8 = &DAT_cbf29ce484222645;
  local_fd0 = &DAT_cbf29ce484222645;
  uStack_fc8 = 0;
  local_fa4 = 0;
  local_fb0 = 0;
  local_fa8 = 0;
  local_f98 = 0;
  local_f90 = 0;
  local_f8c = 0x12;
  local_f88 = 5;
  local_f44 = 0;
  local_f48 = 0;
  local_f60 = 0;
  local_f38 = 0;
  local_f30 = 0;
  local_f2c = 0x12;
  local_f28 = 5;
  local_fc0 = 0;
  uStack_fb8 = 0;
  local_f80 = 0xc0ea47549ab5f3d9;
  puStack_f78 = &DAT_cbf29ce484222645;
  local_f70 = &DAT_cbf29ce484222645;
  uStack_f68 = 0;
  local_f58 = 0;
  uStack_f50 = 0;
  local_f20 = 0xc0ea47549ab5f3d9;
  puStack_f18 = &DAT_cbf29ce484222645;
  local_f10 = &DAT_cbf29ce484222645;
  uStack_f08 = 0;
  local_ee4 = 0;
  local_ef0 = 0;
  local_ee8 = 0;
  local_ed8 = 0;
  local_ed0 = 0;
  local_f00 = 0;
  uStack_ef8 = 0;
  local_ecc = 0x12;
  local_ec8 = 5;
  local_ec0 = 0xc0ea47549ab5f3d9;
  puStack_eb8 = &DAT_cbf29ce484222645;
  local_eb0 = &DAT_cbf29ce484222645;
  uStack_ea8 = 0;
  local_e84 = 0;
  local_e88 = 0;
  local_ea0 = 0;
  local_e78 = 0;
  local_e70 = 0;
  local_e98 = 0;
  uStack_e90 = 0;
  local_e6c = 0x12;
  local_e68 = 5;
  local_e60 = 0xc0ea47549ab5f3d9;
  puStack_e58 = &DAT_cbf29ce484222645;
  local_e50 = &DAT_cbf29ce484222645;
  uStack_e48 = 0;
  local_e24 = 0;
  local_e28 = 0;
  local_e30 = 0;
  local_e38 = 0;
  local_e40 = 0;
  local_e18 = 0;
  local_e10 = 0;
  local_e0c = 0x12;
  local_e08 = 5;
  local_e00 = 0xc0ea47549ab5f3d9;
  local_df8 = &DAT_cbf29ce484222645;
  local_df0 = &DAT_cbf29ce484222645;
  local_dc4 = 0;
  local_dc8 = 0;
  local_dd0 = 0;
  local_dd8 = 0;
  local_de0 = 0;
  local_de8 = 0;
  local_db8 = 0;
  local_db0 = 0;
  local_dac = 0x12;
  local_da8 = 5;
  local_da0 = 0xc0ea47549ab5f3d9;
  local_d98 = &DAT_cbf29ce484222645;
  local_d90 = &DAT_cbf29ce484222645;
  local_d64 = 0;
  local_d68 = 0;
  local_d70 = 0;
  local_d78 = 0;
  local_d80 = 0;
  local_d88 = 0;
  local_d58 = 0;
  local_d50 = 0;
  local_d4c = 0x12;
  local_d48 = 5;
  local_d40 = 0xc0ea47549ab5f3d9;
  local_d38 = &DAT_cbf29ce484222645;
  local_d30 = &DAT_cbf29ce484222645;
  local_d04 = 0;
  local_d08 = 0;
  local_d10 = 0;
  local_d18 = 0;
  local_d20 = 0;
  local_d28 = 0;
  local_cf8 = 0;
  local_cf0 = 0;
  local_cec = 0x12;
  local_ce8 = 5;
  local_ce0 = 0xc0ea47549ab5f3d9;
  local_cd8 = &DAT_cbf29ce484222645;
  local_cd0 = &DAT_cbf29ce484222645;
  local_ca4 = 0;
  local_ca8 = 0;
  local_cb0 = 0;
  local_cb8 = 0;
  local_cc0 = 0;
  local_cc8 = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c8c = 0x12;
  local_c88 = 5;
  local_c80 = 0xc0ea47549ab5f3d9;
  local_c78 = &DAT_cbf29ce484222645;
  local_c70 = &DAT_cbf29ce484222645;
  local_c44 = 0;
  local_c48 = 0;
  local_c50 = 0;
  local_c58 = 0;
  local_c60 = 0;
  local_c68 = 0;
  FUN_013f7198(*(undefined8 *)(plVar18[0xb] + 8),uVar19,local_1000);
  if (local_1000[0] <= param_3) {
    uVar17 = 0;
    uVar20 = 0;
    uVar16 = 0;
    goto joined_r0x01131794;
  }
  if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar10 = _DAT_000001c8;
  plVar11 = *(long **)(lVar13 + 0xd0);
  if (plVar11 == (long *)0x0) {
    if (_DAT_000001c8 != (long *)0x0) {
      plVar11 = _DAT_000001c8 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
  else {
    plVar1 = plVar11 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar10 = (long *)plVar11[0x39];
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  local_c38[0] = 0;
  local_c30 = 0;
  local_c28 = 0;
  local_c24 = 0x12;
  local_c20 = 5;
  local_c18[0] = (undefined1 *)0xc0ea47549ab5f3d9;
  local_c18[2] = &DAT_cbf29ce484222645;
  local_c18[1] = &DAT_cbf29ce484222645;
  local_bdc = 0;
  local_c18[4] = (undefined1 *)0x0;
  local_c18[3] = (undefined1 *)0x0;
  local_c18[6] = (undefined1 *)0x0;
  local_c18[5] = (undefined1 *)0x0;
  local_be0 = 0;
  local_bd0 = 0;
  local_bc8 = 0;
  local_bc4 = 0x12;
  local_bc0 = 5;
  local_bb8 = 0xc0ea47549ab5f3d9;
  local_ba8 = &DAT_cbf29ce484222645;
  local_bb0 = &DAT_cbf29ce484222645;
  local_b7c = 0;
  local_b80 = 0;
  local_b88 = 0;
  local_b90 = 0;
  local_b98 = 0;
  local_ba0 = 0;
  local_b70 = 0;
  local_b68 = 0;
  local_b64 = 0x12;
  local_b60 = 5;
  local_b58 = 0xc0ea47549ab5f3d9;
  local_b48 = &DAT_cbf29ce484222645;
  local_b50 = &DAT_cbf29ce484222645;
  local_b1c = 0;
  local_b38 = 0;
  local_b40 = 0;
  local_b28 = 0;
  local_b30 = 0;
  local_b20 = 0;
  local_b10 = 0;
  local_b08 = 0;
  local_b04 = 0x12;
  local_b00 = 5;
  local_af8 = 0xc0ea47549ab5f3d9;
  local_ae8 = &DAT_cbf29ce484222645;
  local_af0 = &DAT_cbf29ce484222645;
  local_abc = 0;
  local_ac0 = 0;
  local_ac8 = 0;
  local_ad0 = 0;
  local_ad8 = 0;
  local_ae0 = 0;
  local_ab0 = 0;
  local_aa8 = 0;
  local_aa4 = 0x12;
  local_aa0 = 5;
  local_a98 = 0xc0ea47549ab5f3d9;
  local_a88 = &DAT_cbf29ce484222645;
  local_a90 = &DAT_cbf29ce484222645;
  local_a5c = 0;
  local_a60 = 0;
  local_a68 = 0;
  local_a70 = 0;
  local_a78 = 0;
  local_a80 = 0;
  local_a50 = 0;
  local_a48 = 0;
  local_a44 = 0x12;
  local_a40 = 5;
  local_a38 = 0xc0ea47549ab5f3d9;
  local_a30 = &DAT_cbf29ce484222645;
  local_a28 = &DAT_cbf29ce484222645;
  local_9fc = 0;
  local_a00 = 0;
  local_a08 = 0;
  local_a10 = 0;
  local_a18 = 0;
  local_a20 = 0;
  local_9f0 = 0;
  local_9e8 = 0;
  local_9e4 = 0x12;
  local_9e0 = 5;
  local_9d8 = 0xc0ea47549ab5f3d9;
  local_9d0 = &DAT_cbf29ce484222645;
  local_9c8 = &DAT_cbf29ce484222645;
  local_99c = 0;
  local_9a0 = 0;
  local_9a8 = 0;
  local_9b0 = 0;
  local_9b8 = 0;
  local_9c0 = 0;
  local_990 = 0;
  local_988 = 0;
  local_984 = 0x12;
  local_980 = 5;
  local_978 = 0xc0ea47549ab5f3d9;
  local_970 = &DAT_cbf29ce484222645;
  local_968 = &DAT_cbf29ce484222645;
  local_93c = 0;
  local_940 = 0;
  local_948 = 0;
  local_950 = 0;
  local_958 = 0;
  local_960 = 0;
  local_930 = 0;
  local_928 = 0;
  local_924 = 0x12;
  local_920 = 5;
  local_918 = 0xc0ea47549ab5f3d9;
  local_910 = &DAT_cbf29ce484222645;
  local_908 = &DAT_cbf29ce484222645;
  local_8dc = 0;
  local_8e0 = 0;
  local_8e8 = 0;
  local_8f0 = 0;
  local_8f8 = 0;
  local_900 = 0;
  local_8d0 = 0;
  local_8c8 = 0;
  local_8c4 = 0x12;
  local_8c0 = 5;
  local_8b8 = 0xc0ea47549ab5f3d9;
  local_8b0 = &DAT_cbf29ce484222645;
  local_8a8 = &DAT_cbf29ce484222645;
  local_87c = 0;
  local_880 = 0;
  local_888 = 0;
  local_890 = 0;
  local_898 = 0;
  local_8a0 = 0;
  FUN_013f7198(*(undefined8 *)(plVar10[0xb] + 8),uVar19,local_c38);
  if (local_c38[0] <= param_3) {
joined_r0x011317f4:
    uVar20 = 0;
    goto joined_r0x01131860;
  }
  if (9 < param_3) goto LAB_01131680;
  if (0x1b < local_c38[(ulong)param_3 * 0x18 + 2]) goto joined_r0x011317f4;
  uVar14 = (ulong)param_3;
  switch(local_c38[(ulong)param_3 * 0x18 + 2]) {
  case 0:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0xe6);
    break;
  case 1:
    if (3 < *(uint *)(&local_bdc + uVar14 * 0xc)) goto joined_r0x011317f4;
    uVar4 = *(ushort *)
             (param_1 + uVar19 * 0x58 + (ulong)*(uint *)(&local_bdc + uVar14 * 0xc) * 2 + 0xec);
    break;
  case 2:
    uVar17 = *(uint *)((long)&local_bdc + uVar14 * 0x60 + 4);
    if (2 < uVar17) goto joined_r0x011317f4;
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + (ulong)uVar17 * 2 + 0xf4);
    break;
  case 3:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0xfa);
    break;
  case 4:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0xfc);
    break;
  case 5:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0xfe);
    break;
  case 6:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x100);
    break;
  case 7:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x102);
    break;
  case 8:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x104);
    break;
  case 9:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x106);
    break;
  case 10:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x108);
    break;
  case 0xb:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x10a);
    break;
  case 0xc:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x10c);
    break;
  case 0xd:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x10e);
    break;
  case 0xe:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x110);
    goto joined_r0x01131860;
  case 0xf:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x112);
    goto joined_r0x01131860;
  case 0x10:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x114);
    goto joined_r0x01131860;
  case 0x11:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x116);
    goto joined_r0x01131860;
  case 0x12:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x118);
    goto joined_r0x01131860;
  case 0x13:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x11a);
    goto joined_r0x01131860;
  case 0x14:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x11c);
    goto joined_r0x01131860;
  case 0x15:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x11e);
joined_r0x01131860:
    uVar20 = (uint)uVar4;
    goto joined_r0x01131860;
  case 0x16:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x120);
    goto joined_r0x0113173c;
  case 0x17:
    uVar4 = *(ushort *)(param_1 + uVar19 * 0x58 + 0x122);
joined_r0x0113173c:
    uVar20 = (uint)uVar4;
    goto joined_r0x01131860;
  case 0x18:
    uVar20 = (uint)*(ushort *)(param_1 + uVar19 * 0x58 + 0x124);
    goto joined_r0x01131860;
  case 0x19:
    if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar13 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar13;
    plVar11 = *(long **)(lVar13 + 0xd0);
    if (plVar11 == (long *)0x0) {
      lVar13 = _DAT_00000168;
    }
    else {
      plVar1 = plVar11 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar13 = plVar11[0x2d];
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    puVar15 = &local_870;
    do {
      *puVar15 = 0;
      *(undefined2 *)(puVar15 + 1) = 0;
      puVar15[2] = 0;
      *(undefined4 *)((long)puVar15 + 0xb) = 0;
      puVar15[4] = 0;
      *(undefined2 *)(puVar15 + 5) = 0;
      puVar15[6] = 0;
      *(undefined4 *)((long)puVar15 + 0x1b) = 0;
      puVar15[8] = 0;
      *(undefined2 *)(puVar15 + 9) = 0;
      puVar15[10] = 0;
      *(undefined4 *)((long)puVar15 + 0x2b) = 0;
      puVar15[0xc] = 0;
      *(undefined2 *)(puVar15 + 0xd) = 0;
      puVar15[0xe] = 0;
      *(undefined4 *)((long)puVar15 + 0x3b) = 0;
      puVar15 = puVar15 + 0x10;
    } while (puVar15 != local_70);
    local_70[0] = 0;
    FUN_00d3ed48(lVar13,uVar19,&local_870);
    if (local_70[0] == 0) {
      uVar20 = 0;
    }
    else {
      uVar14 = 0;
      uVar20 = 0;
      puVar15 = local_868;
      lVar13 = param_1 + 0x6c;
      do {
        if (uVar14 == 0x80) goto LAB_01131680;
        if (*puVar15 < 6) {
          uVar17 = puVar15[-2];
          uVar5 = (undefined2)puVar15[-1];
          switch(*puVar15) {
          default:
            lVar12 = FUN_011323d0(lVar13,uVar17);
            if (lVar12 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(byte *)(lVar12 + 5) & 1;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 4) >> 2;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 0x10) >> 4;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              bVar3 = *(byte *)(lVar12 + 5);
joined_r0x01131900:
              if ((bVar3 >> 6 & 1) != 0) goto LAB_01131320;
            }
            break;
          case 1:
            lVar12 = FUN_011323d0(lVar13,uVar17);
            if (lVar12 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(byte *)(lVar12 + 5) >> 1 & 1;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 8) >> 3;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 0x20) >> 5;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if ((lVar12 == 0) || (-1 < *(char *)(lVar12 + 5))) break;
            goto LAB_01131320;
          case 3:
            lVar12 = FUN_011323d0(lVar13,uVar17);
            if (lVar12 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(byte *)(lVar12 + 5) & 1;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 4) >> 2;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 0x10) >> 4;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 0x40) >> 6;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 2) >> 1;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 8) >> 3;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 0x20) >> 5;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              cVar6 = *(char *)(lVar12 + 5);
joined_r0x01131988:
              if (cVar6 < '\0') goto LAB_01131320;
            }
            break;
          case 4:
            lVar12 = FUN_011323d0(lVar13,uVar17);
            if (lVar12 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(byte *)(lVar12 + 5) & 1;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 4) >> 2;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 0x10) >> 4;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              bVar3 = *(byte *)(lVar12 + 5);
              goto joined_r0x01131900;
            }
            break;
          case 5:
            lVar12 = FUN_011323d0(lVar13,uVar17);
            if (lVar12 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = *(byte *)(lVar12 + 5) >> 1 & 1;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 8) >> 3;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              uVar16 = uVar16 | (*(byte *)(lVar12 + 5) & 0x20) >> 5;
            }
            lVar12 = FUN_011323d0(lVar13,uVar17,uVar5);
            if (lVar12 != 0) {
              cVar6 = *(char *)(lVar12 + 5);
              goto joined_r0x01131988;
            }
          }
          if (uVar16 != 0) {
LAB_01131320:
            uVar20 = uVar20 + 1;
          }
        }
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 4;
      } while (uVar14 < local_70[0]);
    }
    goto joined_r0x01131860;
  case 0x1a:
    uVar20 = FUN_01135d40(local_c18 + uVar14 * 0xc + 2);
    goto joined_r0x01131860;
  case 0x1b:
    iVar9 = FUN_01135e5c(param_1,local_c18 + uVar14 * 0xc);
    uVar20 = (uint)(iVar9 == 0xff);
    goto joined_r0x01131860;
  }
  uVar20 = (uint)uVar4;
joined_r0x01131860:
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      iVar9 = (int)*plVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (9 < param_3) {
LAB_01131680:
                    /* WARNING: Subroutine does not return */
    FUN_01137490();
  }
  uVar16 = (*(uint *)(param_1 + uVar19 * 0x58 + 0xe0) & 7 << (ulong)(param_3 * 3 & 0x1f)) >>
           (ulong)(param_3 * 3 & 0x1f);
  if ((uVar16 & 0xff) == 0) {
    uVar16 = 1;
  }
  iVar9 = *(int *)((long)&uStack_fb8 + (ulong)param_3 * 0x60 + 4);
  uVar17 = uVar16;
  if (((iVar9 != 0) && ((uVar16 & 0xff) < iVar9 + 1U)) &&
     (uVar19 = (ulong)param_3, *(uint *)(&uStack_fc8 + uVar19 * 0xc) <= uVar20)) {
    if (iVar9 == 1) {
      uVar17 = 2;
    }
    else if (uVar20 < *(uint *)((long)&uStack_fc8 + uVar19 * 0x60 + 4)) {
      iVar9 = 0;
LAB_011310cc:
      uVar17 = iVar9 + 2;
    }
    else if (iVar9 == 2) {
      uVar17 = 3;
    }
    else {
      if (uVar20 < *(uint *)(&local_fc0 + uVar19 * 0xc)) {
        iVar9 = 1;
        goto LAB_011310cc;
      }
      if (iVar9 == 3) {
        uVar17 = 4;
      }
      else {
        if (uVar20 < *(uint *)((long)&local_fc0 + uVar19 * 0x60 + 4)) {
          iVar9 = 2;
          goto LAB_011310cc;
        }
        if (iVar9 == 4) {
          uVar17 = 5;
        }
        else {
          if (uVar20 < *(uint *)(&uStack_fb8 + uVar19 * 0xc)) {
            iVar9 = 3;
            goto LAB_011310cc;
          }
          if (iVar9 != 5) goto LAB_01131680;
          uVar17 = 6;
        }
      }
    }
  }
joined_r0x01131794:
  if (plVar18 != (long *)0x0) {
    plVar10 = plVar18 + 10;
    do {
      iVar9 = (int)*plVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(int *)plVar10 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
joined_r0x011317c8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (char)uVar16;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar20;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = (char)uVar17;
  }
  return (uVar17 & 0xff) - (uVar16 & 0xff);
}


