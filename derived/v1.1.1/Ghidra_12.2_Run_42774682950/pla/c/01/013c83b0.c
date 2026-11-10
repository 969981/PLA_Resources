/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c83b0; name: FUN_013c83b0
 */


void FUN_013c83b0(long param_1)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  undefined4 uVar12;
  long *local_68;
  long local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  int local_40;
  undefined1 local_3c;
  undefined1 auStack_38 [8];
  
  if (*(long **)(param_1 + 0x5c8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x5c8) + 0x10))();
  }
  if (*(long **)(param_1 + 0x5e8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x5e8) + 0x10))();
  }
  if (*(int *)(param_1 + 0x700) == 0) {
    lVar7 = *(long *)(param_1 + 0x5c8);
joined_r0x013c8430:
    if (lVar7 != 0) {
      iVar11 = (int)((ulong)(*(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 8)) >> 2) * 0x286bca1b;
      goto LAB_013c8438;
    }
  }
  else if (*(int *)(param_1 + 0x700) != 2) {
    lVar7 = *(long *)(param_1 + 0x5e8);
    goto joined_r0x013c8430;
  }
  iVar11 = 0;
LAB_013c8438:
  lVar7 = *(long *)(*(long *)(param_1 + 0x5c0) + 0xb0);
  if (lVar7 != 0) {
    *(long *)(*(long *)(param_1 + 0x5c0) + 0xb0) = lVar7 - ((lVar7 << 3) >> 3);
  }
  if (iVar11 != 0) {
    iVar9 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x5c0);
      local_3c = 0;
      uVar3 = *(ulong *)(lVar7 + 0xb0);
      local_40 = iVar9;
      if (uVar3 < *(ulong *)(lVar7 + 0xb8)) {
        FUN_011d216c(lVar7 + 0x88,*(long *)(lVar7 + 0xa8) + uVar3 * 8,&local_40);
        *(long *)(lVar7 + 0xb0) = *(long *)(lVar7 + 0xb0) + 1;
      }
      else {
        local_60 = *(long *)(lVar7 + 0xa8) + uVar3 * 8;
        FUN_011d20a4(auStack_38,lVar7 + 0x88,&local_60,1,&local_40);
      }
      iVar9 = iVar9 + 1;
    } while (iVar11 != iVar9);
  }
  uVar12 = 0;
  if (iVar11 == 0) {
    uVar12 = 0x3f800000;
  }
  *(bool *)(param_1 + 0x705) = iVar11 != 0;
  local_60 = 0x6d5a4f97b428fbd3;
  pcStack_58 = "anime_swich_noitem";
  local_50 = 0x12;
  local_48 = (long *)0x0;
  FUN_00d2e4b8(uVar12,param_1 + 0x180,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      iVar9 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    local_60 = -0x27f1251b843d6ae0;
    pcStack_58 = "pane_N_info_set";
    local_50 = 0xf;
    local_48 = (long *)0x0;
    FUN_0283b11c(plVar10,&local_60,iVar11 != 0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  lVar7 = FUN_013cafb4(param_1);
  if (lVar7 != 0) {
    local_68 = *(long **)(param_1 + 0x5c0);
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar6;
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
    FUN_0281e3a4(lVar7,&local_68);
    if (local_68 != (long *)0x0) {
      lVar8 = local_68[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    FUN_0281e398(lVar7,0);
    FUN_0281857c(lVar7);
  }
  return;
}


