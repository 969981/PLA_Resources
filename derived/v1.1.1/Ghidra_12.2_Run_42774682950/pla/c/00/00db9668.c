/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db9668; name: FUN_00db9668
 */


void FUN_00db9668(long *param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  long *local_38;
  undefined8 uStack_30;
  long *local_28;
  
  local_38 = (long *)0x0;
  uStack_30 = 0;
  FUN_00dbd724(&local_38,param_1[0xd] + 0x100);
  if (local_38 != (long *)0x0) {
LAB_00db97d8:
    do {
      FUN_00dbd99c(&local_28);
      if (local_28 == (long *)0x0) goto LAB_00db96ac;
      lVar7 = local_28[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
        if (local_38 != (long *)0x0) goto LAB_00db98e0;
LAB_00db980c:
        local_28 = (long *)0x0;
        plVar6 = local_38;
      }
      else {
        if (local_38 == (long *)0x0) goto LAB_00db980c;
LAB_00db98e0:
        FUN_00dbd99c(&local_28);
        plVar6 = local_28;
      }
      FUN_00db9668(plVar6,param_2 + 1);
      if (local_28 != (long *)0x0) {
        lVar7 = local_28[0xb];
        piVar2 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
      FUN_00dbd99c(&local_28,local_38);
      FUN_00dbd724(&local_38,local_28[0xd] + 0xf0);
      if (local_28 == (long *)0x0) {
LAB_00db9880:
        if (local_38 == (long *)0x0) break;
        goto LAB_00db97d8;
      }
      lVar7 = local_28[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 != 0) goto LAB_00db9880;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    } while (local_38 != (long *)0x0);
  }
  local_28 = (long *)0x0;
LAB_00db96ac:
  lVar7 = param_1[0xd];
  if (*(int *)(lVar7 + 0x60) == 3) {
    if (*(int *)(lVar7 + 100) == 1) {
      (**(code **)(*param_1 + 0x48))(param_1);
      plVar6 = local_38;
    }
    else {
switchD_00db9754_caseD_3:
      plVar6 = local_38;
    }
joined_r0x00db97cc:
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        plVar6[2] = 0;
        local_38 = plVar6;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = (long *)*plVar6;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    return;
  }
  uVar8 = 3;
  switch(*(int *)(lVar7 + 0x60)) {
  case 1:
    iVar5 = (**(code **)(*param_1 + 0x40))(param_1);
    if (iVar5 != 1) goto switchD_00db9754_caseD_3;
    lVar7 = param_1[0xd];
    uVar8 = 2;
    break;
  case 2:
    goto switchD_00db9754_caseD_2;
  default:
    goto switchD_00db9754_caseD_3;
  case 4:
    uVar8 = 5;
switchD_00db9754_caseD_2:
    *(undefined4 *)(lVar7 + 0x60) = uVar8;
    goto LAB_00db96ac;
  case 5:
    iVar5 = (**(code **)(*param_1 + 0x50))(param_1);
    if (iVar5 != 1) goto switchD_00db9754_caseD_3;
    lVar7 = param_1[0xd];
    uVar8 = 6;
  }
  *(undefined4 *)(lVar7 + 0x60) = uVar8;
  plVar6 = local_38;
  goto joined_r0x00db97cc;
}


