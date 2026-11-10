/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120ddac; name: FUN_0120ddac
 */


void FUN_0120ddac(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long local_120;
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  long *local_a8;
  long local_a0;
  undefined1 *local_98;
  undefined8 uStack_90;
  long *local_38;
  
  local_c0 = (undefined1 *)0x2fc323f0f2cf4984;
  local_b8 = (code *)0x38fe367;
  local_b0 = (code *)0x10;
  local_a8 = (long *)0x0;
  lVar7 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if ((param_2 & 1) == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0281a4fc(lVar7);
    uVar6 = FUN_0281a508(lVar7);
  }
  FUN_0281e380(lVar7,uVar5,0);
  FUN_0281e390(lVar7,uVar6);
  local_38 = *(long **)(param_1 + 0x5c8);
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar8;
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
  }
  FUN_0281e3a4(lVar7,&local_38);
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))();
    }
  }
  local_98 = &LAB_0120f7a4;
  uStack_90 = 0;
  local_c0 = &LAB_01214090;
  local_b8 = FUN_012140b4;
  local_b0 = FUN_012140b8;
  local_a8 = (long *)&LAB_012140cc;
  pcVar9 = *(code **)(lVar7 + 0x298);
  local_118 = &LAB_0120f830;
  uStack_110 = 0;
  local_120 = param_1;
  local_a0 = param_1;
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x2a0) = 0;
    *(undefined8 *)(lVar7 + 0x2a8) = 0;
    *(undefined8 *)(lVar7 + 0x290) = 0;
    *(undefined8 *)(lVar7 + 0x298) = 0;
    (*pcVar9)(lVar7 + 0x2b0);
    if (local_b0 == (code *)0x0) goto LAB_0120df64;
  }
  (*local_b0)(&local_a0,lVar7 + 0x2b0);
  *(code **)(lVar7 + 0x298) = local_b8;
  *(long **)(lVar7 + 0x2a8) = local_a8;
  *(code **)(lVar7 + 0x2a0) = local_b0;
  *(undefined8 *)(lVar7 + 0x290) = local_c0;
LAB_0120df64:
  pcVar9 = *(code **)(lVar7 + 0x118);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x120) = 0;
    *(undefined8 *)(lVar7 + 0x128) = 0;
    *(undefined8 *)(lVar7 + 0x110) = 0;
    *(undefined8 *)(lVar7 + 0x118) = 0;
    (*pcVar9)(lVar7 + 0x130);
  }
  FUN_012140b8(&local_120,lVar7 + 0x130);
  *(code **)(lVar7 + 0x118) = FUN_012140b4;
  *(undefined1 **)(lVar7 + 0x128) = &LAB_012140cc;
  *(code **)(lVar7 + 0x120) = FUN_012140b8;
  *(undefined8 *)(lVar7 + 0x110) = &LAB_01214090;
  FUN_0281857c(lVar7);
  FUN_0120e340(param_1,8);
  FUN_012140b4(&local_120);
  pcVar9 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar9)(&local_a0);
  }
  return;
}


