/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aebc40; name: FUN_02aebc40
 */


void FUN_02aebc40(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)(param_1 + 0x68);
  puVar1 = (undefined8 *)(param_1 + 0x78);
  if (lVar13 == *(long *)(param_1 + 0x70)) {
    uVar10 = *(ulong *)(param_1 + 0x80);
    lVar13 = lVar13 - *(long *)(param_1 + 0x60) >> 3;
    uVar6 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = *(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x60);
    uVar9 = lVar8 >> 2;
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    if ((ulong)(lVar8 >> 3) < uVar10 >> 1) {
      uVar10 = uVar6;
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
    lVar14 = lVar8 + lVar13 * 8;
    FUN_02aec6c4(puVar1,lVar14,param_2);
    plVar12 = *(long **)(param_1 + 0x60);
    plVar11 = *(long **)(param_1 + 0x68);
    lVar13 = lVar14 + 8;
    if (plVar11 == plVar12) {
      plVar11 = plVar12;
    }
    else {
      do {
        lVar14 = lVar14 + -8;
        plVar11 = plVar11 + -1;
        FUN_02aec6c4(puVar1,lVar14,plVar11);
      } while (plVar12 != plVar11);
      plVar12 = *(long **)(param_1 + 0x60);
      plVar11 = *(long **)(param_1 + 0x68);
    }
    *(long *)(param_1 + 0x60) = lVar14;
    *(long *)(param_1 + 0x68) = lVar13;
    lVar13 = *(long *)(param_1 + 0x70);
    *(ulong *)(param_1 + 0x70) = lVar8 + uVar10 * 8;
    while (plVar11 != plVar12) {
      plVar11 = plVar11 + -1;
      plVar7 = (long *)*plVar11;
      if (plVar7 != (long *)0x0) {
        lVar8 = plVar7[0xb];
        piVar2 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
    }
    if (plVar12 != (long *)0x0) {
      plVar11 = (long *)*puVar1;
      lVar13 = lVar13 - (long)plVar12;
      uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar6 & 1) != 0) {
        lVar8 = tpidr_el0;
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar8 + 0x38d480)) {
          FUN_02bcc824(plVar11,plVar12,lVar13,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02aebe18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x18))(plVar11,plVar12,lVar13,8);
      return;
    }
  }
  else {
    FUN_02aec6c4(puVar1,lVar13,param_2);
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 8;
  }
  return;
}


