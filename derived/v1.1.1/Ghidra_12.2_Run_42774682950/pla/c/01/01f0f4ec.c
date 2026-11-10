/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0f4ec; name: FUN_01f0f4ec
 */


void FUN_01f0f4ec(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *local_40;
  undefined1 auStack_38 [8];
  
  lVar11 = *param_2;
  plVar5 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))((undefined8 *)(lVar11 + 0x50));
  lVar6 = FUN_01aae7dc();
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (plVar5 == (long *)lVar6) break;
    plVar5 = (long *)*plVar5;
  }
  uVar7 = FUN_01aae7c8(lVar11);
  if (*(ulong *)*param_1 <= uVar7) {
    return;
  }
  FUN_009c69bc(&local_40,*param_2);
  lVar6 = FUN_009aff90(local_40 + 0x1e,auStack_38);
  if (local_40 != (long *)0x0) {
    lVar10 = local_40[0xb];
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
      (**(code **)(*local_40 + 0x20))(local_40);
    }
  }
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(lVar6 + 0x200) != '\0') {
    return;
  }
  uVar8 = FUN_01aae7c8(lVar11);
  *(undefined8 *)*param_1 = uVar8;
  plVar5 = (long *)param_1[1];
  lVar6 = *param_2;
  if (lVar6 != 0) {
    lVar11 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)*plVar5;
  *plVar5 = lVar6;
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar6 = plVar9[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
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
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    return;
  }
  return;
}


