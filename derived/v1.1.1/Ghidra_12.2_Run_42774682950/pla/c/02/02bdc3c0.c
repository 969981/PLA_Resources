/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdc3c0; name: FUN_02bdc3c0
 */


void FUN_02bdc3c0(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)param_1[2]) {
    lVar8 = *param_2;
    *plVar6 = lVar8;
    if (lVar8 == 0) {
LAB_02bdc430:
      param_1[1] = param_1[1] + 8;
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_02bdc430;
    }
    goto LAB_02bdc6e8;
  }
  lVar8 = (long)plVar6 - *param_1 >> 3;
  uVar7 = lVar8 + 1;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - *param_1;
  if ((ulong)(lVar9 >> 3) < 0xfffffffffffffff) {
    uVar10 = lVar9 >> 2;
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if (uVar7 != 0) goto LAB_02bdc498;
    lVar9 = 0;
  }
  else {
    uVar7 = 0x1fffffffffffffff;
LAB_02bdc498:
    lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 3,8);
    if (lVar9 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
  }
  lVar11 = *param_2;
  plVar6 = (long *)(lVar9 + lVar8 * 8);
  *plVar6 = lVar11;
  if (lVar11 != 0) {
    lVar8 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_02bdc6e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  plVar14 = plVar6;
  if (plVar12 == plVar13) {
    plVar12 = plVar13;
  }
  else {
    do {
      plVar12 = plVar12 + -1;
      lVar8 = *plVar12;
      plVar14[-1] = lVar8;
      if (lVar8 != 0) {
        lVar8 = *(long *)(lVar8 + 0x58);
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_02bdc6e8;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar14 = plVar14 + -1;
    } while (plVar12 != plVar13);
    plVar13 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
  }
  lVar8 = param_1[2];
  *param_1 = (long)plVar14;
  param_1[1] = (long)(plVar6 + 1);
  param_1[2] = lVar9 + uVar7 * 8;
  while (plVar12 != plVar13) {
    plVar12 = plVar12 + -1;
    plVar6 = (long *)*plVar12;
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar7 & 1) != 0) {
    lVar9 = tpidr_el0;
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar6,plVar13,lVar8 - (long)plVar13,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02bdc668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,plVar13,lVar8 - (long)plVar13,8);
  return;
}


