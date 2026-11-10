/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01420b98; name: FUN_01420b98
 */


void FUN_01420b98(long *param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar10 = *(long **)(*param_1 + 0x1b8);
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_010c5d94(plVar10,0,param_2);
  lVar12 = param_1[1];
  plVar11 = *(long **)(*param_1 + 0x1c0);
  if (plVar11 == (long *)0x0) {
    lVar9 = *(long *)(lVar12 + 0xb0);
    if (lVar9 != 0) {
      plVar11 = *(long **)(lVar9 + 0x270);
      if (plVar11 != *(long **)(lVar9 + 0x278)) {
        iVar7 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar3 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar3 == -0x4327dd5493b84b02) goto LAB_01420e14;
          plVar11 = plVar11 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar11);
      }
    }
    iVar7 = 0;
LAB_01420e14:
    FUN_02c2e33c(lVar12,iVar7,0);
  }
  else {
    plVar3 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = *(long *)(lVar12 + 0xb0);
    if (lVar9 != 0) {
      plVar8 = *(long **)(lVar9 + 0x270);
      if (plVar8 != *(long **)(lVar9 + 0x278)) {
        iVar7 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar2 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar2 == -0x4327dd5493b84b02) goto LAB_01420c90;
          plVar8 = plVar8 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar8);
      }
    }
    iVar7 = 0;
LAB_01420c90:
    FUN_02c2e33c(lVar12,iVar7,plVar11);
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  lVar12 = (ulong)*(byte *)(param_1 + 4) * 0xc0;
  lVar9 = *param_1;
  local_60 = *(undefined8 *)(&DAT_0420df60 + lVar12);
  puStack_58 = (&PTR_s_pane_L_status_button_skill_00_T__0420df68)
               [(ulong)*(byte *)(param_1 + 4) * 0x18];
  local_50 = *(undefined8 *)(&DAT_0420df70 + lVar12);
  local_48 = (long *)0x0;
  lVar13 = *(long *)(lVar9 + 0x1b8);
  uVar6 = *(undefined8 *)(lVar9 + 0x1c0);
  lVar12 = *(long *)(lVar9 + 0x1c8);
  *(undefined4 *)(lVar13 + 0x124) = 0;
  *(undefined2 *)(lVar13 + 0x128) = 0;
  *(undefined4 *)(lVar13 + 300) = 0;
  *(undefined4 *)(lVar13 + 0x134) = 0;
  FUN_02c33414(lVar13,uVar6);
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar13,lVar12,uVar6,0,0);
  FUN_0283ce7c(lVar9,&local_60,*(undefined8 *)(lVar9 + 0x1c8),10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  return;
}


