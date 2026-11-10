/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01356308; name: FUN_01356308
 */


void FUN_01356308(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_68;
  
  *param_1 = (long)&PTR_FUN_04206c68;
  param_1[9] = (long)&PTR_LAB_04206cc8;
  param_1[10] = (long)&PTR_LAB_04206d10;
  plVar8 = (long *)param_1[0x2b];
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x144));
  FUN_013578dc(param_1 + 0x21);
  FUN_013578dc(param_1 + 0x1a);
  lVar11 = tpidr_el0;
  plVar8 = (long *)param_1[0x13];
joined_r0x01356388:
  if (plVar8 != (long *)0x0) {
    do {
      plVar14 = (long *)*plVar8;
      plVar9 = (long *)plVar8[7];
      if (plVar9 == (long *)0x0) {
LAB_013563d8:
        plVar9 = (long *)plVar8[6];
      }
      else {
        lVar12 = plVar9[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 + -1 != 0) goto LAB_013563d8;
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
        plVar9 = (long *)plVar8[6];
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      plVar9 = (long *)param_1[0x14];
      uVar10 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar10 & 1) != 0) {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) goto LAB_01356464;
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x50,8);
      plVar8 = plVar14;
      if (plVar14 == (long *)0x0) break;
    } while( true );
  }
  lVar12 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar12 != 0) {
    lVar4 = param_1[0xe];
    plVar8 = (long *)param_1[0xf];
    uVar10 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar10 & 1) != 0) {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar11 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar12,lVar4 << 3,8);
        goto LAB_01356504;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,lVar4 << 3,8);
  }
LAB_01356504:
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar13 = (undefined8 *)param_1[0xb];
  if (puVar13 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar13 + 1);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_68 = *puVar13;
      FUN_02a44274(lVar11 + 0xd8,&local_68);
    }
  }
  return;
LAB_01356464:
  FUN_02bcc824(plVar9,plVar8,0x50,8);
  plVar8 = plVar14;
  goto joined_r0x01356388;
}


