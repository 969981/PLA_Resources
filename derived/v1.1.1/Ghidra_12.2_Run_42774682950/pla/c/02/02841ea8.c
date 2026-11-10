/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02841ea8; name: FUN_02841ea8
 */


void FUN_02841ea8(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *local_80;
  long *local_78 [4];
  long *local_58;
  long *local_48;
  char *local_38;
  
  local_38 = "bin/appli/uikit/cursor/bin/cursor_lyt.bin";
  FUN_009f1b84(local_78,&local_38);
  FUN_028421cc(&local_48,param_1 + 8,local_78,param_2);
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78[0] != (long *)0x0) {
    (**(code **)(*local_78[0] + 0x20))();
  }
  local_38 = "bin/appli/uikit/context/bin/context_00_lyt.bin";
  FUN_009f1b84(local_78,&local_38);
  FUN_028421cc(&local_80,param_1 + 0x38,local_78,param_2);
  if (local_80 != (long *)0x0) {
    lVar9 = local_80[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78[0] != (long *)0x0) {
    (**(code **)(*local_78[0] + 0x20))();
  }
  puVar4 = PTR_DAT_04387e48;
  if (((*PTR_DAT_04387e48 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04387e48), iVar6 != 0))
  {
    FUN_00100250(&LAB_02842974,PTR_DAT_04387e50,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04387e48);
  }
  puVar5 = PTR_DAT_04387e50;
  DAT_043eb558 = *(undefined8 *)PTR_DAT_04387e50;
  FUN_02847dc0(DAT_043eb558,0,param_2);
  if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04387e48), iVar6 != 0)) {
    FUN_00100250(&LAB_02842974,PTR_DAT_04387e50,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04387e48);
  }
  DAT_043eb558 = *(undefined8 *)puVar5;
  FUN_02847dc0(DAT_043eb558,1,param_2);
  local_38 = "bin/appli/icon_pokemon/pokecaplist.bin";
  FUN_009f1b84(local_78,&local_38);
  uVar7 = FUN_00938764(param_1 + 0x78,1,local_78,0,param_2,0);
  if (((uVar7 & 1) != 0) && (plVar10 = *(long **)(param_1 + 0xa0), plVar10 != (long *)0x0)) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = plVar10[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_78[0] != (long *)0x0) {
    (**(code **)(*local_78[0] + 0x20))();
  }
  return;
}


