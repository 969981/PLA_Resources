/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f572dc; name: FUN_01f572dc
 */


void FUN_01f572dc(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  lVar15 = *param_1;
  FUN_0289240c(local_50,*(undefined8 *)(lVar15 + 0xa0));
  puVar13 = local_50[0];
  puVar6 = PTR_DAT_043831f0;
  puVar5 = PTR_DAT_043831e8;
  if ((local_50[0] == (undefined8 *)0x0) || (*(int *)((long)local_50[0] + 0xc) == 0)) {
LAB_01f57320:
    plVar14 = (long *)0x0;
  }
  else {
    piVar1 = (int *)((long)local_50[0] + 0xc);
    iVar8 = *(int *)((long)local_50[0] + 0xc);
    do {
      puVar12 = (undefined8 *)puVar13[2];
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar10 = FUN_00fd7558();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_01f57320;
      while (puVar12 != (undefined8 *)puVar6) {
        puVar12 = (undefined8 *)*puVar12;
        plVar14 = (long *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_01f57324;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = puVar13[3];
          plVar14 = (long *)0x0;
          if (lVar9 != 0) {
            plVar14 = (long *)(lVar9 + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar14 = (long *)0x0;
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01f57324:
  FUN_00b26ad8(plVar14 + 0xe,lVar15 + 0x70);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  puVar13 = local_50[0];
  piVar1 = (int *)((long)local_50[0] + 0xc);
  iVar8 = *(int *)((long)local_50[0] + 0xc);
  do {
    while( true ) {
      plVar14 = (long *)puVar13[2];
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar10 = FUN_00fd7558();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      for (; plVar14 != (long *)puVar6; plVar14 = (long *)*plVar14) {
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) break;
      ClearExclusiveLocal();
      iVar8 = iVar7;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    iVar8 = iVar7;
  } while (cVar2 != '\0');
  lVar15 = puVar13[3];
  plVar14 = (long *)0x0;
  if (lVar15 != 0) {
    plVar14 = (long *)(lVar15 + -0x50);
  }
  puVar13 = local_50[0];
  if ((int)plVar14[0xd] == 0) {
    *(undefined4 *)(plVar14 + 0xd) = 1;
  }
  else if (lVar15 == 0) goto joined_r0x01f574b8;
  lVar15 = plVar14[0xb];
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))();
    puVar13 = local_50[0];
  }
joined_r0x01f574b8:
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_38 = *puVar13;
      FUN_02a44274(lVar15 + 0xd8,&local_38);
    }
  }
  lVar15 = param_1[1];
  if ((*(byte *)(lVar15 + 0x79) & 1) == 0) {
    lVar9 = nn::os::GetCurrentThread();
    plVar14 = (long *)(lVar15 + 0x90);
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x84));
          while (*plVar14 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = lVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01f5756c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01f5756c:
    puVar13 = *(undefined8 **)(lVar15 + 0x98);
    puVar12 = *(undefined8 **)(lVar15 + 0xa0);
    if (puVar13 != puVar12) {
      do {
        if ((*(byte *)(lVar15 + 0x79) & 1) == 0) {
          (*(code *)*puVar13)(puVar13 + 4);
        }
        if ((*(byte *)(lVar15 + 0x79) & 1) != 0) {
          (*(code *)**(undefined8 **)puVar13[0x10])();
          *(int *)(lVar15 + 0x7c) = *(int *)(lVar15 + 0x7c) + 1;
        }
        puVar13 = puVar13 + 0x12;
      } while (puVar12 != puVar13);
      puVar13 = *(undefined8 **)(lVar15 + 0x98);
      puVar12 = *(undefined8 **)(lVar15 + 0xa0);
      while (puVar4 = puVar12, puVar4 != puVar13) {
        pcVar11 = (code *)puVar4[-0x11];
        puVar12 = puVar4 + -0x12;
        if (pcVar11 != (code *)0x0) {
          puVar4[-0x10] = 0;
          puVar4[-0xf] = 0;
          puVar4[-0x12] = 0;
          puVar4[-0x11] = 0;
          (*pcVar11)(puVar4 + -0xe);
        }
      }
    }
    *(undefined8 **)(lVar15 + 0xa0) = puVar13;
    *(undefined1 *)(lVar15 + 0x78) = 1;
    *(undefined1 *)(lVar15 + 0x68) = 1;
    *(undefined8 *)(lVar15 + 0x90) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x84));
  }
  return;
}


