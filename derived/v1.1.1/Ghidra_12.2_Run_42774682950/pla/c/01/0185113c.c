/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185113c; name: FUN_0185113c
 */


void FUN_0185113c(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  FUN_018513ac();
  lVar15 = 0;
  lVar6 = tpidr_el0;
  do {
    lVar2 = param_1 + lVar15 * 0x20;
    plVar14 = (long *)(lVar2 + 0x70);
    plVar16 = (long *)*plVar14;
    if (plVar16 != (long *)plVar16[1]) {
      plVar13 = (long *)plVar16[1];
      do {
        plVar9 = *(long **)(lVar2 + 0x170);
        plVar10 = plVar9 + 3;
        plVar7 = (long *)(**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,0x18,8);
        if (plVar7 == (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0xb8))();
        }
        *plVar7 = 0;
        FUN_01852d70(plVar10,plVar7 + 2,plVar13 + 2);
        plVar7[1] = (long)plVar9;
        lVar11 = *plVar9;
        *plVar7 = lVar11;
        *(long **)(lVar11 + 8) = plVar7;
        *plVar9 = (long)plVar7;
        plVar9[2] = plVar9[2] + 1;
        *(undefined1 *)(plVar13[2] + 0x295) = 0;
        plVar7 = (long *)plVar13[1];
        lVar11 = *plVar14;
        *(long **)(*plVar13 + 8) = plVar7;
        *(long *)plVar13[1] = *plVar13;
        *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + -1;
        plVar9 = (long *)plVar13[2];
        if (plVar9 != (long *)0x0) {
          lVar12 = plVar9[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar9 + 0x20))();
          }
        }
        plVar9 = *(long **)(lVar11 + 0x18);
        uVar8 = (**(code **)(*plVar9 + 0xc0))();
        if ((uVar8 & 1) == 0) {
LAB_018512ec:
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar13,0x18,8);
        }
        else {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_018512ec;
          FUN_02bcc824(plVar9,plVar13,0x18,8);
        }
        plVar13 = plVar7;
      } while (plVar16 != plVar7);
    }
    lVar15 = lVar15 + 1;
    if (lVar15 == 8) {
      return;
    }
  } while( true );
}


