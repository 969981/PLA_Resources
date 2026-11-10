/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf1f68; name: FUN_01bf1f68
 */


undefined8 FUN_01bf1f68(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  FUN_01a50850(local_58);
  puVar4 = local_58[0];
  puVar6 = PTR_DAT_0437a408;
  puVar5 = PTR_DAT_0437a400;
  if (local_58[0] == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)((long)local_58[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_58[0] + 0xc);
    iVar9 = *(int *)((long)local_58[0] + 0xc);
    do {
      plVar13 = (long *)puVar4[2];
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar10 = FUN_009cdcc0();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01bf219c;
        if (plVar13 == (long *)puVar6) break;
        plVar13 = (long *)*plVar13;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar11 = puVar4[3];
          plVar13 = (long *)0x0;
          puVar4 = local_58[0];
          if (lVar11 != 0) {
            plVar13 = (long *)(lVar11 + -0x50);
          }
          goto joined_r0x01bf201c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01bf219c:
  plVar13 = (long *)0x0;
  puVar4 = local_58[0];
joined_r0x01bf201c:
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar4;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  if (plVar13 == (long *)0x0) {
    return 0;
  }
  lVar11 = nn::os::GetCurrentThread();
  plVar12 = plVar13 + 0xf;
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0x6c));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar7) {
            *plVar12 = lVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01bf20c4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar7) {
      *plVar12 = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01bf20c4:
  if ((undefined8 *)plVar13[0x15] == (undefined8 *)plVar13[0x14]) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar12 = *(long **)plVar13[0x14];
  plVar13[0xf] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x6c));
  plVar12 = (long *)(**(code **)(*plVar12 + 0x70))(plVar12);
  lVar11 = (**(code **)(*plVar12 + 0x38))();
  if (lVar11 != 0) {
    plVar12 = (long *)(**(code **)(*plVar12 + 0x38))(plVar12);
    lVar11 = (**(code **)(*plVar12 + 0x38))();
    if (lVar11 != 0) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x38))(plVar12);
      plVar12 = (long *)(**(code **)(*plVar12 + 0x10))();
      bVar7 = *plVar12 == -0x292d43fc3148c0cb;
      goto LAB_01bf216c;
    }
  }
  bVar7 = false;
LAB_01bf216c:
  lVar11 = plVar13[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar2) {
      *piVar1 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (bVar7) {
    return 1;
  }
  return 0;
}


