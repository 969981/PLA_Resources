/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b7f10; name: FUN_016b7f10
 */


void FUN_016b7f10(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  undefined2 local_40;
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x140) == 0) || (*(char *)(*(long *)(param_1 + 0x140) + 0x120) == '\0'))
  {
    local_40 = 0;
    local_38 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    local_d0 = (long *)0x0;
    local_c8 = 0;
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(param_1 + 0xb0,auStack_a0);
      local_c0 = *(undefined8 *)(param_1 + 0x90);
      local_b8 = *(code **)(param_1 + 0x98);
      local_b0 = *(undefined8 *)(param_1 + 0xa0);
      uStack_a8 = *(undefined8 *)(param_1 + 0xa8);
    }
    local_c8 = *(undefined8 *)(param_1 + 0x88);
    plVar7 = *(long **)(param_1 + 0x158);
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
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
    if (local_d0 != (long *)0x0) {
      lVar8 = local_d0[0xb];
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
        lVar8 = *local_d0;
        local_d0 = plVar7;
        (**(code **)(lVar8 + 0x20))();
        plVar7 = local_d0;
      }
    }
    local_d0 = plVar7;
    local_40 = 0x101;
    local_38 = *(undefined8 *)(param_1 + 0x130);
    FUN_0107f0bc(&local_d8,*(undefined8 *)(param_1 + 0x70),&local_d0);
    plVar7 = *(long **)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = 0;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
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
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    pcVar5 = local_b8;
    *(undefined8 *)(param_1 + 0x140) = local_d8;
    if (local_b8 != (code *)0x0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar5)(auStack_a0);
    }
    if (local_d0 != (long *)0x0) {
      lVar8 = local_d0[0xb];
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
        (**(code **)(*local_d0 + 0x20))();
      }
    }
  }
  return;
}


