/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286b22c; name: FUN_0286b22c
 */


void FUN_0286b22c(long param_1,ulong param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [96];
  
  lVar10 = *(long *)(param_1 + 0x50);
  local_b0 = (code *)0x0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,auStack_a0);
    local_c0 = *param_3;
    local_b8 = (code *)param_3[1];
    local_b0 = (code *)param_3[2];
    local_a8 = param_3[3];
  }
  param_2 = param_2 & 0xff;
  lVar7 = lVar10 + param_2 * 0x120;
  plVar9 = *(long **)(lVar7 + 0x108);
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    piVar1 = (int *)(lVar7 + 0x100);
    iVar3 = *piVar1;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar6;
    }
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 - 3U < 2) {
      *piVar1 = 6;
      lVar7 = lVar10 + param_2 * 0x120;
      pcVar8 = *(code **)(lVar7 + 0x198);
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(lVar7 + 0x1a0) = 0;
        *(undefined8 *)(lVar7 + 0x1a8) = 0;
        *(undefined8 *)(lVar7 + 400) = 0;
        *(undefined8 *)(lVar7 + 0x198) = 0;
        (*pcVar8)(lVar10 + param_2 * 0x120 + 0x1b0);
      }
      if (local_b0 != (code *)0x0) {
        (*local_b0)(auStack_a0,lVar10 + param_2 * 0x120 + 0x1b0);
        *(code **)(lVar7 + 0x198) = local_b8;
        *(undefined8 *)(lVar7 + 0x1a8) = local_a8;
        *(code **)(lVar7 + 0x1a0) = local_b0;
        *(undefined8 *)(lVar7 + 400) = local_c0;
      }
    }
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (local_b8 != (code *)0x0) {
    (*local_b8)(auStack_a0);
  }
  return;
}


