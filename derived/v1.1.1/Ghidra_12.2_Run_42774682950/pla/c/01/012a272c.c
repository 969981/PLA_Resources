/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012a272c; name: FUN_012a272c
 */


void FUN_012a272c(long param_1,uint param_2)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  if (6 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_28);
  FUN_00d42690(param_1,1,1);
  FUN_00d7331c(param_1,0);
  cVar4 = FUN_01123ce8(local_28);
  if (cVar4 == '\0') {
    FUN_02a4754c(&local_50,&DAT_04203150);
    lVar6 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_50);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    FUN_02a4754c(&local_50,&DAT_04203168);
    lVar6 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_50);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    puVar7 = &DAT_04203180;
  }
  else {
    FUN_02a4754c(&local_50,&DAT_04203150);
    lVar6 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_50);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    FUN_02a4754c(&local_50,&DAT_04203168);
    lVar6 = FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_50);
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    puVar7 = &DAT_04203198;
  }
  FUN_02a4754c(&local_50,puVar7);
  FUN_00d2df7c(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  local_50 = 0x30ffe469e93cde7a;
  pcStack_48 = "pane_P_load_bg_00";
  local_40 = 0x11;
  local_38 = (long *)0x0;
  FUN_0283bfbc(plVar8,&local_50,(&PTR_s_load_bg_area00_o_04203008)[param_2]);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x5ab) = 0;
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar2 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar3) {
        *piVar2 = iVar5 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


