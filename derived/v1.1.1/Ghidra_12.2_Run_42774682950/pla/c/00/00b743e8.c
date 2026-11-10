/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b743e8; name: FUN_00b743e8
 */


void FUN_00b743e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  lVar7 = tpidr_el0;
  plVar3 = (long *)param_1[6];
  do {
    while( true ) {
      if (plVar3 == (long *)0x0) {
        lVar10 = *param_1;
        *param_1 = 0;
        if (lVar10 == 0) {
          return;
        }
        lVar2 = param_1[1];
        plVar3 = (long *)param_1[2];
        uVar9 = (**(code **)(*plVar3 + 0xc0))(plVar3);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar3,lVar10,lVar2 << 3,8);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00b7459c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar10,lVar2 << 3,8);
        return;
      }
      plVar11 = (long *)*plVar3;
      plVar8 = (long *)plVar3[3];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      plVar8 = (long *)param_1[7];
      uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar9 & 1) != 0) break;
LAB_00b744ac:
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar3,0x20,8);
      plVar3 = plVar11;
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_00b744ac;
    FUN_02bcc824(plVar8,plVar3,0x20,8);
    plVar3 = plVar11;
  } while( true );
}


