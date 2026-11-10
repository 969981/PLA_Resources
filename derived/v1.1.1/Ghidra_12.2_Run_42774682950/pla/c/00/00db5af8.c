/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db5af8; name: FUN_00db5af8
 */


void FUN_00db5af8(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  if ((lVar7 == 0) || (plVar9 = *(long **)(lVar7 + 0x2d0), plVar9 == (long *)0x0))
  goto LAB_00db5d04;
  lVar7 = plVar9[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
  }
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar7 = plVar9[0x18];
  bVar3 = false;
  if (lVar7 < -0x256a05cb505d64c7) {
    if (-0x2659adf429d375ea < lVar7) {
      if (lVar7 == -0x2659adf429d375e9) {
        lVar8 = 6;
      }
      else {
        if (lVar7 != -0x2659abf429d37283) goto LAB_00db5ce4;
        lVar8 = 4;
      }
      goto LAB_00db5cc4;
    }
    if (lVar7 == -0x2659b0f429d37b02) {
      lVar8 = 7;
      goto LAB_00db5cc4;
    }
    if (lVar7 == -0x2659aef429d3779c) {
      lVar8 = 5;
      goto LAB_00db5cc4;
    }
  }
  else {
    if (lVar7 < -0x256a03cb505d6161) {
      if (lVar7 == -0x256a05cb505d64c7) {
        lVar8 = 3;
      }
      else {
        if (lVar7 != -0x256a04cb505d6314) goto LAB_00db5ce4;
        lVar8 = 2;
      }
    }
    else if (lVar7 == -0x256a02cb505d5fae) {
      lVar8 = 0;
    }
    else {
      if (lVar7 != -0x256a03cb505d6161) goto LAB_00db5ce4;
      lVar8 = 1;
    }
LAB_00db5cc4:
    *param_1 = lVar7;
    bVar3 = true;
    lVar7 = (&DAT_041edf20)[lVar8 * 3];
    param_1[1] = (long)(&PTR_s_p1skin001_041edf18)[lVar8 * 3];
    param_1[2] = lVar7;
  }
LAB_00db5ce4:
  lVar7 = plVar9[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (bVar3) {
    return;
  }
LAB_00db5d04:
  param_1[2] = 0;
  *param_1 = (long)&DAT_cbf29ce484222645;
  param_1[1] = (long)&DAT_03996322;
  return;
}


