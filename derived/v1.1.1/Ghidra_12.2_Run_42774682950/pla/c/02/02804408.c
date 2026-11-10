/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02804408; name: FUN_02804408
 */


void FUN_02804408(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  long *local_a8;
  long lStack_a0;
  undefined1 *local_98;
  undefined8 uStack_90;
  
  *(undefined8 *)(param_1 + 0x5b4) = 0;
  *(undefined8 *)(param_1 + 0x5bc) = 0;
  local_c0 = (undefined1 *)0x20b4a3ce93c6338;
  local_b8 = (code *)0x39b4efb;
  local_b0 = (code *)0xb;
  local_a8 = (long *)0x0;
  plVar7 = (long *)thunk_FUN_00d2f008(param_1 + 0x180,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if ((plVar7 != (long *)0x0) && (*(char *)((long)plVar7 + 0xa3) != '\0')) {
    *(undefined1 *)((long)plVar7 + 0xa3) = 0;
    (**(code **)(*plVar7 + 0xa0))(plVar7,0);
  }
  local_c0 = (undefined1 *)0xe2a06d3a0634e918;
  local_b8 = (code *)0x39ac1bb;
  local_b0 = (code *)0xa;
  local_a8 = (long *)0x0;
  lVar8 = FUN_00d2ec48(param_1 + 0x180,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (lVar8 == 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x2c8);
  if (plVar7 != (long *)0x0) {
    plVar12 = plVar7 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  thunk_FUN_0283d118(plVar7,10,0x80);
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar10 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar10;
  lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x2d10) + 8);
  if (lVar10 != 0) {
    plVar12 = *(long **)(lVar10 + 0x18);
    if (plVar12 != (long *)0x0) {
      lVar10 = plVar12[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02804944;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
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
    plVar13 = (long *)plVar12[0xd];
    if (plVar13 != (long *)0x0) {
      plVar2 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    if (plVar13 != (long *)0x0) {
      plVar12 = plVar13 + 10;
      do {
        iVar6 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar12 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  *(undefined8 *)(lVar8 + 0x4a8) = 0x200;
  pcVar11 = *(code **)(lVar8 + 0x108);
  *(undefined8 *)(lVar8 + 0x4b0) = 0x100;
  local_98 = &LAB_0280495c;
  uStack_90 = 0;
  local_c0 = &LAB_028070d4;
  local_b8 = FUN_028070fc;
  local_b0 = FUN_02807100;
  local_a8 = (long *)&LAB_02807114;
  lStack_a0 = param_1;
  if (pcVar11 == (code *)0x0) {
LAB_02804668:
    (*local_b0)(&lStack_a0,lVar8 + 0x120);
    *(code **)(lVar8 + 0x108) = local_b8;
    *(long **)(lVar8 + 0x118) = local_a8;
    *(code **)(lVar8 + 0x110) = local_b0;
    *(undefined8 *)(lVar8 + 0x100) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 0x110) = 0;
    *(undefined8 *)(lVar8 + 0x118) = 0;
    *(undefined8 *)(lVar8 + 0x100) = 0;
    *(undefined8 *)(lVar8 + 0x108) = 0;
    (*pcVar11)(lVar8 + 0x120);
    if (local_b0 != (code *)0x0) goto LAB_02804668;
  }
  uVar3 = *(undefined4 *)(*(long *)(lVar8 + 0x468) + 8);
  *(undefined4 *)(*(long *)(lVar8 + 0x468) + 8) = 0;
  FUN_0280e96c(lVar8,0,uVar3,0);
  pcVar11 = local_b8;
  *(undefined1 **)(lVar8 + 0x4c8) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar8 + 0x4d0) = &DAT_03996322;
  *(undefined8 *)(lVar8 + 0x4d8) = 0;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar11)(&lStack_a0);
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_02804944:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_c0 = (undefined1 *)0x3bef11b613fbf41d;
  local_b8 = (code *)0x391cc5e;
  local_b0 = (code *)0xb;
  local_a8 = (long *)0x0;
  lVar8 = FUN_00d4d2c4(plVar7,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  pcVar11 = *(code **)(lVar8 + 0x188);
  *(undefined8 *)(lVar8 + 0xf8) = 0x400000000;
  *(undefined1 *)(lVar8 + 0xf1) = 0;
  local_c0 = &LAB_02807128;
  local_b8 = FUN_02807194;
  local_b0 = FUN_02807198;
  local_a8 = (long *)&LAB_028071a4;
  lStack_a0 = param_1;
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 400) = 0;
    *(undefined8 *)(lVar8 + 0x198) = 0;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    (*pcVar11)(lVar8 + 0x1a0);
    if (local_b0 == (code *)0x0) goto LAB_02804834;
  }
  (*local_b0)(&lStack_a0,lVar8 + 0x1a0);
  *(code **)(lVar8 + 0x188) = local_b8;
  *(long **)(lVar8 + 0x198) = local_a8;
  *(code **)(lVar8 + 400) = local_b0;
  *(undefined8 *)(lVar8 + 0x180) = local_c0;
LAB_02804834:
  plVar7 = *(long **)(lVar8 + 0x318);
  *(undefined1 **)(lVar8 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar8 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar8 + 0x310) = 0;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  pcVar11 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar11)(&lStack_a0);
  }
  FUN_00d469b4(*(undefined8 *)(param_1 + 0x68),param_1,0);
  FUN_00d42690(param_1,0,1);
  return;
}


