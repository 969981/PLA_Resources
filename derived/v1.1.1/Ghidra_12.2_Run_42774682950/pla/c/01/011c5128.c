/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c5128; name: FUN_011c5128
 */


void FUN_011c5128(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  FUN_00d7331c(param_1,0);
  FUN_00d42690(param_1,1,1);
  local_50 = 0x25e83e10169ed72d;
  pcStack_48 = "PLAY_UI_BATTLE_SKILLS_SELECT";
  local_40 = 0x1c;
  local_38 = (long *)0x0;
  FUN_028354b0(&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar11 = *(long **)(lVar8 + 0x318);
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(char *)((long)plVar11 + 0x69) != '\0') && (*(char *)(param_1 + 0x940) == '\0')) {
    local_50 = DAT_041f6df0;
    pcStack_48 = PTR_s_anime_L_wazainfo_00_wake_041f6df8;
    local_40 = DAT_041f6e00;
    local_38 = (long *)0x0;
    FUN_0283b1e8(*(undefined8 *)(param_1 + 0x7a0),&local_50);
    plVar9 = *(long **)(*(long *)(param_1 + 0x7a0) + 0x148);
    lVar8 = *(long *)(*(long *)(param_1 + 0x7a0) + 0x150);
    if ((lVar8 != 0) && (*plVar9 != DAT_041f6d48)) {
      plVar10 = plVar9 + lVar8 * 6;
      lVar8 = lVar8 * 0x30;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) {
          plVar9 = plVar10;
          break;
        }
        plVar3 = plVar9 + 6;
        plVar1 = plVar9 + 6;
        plVar9 = plVar3;
      } while (*plVar1 != DAT_041f6d48);
    }
    *(byte *)(plVar9[4] + 0x58) = *(byte *)(plVar9[4] + 0x58) | 1;
    if (*(char *)(param_1 + 0x800) == '\0') {
      *(undefined1 *)(param_1 + 0x800) = 1;
      local_50 = DAT_041f6ec8;
      pcStack_48 = PTR_s_anime_L_wazamode_info_00_wake_041f6ed0;
      local_40 = DAT_041f6ed8;
      local_38 = (long *)0x0;
      FUN_0283b1e8(*(undefined8 *)(param_1 + 0x7c0),&local_50);
      if ((*(int *)(param_1 + 0x7f8) == 0) && (*(int *)(param_1 + 0x7fc) != 0)) {
        plVar9 = *(long **)(*(long *)(param_1 + 0x7c0) + 0x148);
        lVar8 = *(long *)(*(long *)(param_1 + 0x7c0) + 0x150);
        if ((lVar8 != 0) && (*plVar9 != DAT_041f6e98)) {
          plVar10 = plVar9 + lVar8 * 6;
          lVar8 = lVar8 * 0x30;
          do {
            lVar8 = lVar8 + -0x30;
            if (lVar8 == 0) {
              plVar9 = plVar10;
              break;
            }
            plVar3 = plVar9 + 6;
            plVar1 = plVar9 + 6;
            plVar9 = plVar3;
          } while (*plVar1 != DAT_041f6e98);
        }
        *(byte *)(plVar9[4] + 0x58) =
             *(byte *)(plVar9[4] + 0x58) & 0xfe | *(byte *)(param_1 + 0x800);
      }
    }
    *(undefined1 *)(param_1 + 0x940) = 1;
  }
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  return;
}


