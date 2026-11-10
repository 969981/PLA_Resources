/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e98d0; name: FUN_017e98d0
 */


void FUN_017e98d0(long *param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  if (param_1[2] == 0) {
    return;
  }
  lVar8 = *param_1;
  plVar4 = (long *)param_1[1];
  *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar8 + 8);
  **(long **)(lVar8 + 8) = *plVar4;
  param_1[2] = 0;
  if (plVar4 == param_1) {
    return;
  }
  plVar3 = (long *)plVar4[1];
  plVar10 = (long *)plVar4[2];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  plVar10 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  lVar8 = tpidr_el0;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar10,plVar4,0x18,8);
      goto joined_r0x017e9ad4;
    }
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar4,0x18,8);
joined_r0x017e9ad4:
  do {
    while( true ) {
      if (plVar3 == param_1) {
        return;
      }
      plVar4 = (long *)plVar3[1];
      plVar10 = (long *)plVar3[2];
      if (plVar10 != (long *)0x0) {
        lVar9 = plVar10[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
      }
      plVar10 = (long *)param_1[3];
      uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar7 & 1) != 0) break;
LAB_017e9a78:
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar3,0x18,8);
      plVar3 = plVar4;
    }
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_017e9a78;
    FUN_02bcc824(plVar10,plVar3,0x18,8);
    plVar3 = plVar4;
  } while( true );
}


