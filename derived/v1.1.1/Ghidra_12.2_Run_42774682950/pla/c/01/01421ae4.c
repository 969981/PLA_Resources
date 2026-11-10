/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01421ae4; name: FUN_01421ae4
 */


void FUN_01421ae4(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar12 = param_1[1];
  plVar11 = *(long **)(*param_1 + 0x1c0);
  if (plVar11 == (long *)0x0) {
    lVar10 = *(long *)(lVar12 + 0xb0);
    if (lVar10 != 0) {
      plVar11 = *(long **)(lVar10 + 0x270);
      if (plVar11 != *(long **)(lVar10 + 0x278)) {
        iVar8 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar3 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar3 == 0x2b6fd1c0611a8fe2) goto LAB_01421d78;
          plVar11 = plVar11 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar11);
      }
    }
    iVar8 = 0;
LAB_01421d78:
    FUN_02c2e33c(lVar12,iVar8,0);
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
    lVar10 = *(long *)(lVar12 + 0xb0);
    if (lVar10 != 0) {
      plVar9 = *(long **)(lVar10 + 0x270);
      if (plVar9 != *(long **)(lVar10 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar2 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar2 == 0x2b6fd1c0611a8fe2) goto LAB_01421b88;
          plVar9 = plVar9 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar9);
      }
    }
    iVar8 = 0;
LAB_01421b88:
    FUN_02c2e33c(lVar12,iVar8,plVar11);
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  plVar11 = *(long **)(*param_1 + 0x1b8);
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
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
  uVar6 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),0xf);
  FUN_02c395d0(plVar11,0,uVar6,3,0,1);
  lVar12 = (ulong)*(byte *)(param_1 + 7) * 0x1f8;
  lVar10 = *param_1;
  local_60 = *(undefined8 *)(&DAT_0420e278 + lVar12);
  puStack_58 = (&PTR_s_pane_L_list_base_00_T_lv_00_0420e280)[(ulong)*(byte *)(param_1 + 7) * 0x3f];
  local_50 = *(undefined8 *)(&DAT_0420e288 + lVar12);
  local_48 = (long *)0x0;
  lVar13 = *(long *)(lVar10 + 0x1b8);
  uVar7 = *(undefined8 *)(lVar10 + 0x1c0);
  lVar12 = *(long *)(lVar10 + 0x1c8);
  *(undefined4 *)(lVar13 + 0x124) = 0;
  *(undefined2 *)(lVar13 + 0x128) = 0;
  *(undefined4 *)(lVar13 + 300) = 0;
  *(undefined4 *)(lVar13 + 0x134) = 0;
  FUN_02c33414(lVar13,uVar7);
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar13,lVar12,uVar7,0,0);
  FUN_0283ce7c(lVar10,&local_60,*(undefined8 *)(lVar10 + 0x1c8),10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  return;
}


