/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fb060; name: FUN_012fb060
 */


void FUN_012fb060(int *param_1,undefined2 *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (*(long *)(param_1 + 2) != 0) {
    uVar3 = *param_2;
    if (*param_1 == 0) {
      iVar6 = FUN_012f0290(uVar3);
      iVar7 = FUN_012f0944(uVar3);
      iVar7 = iVar7 + iVar6;
    }
    else {
      if (*param_1 != 1) goto LAB_012fb2cc;
      iVar7 = FUN_012f0290(uVar3);
    }
    plVar11 = *(long **)(*(long *)(param_1 + 2) + 0x1b8);
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_012fb2cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar8;
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
      FUN_02c395d0(plVar11,0,iVar7,4,0,1);
      lVar12 = plVar11[0xb];
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
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    plVar11 = *(long **)(*(long *)(param_1 + 2) + 0x1c0);
    if (plVar11 != (long *)0x0) {
      plVar9 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar12 = *(long *)(*(long *)(param_1 + 4) + 0xb0);
    if (lVar12 != 0) {
      plVar9 = *(long **)(lVar12 + 0x270);
      if (plVar9 != *(long **)(lVar12 + 0x278)) {
        iVar7 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar2 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar2 == 0x174ce6d3d52313ba) goto LAB_012fb1ac;
          plVar9 = plVar9 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar12 + 0x278) != plVar9);
      }
    }
    iVar7 = 0;
LAB_012fb1ac:
    FUN_02c2e33c(*(long *)(param_1 + 4),iVar7,plVar11);
    local_60 = *(undefined8 *)(param_1 + 0x22);
    uStack_58 = *(undefined8 *)(param_1 + 0x24);
    local_50 = *(undefined8 *)(param_1 + 0x26);
    lVar10 = *(long *)(param_1 + 2);
    local_48 = (long *)0x0;
    lVar13 = *(long *)(lVar10 + 0x1b8);
    uVar8 = *(undefined8 *)(lVar10 + 0x1c0);
    lVar12 = *(long *)(lVar10 + 0x1c8);
    *(undefined4 *)(lVar13 + 0x124) = 0;
    *(undefined2 *)(lVar13 + 0x128) = 0;
    *(undefined4 *)(lVar13 + 300) = 0;
    *(undefined4 *)(lVar13 + 0x134) = 0;
    FUN_02c33414(lVar13,uVar8);
    if (*(char *)(lVar12 + 0x7c) != '\0') {
      **(undefined2 **)(lVar12 + 0x58) = 0;
      *(undefined2 *)(lVar12 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar13,lVar12,uVar8,0,0);
    FUN_0283ce7c(lVar10,&local_60,*(undefined8 *)(lVar10 + 0x1c8),10);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (plVar11 != (long *)0x0) {
      plVar9 = plVar11 + 10;
      do {
        iVar7 = (int)*plVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  return;
}


