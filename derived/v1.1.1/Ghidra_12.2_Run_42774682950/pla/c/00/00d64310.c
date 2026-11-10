/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d64310; name: FUN_00d64310
 */


void FUN_00d64310(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined1 *local_48;
  char *local_40;
  char *local_38;
  long *local_30;
  long *local_28;
  
  local_48 = &DAT_12f480e8b0aebe7d;
  local_40 = "appli_hud";
  local_38 = (char *)0x9;
  local_30 = (long *)0x0;
  local_70 = -0x609ab686f76faa90;
  pcStack_68 = "hud_window_close_wait";
  local_60 = 0x15;
  local_58 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar6 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar6;
  FUN_00d7d9e4(&local_50,uVar6,&local_48);
  if (local_50 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00d78f50(local_50,&local_70);
    if (local_50 != (long *)0x0) {
      plVar8 = local_50 + 10;
      do {
        iVar5 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x5b8) = uVar4;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x440) + 0x58);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
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
  }
  local_70 = 0;
  local_40 = (char *)0xfce7cbad163a3d9b;
  local_38 = "CloseWindow";
  local_30 = (long *)0xb;
  local_28 = (long *)0x0;
  local_48 = (undefined1 *)&local_70;
  FUN_00d6190c(plVar8,&local_48,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  lVar9 = local_70;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
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
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  if (lVar9 != 0) {
    FUN_0280779c(lVar9,0);
  }
  return;
}


