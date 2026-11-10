/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02789038; name: FUN_02789038
 */


undefined8 FUN_02789038(undefined8 param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auStack_1b9b8 [56488];
  undefined1 auStack_dd10 [8];
  undefined1 auStack_dd08 [12];
  int local_dcfc;
  undefined1 auStack_d200 [12];
  int local_d1f4;
  undefined1 auStack_c6f8 [12];
  int local_c6ec;
  undefined1 auStack_bbf0 [12];
  int local_bbe4;
  undefined1 auStack_b0e8 [12];
  int local_b0dc;
  undefined1 auStack_a5e0 [12];
  int local_a5d4;
  undefined1 auStack_9ad8 [12];
  int local_9acc;
  undefined1 auStack_8fd0 [12];
  int local_8fc4;
  undefined1 auStack_84c8 [12];
  int local_84bc;
  undefined1 auStack_79c0 [12];
  int local_79b4;
  undefined1 auStack_6eb8 [12];
  int local_6eac;
  undefined1 auStack_63b0 [12];
  int local_63a4;
  undefined1 auStack_58a8 [12];
  int local_589c;
  undefined1 auStack_4da0 [12];
  int local_4d94;
  undefined1 auStack_4298 [12];
  int local_428c;
  undefined1 auStack_3790 [12];
  int local_3784;
  undefined1 auStack_2c88 [12];
  int local_2c7c;
  undefined1 auStack_2180 [12];
  int local_2174;
  undefined1 auStack_1678 [12];
  int local_166c;
  undefined1 auStack_b70 [12];
  int local_b64;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar10 = *(long **)(lVar7 + 0x2a8);
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar10[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
  }
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  memcpy(auStack_dd10,plVar10 + 0xe,0xdca8);
  if (local_dcfc == param_2) {
    puVar8 = auStack_dd08;
  }
  else if (local_d1f4 == param_2) {
    puVar8 = auStack_d200;
  }
  else if (local_c6ec == param_2) {
    puVar8 = auStack_c6f8;
  }
  else if (local_bbe4 == param_2) {
    puVar8 = auStack_bbf0;
  }
  else if (local_b0dc == param_2) {
    puVar8 = auStack_b0e8;
  }
  else if (local_a5d4 == param_2) {
    puVar8 = auStack_a5e0;
  }
  else if (local_9acc == param_2) {
    puVar8 = auStack_9ad8;
  }
  else if (local_8fc4 == param_2) {
    puVar8 = auStack_8fd0;
  }
  else if (local_84bc == param_2) {
    puVar8 = auStack_84c8;
  }
  else if (local_79b4 == param_2) {
    puVar8 = auStack_79c0;
  }
  else if (local_6eac == param_2) {
    puVar8 = auStack_6eb8;
  }
  else if (local_63a4 == param_2) {
    puVar8 = auStack_63b0;
  }
  else if (local_589c == param_2) {
    puVar8 = auStack_58a8;
  }
  else if (local_4d94 == param_2) {
    puVar8 = auStack_4da0;
  }
  else if (local_428c == param_2) {
    puVar8 = auStack_4298;
  }
  else if (local_3784 == param_2) {
    puVar8 = auStack_3790;
  }
  else if (local_2c7c == param_2) {
    puVar8 = auStack_2c88;
  }
  else if (local_2174 == param_2) {
    puVar8 = auStack_2180;
  }
  else if (local_166c == param_2) {
    puVar8 = auStack_1678;
  }
  else {
    if (local_b64 != param_2) {
      uVar6 = 0;
      goto LAB_02789160;
    }
    puVar8 = auStack_b70;
  }
  uVar6 = 1;
  *(undefined4 *)(puVar8 + 8) = 1;
  uVar9 = param_3[2];
  uVar2 = param_3[1];
  *(undefined8 *)(puVar8 + 0x10) = *param_3;
  *(undefined8 *)(puVar8 + 0x18) = uVar2;
  *(undefined8 *)(puVar8 + 0x20) = uVar9;
  uVar9 = param_4[2];
  uVar2 = *param_4;
  *(undefined8 *)(puVar8 + 0x30) = param_4[1];
  *(undefined8 *)(puVar8 + 0x38) = uVar9;
  *(undefined8 *)(puVar8 + 0x28) = uVar2;
  FUN_02785610(auStack_1b9b8,auStack_dd10);
  FUN_0110b874(plVar10,auStack_1b9b8);
LAB_02789160:
  lVar7 = plVar10[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  return uVar6;
}


