/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ccb3f8; name: FUN_02ccb3f8
 */


void FUN_02ccb3f8(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 local_58;
  
  *param_1 = (long)&PTR_FUN_04297120;
  param_1[9] = (long)&PTR_LAB_04297230;
  param_1[10] = (long)&PTR_LAB_04297278;
  param_1[0xd] = (long)&PTR_LAB_042972a0;
  lVar13 = *(long *)PTR_DAT_04377550;
  if (lVar13 != 0) {
    FUN_0082ab70(lVar13);
    FUN_0082b2b8(lVar13);
  }
  plVar10 = (long *)param_1[0x1f];
  if (plVar10 == (long *)0x0) {
LAB_02ccb47c:
    lVar13 = param_1[0x1e];
    if (lVar13 == 0) goto LAB_02ccb504;
LAB_02ccb484:
    plVar10 = (long *)param_1[0x18];
    lVar14 = param_1[0x1c];
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) == 0) {
LAB_02ccb4e8:
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar14,lVar13 << 3,8);
      goto LAB_02ccb504;
    }
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02ccb4e8;
    FUN_02bcc824(plVar10,lVar14,lVar13 << 3,8);
    lVar13 = param_1[0x16];
    pbVar7 = PTR_DAT_04379498;
    plVar10 = (long *)PTR_DAT_043794a0;
    plVar8 = (long *)PTR_DAT_043794a8;
    puVar2 = PTR_LAB_04379590;
  }
  else {
    lVar13 = plVar10[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 != 0) goto LAB_02ccb47c;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))();
    lVar13 = param_1[0x1e];
    if (lVar13 != 0) goto LAB_02ccb484;
LAB_02ccb504:
    lVar13 = param_1[0x16];
    pbVar7 = PTR_DAT_04379498;
    plVar10 = (long *)PTR_DAT_043794a0;
    plVar8 = (long *)PTR_DAT_043794a8;
    puVar2 = PTR_LAB_04379590;
  }
  PTR_DAT_04379498 = pbVar7;
  PTR_DAT_043794a0 = (undefined *)plVar10;
  PTR_DAT_043794a8 = (undefined *)plVar8;
  PTR_LAB_04379590 = puVar2;
  if (lVar13 != 0) {
    puVar15 = (undefined8 *)param_1[0x15];
    do {
      puVar12 = (undefined8 *)*puVar15;
      lVar13 = lVar13 + -1;
      if (puVar12 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar12 + 1);
        do {
          iVar9 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          puVar12[2] = 0;
          if (((*pbVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar7), iVar9 != 0)) {
            FUN_00100250(puVar2,plVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar7);
          }
          lVar14 = *plVar10;
          *plVar8 = lVar14;
          local_58 = *puVar12;
          FUN_02a44274(lVar14 + 0xd8,&local_58);
        }
      }
      puVar15 = puVar15 + 3;
    } while (lVar13 != 0);
  }
  if (param_1[0x17] == 0) {
LAB_02ccb66c:
    plVar10 = (long *)param_1[0xf];
  }
  else {
    plVar10 = (long *)param_1[0x11];
    lVar14 = param_1[0x17] * 0x18;
    lVar13 = param_1[0x15];
    uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar11 & 1) == 0) {
LAB_02ccb650:
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,lVar14,8);
      goto LAB_02ccb66c;
    }
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02ccb650;
    FUN_02bcc824(plVar10,lVar13,lVar14,8);
    plVar10 = (long *)param_1[0xf];
  }
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
      plVar10 = (long *)param_1[0xe];
      goto joined_r0x02ccb79c;
    }
  }
  plVar10 = (long *)param_1[0xe];
joined_r0x02ccb79c:
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar15 = (undefined8 *)param_1[0xb];
  if (puVar15 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar15 + 1);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      puVar15[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = *puVar15;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  return;
}


