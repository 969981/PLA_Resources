/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fb1ec; name: FUN_014fb1ec
 */


void FUN_014fb1ec(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  long *local_b8;
  long local_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  long *local_48;
  
  local_d0 = (undefined1 *)0x9016cde878a8cc5a;
  local_c8 = (code *)0x393b165;
  local_c0 = (code *)0x13;
  local_b8 = (long *)0x0;
  lVar5 = thunk_FUN_00d2e944(param_1 + 0x180,&local_d0);
  *(undefined1 *)(lVar5 + 0x2ab) = 1;
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  local_d0 = (undefined1 *)0x3e15d4fcf512bfb7;
  local_c8 = (code *)0x389bc98;
  local_c0 = (code *)0x10;
  local_b8 = (long *)0x0;
  lVar5 = FUN_00d2ee28(param_1 + 0x180,&local_d0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  local_48 = *(long **)(param_1 + 0x630);
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
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
  FUN_0281e3a4(lVar5,&local_48);
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
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
      (**(code **)(*local_48 + 0x20))();
    }
  }
  pcVar7 = *(code **)(lVar5 + 0x298);
  local_a8 = &LAB_014fb540;
  uStack_a0 = 0;
  local_d0 = &LAB_01501fe8;
  local_c8 = FUN_0150200c;
  local_c0 = FUN_01502010;
  local_b8 = (long *)&LAB_01502024;
  local_b0 = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_014fb378:
    (*local_c0)(&local_b0,lVar5 + 0x2b0);
    *(code **)(lVar5 + 0x298) = local_c8;
    *(long **)(lVar5 + 0x2a8) = local_b8;
    *(code **)(lVar5 + 0x2a0) = local_c0;
    *(undefined8 *)(lVar5 + 0x290) = local_d0;
  }
  else {
    *(undefined8 *)(lVar5 + 0x2a0) = 0;
    *(undefined8 *)(lVar5 + 0x2a8) = 0;
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    (*pcVar7)(lVar5 + 0x2b0);
    if (local_c0 != (code *)0x0) goto LAB_014fb378;
  }
  pcVar7 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar7)(&local_b0);
  }
  pcVar7 = *(code **)(lVar5 + 0x118);
  local_a8 = &LAB_014fb73c;
  uStack_a0 = 0;
  local_d0 = &LAB_01501fe8;
  local_c8 = FUN_0150200c;
  local_c0 = FUN_01502010;
  local_b8 = (long *)&LAB_01502024;
  local_b0 = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_014fb404:
    (*local_c0)(&local_b0,lVar5 + 0x130);
    *(code **)(lVar5 + 0x118) = local_c8;
    *(long **)(lVar5 + 0x128) = local_b8;
    *(code **)(lVar5 + 0x120) = local_c0;
    *(undefined8 *)(lVar5 + 0x110) = local_d0;
  }
  else {
    *(undefined8 *)(lVar5 + 0x120) = 0;
    *(undefined8 *)(lVar5 + 0x128) = 0;
    *(undefined8 *)(lVar5 + 0x110) = 0;
    *(undefined8 *)(lVar5 + 0x118) = 0;
    (*pcVar7)(lVar5 + 0x130);
    if (local_c0 != (code *)0x0) goto LAB_014fb404;
  }
  pcVar7 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar7)(&local_b0);
  }
  pcVar7 = *(code **)(lVar5 + 0x218);
  local_a8 = &LAB_014fb75c;
  uStack_a0 = 0;
  local_d0 = &LAB_01501fe8;
  local_c8 = FUN_0150200c;
  local_c0 = FUN_01502010;
  local_b8 = (long *)&LAB_01502024;
  local_b0 = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x220) = 0;
    *(undefined8 *)(lVar5 + 0x228) = 0;
    *(undefined8 *)(lVar5 + 0x210) = 0;
    *(undefined8 *)(lVar5 + 0x218) = 0;
    (*pcVar7)(lVar5 + 0x230);
    if (local_c0 == (code *)0x0) goto LAB_014fb4bc;
  }
  (*local_c0)(&local_b0,lVar5 + 0x230);
  *(code **)(lVar5 + 0x218) = local_c8;
  *(long **)(lVar5 + 0x228) = local_b8;
  *(code **)(lVar5 + 0x220) = local_c0;
  *(undefined8 *)(lVar5 + 0x210) = local_d0;
LAB_014fb4bc:
  pcVar7 = local_c8;
  *(undefined1 *)(lVar5 + 0x91a) = 1;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar7)(&local_b0);
  }
  FUN_0281e380(lVar5,0,1);
  FUN_0281857c(lVar5);
  return;
}


