/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fd5d4; name: FUN_014fd5d4
 */


void FUN_014fd5d4(long param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  plVar14 = *(long **)(param_1 + 0x2c8);
  if (plVar14 != (long *)0x0) {
    plVar13 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)plVar14[0x37];
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = FUN_02c5fbd4(*(undefined8 *)(param_1 + 0x5b8));
  FUN_02c395d0(plVar13,0,uVar6,3,0,1);
  uVar6 = FUN_02c5e2ec(*(undefined8 *)(param_1 + 0x5b8));
  FUN_02c395d0(plVar13,1,uVar6,3,0,1);
  local_80 = 0x1d7c060f6f01019d;
  pcStack_78 = "pane_L_info_adddata_00_T_param_hp_00";
  local_70 = 0x24;
  local_68 = (long *)0x0;
  FUN_014fa560(param_1,0x2d69f90c859011f7,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (((DAT_043c79c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c79c0), iVar8 != 0)) {
    DAT_043c75d0 = 0;
    DAT_043c77e8 = 0;
    DAT_043c7808 = 0;
    DAT_043c7828 = 0;
    DAT_043c75d8 = &DAT_cbf29ce484222645;
    DAT_043c75e0 = &DAT_03996322;
    DAT_043c7848 = 0;
    DAT_043c75f8 = 0x99cf107b90b4bbbf;
    DAT_043c7600 = "pane_L_info_adddata_00_L_glv_hp_00";
    DAT_043c7608 = 0x22;
    DAT_043c7610 = 0;
    DAT_043c7618 = 0xf2bd06ca9ea36bc7;
    DAT_043c7620 = "pane_L_info_adddata_00_L_glv_hp_00_T_param_glv_00";
    DAT_043c7628 = 0x31;
    DAT_043c7630 = 0;
    DAT_043c7638 = 0xd3071a4fcd8e7bbf;
    DAT_043c7640 = "anime_L_info_adddata_00_L_glv_hp_00_gauge";
    DAT_043c7648 = 0x29;
    DAT_043c7650 = 0;
    DAT_043c7658 = 0xd0cbce174f3d7e52;
    DAT_043c7660 = "anime_L_info_adddata_00_L_glv_hp_00_max";
    DAT_043c7678 = 1;
    DAT_043c7868 = 0;
    DAT_043c7680 = 0xf0899c4be1430837;
    DAT_043c7688 = "pane_L_info_adddata_00_T_param_atk_00";
    DAT_043c76a0 = 0xb73c697d24a6dae1;
    DAT_043c76a8 = "pane_L_info_adddata_00_L_glv_atk_00";
    DAT_043c76c0 = 0x38622a7b08ca67e1;
    DAT_043c76c8 = "pane_L_info_adddata_00_L_glv_atk_00_T_param_glv_00";
    DAT_043c7890 = 0;
    DAT_043c78b0 = 0;
    DAT_043c76e0 = 0x405733f3716fb355;
    DAT_043c76e8 = "anime_L_info_adddata_00_L_glv_atk_00_gauge";
    DAT_043c7700 = 0x52793051933832c0;
    DAT_043c7708 = "anime_L_info_adddata_00_L_glv_atk_00_max";
    DAT_043c7720 = 2;
    DAT_043c77e0 = 0x27;
    DAT_043c7728 = 0xf564cfece1011168;
    DAT_043c7730 = "pane_L_info_adddata_00_T_param_def_00";
    DAT_043c7888 = 0x27;
    DAT_043c7748 = 0x6dc8fd7f704c10aa;
    DAT_043c7750 = "pane_L_info_adddata_00_L_glv_def_00";
    DAT_043c78d0 = 0;
    DAT_043c7668 = 0x27;
    DAT_043c7670 = 0;
    DAT_043c7768 = 0x2b741c1aeea69a44;
    DAT_043c7770 = "pane_L_info_adddata_00_L_glv_def_00_T_param_glv_00";
    DAT_043c7898 = 0x675ad9b1a57f07d;
    DAT_043c7788 = 0xe1c9815b7eb3ec32;
    DAT_043c7790 = "anime_L_info_adddata_00_L_glv_def_00_gauge";
    DAT_043c78a0 = "pane_L_info_adddata_00_L_glv_spdef_00";
    DAT_043c7800 = 0x25;
    DAT_043c7690 = 0x25;
    DAT_043c7698 = 0;
    DAT_043c7738 = 0x25;
    DAT_043c7740 = 0;
    DAT_043c77a8 = 0xf995331e3cae7cfb;
    DAT_043c77b0 = "anime_L_info_adddata_00_L_glv_def_00_max";
    DAT_043c78a8 = 0x25;
    DAT_043c7930 = 0x25;
    DAT_043c77c8 = 3;
    DAT_043c78b8 = 0x5b3a55bc0da04f1d;
    DAT_043c78c0 = "pane_L_info_adddata_00_L_glv_spdef_00_T_param_glv_00";
    DAT_043c7940 = 0x222a01f9136bb0da;
    DAT_043c77d0 = 0xa80f156bc1a0a090;
    DAT_043c7948 = "pane_L_info_adddata_00_L_glv_agi_00";
    DAT_043c7850 = 0x654b5da67715967f;
    DAT_043c78d8 = 0xc3a663f4fdb8f9;
    DAT_043c77d8 = "pane_L_info_adddata_00_T_param_spatk_00";
    DAT_043c77f0 = 0x37f68a3ad3e10c9e;
    DAT_043c7950 = 0x23;
    DAT_043c7960 = 0x6ba791cc773afd94;
    DAT_043c77f8 = "pane_L_info_adddata_00_L_glv_spatk_00";
    DAT_043c78f8 = 0xe8674b92b5c5feac;
    DAT_043c78f0 = 0;
    DAT_043c7910 = 0;
    DAT_043c7858 = "anime_L_info_adddata_00_L_glv_spatk_00_max";
    DAT_043c7900 = "anime_L_info_adddata_00_L_glv_spdef_00_max";
    DAT_043c7980 = 0xd37a16d0ce5798f2;
    DAT_043c7810 = 0x265effb347c9ee58;
    DAT_043c7938 = 0;
    DAT_043c7870 = 4;
    DAT_043c7918 = 5;
    DAT_043c7988 = "anime_L_info_adddata_00_L_glv_agi_00_gauge";
    DAT_043c7818 = "pane_L_info_adddata_00_L_glv_spatk_00_T_param_glv_00";
    DAT_043c7830 = 0x1a4379c450b624ae;
    DAT_043c7958 = 0;
    DAT_043c7970 = 0x32;
    DAT_043c7820 = 0x34;
    DAT_043c7838 = "anime_L_info_adddata_00_L_glv_spatk_00_gauge";
    DAT_043c7878 = 0x6ff8b62455454647;
    DAT_043c76b0 = 0x23;
    DAT_043c76b8 = 0;
    DAT_043c7758 = 0x23;
    DAT_043c7760 = 0;
    DAT_043c78c8 = 0x34;
    DAT_043c7920 = 0x56c4ad7170b7f740;
    DAT_043c79a0 = 0x61cf023ffb3a5dbb;
    DAT_043c7840 = 0x2c;
    DAT_043c7860 = 0x2a;
    DAT_043c7880 = "pane_L_info_adddata_00_T_param_spdef_00";
    DAT_043c75e8 = 0;
    DAT_043c75f0 = 0;
    DAT_043c78e0 = "anime_L_info_adddata_00_L_glv_spdef_00_gauge";
    DAT_043c78e8 = 0x2c;
    DAT_043c7908 = 0x2a;
    DAT_043c7928 = "pane_L_info_adddata_00_T_param_agi_00";
    DAT_043c7968 = "pane_L_info_adddata_00_L_glv_agi_00_T_param_glv_00";
    DAT_043c7978 = 0;
    DAT_043c7990 = 0x2a;
    DAT_043c7998 = 0;
    DAT_043c79a8 = "anime_L_info_adddata_00_L_glv_agi_00_max";
    DAT_043c79b0 = 0x28;
    DAT_043c79b8 = 0;
    DAT_043c76d0 = 0x32;
    DAT_043c76d8 = 0;
    DAT_043c76f0 = 0x2a;
    DAT_043c76f8 = 0;
    DAT_043c7710 = 0x28;
    DAT_043c7718 = 0;
    DAT_043c7778 = 0x32;
    DAT_043c7780 = 0;
    DAT_043c7798 = 0x2a;
    DAT_043c77a0 = 0;
    DAT_043c77b8 = 0x28;
    DAT_043c77c0 = 0;
    FUN_00100250(0x14f59b0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c79c0);
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148a98(&local_88);
  local_80 = 0xd8ebb8f772f995ba;
  pcStack_78 = "FSYS_STATUS_DISP_OPEN_GANBA_LV";
  local_70 = 0x1e;
  local_68 = (long *)0x0;
  uVar7 = FUN_010f4bb4(local_88,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar12 = param_1 + 0x180;
  if (local_88 != (long *)0x0) {
    lVar11 = local_88[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  puVar5 = PTR_DAT_0437a0d8;
  lVar11 = 0;
  do {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar8 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    if (*(long *)((long)&DAT_043c75d8 + lVar11) != *(long *)puVar5) {
      uVar6 = FUN_02c5e1ec(*(undefined8 *)(param_1 + 0x5b8),
                           *(undefined4 *)((long)&DAT_043c75d0 + lVar11));
      FUN_02c395d0(plVar13,0,uVar6,3,0,1);
      FUN_014fa560(param_1,0x2d69f80c85901044,(long)&DAT_043c75d8 + lVar11);
    }
    if ((uVar7 & 1) != 0) {
      iVar8 = FUN_02c5dee0(*(undefined8 *)(param_1 + 0x5b8),
                           *(undefined4 *)((long)&DAT_043c75d0 + lVar11));
      FUN_02c395d0(plVar13,0,iVar8,2,0,1);
      FUN_014fa560(param_1,0x6b8d61786be404bd,(long)&DAT_043c7618 + lVar11);
      uVar10 = FUN_02c5dffc(*(undefined8 *)(param_1 + 0x5b8),
                            *(undefined4 *)((long)&DAT_043c75d0 + lVar11));
      if ((uVar10 & 1) == 0) {
        lVar2 = (long)&DAT_043c7638 + lVar11;
        FUN_00d2df7c(lVar12,lVar2);
        fVar15 = (float)FUN_00d2e5c8(lVar12,lVar2);
        FUN_00d2e4b8(fVar15 - (float)(uint)(iVar8 * 10),lVar12,lVar2);
      }
      else {
        FUN_00d2df7c(lVar12,(long)&DAT_043c7658 + lVar11);
      }
    }
    FUN_0283b11c(plVar14,(long)&DAT_043c75f8 + lVar11,uVar7 & 1);
    lVar11 = lVar11 + 0xa8;
  } while (lVar11 != 0x3f0);
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar13 = plVar14 + 10;
    do {
      iVar8 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  return;
}


