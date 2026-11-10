/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02582a00; name: FUN_02582a00
 */


void FUN_02582a00(long param_1,long *param_2,undefined4 param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long local_38;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x58);
    if (lVar9 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = *(long **)(lVar9 + 0x68);
      if (plVar12 != (long *)0x0) {
        plVar11 = plVar12 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *(int *)plVar11 = (int)*plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    lVar9 = plVar12[0x16];
    iVar8 = 0;
    if (lVar9 != 0) {
      plVar11 = *(long **)(lVar9 + 0x270);
      if (plVar11 != *(long **)(lVar9 + 0x278)) {
        iVar8 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar11 != 0) {
            plVar2 = (long *)(*plVar11 + 0x58);
          }
          if (*plVar2 == *param_2) goto LAB_02582aa8;
          plVar11 = plVar11 + 1;
          iVar8 = iVar8 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar11);
      }
      iVar8 = 0;
    }
LAB_02582aa8:
    FUN_02c2e33c(plVar12,iVar8,*(undefined8 *)(param_1 + 0x98));
    if (plVar12 != (long *)0x0) {
      plVar11 = plVar12 + 10;
      do {
        iVar8 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    plVar12 = (long *)FUN_00d48784(&local_68,*(undefined8 *)(param_1 + 8),&DAT_03a7d634);
    if (plVar12 != (long *)0x0) {
      plVar11 = plVar12 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar7 = *(undefined8 *)(param_1 + 0x98);
    lVar9 = *(long *)(param_1 + 0xa0);
    *(undefined4 *)(lVar9 + 0x124) = 0;
    *(undefined2 *)(lVar9 + 0x128) = 0;
    *(undefined4 *)(lVar9 + 300) = 0;
    *(undefined4 *)(lVar9 + 0x134) = 0;
    FUN_02c33414(lVar9,uVar7);
    if (*(char *)((long)plVar12 + 0x7c) != '\0') {
      *(undefined2 *)plVar12[0xb] = 0;
      *(undefined2 *)((long)plVar12 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar9,plVar12,uVar7,0,0);
    plVar11 = *(long **)(*(long *)(param_1 + 0x60) + 0x58);
    if (plVar11 != (long *)0x0) {
      lVar9 = plVar11[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_68 = &local_38;
    local_38 = 0;
    local_60 = 0x60dd9a51c30b7a73;
    pcStack_58 = "ContextMenu";
    local_50 = 0xb;
    local_48 = (long *)0x0;
    FUN_00d4747c(plVar11,&local_68,0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    lVar9 = local_38;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
    }
    uVar3 = *(uint *)(param_1 + 0x90);
    plVar11 = plVar12 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar9 = *(long *)(lVar9 + (ulong)uVar3 * 8 + 0x470);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      uVar6 = FUN_02c30580(*(undefined8 *)(lVar9 + 0x58),plVar12[0xb],*(undefined2 *)(lVar9 + 0x78))
      ;
      *(undefined2 *)(lVar9 + 0x7a) = uVar6;
    }
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x90) * 4 + 0x6c) = param_3;
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    do {
      iVar8 = (int)*plVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return;
}


