/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01506af0; name: FUN_01506af0
 */


void FUN_01506af0(long param_1)

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
  FUN_015054fc(param_1,0x2d69f90c859011f7,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (((DAT_043c8e10 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043c8e10), iVar8 != 0)) {
    DAT_043c8a20 = 0;
    DAT_043c8c38 = 0;
    DAT_043c8c58 = 0;
    DAT_043c8c78 = 0;
    DAT_043c8a28 = &DAT_cbf29ce484222645;
    DAT_043c8a30 = &DAT_03996322;
    DAT_043c8c98 = 0;
    DAT_043c8a48 = 0x99cf107b90b4bbbf;
    DAT_043c8a50 = "pane_L_info_adddata_00_L_glv_hp_00";
    DAT_043c8a58 = 0x22;
    DAT_043c8a60 = 0;
    DAT_043c8a68 = 0xf2bd06ca9ea36bc7;
    DAT_043c8a70 = "pane_L_info_adddata_00_L_glv_hp_00_T_param_glv_00";
    DAT_043c8a78 = 0x31;
    DAT_043c8a80 = 0;
    DAT_043c8a88 = 0xd3071a4fcd8e7bbf;
    DAT_043c8a90 = "anime_L_info_adddata_00_L_glv_hp_00_gauge";
    DAT_043c8a98 = 0x29;
    DAT_043c8aa0 = 0;
    DAT_043c8aa8 = 0xd0cbce174f3d7e52;
    DAT_043c8ab0 = "anime_L_info_adddata_00_L_glv_hp_00_max";
    DAT_043c8ac8 = 1;
    DAT_043c8cb8 = 0;
    DAT_043c8ad0 = 0xf0899c4be1430837;
    DAT_043c8ad8 = "pane_L_info_adddata_00_T_param_atk_00";
    DAT_043c8af0 = 0xb73c697d24a6dae1;
    DAT_043c8af8 = "pane_L_info_adddata_00_L_glv_atk_00";
    DAT_043c8b10 = 0x38622a7b08ca67e1;
    DAT_043c8b18 = "pane_L_info_adddata_00_L_glv_atk_00_T_param_glv_00";
    DAT_043c8ce0 = 0;
    DAT_043c8d00 = 0;
    DAT_043c8b30 = 0x405733f3716fb355;
    DAT_043c8b38 = "anime_L_info_adddata_00_L_glv_atk_00_gauge";
    DAT_043c8b50 = 0x52793051933832c0;
    DAT_043c8b58 = "anime_L_info_adddata_00_L_glv_atk_00_max";
    DAT_043c8b70 = 2;
    DAT_043c8c30 = 0x27;
    DAT_043c8b78 = 0xf564cfece1011168;
    DAT_043c8b80 = "pane_L_info_adddata_00_T_param_def_00";
    DAT_043c8cd8 = 0x27;
    DAT_043c8b98 = 0x6dc8fd7f704c10aa;
    DAT_043c8ba0 = "pane_L_info_adddata_00_L_glv_def_00";
    DAT_043c8d20 = 0;
    DAT_043c8ab8 = 0x27;
    DAT_043c8ac0 = 0;
    DAT_043c8bb8 = 0x2b741c1aeea69a44;
    DAT_043c8bc0 = "pane_L_info_adddata_00_L_glv_def_00_T_param_glv_00";
    DAT_043c8ce8 = 0x675ad9b1a57f07d;
    DAT_043c8bd8 = 0xe1c9815b7eb3ec32;
    DAT_043c8be0 = "anime_L_info_adddata_00_L_glv_def_00_gauge";
    DAT_043c8cf0 = "pane_L_info_adddata_00_L_glv_spdef_00";
    DAT_043c8c50 = 0x25;
    DAT_043c8ae0 = 0x25;
    DAT_043c8ae8 = 0;
    DAT_043c8b88 = 0x25;
    DAT_043c8b90 = 0;
    DAT_043c8bf8 = 0xf995331e3cae7cfb;
    DAT_043c8c00 = "anime_L_info_adddata_00_L_glv_def_00_max";
    DAT_043c8cf8 = 0x25;
    DAT_043c8d80 = 0x25;
    DAT_043c8c18 = 3;
    DAT_043c8d08 = 0x5b3a55bc0da04f1d;
    DAT_043c8d10 = "pane_L_info_adddata_00_L_glv_spdef_00_T_param_glv_00";
    DAT_043c8d90 = 0x222a01f9136bb0da;
    DAT_043c8c20 = 0xa80f156bc1a0a090;
    DAT_043c8d98 = "pane_L_info_adddata_00_L_glv_agi_00";
    DAT_043c8ca0 = 0x654b5da67715967f;
    DAT_043c8d28 = 0xc3a663f4fdb8f9;
    DAT_043c8c28 = "pane_L_info_adddata_00_T_param_spatk_00";
    DAT_043c8c40 = 0x37f68a3ad3e10c9e;
    DAT_043c8da0 = 0x23;
    DAT_043c8db0 = 0x6ba791cc773afd94;
    DAT_043c8c48 = "pane_L_info_adddata_00_L_glv_spatk_00";
    DAT_043c8d48 = 0xe8674b92b5c5feac;
    DAT_043c8d40 = 0;
    DAT_043c8d60 = 0;
    DAT_043c8ca8 = "anime_L_info_adddata_00_L_glv_spatk_00_max";
    DAT_043c8d50 = "anime_L_info_adddata_00_L_glv_spdef_00_max";
    DAT_043c8dd0 = 0xd37a16d0ce5798f2;
    DAT_043c8c60 = 0x265effb347c9ee58;
    DAT_043c8d88 = 0;
    DAT_043c8cc0 = 4;
    DAT_043c8d68 = 5;
    DAT_043c8dd8 = "anime_L_info_adddata_00_L_glv_agi_00_gauge";
    DAT_043c8c68 = "pane_L_info_adddata_00_L_glv_spatk_00_T_param_glv_00";
    DAT_043c8c80 = 0x1a4379c450b624ae;
    DAT_043c8da8 = 0;
    DAT_043c8dc0 = 0x32;
    DAT_043c8c70 = 0x34;
    DAT_043c8c88 = "anime_L_info_adddata_00_L_glv_spatk_00_gauge";
    DAT_043c8cc8 = 0x6ff8b62455454647;
    DAT_043c8b00 = 0x23;
    DAT_043c8b08 = 0;
    DAT_043c8ba8 = 0x23;
    DAT_043c8bb0 = 0;
    DAT_043c8d18 = 0x34;
    DAT_043c8d70 = 0x56c4ad7170b7f740;
    DAT_043c8df0 = 0x61cf023ffb3a5dbb;
    DAT_043c8c90 = 0x2c;
    DAT_043c8cb0 = 0x2a;
    DAT_043c8cd0 = "pane_L_info_adddata_00_T_param_spdef_00";
    DAT_043c8a38 = 0;
    DAT_043c8a40 = 0;
    DAT_043c8d30 = "anime_L_info_adddata_00_L_glv_spdef_00_gauge";
    DAT_043c8d38 = 0x2c;
    DAT_043c8d58 = 0x2a;
    DAT_043c8d78 = "pane_L_info_adddata_00_T_param_agi_00";
    DAT_043c8db8 = "pane_L_info_adddata_00_L_glv_agi_00_T_param_glv_00";
    DAT_043c8dc8 = 0;
    DAT_043c8de0 = 0x2a;
    DAT_043c8de8 = 0;
    DAT_043c8df8 = "anime_L_info_adddata_00_L_glv_agi_00_max";
    DAT_043c8e00 = 0x28;
    DAT_043c8e08 = 0;
    DAT_043c8b20 = 0x32;
    DAT_043c8b28 = 0;
    DAT_043c8b40 = 0x2a;
    DAT_043c8b48 = 0;
    DAT_043c8b60 = 0x28;
    DAT_043c8b68 = 0;
    DAT_043c8bc8 = 0x32;
    DAT_043c8bd0 = 0;
    DAT_043c8be8 = 0x2a;
    DAT_043c8bf0 = 0;
    DAT_043c8c08 = 0x28;
    DAT_043c8c10 = 0;
    FUN_00100250(&LAB_01502750,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c8e10);
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
    if (*(long *)((long)&DAT_043c8a28 + lVar11) != *(long *)puVar5) {
      uVar6 = FUN_02c5e1ec(*(undefined8 *)(param_1 + 0x5b8),
                           *(undefined4 *)((long)&DAT_043c8a20 + lVar11));
      FUN_02c395d0(plVar13,0,uVar6,3,0,1);
      FUN_015054fc(param_1,0x2d69f80c85901044,(long)&DAT_043c8a28 + lVar11);
    }
    if ((uVar7 & 1) != 0) {
      iVar8 = FUN_02c5dee0(*(undefined8 *)(param_1 + 0x5b8),
                           *(undefined4 *)((long)&DAT_043c8a20 + lVar11));
      FUN_02c395d0(plVar13,0,iVar8,2,0,1);
      FUN_015054fc(param_1,0x6b8d61786be404bd,(long)&DAT_043c8a68 + lVar11);
      uVar10 = FUN_02c5dffc(*(undefined8 *)(param_1 + 0x5b8),
                            *(undefined4 *)((long)&DAT_043c8a20 + lVar11));
      if ((uVar10 & 1) == 0) {
        lVar2 = (long)&DAT_043c8a88 + lVar11;
        FUN_00d2df7c(lVar12,lVar2);
        fVar15 = (float)FUN_00d2e5c8(lVar12,lVar2);
        FUN_00d2e4b8(fVar15 - (float)(uint)(iVar8 * 10),lVar12,lVar2);
      }
      else {
        FUN_00d2df7c(lVar12,(long)&DAT_043c8aa8 + lVar11);
      }
    }
    FUN_0283b11c(plVar14,(long)&DAT_043c8a48 + lVar11,uVar7 & 1);
    lVar11 = lVar11 + 0xa8;
  } while (lVar11 != 0x3f0);
  uVar6 = FUN_02c5bed0(*(undefined8 *)(param_1 + 0x5b8),0);
  uVar7 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),uVar6);
  FUN_014f172c(*(undefined8 *)(param_1 + 0x600),uVar6,&DAT_043c83d8,uVar7 & 1);
  uVar6 = FUN_02c5bed0(*(undefined8 *)(param_1 + 0x5b8),1);
  uVar7 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),uVar6);
  FUN_014f172c(*(undefined8 *)(param_1 + 0x600),uVar6,&DAT_043c8518,uVar7 & 1);
  uVar6 = FUN_02c5bed0(*(undefined8 *)(param_1 + 0x5b8),2);
  uVar7 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),uVar6);
  FUN_014f172c(*(undefined8 *)(param_1 + 0x600),uVar6,&DAT_043c8658,uVar7 & 1);
  uVar6 = FUN_02c5bed0(*(undefined8 *)(param_1 + 0x5b8),3);
  uVar7 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),uVar6);
  FUN_014f172c(*(undefined8 *)(param_1 + 0x600),uVar6,&DAT_043c8798,uVar7 & 1);
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


