/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014c2afc; name: FUN_014c2afc
 */


void FUN_014c2afc(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  
  plVar16 = *(long **)(param_1 + 0x2c8);
  if (plVar16 != (long *)0x0) {
    plVar15 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar15 = (long *)plVar16[0x37];
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar6 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar13 = param_1 + 0x180;
  plVar2 = plVar16 + 10;
  do {
    iVar9 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar3) {
      *(int *)plVar2 = iVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  uVar7 = FUN_02c5fbd4(param_2);
  FUN_02c395d0(plVar15,0,uVar7,4,0,1);
  local_a0 = 0x2526249549f7678c;
  pcStack_98 = "pane_L_scr_03_param_L_pt_graph_T_param_00_numb_0";
  local_90 = 0x30;
  local_88 = (long *)0x0;
  FUN_014c1468(param_1,0,0xc784d62e9a630267,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar7 = FUN_02c5e2ec(param_2);
  FUN_02c395d0(plVar15,0,uVar7,4,0,1);
  local_a0 = 0x2526269549f76af2;
  pcStack_98 = "pane_L_scr_03_param_L_pt_graph_T_param_00_numb_2";
  local_90 = 0x30;
  local_88 = (long *)0x0;
  FUN_014c1468(param_1,0,0xc784d62e9a630267,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (((DAT_043c4990 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043c4990), iVar9 != 0)) {
    DAT_043c4660 = 0;
    DAT_043c4878 = 0;
    DAT_043c48a0 = 0;
    DAT_043c4668 = &DAT_cbf29ce484222645;
    DAT_043c4670 = &DAT_03996322;
    DAT_043c48c0 = 0;
    DAT_043c4688 = 0x7a439bb2874cfc6d;
    DAT_043c4690 = "anime_L_scr_03_param_L_pt_graph_L_param_00_L_graph_sign_change";
    DAT_043c48e0 = 0;
    DAT_043c46a8 = 0xdb9f1f0fe550d583;
    DAT_043c46b0 = "pane_L_scr_03_param_L_pt_graph_L_param_00_L_lv_gauge_T_lv_numb";
    DAT_043c4900 = 0;
    DAT_043c46c8 = 0xae24e8a79ef3a98e;
    DAT_043c46d0 = "anime_L_scr_03_param_L_pt_graph_L_param_00_L_lv_gauge_gauge";
    DAT_043c46e8 = 1;
    DAT_043c46f0 = 0xbe1e87b95a5ca89a;
    DAT_043c46f8 = "pane_L_scr_03_param_L_pt_graph_T_param_01_numb";
    DAT_043c4710 = 0x3de900b953a47b62;
    DAT_043c4718 = "anime_L_scr_03_param_L_pt_graph_L_param_01_L_graph_sign_change";
    DAT_043c4928 = 0;
    DAT_043c4730 = 0x96510619332c1ee;
    DAT_043c4738 = "pane_L_scr_03_param_L_pt_graph_L_param_01_L_lv_gauge_T_lv_numb";
    DAT_043c4948 = 0;
    DAT_043c4750 = 0x713916bb5eea2f8b;
    DAT_043c4758 = "anime_L_scr_03_param_L_pt_graph_L_param_01_L_lv_gauge_gauge";
    DAT_043c4770 = 2;
    DAT_043c4968 = 0;
    DAT_043c4988 = 0;
    DAT_043c4778 = 0xbceb1d6f501e2a19;
    DAT_043c4780 = "pane_L_scr_03_param_L_pt_graph_T_param_02_numb";
    DAT_043c4798 = 0x17718b1c1572076b;
    DAT_043c47a0 = "anime_L_scr_03_param_L_pt_graph_L_param_02_L_graph_sign_change";
    DAT_043c4898 = 0x2e;
    DAT_043c47b8 = 0x7e193025e5fed52d;
    DAT_043c47c0 = "pane_L_scr_03_param_L_pt_graph_L_param_02_L_lv_gauge_T_lv_numb";
    DAT_043c4920 = 0x2e;
    DAT_043c47d8 = 0xe8de15b3da850ae4;
    DAT_043c47e0 = "anime_L_scr_03_param_L_pt_graph_L_param_02_L_lv_gauge_gauge";
    DAT_043c47f8 = 3;
    DAT_043c4800 = 0x3a56c2370683abe;
    DAT_043c4808 = "pane_L_scr_03_param_L_pt_graph_T_param_05_numb";
    DAT_043c4700 = 0x2e;
    DAT_043c4708 = 0;
    DAT_043c4820 = 0xbe2cd04002a3241e;
    DAT_043c4828 = "anime_L_scr_03_param_L_pt_graph_L_param_05_L_graph_sign_change";
    DAT_043c48b8 = 0x3e;
    DAT_043c4840 = 0xfc7feaac4a2b965a;
    DAT_043c4848 = "pane_L_scr_03_param_L_pt_graph_L_param_05_L_lv_gauge_T_lv_numb";
    DAT_043c4860 = 0xc9c55e4dfe61861f;
    DAT_043c4868 = "anime_L_scr_03_param_L_pt_graph_L_param_05_L_lv_gauge_gauge";
    DAT_043c4880 = 4;
    DAT_043c48d8 = 0x3e;
    DAT_043c4888 = 0x9ccd2ac3b17b5337;
    DAT_043c4890 = "pane_L_scr_03_param_L_pt_graph_T_param_04_numb";
    DAT_043c4940 = 0x3e;
    DAT_043c48a8 = 0x9db791d17c2e8d79;
    DAT_043c48b0 = "anime_L_scr_03_param_L_pt_graph_L_param_04_L_graph_sign_change";
    DAT_043c4960 = 0x3e;
    DAT_043c48c8 = 0x9558aeb31241d40f;
    DAT_043c48d0 = "pane_L_scr_03_param_L_pt_graph_L_param_04_L_lv_gauge_T_lv_numb";
    DAT_043c48e8 = 0xa433b6ad4f369802;
    DAT_043c4788 = 0x2e;
    DAT_043c4790 = 0;
    DAT_043c4810 = 0x2e;
    DAT_043c4818 = 0;
    DAT_043c48f0 = "anime_L_scr_03_param_L_pt_graph_L_param_04_L_lv_gauge_gauge";
    DAT_043c4908 = 5;
    DAT_043c4698 = 0x3e;
    DAT_043c46a0 = 0;
    DAT_043c46b8 = 0x3e;
    DAT_043c46c0 = 0;
    DAT_043c4930 = 0x96e81f0ad28c3e20;
    DAT_043c4720 = 0x3e;
    DAT_043c4728 = 0;
    DAT_043c4910 = 0xc8167645bfa417c0;
    DAT_043c4918 = "pane_L_scr_03_param_L_pt_graph_T_param_03_numb";
    DAT_043c4950 = 0x4ab664300f0216a8;
    DAT_043c4870 = 0x3b;
    DAT_043c48f8 = 0x3b;
    DAT_043c4938 = "anime_L_scr_03_param_L_pt_graph_L_param_03_L_graph_sign_change";
    DAT_043c4958 = "pane_L_scr_03_param_L_pt_graph_L_param_03_L_lv_gauge_T_lv_numb";
    DAT_043c4980 = 0x3b;
    DAT_043c4740 = 0x3e;
    DAT_043c4748 = 0;
    DAT_043c47a8 = 0x3e;
    DAT_043c47b0 = 0;
    DAT_043c47c8 = 0x3e;
    DAT_043c47d0 = 0;
    DAT_043c4830 = 0x3e;
    DAT_043c4838 = 0;
    DAT_043c4850 = 0x3e;
    DAT_043c4858 = 0;
    DAT_043c4970 = 0x8361b80fe7ec5641;
    DAT_043c4978 = "anime_L_scr_03_param_L_pt_graph_L_param_03_L_lv_gauge_gauge";
    DAT_043c4678 = 0;
    DAT_043c4680 = 0;
    DAT_043c46d8 = 0x3b;
    DAT_043c46e0 = 0;
    DAT_043c4760 = 0x3b;
    DAT_043c4768 = 0;
    DAT_043c47e8 = 0x3b;
    DAT_043c47f0 = 0;
    FUN_00100250(&LAB_014c0520,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c4990);
  }
  uVar7 = FUN_02c5fbcc(param_2);
  puVar5 = PTR_DAT_0437a0d8;
  puVar4 = PTR_DAT_0437a0d0;
  lVar14 = 0;
  plVar16 = (long *)(param_1 + 0x2c8);
  do {
    if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar4);
    }
    if (*(long *)((long)&DAT_043c4668 + lVar14) != *(long *)puVar5) {
      uVar8 = FUN_02c5e1ec(param_2,*(undefined4 *)((long)&DAT_043c4660 + lVar14));
      FUN_02c395d0(plVar15,0,uVar8,3,0,1);
      FUN_014c1468(param_1,0,0x4f5b3e8c5c84d90f,(long)&DAT_043c4668 + lVar14);
    }
    lVar17 = (long)&DAT_043c4688 + lVar14;
    cVar6 = FUN_02c8b394(uVar7,*(undefined4 *)((long)&DAT_043c4660 + lVar14));
    uVar10 = 0x3f800000;
    if (cVar6 != -1) {
      uVar10 = 0x40000000;
    }
    uVar18 = 0;
    if (cVar6 != '\x01') {
      uVar18 = uVar10;
    }
    if (*plVar16 != 0) {
      FUN_0283b1e8(*plVar16,lVar17);
      if (*plVar16 != 0) {
        uVar11 = FUN_0283b5c4(*plVar16,lVar17);
        if ((uVar11 & 1) != 0) {
          if (*plVar16 == 0) goto LAB_014c2da8;
          FUN_0283b1e8(*plVar16,lVar17);
        }
        FUN_0283b748(uVar18,*plVar16,lVar17);
      }
    }
LAB_014c2da8:
    lVar14 = lVar14 + 0x88;
  } while (lVar14 != 0x330);
  uVar11 = FUN_014c51cc();
  if ((uVar11 & 1) == 0) goto LAB_014c31a0;
  iVar9 = FUN_02c5dee0(param_2,DAT_043c4660);
  FUN_02c395d0(plVar15,0,iVar9,2,0,1);
  FUN_014c1468(param_1,0,0xfede7a86730736fe,&DAT_043c46a8);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c46c8);
  }
  uVar11 = FUN_02c5dffc(param_2,DAT_043c4660);
  if ((uVar11 & 1) == 0) {
    if (*plVar16 != 0) {
      uVar11 = FUN_0283b5c4(*plVar16,&DAT_043c46c8);
      if ((uVar11 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c2e6c;
        FUN_0283b1e8(*plVar16,&DAT_043c46c8);
      }
      lVar14 = *plVar16;
      uVar11 = (ulong)(uint)(float)(uint)(iVar9 * 10);
LAB_014c2e68:
      FUN_0283b748(uVar11,lVar14,&DAT_043c46c8);
    }
  }
  else {
    uVar11 = FUN_00d2e5c8(lVar13,&DAT_043c46c8);
    if (*plVar16 != 0) {
      uVar12 = FUN_0283b5c4(*plVar16,&DAT_043c46c8);
      if ((uVar12 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c2e6c;
        FUN_0283b1e8(*plVar16,&DAT_043c46c8);
      }
      lVar14 = *plVar16;
      goto LAB_014c2e68;
    }
  }
LAB_014c2e6c:
  iVar9 = FUN_02c5dee0(param_2,DAT_043c46e8);
  FUN_02c395d0(plVar15,0,iVar9,2,0,1);
  FUN_014c1468(param_1,0,0xfede7a86730736fe,&DAT_043c4730);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4750);
  }
  uVar11 = FUN_02c5dffc(param_2,DAT_043c46e8);
  if ((uVar11 & 1) == 0) {
    if (*plVar16 != 0) {
      uVar11 = FUN_0283b5c4(*plVar16,&DAT_043c4750);
      if ((uVar11 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c2f10;
        FUN_0283b1e8(*plVar16,&DAT_043c4750);
      }
      lVar14 = *plVar16;
      uVar11 = (ulong)(uint)(float)(uint)(iVar9 * 10);
LAB_014c2f04:
      FUN_0283b748(uVar11,lVar14,&DAT_043c4750);
    }
  }
  else {
    uVar11 = FUN_00d2e5c8(lVar13,&DAT_043c4750);
    if (*plVar16 != 0) {
      uVar12 = FUN_0283b5c4(*plVar16,&DAT_043c4750);
      if ((uVar12 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c2f10;
        FUN_0283b1e8(*plVar16,&DAT_043c4750);
      }
      lVar14 = *plVar16;
      goto LAB_014c2f04;
    }
  }
LAB_014c2f10:
  iVar9 = FUN_02c5dee0(param_2,DAT_043c4770);
  FUN_02c395d0(plVar15,0,iVar9,2,0,1);
  FUN_014c1468(param_1,0,0xfede7a86730736fe,&DAT_043c47b8);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c47d8);
  }
  uVar11 = FUN_02c5dffc(param_2,DAT_043c4770);
  if ((uVar11 & 1) == 0) {
    if (*plVar16 != 0) {
      uVar11 = FUN_0283b5c4(*plVar16,&DAT_043c47d8);
      if ((uVar11 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c2fb4;
        FUN_0283b1e8(*plVar16,&DAT_043c47d8);
      }
      lVar14 = *plVar16;
      uVar11 = (ulong)(uint)(float)(uint)(iVar9 * 10);
LAB_014c2fa8:
      FUN_0283b748(uVar11,lVar14,&DAT_043c47d8);
    }
  }
  else {
    uVar11 = FUN_00d2e5c8(lVar13,&DAT_043c47d8);
    if (*plVar16 != 0) {
      uVar12 = FUN_0283b5c4(*plVar16,&DAT_043c47d8);
      if ((uVar12 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c2fb4;
        FUN_0283b1e8(*plVar16,&DAT_043c47d8);
      }
      lVar14 = *plVar16;
      goto LAB_014c2fa8;
    }
  }
LAB_014c2fb4:
  iVar9 = FUN_02c5dee0(param_2,DAT_043c47f8);
  FUN_02c395d0(plVar15,0,iVar9,2,0,1);
  FUN_014c1468(param_1,0,0xfede7a86730736fe,&DAT_043c4840);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4860);
  }
  uVar11 = FUN_02c5dffc(param_2,DAT_043c47f8);
  if ((uVar11 & 1) == 0) {
    if (*plVar16 != 0) {
      uVar11 = FUN_0283b5c4(*plVar16,&DAT_043c4860);
      if ((uVar11 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c3058;
        FUN_0283b1e8(*plVar16,&DAT_043c4860);
      }
      lVar14 = *plVar16;
      uVar11 = (ulong)(uint)(float)(uint)(iVar9 * 10);
LAB_014c304c:
      FUN_0283b748(uVar11,lVar14,&DAT_043c4860);
    }
  }
  else {
    uVar11 = FUN_00d2e5c8(lVar13,&DAT_043c4860);
    if (*plVar16 != 0) {
      uVar12 = FUN_0283b5c4(*plVar16,&DAT_043c4860);
      if ((uVar12 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c3058;
        FUN_0283b1e8(*plVar16,&DAT_043c4860);
      }
      lVar14 = *plVar16;
      goto LAB_014c304c;
    }
  }
LAB_014c3058:
  iVar9 = FUN_02c5dee0(param_2,DAT_043c4880);
  FUN_02c395d0(plVar15,0,iVar9,2,0,1);
  FUN_014c1468(param_1,0,0xfede7a86730736fe,&DAT_043c48c8);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c48e8);
  }
  uVar11 = FUN_02c5dffc(param_2,DAT_043c4880);
  if ((uVar11 & 1) == 0) {
    if (*plVar16 != 0) {
      uVar11 = FUN_0283b5c4(*plVar16,&DAT_043c48e8);
      if ((uVar11 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c30fc;
        FUN_0283b1e8(*plVar16,&DAT_043c48e8);
      }
      lVar14 = *plVar16;
      uVar11 = (ulong)(uint)(float)(uint)(iVar9 * 10);
LAB_014c30f0:
      FUN_0283b748(uVar11,lVar14,&DAT_043c48e8);
    }
  }
  else {
    uVar11 = FUN_00d2e5c8(lVar13,&DAT_043c48e8);
    if (*plVar16 != 0) {
      uVar12 = FUN_0283b5c4(*plVar16,&DAT_043c48e8);
      if ((uVar12 & 1) != 0) {
        if (*plVar16 == 0) goto LAB_014c30fc;
        FUN_0283b1e8(*plVar16,&DAT_043c48e8);
      }
      lVar14 = *plVar16;
      goto LAB_014c30f0;
    }
  }
LAB_014c30fc:
  iVar9 = FUN_02c5dee0(param_2,DAT_043c4908);
  FUN_02c395d0(plVar15,0,iVar9,2,0,1);
  FUN_014c1468(param_1,0,0xfede7a86730736fe,&DAT_043c4950);
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&DAT_043c4970);
  }
  uVar11 = FUN_02c5dffc(param_2,DAT_043c4908);
  if ((uVar11 & 1) == 0) {
    if (*plVar16 == 0) goto LAB_014c31a0;
    uVar11 = FUN_0283b5c4(*plVar16,&DAT_043c4970);
    if ((uVar11 & 1) != 0) {
      if (*plVar16 == 0) goto LAB_014c31a0;
      FUN_0283b1e8(*plVar16,&DAT_043c4970);
    }
    lVar13 = *plVar16;
    uVar11 = (ulong)(uint)(float)(uint)(iVar9 * 10);
  }
  else {
    uVar11 = FUN_00d2e5c8(lVar13,&DAT_043c4970);
    if (*plVar16 == 0) goto LAB_014c31a0;
    uVar12 = FUN_0283b5c4(*plVar16,&DAT_043c4970);
    if ((uVar12 & 1) != 0) {
      if (*plVar16 == 0) goto LAB_014c31a0;
      FUN_0283b1e8(*plVar16,&DAT_043c4970);
    }
    lVar13 = *plVar16;
  }
  FUN_0283b748(uVar11,lVar13,&DAT_043c4970);
LAB_014c31a0:
  FUN_014c5400(param_1,param_2);
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
}


