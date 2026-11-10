/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b29034; name: FUN_02b29034
 */


void FUN_02b29034(long param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  plVar8 = *(long **)(param_1 + 0x78);
  plVar7 = *(long **)(param_1 + 0x80);
  if (plVar8 != plVar7) {
    plVar6 = plVar8;
    do {
      plVar11 = plVar6 + 1;
      if (*plVar6 == *param_2) {
        return;
      }
      plVar6 = plVar11;
    } while (plVar7 != plVar11);
  }
  puVar1 = (undefined8 *)(param_1 + 0x90);
  if (plVar7 == *(long **)(param_1 + 0x88)) {
    uVar12 = *(ulong *)(param_1 + 0x98);
    lVar13 = (long)plVar7 - (long)plVar8 >> 3;
    uVar5 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (long)*(long **)(param_1 + 0x88) - (long)plVar8;
    uVar10 = lVar9 >> 2;
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    if ((ulong)(lVar9 >> 3) < uVar12 >> 1) {
      uVar12 = uVar5;
    }
    if (uVar12 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 << 3,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar14 = lVar9 + lVar13 * 8;
    FUN_02b2a678(puVar1,lVar14,param_2);
    plVar7 = *(long **)(param_1 + 0x78);
    plVar8 = *(long **)(param_1 + 0x80);
    lVar13 = lVar14 + 8;
    if (plVar8 == plVar7) {
      plVar8 = plVar7;
    }
    else {
      do {
        lVar14 = lVar14 + -8;
        plVar8 = plVar8 + -1;
        FUN_02b2a678(puVar1,lVar14,plVar8);
      } while (plVar7 != plVar8);
      plVar7 = *(long **)(param_1 + 0x78);
      plVar8 = *(long **)(param_1 + 0x80);
    }
    *(long *)(param_1 + 0x78) = lVar14;
    *(long *)(param_1 + 0x80) = lVar13;
    lVar13 = *(long *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x88) = lVar9 + uVar12 * 8;
    while (plVar8 != plVar7) {
      plVar8 = plVar8 + -1;
      plVar6 = (long *)*plVar8;
      if (plVar6 != (long *)0x0) {
        plVar11 = plVar6 + 10;
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
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)*puVar1;
      lVar13 = lVar13 - (long)plVar7;
      uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar5 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar8,plVar7,lVar13,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b29234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,lVar13,8);
      return;
    }
  }
  else {
    FUN_02b2a678(puVar1,plVar7,param_2);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 8;
  }
  return;
}


