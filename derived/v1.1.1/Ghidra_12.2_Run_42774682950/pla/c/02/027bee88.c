/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bee88; name: FUN_027bee88
 */


void FUN_027bee88(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_48;
  long *local_40;
  long local_38;
  
  plVar9 = (long *)*param_2;
  local_40 = plVar9;
  if (plVar9 == (long *)0x0) {
    FUN_027beb58(&local_38,&local_40);
  }
  else {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_027bf0e8;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_027beb58(&local_38,&local_40);
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = (long *)*param_2;
  local_50 = plVar9;
  if (plVar9 == (long *)0x0) {
    FUN_027bed38(&local_48,&local_50);
  }
  else {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_027bf0e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_027bed38(&local_48,&local_50);
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  puVar5 = PTR_DAT_04387d28;
  lVar10 = local_48;
  if (local_38 != 0) {
    FUN_01146f84(&local_60,*(undefined8 *)(param_1 + 0x58));
    plVar9 = local_60;
    local_58 = local_60;
    FUN_01124080(local_60,local_38);
    puVar7 = (undefined8 *)FUN_02794ca8();
    uVar6 = *puVar7;
    *(undefined8 *)puVar5 = uVar6;
    FUN_027de3d4(uVar6,plVar9);
    FUN_027d77d4(param_1 + 0xf8,&local_58);
    lVar10 = local_48;
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
        lVar10 = local_48;
      }
    }
  }
  if (lVar10 != 0) {
    FUN_01146f84(&local_60,*(undefined8 *)(param_1 + 0x58));
    local_58 = local_60;
    FUN_01124080(local_60,lVar10);
    puVar7 = (undefined8 *)FUN_02794ca8();
    uVar6 = *puVar7;
    *(undefined8 *)puVar5 = uVar6;
    FUN_027de3d4(uVar6,local_60);
    FUN_027d77d4(param_1 + 0x108,&local_58);
    if (local_60 != (long *)0x0) {
      lVar10 = local_60[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))(local_60);
      }
    }
  }
  return;
}


