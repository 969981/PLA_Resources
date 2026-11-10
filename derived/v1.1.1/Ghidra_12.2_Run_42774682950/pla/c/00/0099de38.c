/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099de38; name: FUN_0099de38
 */


void FUN_0099de38(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_58;
  
  local_80 = *(long **)(param_2 + 8);
  FUN_0099e090(&local_58,local_80,&local_80);
  plVar8 = local_58;
  local_80 = (long *)0xc665c53b4d488f23;
  pcStack_78 = "bin/effect/battle/sequence/cmn_battle_end_alldead.wbin";
  local_70 = 0x36;
  local_68 = (long *)0x0;
  FUN_00adc9e8(local_58,&local_80,*(undefined8 *)(param_2 + 8));
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80 = plVar8;
  lVar10 = plVar8[0xb];
  if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar10 + 0x10) == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
    *(undefined8 *)(lVar10 + 0x10) = uVar9;
  }
  plVar8 = local_80;
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(local_80 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_80);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar10 = FUN_0099d310(plVar8 + 10), lVar10 != 0)) {
    uVar12 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar10 + 0xf0) = uVar12;
    plVar4 = *(long **)(lVar10 + 0x80);
    for (plVar3 = *(long **)(lVar10 + 0x78); plVar3 != plVar4; plVar3 = plVar3 + 1) {
      puVar11 = *(undefined8 **)(*plVar3 + 0xe0);
      puVar5 = *(undefined8 **)(*plVar3 + 0xe8);
      if ((puVar11 != puVar5) &&
         ((**(code **)(*(long *)*puVar11 + 0x90))(uVar12), puVar11 + 1 != puVar5)) {
        (**(code **)(*(long *)puVar11[1] + 0x90))(uVar12);
        for (puVar11 = puVar11 + 2; puVar11 != puVar5; puVar11 = puVar11 + 1) {
          (**(code **)(*(long *)*puVar11 + 0x90))(uVar12);
        }
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  FUN_0099dafc(param_1,*(undefined8 *)(param_2 + 8),&local_58);
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


