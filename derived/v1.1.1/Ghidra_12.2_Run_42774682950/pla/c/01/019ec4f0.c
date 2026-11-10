/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019ec4f0; name: FUN_019ec4f0
 */


void FUN_019ec4f0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_58;
  
  *param_1 = &PTR_FUN_042355f0;
  param_1[9] = &PTR_LAB_042356f8;
  param_1[10] = &PTR_LAB_042357d8;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x234));
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  plVar15 = (long *)param_1[0x40];
  if (plVar15 == (long *)0x0) {
    puVar13 = (undefined8 *)param_1[0x3e];
  }
  else {
    plVar14 = plVar15;
    if ((long *)param_1[0x41] != plVar15) {
      plVar14 = (long *)param_1[0x41] + -2;
      puVar13 = (undefined8 *)*plVar14;
      puVar5 = PTR_LAB_04379590;
      puVar9 = PTR_LAB_04379590;
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar5 = PTR_LAB_04379590;
        puVar9 = PTR_LAB_04379590;
        if (iVar10 + -1 == 0) {
          puVar13[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_58 = *puVar13;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
          puVar5 = PTR_LAB_04379590;
          puVar9 = PTR_LAB_04379590;
        }
      }
      while (PTR_LAB_04379590 = puVar9, puVar9 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar5,
            plVar14 != plVar15) {
        plVar14 = plVar14 + -2;
        puVar13 = (undefined8 *)*plVar14;
        if (puVar13 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar13 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar5 = PTR_LAB_04379590;
          if (iVar10 + -1 == 0) {
            puVar13[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_58 = *puVar13;
            FUN_02a44274(lVar12 + 0xd8,&local_58);
            puVar5 = PTR_LAB_04379590;
          }
        }
      }
      plVar14 = (long *)param_1[0x40];
    }
    lVar12 = param_1[0x42];
    param_1[0x41] = plVar15;
    plVar15 = (long *)param_1[0x43];
    uVar11 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar11 & 1) != 0) {
      lVar4 = tpidr_el0;
      if (*(char *)(lVar4 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar4 + 0x38d488) = 1;
        *(undefined8 *)(lVar4 + 0x38d478) = 0;
        *(undefined8 *)(lVar4 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar4 + 0x38d480)) {
        FUN_02bcc824(plVar15,plVar14,lVar12 - (long)plVar14,8);
        puVar13 = (undefined8 *)param_1[0x3e];
        goto joined_r0x019ec71c;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,plVar14,lVar12 - (long)plVar14,8);
    puVar13 = (undefined8 *)param_1[0x3e];
  }
joined_r0x019ec71c:
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_58 = *puVar13;
      FUN_02a44274(lVar12 + 0xd8,&local_58);
    }
  }
  FUN_02a4c4ec(param_1);
  return;
}


