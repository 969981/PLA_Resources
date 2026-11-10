/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a25c4; name: FUN_016a25c4
 */


void FUN_016a25c4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  char *local_38;
  
  plVar10 = *(long **)(param_1 + 8);
  plVar6 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  if (plVar6 == (long *)0x0) {
    local_58 = 0;
    local_50 = 0;
    local_60 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *plVar6 = (long)(PTR_DAT_0437a508 + 0x10);
    plVar6[1] = 0;
    local_58 = 0x30;
    local_50 = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    local_60 = plVar10;
  }
  local_68 = (long *)0x0;
  FUN_016a301c(param_1 + 0x58,plVar6);
  *(long **)(param_1 + 0x60) = local_60;
  *(undefined8 *)(param_1 + 0x68) = local_58;
  *(undefined8 *)(param_1 + 0x70) = local_50;
  FUN_016a301c(&local_68,0);
  local_38 = "bin/event/event_progress/destination_list.bin";
  FUN_009f1b84(&local_68,&local_38);
  lVar7 = *(long *)(param_1 + 0x58);
  uVar8 = FUN_00938764(lVar7,1,&local_68,0,*(undefined8 *)(param_1 + 8),0);
  if (((uVar8 & 1) != 0) && (plVar6 = *(long **)(lVar7 + 0x28), plVar6 != (long *)0x0)) {
    lVar7 = plVar6[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


