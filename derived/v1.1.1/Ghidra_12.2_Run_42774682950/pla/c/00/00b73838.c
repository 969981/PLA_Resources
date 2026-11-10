/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b73838; name: FUN_00b73838
 */


void FUN_00b73838(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  lVar12 = *param_1;
  plVar13 = *(long **)(lVar12 + 0x3e0);
  if (plVar13 != (long *)0x0) {
    lVar9 = tpidr_el0;
    do {
      if (plVar13[0xe] != 0) {
        plVar11 = (long *)plVar13[9];
joined_r0x00b73890:
        plVar14 = plVar11;
        if (plVar11 != (long *)0x0) {
          do {
            plVar11 = (long *)*plVar14;
            plVar5 = (long *)plVar14[3];
            if (plVar5 != (long *)0x0) {
              plVar1 = plVar5 + 10;
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
                (**(code **)(*plVar5 + 0x10))();
              }
            }
            plVar5 = (long *)plVar13[10];
            uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
            if ((uVar6 & 1) != 0) {
              if (*(char *)(lVar9 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar9 + 0x38d488) = 1;
                *(undefined8 *)(lVar9 + 0x38d478) = 0;
                *(undefined8 *)(lVar9 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar9 + 0x38d480)) goto LAB_00b73930;
            }
            (**(code **)(*plVar5 + 0x18))(plVar5,plVar14,0x20,8);
            plVar14 = plVar11;
            if (plVar11 == (long *)0x0) break;
          } while( true );
        }
        uVar6 = plVar13[4];
        plVar13[9] = 0;
        if (uVar6 != 0) {
          uVar7 = uVar6 & 7;
          if (uVar6 - 1 < 7) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            do {
              lVar10 = lVar8 * 8;
              lVar8 = lVar8 + 8;
              *(undefined8 *)(plVar13[3] + lVar10) = 0;
              *(undefined8 *)(plVar13[3] + lVar10 + 8) = 0;
              *(undefined8 *)(plVar13[3] + lVar10 + 0x10) = 0;
              *(undefined8 *)(plVar13[3] + lVar10 + 0x18) = 0;
              *(undefined8 *)(plVar13[3] + lVar10 + 0x20) = 0;
              *(undefined8 *)(plVar13[3] + lVar10 + 0x28) = 0;
              *(undefined8 *)(plVar13[3] + lVar10 + 0x30) = 0;
              *(undefined8 *)(plVar13[3] + lVar10 + 0x38) = 0;
            } while (uVar6 - uVar7 != lVar8);
          }
          if (uVar7 != 0) {
            lVar8 = lVar8 << 3;
            do {
              *(undefined8 *)(plVar13[3] + lVar8) = 0;
              uVar7 = uVar7 - 1;
              lVar8 = lVar8 + 8;
            } while (uVar7 != 0);
          }
        }
        plVar13[0xe] = 0;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  if (*(long *)(lVar12 + 0x408) != 0) {
    if (*(long **)(lVar12 + 0x3e0) != (long *)0x0) {
      lVar9 = tpidr_el0;
      plVar13 = *(long **)(lVar12 + 0x3e0);
      do {
        while( true ) {
          plVar14 = (long *)*plVar13;
          FUN_00b743e8(plVar13 + 3);
          plVar11 = *(long **)(lVar12 + 1000);
          uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
          if ((uVar6 & 1) != 0) break;
LAB_00b73b00:
          (**(code **)(*plVar11 + 0x18))(plVar11,plVar13,0x80,8);
          plVar13 = plVar14;
          if (plVar14 == (long *)0x0) goto LAB_00b73b44;
        }
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_00b73b00;
        FUN_02bcc824(plVar11,plVar13,0x80,8);
        plVar13 = plVar14;
      } while (plVar14 != (long *)0x0);
    }
LAB_00b73b44:
    uVar6 = *(ulong *)(lVar12 + 0x3b8);
    *(undefined8 *)(lVar12 + 0x3e0) = 0;
    if (uVar6 != 0) {
      uVar7 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar8 = lVar9 * 8;
          lVar9 = lVar9 + 4;
          *(undefined8 *)(*(long *)(lVar12 + 0x3b0) + lVar8) = 0;
          *(undefined8 *)(*(long *)(lVar12 + 0x3b0) + lVar8 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar12 + 0x3b0) + lVar8 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar12 + 0x3b0) + lVar8 + 0x18) = 0;
        } while (uVar6 - uVar7 != lVar9);
      }
      if (uVar7 != 0) {
        lVar9 = lVar9 << 3;
        do {
          *(undefined8 *)(*(long *)(lVar12 + 0x3b0) + lVar9) = 0;
          uVar7 = uVar7 - 1;
          lVar9 = lVar9 + 8;
        } while (uVar7 != 0);
      }
    }
    *(undefined8 *)(lVar12 + 0x408) = 0;
  }
  return;
LAB_00b73930:
  FUN_02bcc824(plVar5,plVar14,0x20,8);
  goto joined_r0x00b73890;
}


