/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d6a88; name: FUN_027d6a88
 */


void FUN_027d6a88(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *local_88;
  long local_80;
  long *plStack_78;
  long local_70;
  long *plStack_68;
  long local_60;
  long *plStack_58;
  
  local_60 = param_1[1];
  plVar8 = (long *)*param_2;
  plStack_58 = plVar8;
  if (plVar8 == (long *)0x0) {
    plStack_68 = (long *)0x0;
    local_70 = local_60;
  }
  else {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_027d6d04:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_70 = param_1[1];
    plVar10 = (long *)*param_2;
    plStack_68 = plVar10;
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_027d6d04;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_80 = param_1[1];
      plVar11 = (long *)*param_2;
      plStack_78 = plVar11;
      if (plVar11 == (long *)0x0) {
        bVar4 = true;
      }
      else {
        lVar9 = plVar11[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_027d6d04;
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar4 = false;
      }
      bVar6 = false;
      plVar12 = plVar10;
      goto LAB_027d6bb8;
    }
  }
  plVar11 = (long *)0x0;
  plVar10 = (long *)0x0;
  plStack_78 = (long *)0x0;
  bVar4 = true;
  bVar6 = true;
  plVar12 = plStack_68;
  local_80 = local_70;
LAB_027d6bb8:
  FUN_027d6d1c(&local_88,*(undefined8 *)(*param_1 + 8),param_1 + 2,&local_60,&local_70,&local_80);
  FUN_013b651c(*param_1,&local_88);
  if (local_88 != (long *)0x0) {
    lVar9 = local_88[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  if (!bVar4) {
    lVar9 = plVar11[0xb];
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
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  if (!bVar6) {
    lVar9 = plVar10[0xb];
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
      (**(code **)(*plVar12 + 0x20))(plVar10);
    }
  }
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
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
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  return;
}


