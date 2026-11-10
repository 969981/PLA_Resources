/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fa5a8; name: FUN_012fa5a8
 */


void FUN_012fa5a8(undefined4 *param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                 byte param_6)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  uint param3;
  byte *pbVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  uint param3_00;
  undefined1 *puVar9;
  byte local_c0 [128];
  
  *param_1 = param_2;
  *(byte *)(param_1 + 8) = param_6;
  *(long *)(param_1 + 2) = param_3;
  if (param_3 != 0) {
    *(long *)(param_1 + 4) = param_4;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    *(long *)(param_1 + 6) = param_5;
    if (param_5 != 0) {
      puVar9 = &DAT_cbf29ce484222645;
      snprintf((char *)local_c0,0x80,"pane_L_info_material_%02d",(uint)param_6);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined1 **)(param_1 + 10) = puVar6;
      *(byte **)(param_1 + 0xc) = local_c0;
      param3_00 = (uint)param_6;
      *(undefined8 *)(param_1 + 0xe) = 0x7f;
      param3 = (uint)param_6;
      snprintf((char *)local_c0,0x80,"pane_L_info_material_%02d_P_loader_icon_00",param3);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined8 *)(param_1 + 0x14) = 0x7f;
      *(undefined1 **)(param_1 + 0x10) = puVar6;
      *(byte **)(param_1 + 0x12) = local_c0;
      snprintf((char *)local_c0,0x80,"pane_L_info_material_%02d_T_name_item_00",param3_00);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined1 **)(param_1 + 0x16) = puVar6;
      *(byte **)(param_1 + 0x18) = local_c0;
      *(undefined8 *)(param_1 + 0x1a) = 0x7f;
      snprintf((char *)local_c0,0x80,"pane_L_info_material_%02d_T_param_required_num_00",param3_00);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined8 *)(param_1 + 0x20) = 0x7f;
      *(undefined1 **)(param_1 + 0x1c) = puVar6;
      *(byte **)(param_1 + 0x1e) = local_c0;
      snprintf((char *)local_c0,0x80,"pane_L_info_material_%02d_T_in_storage_all_00",param3_00);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined1 **)(param_1 + 0x22) = puVar6;
      *(byte **)(param_1 + 0x24) = local_c0;
      *(undefined8 *)(param_1 + 0x26) = 0x7f;
      snprintf((char *)local_c0,0x80,"pane_L_info_material_%02d_T_in_storage_ibox_00",param3);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined8 *)(param_1 + 0x2c) = 0x7f;
      *(undefined1 **)(param_1 + 0x28) = puVar6;
      *(byte **)(param_1 + 0x2a) = local_c0;
      snprintf((char *)local_c0,0x80,"pane_L_info_material_%02d_T_in_storage_bag_00",param3);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined1 **)(param_1 + 0x2e) = puVar6;
      *(byte **)(param_1 + 0x30) = local_c0;
      *(undefined8 *)(param_1 + 0x32) = 0x7f;
      snprintf((char *)local_c0,0x80,"anime_L_info_material_%02d_item_full_",param3);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined8 *)(param_1 + 0x38) = 0x7f;
      *(undefined1 **)(param_1 + 0x34) = puVar6;
      *(byte **)(param_1 + 0x36) = local_c0;
      snprintf((char *)local_c0,0x80,"anime_L_info_material_%02d_item_not_enough",param3);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined1 **)(param_1 + 0x3a) = puVar6;
      *(byte **)(param_1 + 0x3c) = local_c0;
      *(undefined8 *)(param_1 + 0x3e) = 0x7f;
      snprintf((char *)local_c0,0x80,"anime_L_info_material_%02d_storage_ibox_active",param3);
      puVar6 = &DAT_cbf29ce484222645;
      if (local_c0[0] != 0) {
        puVar6 = &DAT_cbf29ce484222645;
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        bVar3 = local_c0[0];
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (bVar3 != 0);
      }
      *(undefined8 *)(param_1 + 0x44) = 0x7f;
      *(undefined1 **)(param_1 + 0x40) = puVar6;
      *(byte **)(param_1 + 0x42) = local_c0;
      snprintf((char *)local_c0,0x80,"anime_L_info_material_%02d_storage_ibox_passive",param3);
      if (local_c0[0] != 0) {
        pbVar4 = (byte *)((ulong)local_c0 | 1);
        do {
          puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)local_c0[0]) * 0x100000001b3);
          local_c0[0] = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (local_c0[0] != 0);
      }
      *(undefined8 *)(param_1 + 0x4a) = 0x7f;
      *(undefined1 **)(param_1 + 0x46) = puVar9;
      *(byte **)(param_1 + 0x48) = local_c0;
      FUN_0283b1e8(*(undefined8 *)(param_1 + 2));
      plVar5 = *(long **)(*(long *)(param_1 + 2) + 0x148);
      lVar8 = *(long *)(*(long *)(param_1 + 2) + 0x150);
      if ((lVar8 != 0) && (*plVar5 != *(long *)(param_1 + 10))) {
        plVar7 = plVar5 + lVar8 * 6;
        lVar8 = lVar8 * 0x30;
        do {
          lVar8 = lVar8 + -0x30;
          if (lVar8 == 0) {
            plVar5 = plVar7;
            break;
          }
          plVar2 = plVar5 + 6;
          plVar1 = plVar5 + 6;
          plVar5 = plVar2;
        } while (*plVar1 != *(long *)(param_1 + 10));
      }
      *(byte *)(plVar5[4] + 0x58) = *(byte *)(plVar5[4] + 0x58) & 0xfe;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


