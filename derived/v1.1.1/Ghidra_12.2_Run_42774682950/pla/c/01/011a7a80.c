/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a7a80; name: FUN_011a7a80
 */


void FUN_011a7a80(long param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  if (((DAT_043be0c8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043be0c8), iVar7 != 0)) {
    DAT_043bde58 = 0;
    DAT_043be080 = 0;
    DAT_043be0a0 = 0;
    DAT_043bde60 = 0xd402b9bbe6d13c51;
    DAT_043bde68 = "pane_L_btn_glv_00_T_p_glv_00";
    DAT_043be0c0 = 0;
    DAT_043bde80 = 0x1ad41aa2cb4984b3;
    DAT_043bde88 = "anime_L_btn_glv_00_active";
    DAT_043bdea0 = 0xe255d8c08524ef12;
    DAT_043bdea8 = "anime_L_btn_glv_00_passive";
    DAT_043bdec0 = 1;
    DAT_043bdec8 = 0xc1492ca2ae184458;
    DAT_043bded0 = "pane_L_btn_glv_01_T_p_glv_00";
    DAT_043bdee8 = 0x708a50f9f81c7d32;
    DAT_043bdef0 = "anime_L_btn_glv_01_active";
    DAT_043be078 = 0x1c;
    DAT_043bde70 = 0x1c;
    DAT_043bde78 = 0;
    DAT_043bdf08 = 0x9b174d88114a0b2d;
    DAT_043bdf10 = "anime_L_btn_glv_01_passive";
    DAT_043bdf28 = 2;
    DAT_043be098 = 0x19;
    DAT_043bdf30 = 0x2180b97586792e9b;
    DAT_043bdf38 = "pane_L_btn_glv_02_T_p_glv_00";
    DAT_043be0b8 = 0x1a;
    DAT_043bdf50 = 0xbe4e9bdd537efe51;
    DAT_043bdf58 = "anime_L_btn_glv_02_active";
    DAT_043bdf70 = 0x7a83abbb32e9b9f0;
    DAT_043bdf78 = "anime_L_btn_glv_02_passive";
    DAT_043bdf90 = 3;
    DAT_043bded8 = 0x1c;
    DAT_043bdee0 = 0;
    DAT_043bdf98 = 0xa3de0b86262521aa;
    DAT_043bdfa0 = "pane_L_btn_glv_03_T_p_glv_00";
    DAT_043bdf40 = 0x1c;
    DAT_043bdf48 = 0;
    DAT_043bdfb8 = 0x4ca6a76de039a8f0;
    DAT_043bdfc0 = "anime_L_btn_glv_03_active";
    DAT_043bdfa8 = 0x1c;
    DAT_043bdfb0 = 0;
    DAT_043bdfd8 = 0xf89464fd9c013593;
    DAT_043bdfe0 = "anime_L_btn_glv_03_passive";
    DAT_043bdff8 = 4;
    DAT_043be000 = 0xbee0129ab4f32895;
    DAT_043be008 = "pane_L_btn_glv_04_T_p_glv_00";
    DAT_043be010 = 0x1c;
    DAT_043be018 = 0;
    DAT_043be020 = 0x509902a698e32d2f;
    DAT_043be028 = "anime_L_btn_glv_04_active";
    DAT_043bde90 = 0x19;
    DAT_043bde98 = 0;
    DAT_043be040 = 0xe5beec04a4d648fe;
    DAT_043be048 = "anime_L_btn_glv_04_passive";
    DAT_043be088 = 0x1b1099f5736c1f4e;
    DAT_043be060 = 5;
    DAT_043be090 = "anime_L_btn_glv_05_active";
    DAT_043be068 = 0x35a64f5af1eb1fdc;
    DAT_043be0a8 = 0x6704df9a7b15499;
    DAT_043be070 = "pane_L_btn_glv_05_T_p_glv_00";
    DAT_043bdeb0 = 0x1a;
    DAT_043bdeb8 = 0;
    DAT_043be0b0 = "anime_L_btn_glv_05_passive";
    DAT_043bdef8 = 0x19;
    DAT_043bdf00 = 0;
    DAT_043bdf18 = 0x1a;
    DAT_043bdf20 = 0;
    DAT_043bdf60 = 0x19;
    DAT_043bdf68 = 0;
    DAT_043bdf80 = 0x1a;
    DAT_043bdf88 = 0;
    DAT_043bdfc8 = 0x19;
    DAT_043bdfd0 = 0;
    DAT_043bdfe8 = 0x1a;
    DAT_043bdff0 = 0;
    DAT_043be030 = 0x19;
    DAT_043be038 = 0;
    DAT_043be050 = 0x1a;
    DAT_043be058 = 0;
    FUN_00100250(&LAB_011a6200,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043be0c8);
    plVar9 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar9 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)plVar9[0x37];
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar6 = FUN_02c5dee0(param_2,DAT_043bde58);
  FUN_02c395d0(plVar11,0,uVar6,2,0,1);
  FUN_011a6f68(param_1,0x931a60a00090e922,&DAT_043bde60);
  bVar5 = (param_4 & 1) != 0;
  puVar2 = &DAT_043bde80;
  if (bVar5) {
    puVar2 = &DAT_043bdea0;
  }
  puVar3 = &DAT_043bdea0;
  if (bVar5) {
    puVar3 = &DAT_043bde80;
  }
  FUN_0283b430(plVar9,puVar2);
  FUN_0283b1e8(plVar9,puVar3);
  uVar6 = FUN_02c5dee0(param_2,DAT_043bdec0);
  FUN_02c395d0(plVar11,0,uVar6,2,0,1);
  FUN_011a6f68(param_1,0x931a60a00090e922,&DAT_043bdec8);
  bVar5 = (param_4 & 2) != 0;
  puVar2 = &DAT_043bdee8;
  if (bVar5) {
    puVar2 = &DAT_043bdf08;
  }
  puVar3 = &DAT_043bdf08;
  if (bVar5) {
    puVar3 = &DAT_043bdee8;
  }
  FUN_0283b430(plVar9,puVar2);
  FUN_0283b1e8(plVar9,puVar3);
  uVar6 = FUN_02c5dee0(param_2,DAT_043bdf28);
  FUN_02c395d0(plVar11,0,uVar6,2,0,1);
  FUN_011a6f68(param_1,0x931a60a00090e922,&DAT_043bdf30);
  bVar5 = (param_4 & 4) != 0;
  puVar2 = &DAT_043bdf50;
  if (bVar5) {
    puVar2 = &DAT_043bdf70;
  }
  puVar3 = &DAT_043bdf70;
  if (bVar5) {
    puVar3 = &DAT_043bdf50;
  }
  FUN_0283b430(plVar9,puVar2);
  FUN_0283b1e8(plVar9,puVar3);
  uVar6 = FUN_02c5dee0(param_2,DAT_043bdf90);
  FUN_02c395d0(plVar11,0,uVar6,2,0,1);
  FUN_011a6f68(param_1,0x931a60a00090e922,&DAT_043bdf98);
  bVar5 = (param_4 & 8) != 0;
  puVar2 = &DAT_043bdfb8;
  if (bVar5) {
    puVar2 = &DAT_043bdfd8;
  }
  puVar3 = &DAT_043bdfd8;
  if (bVar5) {
    puVar3 = &DAT_043bdfb8;
  }
  FUN_0283b430(plVar9,puVar2);
  FUN_0283b1e8(plVar9,puVar3);
  uVar6 = FUN_02c5dee0(param_2,DAT_043bdff8);
  FUN_02c395d0(plVar11,0,uVar6,2,0,1);
  FUN_011a6f68(param_1,0x931a60a00090e922,&DAT_043be000);
  bVar5 = (param_4 & 0x10) != 0;
  puVar2 = &DAT_043be020;
  if (bVar5) {
    puVar2 = &DAT_043be040;
  }
  puVar3 = &DAT_043be040;
  if (bVar5) {
    puVar3 = &DAT_043be020;
  }
  FUN_0283b430(plVar9,puVar2);
  FUN_0283b1e8(plVar9,puVar3);
  uVar6 = FUN_02c5dee0(param_2,DAT_043be060);
  FUN_02c395d0(plVar11,0,uVar6,2,0,1);
  FUN_011a6f68(param_1,0x931a60a00090e922,&DAT_043be068);
  bVar5 = (param_4 & 0x20) != 0;
  puVar2 = &DAT_043be088;
  if (bVar5) {
    puVar2 = &DAT_043be0a8;
  }
  puVar3 = &DAT_043be0a8;
  if (bVar5) {
    puVar3 = &DAT_043be088;
  }
  FUN_0283b430(plVar9,puVar2);
  FUN_0283b1e8(plVar9,puVar3);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  local_80 = -0x7199938b7c898efb;
  pcStack_78 = "anime_L_btn_glv_leave_00_switch";
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  FUN_0283b1e8(plVar9,&local_80);
  FUN_0283b748(0x3f800000,plVar9,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar10 = thunk_FUN_00d2ec48(param_1 + 0x180,&DAT_043bdb20);
  if (lVar10 != 0) {
    local_80 = (ulong)param_3 << 0x20;
    FUN_0280e8d8(lVar10,&local_80,1,0);
  }
  plVar11 = plVar9 + 10;
  do {
    iVar7 = (int)*plVar11 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *(int *)plVar11 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  return;
}


