/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a1898; name: FUN_009a1898
 */


void FUN_009a1898(long *param_1,long param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  long *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  undefined1 local_54 [4];
  
  local_88 = *(long **)(param_2 + 8);
  local_54[0] = param_3;
  local_68 = (long *)FUN_009bb918(local_88,&local_88,local_54);
  if (local_68 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    lVar9 = local_68[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_009a1b70;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11 = local_68;
  }
  plVar3 = local_68;
  local_88 = (long *)0xd4bb6f465f861a1;
  pcStack_80 = "bin/effect/battle/sequence/ee003.wbin";
  local_78 = 0x25;
  local_70 = (long *)0x0;
  FUN_00adc9e8(plVar11,&local_88,*(undefined8 *)(param_2 + 8));
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
    plVar11 = plVar3;
  }
  lVar9 = plVar11[0xb];
  local_88 = plVar11;
  if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_009a1b70:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar9 + 0x10) == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
    *(undefined8 *)(lVar9 + 0x10) = uVar8;
  }
  plVar11 = local_88;
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(local_88 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_88);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar9 = FUN_0099d310(plVar11 + 10), lVar9 != 0)) {
    uVar13 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar9 + 0xf0) = uVar13;
    plVar4 = *(long **)(lVar9 + 0x80);
    for (plVar3 = *(long **)(lVar9 + 0x78); plVar3 != plVar4; plVar3 = plVar3 + 1) {
      puVar12 = *(undefined8 **)(*plVar3 + 0xe0);
      puVar5 = *(undefined8 **)(*plVar3 + 0xe8);
      if ((puVar12 != puVar5) &&
         ((**(code **)(*(long *)*puVar12 + 0x90))(uVar13), puVar12 + 1 != puVar5)) {
        (**(code **)(*(long *)puVar12[1] + 0x90))(uVar13);
        for (puVar12 = puVar12 + 2; puVar12 != puVar5; puVar12 = puVar12 + 1) {
          (**(code **)(*(long *)*puVar12 + 0x90))(uVar13);
        }
      }
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  lVar9 = FUN_009bb6f0(*(undefined8 *)(param_2 + 8),&local_68);
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_009a1b70;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *param_1 = lVar9;
  if (local_68 != (long *)0x0) {
    lVar9 = local_68[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


