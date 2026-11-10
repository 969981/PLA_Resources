/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014dc994; name: FUN_014dc994
 */


void FUN_014dc994(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  long *local_a8;
  long local_a0 [12];
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar7 == (long *)0x0) {
LAB_014dcb48:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar8 = plVar7[0xb];
  if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_014dcb48;
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
  local_c0 = (undefined1 *)0x30a614e4e9a583b4;
  local_b8 = (code *)0x391e7b0;
  local_b0 = (code *)&DAT_00000009;
  local_a8 = (long *)0x0;
  lVar8 = FUN_00d4d2c4(plVar7,*(undefined8 *)(param_1 + 8),&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (lVar8 == 0) goto LAB_014dcae8;
  pcVar6 = *(code **)(lVar8 + 0x188);
  local_c0 = &LAB_014dd3ec;
  local_b8 = FUN_014dd408;
  local_b0 = FUN_014dd40c;
  local_a8 = (long *)&LAB_014dd418;
  *(undefined8 *)(lVar8 + 0xf8) = 0x400000000;
  local_a0[0] = param_1;
  if (pcVar6 == (code *)0x0) {
LAB_014dcaa4:
    (*local_b0)(local_a0,lVar8 + 0x1a0);
    *(code **)(lVar8 + 0x188) = local_b8;
    *(long **)(lVar8 + 0x198) = local_a8;
    *(code **)(lVar8 + 400) = local_b0;
    *(undefined8 *)(lVar8 + 0x180) = local_c0;
  }
  else {
    *(undefined8 *)(lVar8 + 400) = 0;
    *(undefined8 *)(lVar8 + 0x198) = 0;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(undefined8 *)(lVar8 + 0x188) = 0;
    (*pcVar6)(lVar8 + 0x1a0);
    if (local_b0 != (code *)0x0) goto LAB_014dcaa4;
  }
  pcVar6 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar6)(local_a0);
  }
LAB_014dcae8:
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
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return;
}


