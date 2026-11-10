/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119f8ec; name: FUN_0119f8ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0119f8ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
                 long *param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar7 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar7;
  lVar7 = *(long *)(*(long *)(*(long *)(lVar7 + 0x50) + 0x2d10) + 8);
  if (lVar7 == 0) {
    plVar10 = (long *)0x0;
    plVar11 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar11 = *(long **)(lVar7 + 0x30);
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_0119fcc0;
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)plVar11[0xd];
    if (plVar10 != (long *)0x0) {
      plVar12 = plVar10 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar7 = plVar11[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
      plVar11 = *(long **)(param_1 + 0x2c8);
    }
    else {
      plVar11 = *(long **)(param_1 + 0x2c8);
    }
  }
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = (long *)plVar11[0x38];
  if (plVar12 == (long *)0x0) {
LAB_0119fa0c:
    if (param_5 < 7) goto LAB_0119fa14;
LAB_0119fbac:
    lVar7 = 0;
    lVar9 = plVar10[0x16];
  }
  else {
    plVar8 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)*plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar5 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0119fa0c;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    if (6 < param_5) goto LAB_0119fbac;
LAB_0119fa14:
    lVar7 = (long)*(int *)(param_4 + (ulong)param_5 * 4 + 0x2c);
    lVar9 = plVar10[0x16];
  }
  if (lVar9 != 0) {
    plVar8 = *(long **)(lVar9 + 0x270);
    if (plVar8 != *(long **)(lVar9 + 0x278)) {
      iVar5 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar8 != 0) {
          plVar2 = (long *)(*plVar8 + 0x58);
        }
        if (*plVar2 == (&DAT_03a78380)[lVar7 * 2]) goto LAB_0119fa80;
        plVar8 = plVar8 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar9 + 0x278) != plVar8);
    }
  }
  iVar5 = 0;
LAB_0119fa80:
  FUN_02c2e33c(plVar10,iVar5,plVar12);
  plVar8 = (long *)plVar11[0x37];
  if (plVar8 == (long *)0x0) {
    lVar7 = *param_6;
    _DAT_00000124 = 0;
    _DAT_00000128 = 0;
    _DAT_0000012c = 0;
    _DAT_00000134 = 0;
    FUN_02c33414(0,plVar12);
    if (*(char *)(lVar7 + 0x7c) != '\0') {
      **(undefined2 **)(lVar7 + 0x58) = 0;
      *(undefined2 *)(lVar7 + 0x7a) = 0;
    }
    FUN_02c338a4(0,lVar7,plVar12,0,0);
  }
  else {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_0119fcc0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = *param_6;
    *(undefined4 *)((long)plVar8 + 0x124) = 0;
    *(undefined2 *)(plVar8 + 0x25) = 0;
    *(undefined4 *)((long)plVar8 + 300) = 0;
    *(undefined4 *)((long)plVar8 + 0x134) = 0;
    FUN_02c33414(plVar8,plVar12);
    if (*(char *)(lVar7 + 0x7c) != '\0') {
      **(undefined2 **)(lVar7 + 0x58) = 0;
      *(undefined2 *)(lVar7 + 0x7a) = 0;
    }
    FUN_02c338a4(plVar8,lVar7,plVar12,0,0);
    lVar7 = plVar8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  plVar12 = plVar11 + 10;
  do {
    iVar5 = (int)*plVar12 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *(int *)plVar12 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (plVar10 != (long *)0x0) {
    plVar11 = plVar10 + 10;
    do {
      iVar5 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0119fbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x10))(plVar10);
      return;
    }
  }
  return;
}


