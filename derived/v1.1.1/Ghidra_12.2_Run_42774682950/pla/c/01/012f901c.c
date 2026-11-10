/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f901c; name: FUN_012f901c
 */


void FUN_012f901c(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar5 = FUN_012f0944(*(undefined2 *)(param_2 + 4));
    plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_02c395d0(plVar10,0,uVar5,4,0,1);
      lVar11 = plVar10[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
    if (lVar11 != 0) {
      plVar8 = *(long **)(lVar11 + 0x270);
      if (plVar8 != *(long **)(lVar11 + 0x278)) {
        iVar7 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            plVar2 = (long *)(*plVar8 + 0x58);
          }
          if (*plVar2 == 0x174ce6d3d52313ba) goto LAB_012f9150;
          plVar8 = plVar8 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar11 + 0x278) != plVar8);
      }
    }
    iVar7 = 0;
LAB_012f9150:
    FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar7,plVar10);
    local_60 = *(undefined8 *)(param_1 + 0x80);
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    local_50 = *(undefined8 *)(param_1 + 0x90);
    lVar9 = *(long *)(param_1 + 8);
    local_48 = (long *)0x0;
    lVar12 = *(long *)(lVar9 + 0x1b8);
    uVar6 = *(undefined8 *)(lVar9 + 0x1c0);
    lVar11 = *(long *)(lVar9 + 0x1c8);
    *(undefined4 *)(lVar12 + 0x124) = 0;
    *(undefined2 *)(lVar12 + 0x128) = 0;
    *(undefined4 *)(lVar12 + 300) = 0;
    *(undefined4 *)(lVar12 + 0x134) = 0;
    FUN_02c33414(lVar12,uVar6);
    if (*(char *)(lVar11 + 0x7c) != '\0') {
      **(undefined2 **)(lVar11 + 0x58) = 0;
      *(undefined2 *)(lVar11 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar12,lVar11,uVar6,0,0);
    FUN_0283ce7c(lVar9,&local_60,*(undefined8 *)(lVar9 + 0x1c8),10);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 10;
      do {
        iVar7 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return;
}


