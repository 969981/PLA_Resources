/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa5d88; name: FUN_02aa5d88
 */


void FUN_02aa5d88(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  plVar13 = *(long **)(param_1 + 0x90);
  plVar12 = *(long **)(param_1 + 0x98);
  plVar6 = plVar13;
  if (plVar13 != plVar12) {
    lVar10 = *plVar13;
    while (lVar10 != *param_2) {
      plVar6 = plVar6 + 1;
      if (plVar12 == plVar6) goto LAB_02aa5e08;
      lVar10 = *plVar6;
    }
  }
  if (plVar12 == plVar6) {
LAB_02aa5e08:
    puVar1 = (undefined8 *)(param_1 + 0xa8);
    if (plVar12 == *(long **)(param_1 + 0xa0)) {
      uVar11 = *(ulong *)(param_1 + 0xb0);
      lVar10 = (long)plVar12 - (long)plVar13 >> 3;
      uVar7 = lVar10 + 1;
      if (0x7ffffffffffffffe < uVar11) {
        uVar11 = 0x7fffffffffffffff;
      }
      if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = (long)*(long **)(param_1 + 0xa0) - (long)plVar13;
      uVar9 = lVar8 >> 2;
      if (uVar7 <= uVar9) {
        uVar7 = uVar9;
      }
      if ((ulong)(lVar8 >> 3) < uVar11 >> 1) {
        uVar11 = uVar7;
      }
      if (uVar11 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar11 << 3,8);
        if (lVar8 == 0) {
          (**(code **)(*(long *)*puVar1 + 0xb8))();
        }
      }
      lVar14 = lVar8 + lVar10 * 8;
      FUN_02aa6f6c(puVar1,lVar14,param_2);
      plVar13 = *(long **)(param_1 + 0x90);
      plVar12 = *(long **)(param_1 + 0x98);
      lVar10 = lVar14 + 8;
      if (plVar12 == plVar13) {
        plVar12 = plVar13;
      }
      else {
        do {
          lVar14 = lVar14 + -8;
          plVar12 = plVar12 + -1;
          FUN_02aa6f6c(puVar1,lVar14,plVar12);
        } while (plVar13 != plVar12);
        plVar13 = *(long **)(param_1 + 0x90);
        plVar12 = *(long **)(param_1 + 0x98);
      }
      *(long *)(param_1 + 0x90) = lVar14;
      *(long *)(param_1 + 0x98) = lVar10;
      lVar10 = *(long *)(param_1 + 0xa0);
      *(ulong *)(param_1 + 0xa0) = lVar8 + uVar11 * 8;
      while (plVar12 != plVar13) {
        plVar12 = plVar12 + -1;
        plVar6 = (long *)*plVar12;
        if (plVar6 != (long *)0x0) {
          plVar2 = plVar6 + 10;
          do {
            iVar5 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
      }
      if (plVar13 != (long *)0x0) {
        plVar12 = (long *)*puVar1;
        lVar10 = lVar10 - (long)plVar13;
        uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
        if ((uVar7 & 1) != 0) {
          lVar8 = tpidr_el0;
          if (*(char *)(lVar8 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar8 + 0x38d488) = 1;
            *(undefined8 *)(lVar8 + 0x38d478) = 0;
            *(undefined8 *)(lVar8 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar8 + 0x38d480)) {
            FUN_02bcc824(plVar12,plVar13,lVar10,8);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x02aa5ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar12 + 0x18))(plVar12,plVar13,lVar10,8);
        return;
      }
    }
    else {
      FUN_02aa6f6c(puVar1,plVar12,param_2);
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 8;
    }
  }
  return;
}


