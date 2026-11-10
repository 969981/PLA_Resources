/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bf940; name: FUN_014bf940
 */


void FUN_014bf940(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_014c51cc();
  if ((uVar2 & 1) == 0) {
    if (((DAT_043c4d08 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c4d08), iVar1 != 0)) {
      DAT_043c4c48 = 0xe7eb592886f9c906;
      DAT_043c4c50 = "anime_L_scr_03_param_L_pt_graph_L_param_00_gauge_off";
      DAT_043c4c68 = 0x2abfb8375145e221;
      DAT_043c4c70 = "anime_L_scr_03_param_L_pt_graph_L_param_01_gauge_off";
      DAT_043c4c88 = 0x9f9fedd8737eb7c8;
      DAT_043c4c90 = "anime_L_scr_03_param_L_pt_graph_L_param_02_gauge_off";
      DAT_043c4ca8 = 0x95ad4891a9d17f53;
      DAT_043c4cb0 = "anime_L_scr_03_param_L_pt_graph_L_param_03_gauge_off";
      DAT_043c4c58 = 0x34;
      DAT_043c4c60 = 0;
      DAT_043c4c78 = 0x34;
      DAT_043c4c80 = 0;
      DAT_043c4c98 = 0x34;
      DAT_043c4ca0 = 0;
      DAT_043c4cc8 = 0x7753e6e097172922;
      DAT_043c4cd0 = "anime_L_scr_03_param_L_pt_graph_L_param_04_gauge_off";
      DAT_043c4cb8 = 0x34;
      DAT_043c4cc0 = 0;
      DAT_043c4cd8 = 0x34;
      DAT_043c4ce0 = 0;
      DAT_043c4ce8 = 0x8c8f32ce72e3430d;
      DAT_043c4cf0 = "anime_L_scr_03_param_L_pt_graph_L_param_05_gauge_off";
      DAT_043c4cf8 = 0x34;
      DAT_043c4d00 = 0;
      FUN_00100250(&LAB_014c09b0,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c4d08);
      lVar3 = *(long *)(param_1 + 0x2c8);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x2c8);
    }
    if (lVar3 != 0) {
      FUN_0283b1e8(lVar3,&DAT_043c4c48);
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4c68);
        if (*(long *)(param_1 + 0x2c8) != 0) {
          FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4c88);
          if (*(long *)(param_1 + 0x2c8) != 0) {
            FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4ca8);
            if (*(long *)(param_1 + 0x2c8) != 0) {
              FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4cc8);
              lVar3 = *(long *)(param_1 + 0x2c8);
              if (lVar3 != 0) {
                puVar4 = &DAT_043c4ce8;
                goto LAB_014bf9dc;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (((DAT_043c4c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043c4c40), iVar1 != 0)) {
      DAT_043c4b80 = 0x55680a8481c805ec;
      DAT_043c4b88 = "anime_L_scr_03_param_L_pt_graph_L_param_00_gauge_on";
      DAT_043c4ba0 = 0x78ccb4d493e6cd25;
      DAT_043c4ba8 = "anime_L_scr_03_param_L_pt_graph_L_param_01_gauge_on";
      DAT_043c4bc0 = 0xc4e7ca969109a7e6;
      DAT_043c4bc8 = "anime_L_scr_03_param_L_pt_graph_L_param_02_gauge_on";
      DAT_043c4be0 = 0xa72c38629d856def;
      DAT_043c4be8 = "anime_L_scr_03_param_L_pt_graph_L_param_03_gauge_on";
      DAT_043c4b90 = 0x33;
      DAT_043c4b98 = 0;
      DAT_043c4bb0 = 0x33;
      DAT_043c4bb8 = 0;
      DAT_043c4bd0 = 0x33;
      DAT_043c4bd8 = 0;
      DAT_043c4c00 = 0x99704dc6d7bd9ac8;
      DAT_043c4c08 = "anime_L_scr_03_param_L_pt_graph_L_param_04_gauge_on";
      DAT_043c4bf0 = 0x33;
      DAT_043c4bf8 = 0;
      DAT_043c4c10 = 0x33;
      DAT_043c4c18 = 0;
      DAT_043c4c20 = 0xa41934b2cab5d5f1;
      DAT_043c4c28 = "anime_L_scr_03_param_L_pt_graph_L_param_05_gauge_on";
      DAT_043c4c30 = 0x33;
      DAT_043c4c38 = 0;
      FUN_00100250(0x14c0900,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043c4c40);
      lVar3 = *(long *)(param_1 + 0x2c8);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x2c8);
    }
    if (lVar3 != 0) {
      FUN_0283b1e8(lVar3,&DAT_043c4b80);
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4ba0);
        if (*(long *)(param_1 + 0x2c8) != 0) {
          FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4bc0);
          if (*(long *)(param_1 + 0x2c8) != 0) {
            FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4be0);
            if (*(long *)(param_1 + 0x2c8) != 0) {
              FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4c00);
              lVar3 = *(long *)(param_1 + 0x2c8);
              if (lVar3 != 0) {
                puVar4 = &DAT_043c4c20;
LAB_014bf9dc:
                FUN_0283b1e8(lVar3,puVar4);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}


