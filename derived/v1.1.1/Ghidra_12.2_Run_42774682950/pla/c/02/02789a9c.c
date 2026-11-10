/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02789a9c; name: FUN_02789a9c
 */


undefined8 FUN_02789a9c(undefined8 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 auStack_1b9b0 [56488];
  undefined1 auStack_dd08 [8];
  undefined1 auStack_dd00 [12];
  int local_dcf4;
  undefined1 auStack_d1f8 [12];
  int local_d1ec;
  undefined1 auStack_c6f0 [12];
  int local_c6e4;
  undefined1 auStack_bbe8 [12];
  int local_bbdc;
  undefined1 auStack_b0e0 [12];
  int local_b0d4;
  undefined1 auStack_a5d8 [12];
  int local_a5cc;
  undefined1 auStack_9ad0 [12];
  int local_9ac4;
  undefined1 auStack_8fc8 [12];
  int local_8fbc;
  undefined1 auStack_84c0 [12];
  int local_84b4;
  undefined1 auStack_79b8 [12];
  int local_79ac;
  undefined1 auStack_6eb0 [12];
  int local_6ea4;
  undefined1 auStack_63a8 [12];
  int local_639c;
  undefined1 auStack_58a0 [12];
  int local_5894;
  undefined1 auStack_4d98 [12];
  int local_4d8c;
  undefined1 auStack_4290 [12];
  int local_4284;
  undefined1 auStack_3788 [12];
  int local_377c;
  undefined1 auStack_2c80 [12];
  int local_2c74;
  undefined1 auStack_2178 [12];
  int local_216c;
  undefined1 auStack_1670 [12];
  int local_1664;
  undefined1 auStack_b68 [12];
  int local_b5c;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar6 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar6;
  plVar8 = *(long **)(lVar6 + 0x2a8);
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar8[0xb];
  if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar6 + 0x10) == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
    *(undefined8 *)(lVar6 + 0x10) = uVar5;
  }
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  memcpy(auStack_dd08,plVar8 + 0xe,0xdca8);
  if (local_dcf4 == param_2) {
    puVar7 = auStack_dd00;
  }
  else if (local_d1ec == param_2) {
    puVar7 = auStack_d1f8;
  }
  else if (local_c6e4 == param_2) {
    puVar7 = auStack_c6f0;
  }
  else if (local_bbdc == param_2) {
    puVar7 = auStack_bbe8;
  }
  else if (local_b0d4 == param_2) {
    puVar7 = auStack_b0e0;
  }
  else if (local_a5cc == param_2) {
    puVar7 = auStack_a5d8;
  }
  else if (local_9ac4 == param_2) {
    puVar7 = auStack_9ad0;
  }
  else if (local_8fbc == param_2) {
    puVar7 = auStack_8fc8;
  }
  else if (local_84b4 == param_2) {
    puVar7 = auStack_84c0;
  }
  else if (local_79ac == param_2) {
    puVar7 = auStack_79b8;
  }
  else if (local_6ea4 == param_2) {
    puVar7 = auStack_6eb0;
  }
  else if (local_639c == param_2) {
    puVar7 = auStack_63a8;
  }
  else if (local_5894 == param_2) {
    puVar7 = auStack_58a0;
  }
  else if (local_4d8c == param_2) {
    puVar7 = auStack_4d98;
  }
  else if (local_4284 == param_2) {
    puVar7 = auStack_4290;
  }
  else if (local_377c == param_2) {
    puVar7 = auStack_3788;
  }
  else if (local_2c74 == param_2) {
    puVar7 = auStack_2c80;
  }
  else if (local_216c == param_2) {
    puVar7 = auStack_2178;
  }
  else if (local_1664 == param_2) {
    puVar7 = auStack_1670;
  }
  else {
    if (local_b5c != param_2) {
      uVar5 = 0;
      goto LAB_02789bac;
    }
    puVar7 = auStack_b68;
  }
  *(undefined4 *)(puVar7 + 8) = 3;
  FUN_02785610(auStack_1b9b0,auStack_dd08);
  FUN_0110b874(plVar8,auStack_1b9b0);
  FUN_02787bdc(param_1);
  uVar5 = 1;
LAB_02789bac:
  lVar6 = plVar8[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    iVar4 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 + -1 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return uVar5;
}


