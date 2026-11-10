/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019ea76c; name: FUN_019ea76c
 */


void FUN_019ea76c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long local_80;
  undefined8 *local_78;
  char local_70;
  undefined8 local_68;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_1 + 0x398);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38c));
        while (*plVar14 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_019ea7d8;
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
LAB_019ea7d8:
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  if (*(long **)(param_1 + 0x2e8) != (long *)0x0) {
    lVar9 = tpidr_el0;
    plVar14 = *(long **)(param_1 + 0x2e8);
    do {
      while ((plVar14[3] == 0 || (uVar10 = FUN_02a43a8c(), (uVar10 & 1) != 0))) {
        plVar12 = (long *)*plVar14;
        FUN_019ed30c(&local_80,param_1 + 0x2b8,plVar14);
        lVar7 = local_80;
        local_80 = 0;
        if (lVar7 != 0) {
          if ((local_70 != '\0') &&
             (puVar13 = *(undefined8 **)(lVar7 + 0x18), puVar13 != (undefined8 *)0x0)) {
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
              if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar4);
              }
              lVar11 = *(long *)puVar5;
              *(long *)puVar6 = lVar11;
              local_68 = *puVar13;
              FUN_02a44274(lVar11 + 0xd8,&local_68);
            }
          }
          plVar14 = (long *)*local_78;
          uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar9 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar9 + 0x38d488) = 1;
              *(undefined8 *)(lVar9 + 0x38d478) = 0;
              *(undefined8 *)(lVar9 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar9 + 0x38d480)) {
              FUN_02bcc824(plVar14,lVar7,0x38,8);
              goto joined_r0x019ea95c;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar7,0x38,8);
        }
joined_r0x019ea95c:
        plVar14 = plVar12;
        if (plVar12 == (long *)0x0) goto LAB_019ea7e0;
      }
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
LAB_019ea7e0:
  *(undefined8 *)(param_1 + 0x398) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38c));
  return;
}


