/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d419cc; name: FUN_00d419cc
 */


void FUN_00d419cc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_58 [24];
  
  lVar7 = param_1[0x7a];
  *param_1 = &PTR_FUN_041eb0c0;
  param_1[0x7a] = 0;
  lVar5 = tpidr_el0;
  if (lVar7 != 0) {
    FUN_02bcbe58(auStack_58,0);
    FUN_00d35130(lVar7 + 0x20);
    plVar12 = (long *)param_1[0x7b];
    uVar9 = param_1[0x7c];
    uVar10 = param_1[0x7d];
    uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar6 & 1) == 0) {
LAB_00d41a78:
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar7,uVar9,uVar10);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_00d41a78;
      FUN_02bcc824(plVar12,lVar7,uVar9,uVar10);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  lVar7 = param_1[0x76];
  param_1[0x76] = 0;
  if (lVar7 == 0) {
LAB_00d41bb8:
    plVar12 = (long *)param_1[0x74];
    if (plVar12 == (long *)0x0) goto LAB_00d41bd8;
LAB_00d41bc0:
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_00d41bd8;
    (**(code **)(*plVar12 + 0x10))();
    plVar12 = (long *)param_1[0x73];
    if (plVar12 != (long *)0x0) goto LAB_00d41be0;
LAB_00d41bf8:
    plVar12 = (long *)param_1[0x72];
    if (plVar12 == (long *)0x0) goto LAB_00d41c18;
LAB_00d41c00:
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_00d41c18;
    (**(code **)(*plVar12 + 0x10))();
    plVar12 = (long *)param_1[0x71];
  }
  else {
    FUN_02bcbe58(auStack_58,0);
    FUN_00d35130(lVar7 + 0x20);
    plVar12 = (long *)param_1[0x77];
    uVar9 = param_1[0x78];
    uVar10 = param_1[0x79];
    uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar6 & 1) == 0) {
LAB_00d41b58:
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar7,uVar9,uVar10);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_00d41b58;
      FUN_02bcc824(plVar12,lVar7,uVar9,uVar10);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar4;
    if (iVar4 != 0) goto LAB_00d41bb8;
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
    plVar12 = (long *)param_1[0x74];
    if (plVar12 != (long *)0x0) goto LAB_00d41bc0;
LAB_00d41bd8:
    plVar12 = (long *)param_1[0x73];
    if (plVar12 == (long *)0x0) goto LAB_00d41bf8;
LAB_00d41be0:
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_00d41bf8;
    (**(code **)(*plVar12 + 0x10))();
    plVar12 = (long *)param_1[0x72];
    if (plVar12 != (long *)0x0) goto LAB_00d41c00;
LAB_00d41c18:
    plVar12 = (long *)param_1[0x71];
  }
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  lVar7 = param_1[0x6d];
  param_1[0x6d] = 0;
  if (lVar7 != 0) {
    FUN_00d347f0(param_1 + 0x6e);
  }
  lVar7 = param_1[0x69];
  param_1[0x69] = 0;
  if (lVar7 != 0) {
    FUN_00d344bc(param_1 + 0x6a);
  }
  puVar8 = (undefined8 *)param_1[0x65];
  param_1[0x65] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_58,0);
    uVar6 = param_1[0x67];
    if (0xbf < uVar6) {
      uVar11 = 0;
      puVar13 = puVar8;
      do {
        (**(code **)*puVar13)(puVar13);
        uVar11 = uVar11 + 1;
        puVar13 = puVar13 + 0x18;
      } while (uVar11 < uVar6 / 0xc0);
      uVar6 = param_1[0x67];
    }
    plVar12 = (long *)param_1[0x66];
    uVar9 = param_1[0x68];
    uVar11 = (**(code **)(*plVar12 + 0xc0))(plVar12);
    if ((uVar11 & 1) == 0) {
LAB_00d41f50:
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,uVar6,uVar9);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_00d41f50;
      FUN_02bcc824(plVar12,puVar8,uVar6,uVar9);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar4;
    if (iVar4 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  FUN_00d445e8(param_1 + 0x61);
  FUN_00d445e8(param_1 + 0x5d);
  FUN_00d445e8(param_1 + 0x59);
  plVar12 = (long *)param_1[0x58];
  if (plVar12 == (long *)0x0) {
LAB_00d41c94:
    plVar12 = (long *)param_1[0x56];
  }
  else {
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_00d41c94;
    (**(code **)(*plVar12 + 0x10))();
    plVar12 = (long *)param_1[0x56];
  }
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  FUN_00d449b0(param_1 + 0x50);
  plVar12 = (long *)param_1[0x4f];
  if (plVar12 == (long *)0x0) {
LAB_00d41cdc:
    plVar12 = (long *)param_1[0x4d];
  }
  else {
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_00d41cdc;
    (**(code **)(*plVar12 + 0x10))();
    plVar12 = (long *)param_1[0x4d];
  }
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  FUN_00d449b0(param_1 + 0x47);
  plVar12 = (long *)param_1[0x46];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      plVar12 = (long *)param_1[0x29];
      goto joined_r0x00d41d28;
    }
  }
  plVar12 = (long *)param_1[0x29];
joined_r0x00d41d28:
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  FUN_00d44898(param_1 + 0x23);
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x20))();
  }
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x20))();
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x20))();
  }
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 0x20))();
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 0x20))();
  }
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  if ((long *)param_1[4] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d41dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x20))();
  return;
}


