/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3b6b0; name: FUN_02c3b6b0
 */


void FUN_02c3b6b0(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  
  *param_1 = &PTR_FUN_0428a1d8;
  param_1[9] = &PTR_LAB_0428a210;
  if (param_1[0xc] == 0) {
LAB_02c3b9ec:
    lVar7 = param_1[0x20];
  }
  else {
    lVar7 = param_1[0x20];
    lVar8 = param_1[0x21];
    if (lVar7 != lVar8) {
      FUN_0022b7a0(param_1[0xc],*(long *)(*(long *)(lVar7 + 8) + 600) + 0x80);
      while (lVar7 + 0x30 != lVar8) {
        FUN_0022b7a0(param_1[0xc],*(long *)(*(long *)(lVar7 + 0x38) + 600) + 0x80);
        lVar7 = lVar7 + 0x30;
      }
      lVar7 = param_1[0x20];
      lVar8 = param_1[0x21];
      while (lVar8 != lVar7) {
        lVar8 = lVar8 + -0x30;
        FUN_00d20548(lVar8);
      }
    }
    param_1[0x21] = lVar7;
    (**(code **)(*(long *)param_1[0xc] + 0x20))((long *)param_1[0xc],&LAB_02c3bfec,param_1);
    for (plVar9 = (long *)param_1[0x19]; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      FUN_02b9580c(*(undefined8 *)(*(long *)(param_1[0xb] + 0x58) + 0x6140),plVar9 + 3);
    }
    if (param_1[0x1e] != 0) {
      if ((long *)param_1[0x19] != (long *)0x0) {
        lVar7 = tpidr_el0;
        plVar9 = (long *)param_1[0x19];
        do {
          while( true ) {
            plVar11 = (long *)param_1[0x1a];
            plVar12 = (long *)*plVar9;
            uVar5 = (**(code **)(*plVar11 + 0xc0))(plVar11);
            if ((uVar5 & 1) != 0) break;
LAB_02c3b824:
            (**(code **)(*plVar11 + 0x18))(plVar11,plVar9,0x28,8);
            plVar9 = plVar12;
            if (plVar12 == (long *)0x0) goto LAB_02c3b8b0;
          }
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02c3b824;
          FUN_02bcc824(plVar11,plVar9,0x28,8);
          plVar9 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
LAB_02c3b8b0:
      uVar5 = param_1[0x14];
      param_1[0x19] = 0;
      if (uVar5 != 0) {
        uVar6 = uVar5 & 3;
        if (uVar5 - 1 < 3) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          do {
            lVar8 = lVar7 * 8;
            lVar7 = lVar7 + 4;
            *(undefined8 *)(param_1[0x13] + lVar8) = 0;
            *(undefined8 *)(param_1[0x13] + lVar8 + 8) = 0;
            *(undefined8 *)(param_1[0x13] + lVar8 + 0x10) = 0;
            *(undefined8 *)(param_1[0x13] + lVar8 + 0x18) = 0;
          } while (uVar5 - uVar6 != lVar7);
        }
        if (uVar6 != 0) {
          lVar7 = lVar7 << 3;
          do {
            *(undefined8 *)(param_1[0x13] + lVar7) = 0;
            uVar6 = uVar6 - 1;
            lVar7 = lVar7 + 8;
          } while (uVar6 != 0);
        }
      }
      param_1[0x1e] = 0;
    }
    FUN_0022b7f4(param_1[0xc]);
    (**(code **)(*(long *)param_1[0xc] + 0x38))
              ((long *)param_1[0xc],*(long *)(param_1[0xb] + 0x58) + 0x3010);
    (**(code **)(*(long *)param_1[0xc] + 8))();
    plVar9 = (long *)param_1[1];
    uVar10 = param_1[0xc];
    uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar5 & 1) == 0) {
LAB_02c3b9d0:
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar10,0x48,8);
      goto LAB_02c3b9ec;
    }
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02c3b9d0;
    FUN_02bcc824(plVar9,uVar10,0x48,8);
    lVar7 = param_1[0x20];
  }
  if (lVar7 != 0) {
    lVar8 = param_1[0x21];
    if (lVar8 == lVar7) {
      lVar8 = lVar7;
    }
    else {
      do {
        lVar8 = lVar8 + -0x30;
        FUN_00d20548(lVar8);
      } while (lVar7 != lVar8);
      lVar8 = param_1[0x20];
    }
    lVar1 = param_1[0x22];
    plVar9 = (long *)param_1[0x23];
    param_1[0x21] = lVar7;
    uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar5 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar9,lVar8,lVar1 - lVar8,8);
        goto LAB_02c3baa0;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar1 - lVar8,8);
  }
LAB_02c3baa0:
  FUN_02c3c3ec(param_1 + 0x13);
  FUN_00d20548(param_1 + 0xd);
  plVar9 = (long *)param_1[0xb];
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 10;
    do {
      iVar4 = (int)*plVar11 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02c3bb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))();
      return;
    }
  }
  return;
}


