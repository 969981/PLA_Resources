/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018afca8; name: FUN_018afca8
 */


void FUN_018afca8(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_68;
  
  *param_1 = (long)&PTR_FUN_0422cda8;
  param_1[9] = (long)&PTR_LAB_0422cdf8;
  param_1[10] = (long)&PTR_LAB_0422ce40;
  plVar8 = (long *)param_1[0x6c];
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
  lVar11 = tpidr_el0;
  plVar8 = (long *)param_1[0x5c];
joined_r0x018afd10:
  if (plVar8 != (long *)0x0) {
    do {
      plVar13 = (long *)param_1[0x5d];
      plVar14 = (long *)*plVar8;
      uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) goto LAB_018afdb4;
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar8,0xf0,8);
      plVar8 = plVar14;
      if (plVar14 == (long *)0x0) break;
    } while( true );
  }
  FUN_018ba610(param_1 + 0x56);
  plVar8 = (long *)param_1[0x4f];
  if (plVar8 != (long *)0x0) {
    plVar13 = (long *)param_1[0x50];
    puVar12 = (undefined8 *)*plVar8;
    uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar9 & 1) == 0) {
LAB_018afe3c:
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar8,0x20,8);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_018afe3c;
      FUN_02bcc824(plVar13,plVar8,0x20,8);
    }
    if (puVar12 != (undefined8 *)0x0) {
      plVar13 = (long *)param_1[0x50];
      plVar8 = (long *)*puVar12;
      uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar9 & 1) == 0) {
LAB_018afeb8:
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar12,0x20,8);
      }
      else {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_018afeb8;
        FUN_02bcc824(plVar13,puVar12,0x20,8);
      }
      if (plVar8 != (long *)0x0) {
        plVar14 = (long *)param_1[0x50];
        plVar13 = (long *)*plVar8;
        uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar9 & 1) == 0) {
LAB_018aff34:
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar8,0x20,8);
        }
        else {
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_018aff34;
          FUN_02bcc824(plVar14,plVar8,0x20,8);
        }
        if (plVar13 != (long *)0x0) {
          do {
            while( true ) {
              plVar8 = (long *)param_1[0x50];
              plVar14 = (long *)*plVar13;
              uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
              if ((uVar9 & 1) == 0) break;
              if (*(char *)(lVar11 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar11 + 0x38d488) = 1;
                *(undefined8 *)(lVar11 + 0x38d478) = 0;
                *(undefined8 *)(lVar11 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar11 + 0x38d480) < 1) break;
              FUN_02bcc824(plVar8,plVar13,0x20,8);
              plVar13 = plVar14;
              if (plVar14 == (long *)0x0) goto LAB_018aff54;
            }
            (**(code **)(*plVar8 + 0x18))(plVar8,plVar13,0x20,8);
            plVar13 = plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
  }
LAB_018aff54:
  lVar10 = param_1[0x49];
  param_1[0x49] = 0;
  if (lVar10 != 0) {
    FUN_018ba738(param_1 + 0x4a);
  }
  FUN_018ba848(param_1 + 0x3c);
  plVar8 = (long *)param_1[0x35];
joined_r0x018aff6c:
  plVar13 = plVar8;
  if (plVar8 != (long *)0x0) {
    do {
      plVar14 = (long *)param_1[0x36];
      plVar8 = (long *)*plVar13;
      uVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) goto code_r0x018b02bc;
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0x20,8);
      plVar13 = plVar8;
      if (plVar8 == (long *)0x0) break;
    } while( true );
  }
  FUN_018babc4(param_1 + 0x2f);
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 0x20))();
  }
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 0x20))();
  }
  lVar10 = param_1[0x22];
  if (lVar10 != 0) {
    lVar4 = param_1[0x24];
    plVar8 = (long *)param_1[0x25];
    param_1[0x23] = lVar10;
    uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar11 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar10,lVar4 - lVar10,8);
        plVar8 = (long *)param_1[0x20];
        goto joined_r0x018b0390;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar4 - lVar10,8);
  }
  plVar8 = (long *)param_1[0x20];
joined_r0x018b0390:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x20))();
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x20))();
  }
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x20))();
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x20))();
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x20))();
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 0x20))();
  }
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 0x20))();
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar12 = (undefined8 *)param_1[0xb];
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
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
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_68 = *puVar12;
      FUN_02a44274(lVar11 + 0xd8,&local_68);
    }
  }
  return;
LAB_018afdb4:
  FUN_02bcc824(plVar13,plVar8,0xf0,8);
  plVar8 = plVar14;
  goto joined_r0x018afd10;
code_r0x018b02bc:
  FUN_02bcc824(plVar14,plVar13,0x20,8);
  goto joined_r0x018aff6c;
}


