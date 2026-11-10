/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1642c; name: FUN_02b1642c
 */


void FUN_02b1642c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  
  plVar13 = *(long **)(param_1 + 0x60);
  plVar5 = (long *)*param_2;
  plVar6 = *(long **)(param_1 + 0x58);
  while (plVar12 = plVar6, plVar13 != plVar12) {
    plVar6 = plVar12 + 1;
    if ((long *)*plVar12 == plVar5) {
      if (plVar13 == plVar6) goto LAB_02b164d4;
      *plVar12 = 0;
      plVar11 = plVar12;
      plVar17 = plVar6;
      if (plVar5 == (long *)0x0) goto LAB_02b16494;
LAB_02b1647c:
      plVar11 = plVar5 + 10;
      do {
        iVar4 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = plVar12;
      plVar17 = plVar6;
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
LAB_02b16494:
      lVar8 = *plVar17;
      plVar6 = plVar17 + 1;
      *plVar17 = 0;
      plVar12 = plVar11 + 1;
      *plVar11 = lVar8;
      if (plVar6 != plVar13) goto code_r0x02b164a8;
      plVar13 = *(long **)(param_1 + 0x60);
      while (plVar13 != plVar12) {
LAB_02b164d4:
        plVar13 = plVar13 + -1;
        plVar6 = (long *)*plVar13;
        if (plVar6 != (long *)0x0) {
          plVar5 = plVar6 + 10;
          do {
            iVar4 = (int)*plVar5 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *(int *)plVar5 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
      }
      *(long **)(param_1 + 0x60) = plVar12;
      plVar13 = plVar12;
      break;
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x70);
  if (plVar13 == *(long **)(param_1 + 0x68)) {
    lVar8 = (long)plVar13 - *(long *)(param_1 + 0x58);
    uVar10 = *(ulong *)(param_1 + 0x78);
    uVar14 = lVar8 >> 3;
    uVar7 = uVar14 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar9 = lVar8 >> 2;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar14 < uVar10 >> 1) {
      uVar10 = uVar7;
    }
    if (uVar10 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar10 << 3,8);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar15 = lVar8 + uVar14 * 8;
    FUN_02b16768(puVar1,lVar15,param_2);
    plVar13 = *(long **)(param_1 + 0x58);
    plVar6 = *(long **)(param_1 + 0x60);
    lVar16 = lVar15 + 8;
    if (plVar6 == plVar13) {
      plVar6 = plVar13;
    }
    else {
      do {
        lVar15 = lVar15 + -8;
        plVar6 = plVar6 + -1;
        FUN_02b16768(puVar1,lVar15,plVar6);
      } while (plVar13 != plVar6);
      plVar13 = *(long **)(param_1 + 0x58);
      plVar6 = *(long **)(param_1 + 0x60);
    }
    *(long *)(param_1 + 0x58) = lVar15;
    *(long *)(param_1 + 0x60) = lVar16;
    lVar16 = *(long *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = lVar8 + uVar10 * 8;
    while (plVar6 != plVar13) {
      plVar6 = plVar6 + -1;
      plVar5 = (long *)*plVar6;
      if (plVar5 != (long *)0x0) {
        plVar12 = plVar5 + 10;
        do {
          iVar4 = (int)*plVar12 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar6 = (long *)*puVar1;
      lVar16 = lVar16 - (long)plVar13;
      uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar7 & 1) != 0) {
        lVar8 = tpidr_el0;
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar6,plVar13,lVar16,8);
          goto LAB_02b1669c;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar13,lVar16,8);
    }
  }
  else {
    FUN_02b16768(puVar1,plVar13,param_2);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
  }
LAB_02b1669c:
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
code_r0x02b164a8:
  plVar5 = (long *)*plVar12;
  *plVar12 = 0;
  plVar11 = plVar12;
  plVar17 = plVar6;
  if (plVar5 != (long *)0x0) goto LAB_02b1647c;
  goto LAB_02b16494;
}


