/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4cd30; name: FUN_00d4cd30
 */


void FUN_00d4cd30(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  long *local_98;
  long alStack_90 [12];
  
  plVar9 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
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
  local_b0 = (undefined1 *)0x3bef11b613fbf41d;
  local_a8 = (code *)0x391cc5e;
  local_a0 = (code *)0xb;
  local_98 = (long *)0x0;
  lVar8 = FUN_00d4d2c4(plVar9,*(undefined8 *)(param_1 + 8),&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (plVar9 != (long *)0x0) {
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
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  *(undefined8 *)(lVar8 + 0xf8) = *param_2;
  pcVar7 = *(code **)(lVar8 + 0x188);
  local_b0 = &LAB_00d61370;
  local_a8 = FUN_00d614e4;
  local_a0 = FUN_00d614e8;
  local_98 = (long *)&LAB_00d614f4;
  alStack_90[0] = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 400) = 0;
    *(undefined8 *)(lVar8 + 0x198) = 0;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    (*pcVar7)(lVar8 + 0x1a0);
    if (local_a0 == (code *)0x0) goto LAB_00d4ce88;
  }
  (*local_a0)(alStack_90,lVar8 + 0x1a0);
  *(code **)(lVar8 + 0x188) = local_a8;
  *(long **)(lVar8 + 0x198) = local_98;
  *(code **)(lVar8 + 400) = local_a0;
  *(undefined8 *)(lVar8 + 0x180) = local_b0;
LAB_00d4ce88:
  plVar9 = *(long **)(lVar8 + 0x318);
  *(undefined1 **)(lVar8 + 0x300) = &DAT_cbf29ce484222645;
  *(undefined1 **)(lVar8 + 0x308) = &DAT_03996322;
  *(undefined8 *)(lVar8 + 0x310) = 0;
  *(undefined8 *)(lVar8 + 0x318) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  pcVar7 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (long *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar7)(alStack_90);
  }
  return;
}


