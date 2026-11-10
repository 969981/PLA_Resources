/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0184fe0c; name: FUN_0184fe0c
 */


void FUN_0184fe0c(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar12;
  undefined8 *puVar11;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auStack_78 [24];
  
  lVar8 = tpidr_el0;
  puVar11 = param_1 + 0x20;
  do {
    puVar12 = puVar11 + -4;
    plVar13 = (long *)*puVar12;
    *puVar12 = 0;
    if (plVar13 != (long *)0x0) {
      FUN_02bcbe58(auStack_78,0);
      if (plVar13[2] != 0) {
        lVar10 = *plVar13;
        plVar2 = (long *)plVar13[1];
        *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar10 + 8);
        **(long **)(lVar10 + 8) = *plVar2;
        plVar13[2] = 0;
joined_r0x0184ffec:
        do {
          if (plVar2 == plVar13) break;
          plVar3 = (long *)plVar2[1];
          plVar15 = (long *)plVar2[2];
          if (plVar15 != (long *)0x0) {
            lVar10 = plVar15[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
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
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))();
            }
          }
          plVar15 = (long *)plVar13[3];
          uVar9 = (**(code **)(*plVar15 + 0xc0))(plVar15);
          if ((uVar9 & 1) != 0) {
            if (*(char *)(lVar8 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar8 + 0x38d488) = 1;
              *(undefined8 *)(lVar8 + 0x38d478) = 0;
              *(undefined8 *)(lVar8 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar8 + 0x38d480)) {
              FUN_02bcc824(plVar15,plVar2,0x18,8);
              plVar2 = plVar3;
              goto joined_r0x0184ffec;
            }
          }
          (**(code **)(*plVar15 + 0x18))(plVar15,plVar2,0x18,8);
          plVar2 = plVar3;
        } while( true );
      }
      plVar2 = (long *)puVar11[-3];
      uVar4 = puVar11[-2];
      uVar14 = puVar11[-1];
      uVar9 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      if ((uVar9 & 1) == 0) {
LAB_0184fee8:
        (**(code **)(*plVar2 + 0x18))(plVar2,plVar13,uVar4,uVar14);
      }
      else {
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_0184fee8;
        FUN_02bcc824(plVar2,plVar13,uVar4,uVar14);
      }
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
      *(int *)(lVar8 + 0x38d480) = iVar7;
      if (iVar7 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar8 + 0x38d484) = 0;
      }
    }
    puVar11 = puVar12;
    if (puVar12 == param_1) {
      return;
    }
  } while( true );
}


