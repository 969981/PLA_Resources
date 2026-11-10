/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b338b0; name: FUN_02b338b0
 */


void FUN_02b338b0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  plVar11 = (long *)param_1[0x2c];
  *param_1 = &PTR_FUN_04284490;
  param_1[9] = &PTR_LAB_042844c8;
  lVar6 = tpidr_el0;
joined_r0x02b338ec:
  plVar9 = plVar11;
  if (plVar11 != (long *)0x0) {
    do {
      plVar11 = (long *)*plVar9;
      plVar7 = (long *)plVar9[6];
      if (plVar7 == (long *)0x0) {
LAB_02b33938:
        plVar7 = (long *)plVar9[5];
      }
      else {
        plVar1 = plVar7 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != 0) goto LAB_02b33938;
        (**(code **)(*plVar7 + 0x10))();
        plVar7 = (long *)plVar9[5];
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      plVar7 = (long *)param_1[0x2d];
      uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar8 & 1) == 0) goto LAB_02b3399c;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b3399c;
      FUN_02bcc824(plVar7,plVar9,0x38,8);
      plVar9 = plVar11;
      if (plVar11 == (long *)0x0) break;
    } while( true );
  }
  lVar10 = param_1[0x26];
  param_1[0x26] = 0;
  if (lVar10 == 0) {
LAB_02b33ac0:
    plVar11 = (long *)param_1[0x1f];
  }
  else {
    lVar2 = param_1[0x27];
    plVar11 = (long *)param_1[0x28];
    uVar8 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar8 & 1) == 0) {
LAB_02b33aa4:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar2 << 3,8);
      goto LAB_02b33ac0;
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b33aa4;
    FUN_02bcc824(plVar11,lVar10,lVar2 << 3,8);
    plVar11 = (long *)param_1[0x1f];
  }
  if (plVar11 != (long *)0x0) {
    do {
      plVar7 = (long *)*plVar11;
      plVar9 = (long *)plVar11[6];
      if (plVar9 == (long *)0x0) {
LAB_02b33b10:
        plVar9 = (long *)plVar11[5];
      }
      else {
        plVar1 = plVar9 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 != 0) goto LAB_02b33b10;
        (**(code **)(*plVar9 + 0x10))();
        plVar9 = (long *)plVar11[5];
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      plVar9 = (long *)param_1[0x20];
      uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar8 & 1) == 0) {
LAB_02b33b74:
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar11,0x38,8);
      }
      else {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b33b74;
        FUN_02bcc824(plVar9,plVar11,0x38,8);
      }
      plVar11 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  lVar10 = param_1[0x19];
  param_1[0x19] = 0;
  if (lVar10 == 0) {
LAB_02b33cb4:
    plVar11 = (long *)param_1[0x12];
  }
  else {
    lVar2 = param_1[0x1a];
    plVar11 = (long *)param_1[0x1b];
    uVar8 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar8 & 1) == 0) {
LAB_02b33c98:
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar2 << 3,8);
      goto LAB_02b33cb4;
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b33c98;
    FUN_02bcc824(plVar11,lVar10,lVar2 << 3,8);
    plVar11 = (long *)param_1[0x12];
  }
  if (plVar11 != (long *)0x0) {
LAB_02b33ce0:
    do {
      plVar9 = (long *)*plVar11;
      if ((char)plVar11[6] != '\0') {
        if ((long *)plVar11[10] != (long *)0x0) {
          (**(code **)(*(long *)plVar11[10] + 0x20))();
        }
        *(undefined1 *)(plVar11 + 6) = 0;
      }
      if ((long *)plVar11[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar11[5] + 0x20))();
      }
      plVar7 = (long *)param_1[0x13];
      uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar7,plVar11,0x58,8);
          plVar11 = plVar9;
          if (plVar9 == (long *)0x0) break;
          goto LAB_02b33ce0;
        }
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar11,0x58,8);
      plVar11 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
  lVar10 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar10 != 0) {
    lVar2 = param_1[0xd];
    plVar11 = (long *)param_1[0xe];
    uVar8 = (**(code **)(*plVar11 + 0xc0))(plVar11);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar11,lVar10,lVar2 << 3,8);
        plVar11 = (long *)param_1[0xb];
        goto joined_r0x02b33e98;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar10,lVar2 << 3,8);
  }
  plVar11 = (long *)param_1[0xb];
joined_r0x02b33e98:
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02b33ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))();
      return;
    }
  }
  return;
LAB_02b3399c:
  (**(code **)(*plVar7 + 0x18))(plVar7,plVar9,0x38,8);
  goto joined_r0x02b338ec;
}


