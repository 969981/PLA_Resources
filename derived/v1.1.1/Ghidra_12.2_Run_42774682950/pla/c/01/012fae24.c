/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fae24; name: FUN_012fae24
 */


void FUN_012fae24(long param_1,long param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x1b8);
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_02c395d0(plVar9,0,*(int *)(param_2 + 4) * param_3,4,0,1);
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
    if (lVar10 != 0) {
      plVar7 = *(long **)(lVar10 + 0x270);
      if (plVar7 != *(long **)(lVar10 + 0x278)) {
        iVar6 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar7 != 0) {
            plVar2 = (long *)(*plVar7 + 0x58);
          }
          if (*plVar2 == 0x174ce6d3d52313ba) goto LAB_012faf54;
          plVar7 = plVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar7);
      }
    }
    iVar6 = 0;
LAB_012faf54:
    FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar6,plVar9);
    local_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    local_50 = *(undefined8 *)(param_1 + 0x80);
    lVar8 = *(long *)(param_1 + 8);
    local_48 = (long *)0x0;
    lVar11 = *(long *)(lVar8 + 0x1b8);
    uVar5 = *(undefined8 *)(lVar8 + 0x1c0);
    lVar10 = *(long *)(lVar8 + 0x1c8);
    *(undefined4 *)(lVar11 + 0x124) = 0;
    *(undefined2 *)(lVar11 + 0x128) = 0;
    *(undefined4 *)(lVar11 + 300) = 0;
    *(undefined4 *)(lVar11 + 0x134) = 0;
    FUN_02c33414(lVar11,uVar5);
    if (*(char *)(lVar10 + 0x7c) != '\0') {
      **(undefined2 **)(lVar10 + 0x58) = 0;
      *(undefined2 *)(lVar10 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar11,lVar10,uVar5,0,0);
    FUN_0283ce7c(lVar8,&local_60,*(undefined8 *)(lVar8 + 0x1c8),10);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 10;
      do {
        iVar6 = (int)*plVar7 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  return;
}


