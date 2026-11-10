/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01833bc0; name: FUN_01833bc0
 */


void FUN_01833bc0(long *param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  lVar7 = tpidr_el0;
  plVar4 = (long *)param_1[6];
  do {
    while( true ) {
      if (plVar4 == (long *)0x0) {
        lVar10 = *param_1;
        *param_1 = 0;
        if (lVar10 == 0) {
          return;
        }
        lVar3 = param_1[1];
        plVar4 = (long *)param_1[2];
        uVar9 = (**(code **)(*plVar4 + 0xc0))(plVar4);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar4,lVar10,lVar3 << 3,8);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x01833d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar10,lVar3 << 3,8);
        return;
      }
      plVar11 = (long *)*plVar4;
      plVar8 = (long *)plVar4[3];
      if (plVar8 != (long *)0x0) {
        lVar10 = plVar8[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
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
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
        }
      }
      plVar8 = (long *)param_1[7];
      uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar9 & 1) != 0) break;
LAB_01833c88:
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar4,0x20,8);
      plVar4 = plVar11;
    }
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_01833c88;
    FUN_02bcc824(plVar8,plVar4,0x20,8);
    plVar4 = plVar11;
  } while( true );
}


