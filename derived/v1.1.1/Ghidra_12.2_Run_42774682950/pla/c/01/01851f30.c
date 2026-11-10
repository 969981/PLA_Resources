/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01851f30; name: FUN_01851f30
 */


int FUN_01851f30(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
  param_1 = param_1 + (long)param_2 * 0x20;
  plVar15 = (long *)(param_1 + 0x70);
  plVar16 = (long *)*plVar15;
  plVar12 = (long *)plVar16[1];
  if (plVar16 == plVar12) {
    iVar11 = 0;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x170);
    if (param_3 < 1) {
      iVar11 = 0;
      lVar6 = tpidr_el0;
      do {
        plVar13 = (long *)*puVar1;
        plVar14 = plVar13 + 3;
        plVar7 = (long *)(**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,0x18,8);
        if (plVar7 == (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 0xb8))();
        }
        *plVar7 = 0;
        FUN_01852d70(plVar14,plVar7 + 2,plVar12 + 2);
        plVar7[1] = (long)plVar13;
        lVar9 = *plVar13;
        *plVar7 = lVar9;
        *(long **)(lVar9 + 8) = plVar7;
        *plVar13 = (long)plVar7;
        plVar13[2] = plVar13[2] + 1;
        *(undefined1 *)(plVar12[2] + 0x295) = 0;
        lVar9 = *plVar15;
        plVar7 = (long *)plVar12[1];
        *(long **)(*plVar12 + 8) = plVar7;
        *(long *)plVar12[1] = *plVar12;
        *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
        plVar13 = (long *)plVar12[2];
        if (plVar13 != (long *)0x0) {
          lVar10 = plVar13[0xb];
          piVar2 = (int *)(lVar10 + 0xc);
          do {
            iVar3 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))();
          }
        }
        plVar13 = *(long **)(lVar9 + 0x18);
        uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar8 & 1) == 0) {
LAB_0185208c:
          (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x18,8);
        }
        else {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0185208c;
          FUN_02bcc824(plVar13,plVar12,0x18,8);
        }
        iVar11 = iVar11 + 1;
        plVar12 = plVar7;
      } while (plVar16 != plVar7);
    }
    else {
      iVar11 = 0;
      lVar6 = tpidr_el0;
      do {
        if (iVar11 == param_3) {
          return param_3;
        }
        plVar14 = (long *)*puVar1;
        plVar13 = plVar14 + 3;
        plVar7 = (long *)(**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,0x18,8);
        if (plVar7 == (long *)0x0) {
          (**(code **)(*(long *)*plVar13 + 0xb8))();
        }
        *plVar7 = 0;
        FUN_01852d70(plVar13,plVar7 + 2,plVar12 + 2);
        plVar7[1] = (long)plVar14;
        lVar9 = *plVar14;
        *plVar7 = lVar9;
        *(long **)(lVar9 + 8) = plVar7;
        *plVar14 = (long)plVar7;
        plVar14[2] = plVar14[2] + 1;
        *(undefined1 *)(plVar12[2] + 0x295) = 0;
        lVar9 = *plVar15;
        plVar7 = (long *)plVar12[1];
        *(long **)(*plVar12 + 8) = plVar7;
        *(long *)plVar12[1] = *plVar12;
        *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + -1;
        plVar13 = (long *)plVar12[2];
        if (plVar13 != (long *)0x0) {
          lVar10 = plVar13[0xb];
          piVar2 = (int *)(lVar10 + 0xc);
          do {
            iVar3 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))();
          }
        }
        plVar13 = *(long **)(lVar9 + 0x18);
        uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar8 & 1) == 0) {
LAB_0185221c:
          (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x18,8);
        }
        else {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0185221c;
          FUN_02bcc824(plVar13,plVar12,0x18,8);
        }
        iVar11 = iVar11 + 1;
        plVar12 = plVar7;
      } while (plVar16 != plVar7);
    }
  }
  return iVar11;
}


