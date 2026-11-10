/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f7af0; name: FUN_012f7af0
 */


void FUN_012f7af0(undefined4 *param_1,undefined4 param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte bVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  byte local_80 [6];
  char cStack_7a;
  char cStack_79;
  undefined6 local_78;
  char cStack_72;
  char cStack_71;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  *param_1 = param_2;
  *(long *)(param_1 + 2) = param_3;
  if (param_3 != 0) {
    *(long *)(param_1 + 4) = param_4;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    *(long *)(param_1 + 6) = param_5;
    if (param_5 != 0) {
      puVar8 = &DAT_cbf29ce484222645;
      cStack_7a = s_pane_L_info_item_00_039a3e1a[6];
      cStack_79 = s_pane_L_info_item_00_039a3e1a[7];
      local_78 = s_pane_L_info_item_00_039a3e1a._8_6_;
      cStack_72 = s_pane_L_info_item_00_039a3e1a[0xe];
      cStack_71 = s_pane_L_info_item_00_039a3e1a[0xf];
      uVar15 = 0x70;
      lVar13 = 1;
      _local_70 = CONCAT44(uStack_6c,0x30305f);
      puVar6 = &DAT_cbf29ce484222645;
      do {
        puVar6 = (undefined1 *)(((ulong)puVar6 ^ uVar15) * 0x100000001b3);
        pbVar12 = local_80 + lVar13;
        uVar15 = (ulong)*pbVar12;
        lVar13 = lVar13 + 1;
      } while (*pbVar12 != 0);
      *(undefined8 *)(param_1 + 0xc) = 0x7f;
      uVar15 = 0x70;
      *(undefined1 **)(param_1 + 8) = puVar6;
      *(byte **)(param_1 + 10) = local_80;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined1 **)(param_1 + 0xe) = puVar14;
      *(byte **)(param_1 + 0x10) = local_80;
      *(undefined8 *)(param_1 + 0x12) = 0x7f;
      uVar15 = 0x70;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined1 **)(param_1 + 0x14) = puVar14;
      *(byte **)(param_1 + 0x16) = local_80;
      *(undefined8 *)(param_1 + 0x18) = 0x7f;
      uVar15 = 0x70;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined1 **)(param_1 + 0x1a) = puVar14;
      *(byte **)(param_1 + 0x1c) = local_80;
      *(undefined8 *)(param_1 + 0x1e) = 0x7f;
      uVar15 = 0x70;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined8 *)(param_1 + 0x24) = 0x7f;
      uVar15 = 0x70;
      *(undefined1 **)(param_1 + 0x20) = puVar14;
      *(byte **)(param_1 + 0x22) = local_80;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined8 *)(param_1 + 0x2a) = 0x7f;
      *(undefined1 **)(param_1 + 0x26) = puVar14;
      *(byte **)(param_1 + 0x28) = local_80;
      uVar15 = 0x70;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined8 *)(param_1 + 0x30) = 0x7f;
      uVar15 = 0x70;
      *(undefined1 **)(param_1 + 0x2c) = puVar14;
      *(byte **)(param_1 + 0x2e) = local_80;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined1 **)(param_1 + 0x32) = puVar14;
      *(byte **)(param_1 + 0x34) = local_80;
      *(undefined8 *)(param_1 + 0x36) = 0x7f;
      uVar15 = 0x70;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined1 **)(param_1 + 0x38) = puVar14;
      *(byte **)(param_1 + 0x3a) = local_80;
      *(undefined8 *)(param_1 + 0x3c) = 0x7f;
      uVar15 = 0x70;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined1 **)(param_1 + 0x3e) = puVar14;
      *(byte **)(param_1 + 0x40) = local_80;
      *(undefined8 *)(param_1 + 0x42) = 0x7f;
      uVar15 = 0x70;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined1 **)(param_1 + 0x44) = puVar14;
      *(byte **)(param_1 + 0x46) = local_80;
      *(undefined8 *)(param_1 + 0x48) = 0x7f;
      uVar15 = 0x70;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined8 *)(param_1 + 0x4e) = 0x7f;
      *(undefined1 **)(param_1 + 0x4a) = puVar14;
      *(byte **)(param_1 + 0x4c) = local_80;
      uVar15 = 0x70;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined8 *)(param_1 + 0x54) = 0x7f;
      *(undefined1 **)(param_1 + 0x50) = puVar14;
      *(byte **)(param_1 + 0x52) = local_80;
      uVar15 = 0x61;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined1 **)(param_1 + 0x56) = puVar14;
      *(byte **)(param_1 + 0x58) = local_80;
      *(undefined8 *)(param_1 + 0x5a) = 0x7f;
      uVar15 = 0x61;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined8 *)(param_1 + 0x60) = 0x7f;
      *(undefined1 **)(param_1 + 0x5c) = puVar14;
      *(byte **)(param_1 + 0x5e) = local_80;
      uVar15 = 0x61;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined8 *)(param_1 + 0x66) = 0x7f;
      *(undefined1 **)(param_1 + 0x62) = puVar14;
      *(byte **)(param_1 + 100) = local_80;
      uVar15 = 0x61;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined8 *)(param_1 + 0x6c) = 0x7f;
      *(undefined1 **)(param_1 + 0x68) = puVar14;
      *(byte **)(param_1 + 0x6a) = local_80;
      uVar15 = 0x61;
      puVar14 = &DAT_cbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined8 *)(param_1 + 0x72) = 0x7f;
      *(undefined1 **)(param_1 + 0x6e) = puVar14;
      *(byte **)(param_1 + 0x70) = local_80;
      uVar15 = 0x61;
      pbVar12 = (byte *)((ulong)local_80 | 1);
      do {
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ uVar15) * 0x100000001b3);
        bVar5 = *pbVar12;
        uVar15 = (ulong)bVar5;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
      *(undefined1 **)(param_1 + 0x74) = puVar8;
      *(byte **)(param_1 + 0x76) = local_80;
      *(undefined8 *)(param_1 + 0x78) = 0x7f;
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 2) + 0x148);
      lVar13 = *(long *)(*(long *)(param_1 + 2) + 0x150);
      if ((lVar13 != 0) && ((undefined1 *)*puVar9 != puVar6)) {
        puVar10 = puVar9 + lVar13 * 6;
        lVar13 = lVar13 * 0x30;
        do {
          lVar13 = lVar13 + -0x30;
          if (lVar13 == 0) {
            puVar9 = puVar10;
            break;
          }
          puVar3 = puVar9 + 6;
          puVar1 = puVar9 + 6;
          puVar9 = puVar3;
        } while ((undefined1 *)*puVar1 != puVar6);
      }
      *(byte *)(puVar9[4] + 0x58) = *(byte *)(puVar9[4] + 0x58) & 0xfe;
      plVar7 = *(long **)(*(long *)(param_1 + 2) + 0x148);
      lVar13 = *(long *)(*(long *)(param_1 + 2) + 0x150);
      if ((lVar13 != 0) && (*plVar7 != 0xd67739095aa50c2)) {
        plVar11 = plVar7 + lVar13 * 6;
        lVar13 = lVar13 * 0x30;
        do {
          lVar13 = lVar13 + -0x30;
          if (lVar13 == 0) {
            plVar7 = plVar11;
            break;
          }
          plVar4 = plVar7 + 6;
          plVar2 = plVar7 + 6;
          plVar7 = plVar4;
        } while (*plVar2 != 0xd67739095aa50c2);
      }
      *(byte *)(plVar7[4] + 0x58) = *(byte *)(plVar7[4] + 0x58) | 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


