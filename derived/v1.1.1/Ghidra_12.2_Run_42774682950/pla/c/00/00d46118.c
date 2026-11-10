/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d46118; name: FUN_00d46118
 */


void FUN_00d46118(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *local_50;
  long *local_48;
  
  puVar6 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar6 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar7 = PTR_DAT_04379528;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar10 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar15 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_041eb1b0;
  param_1[1] = lVar15;
  param_1[9] = (long)&PTR_LAB_041eb1e8;
  param_1[0x14] = 0;
  plVar13 = param_1 + 0xb;
  *plVar13 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (((*puVar6 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  lVar10 = DAT_043f1798;
  if (((lVar15 == 0) || (*(long *)(lVar15 + 0x80) == 0)) ||
     (lVar15 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8), lVar15 == 0)) {
    lVar5 = tpidr_el0;
    lVar15 = *(long *)(lVar5 + 0x20);
    if (*(long *)(lVar5 + 0x20) == 0) {
      *(long *)(lVar5 + 0x20) = DAT_043f1798;
      lVar15 = lVar10;
    }
  }
  local_48 = (long *)param_1[1];
  param_1[0x11] = lVar15;
  param_1[0x12] = 0x1fffffffffffffff;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = (long)&DAT_cbf29ce484222645;
  param_1[0x1a] = (long)&DAT_03996322;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  lVar10 = FUN_00d46c18(&local_50,local_48,&local_48);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 10;
    do {
      iVar9 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  param_1[0x17] = lVar10;
  local_50 = param_1;
  lVar10 = FUN_00d46d2c(local_48,&local_50,"modalRoot");
  if (lVar10 != 0) {
    lVar15 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d465f4;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)*plVar13;
  *plVar13 = 0;
  if (plVar11 != (long *)0x0) {
    lVar15 = plVar11[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  param_1[0xb] = lVar10;
  local_50 = param_1;
  lVar10 = FUN_00d46d2c(local_48,&local_50,"focusRoot");
  if (lVar10 != 0) {
    lVar15 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_00d465f4;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar13 != (long *)0x0) {
    lVar15 = plVar13[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  plVar13 = local_48;
  param_1[0xc] = lVar10;
  if (((*puVar6 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  puVar14 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x5b0,0x10);
  if (puVar14 == (undefined8 *)0x0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN_00d408b8(puVar14,param_1,"unfocusRoot",0);
  *puVar14 = &PTR_FUN_041eb218;
  puVar14[1] = plVar13;
  puVar14[2] = puVar14;
  puVar14[3] = 0x5b0;
  puVar14[4] = 0x10;
  puVar14[9] = &PTR_LAB_041eb2b8;
  puVar14[10] = &PTR_LAB_041eb300;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  if (puVar14 != (undefined8 *)0x0) {
    lVar10 = puVar14[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_00d465f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  param_1[0xd] = (long)puVar14;
  return;
}


