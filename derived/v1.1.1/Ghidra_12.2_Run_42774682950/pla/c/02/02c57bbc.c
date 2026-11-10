/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c57bbc; name: FUN_02c57bbc
 */


/* WARNING: Removing unreachable block (ram,0x02c57d80) */
/* WARNING: Removing unreachable block (ram,0x02c57d84) */
/* WARNING: Removing unreachable block (ram,0x02c57d8c) */
/* WARNING: Removing unreachable block (ram,0x02c57d94) */
/* WARNING: Removing unreachable block (ram,0x02c57d98) */

void FUN_02c57bbc(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 local_70;
  undefined4 uStack_6c;
  long *local_68;
  long *local_58;
  
  lVar12 = 5;
  lVar8 = 4;
LAB_02c57c00:
  plVar11 = (long *)(param_1 + lVar8 * 8 + 0x58);
  iVar6 = FUN_02c6849c(*(undefined8 *)(*plVar11 + 0x98));
  if (iVar6 == 0) {
    lVar13 = *plVar11;
    plVar7 = (long *)0x0;
    *plVar11 = 0;
    lVar14 = lVar8;
    lVar15 = lVar12;
    do {
      plVar11 = (long *)(param_1 + 0x58 + lVar15 * 8);
      plVar3 = (long *)(param_1 + 0x58 + lVar14 * 8);
      *plVar3 = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      lVar9 = *plVar11;
      *plVar11 = 0;
      *plVar3 = lVar9;
      iVar6 = FUN_02c6849c(*(undefined8 *)(lVar9 + 0x98));
      if (iVar6 != 0) {
        local_70 = (undefined4)lVar15;
        uStack_6c = (undefined4)lVar14;
        local_68 = (long *)*plVar3;
        if (local_68 != (long *)0x0) {
          plVar11 = local_68 + 10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *(int *)plVar11 = (int)*plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        for (lVar9 = *(long *)(param_1 + 0x98); lVar9 != param_1 + 0x90;
            lVar9 = *(long *)(lVar9 + 8)) {
          while (*(long *)(lVar9 + 0x10) != 0) {
            FUN_02c59790(&local_58);
            plVar11 = local_58;
            if (local_58 != (long *)0x0) {
              if ((code *)local_58[0x4e] != (code *)0x0) {
                (*(code *)local_58[0x4e])(local_58 + 0x52,&local_70);
              }
              lVar10 = plVar11[0xb];
              piVar2 = (int *)(lVar10 + 0xc);
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
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar11 + 0x20))(plVar11);
              }
            }
            lVar9 = *(long *)(lVar9 + 8);
            if (lVar9 == param_1 + 0x90) goto LAB_02c57d14;
          }
          local_58 = (long *)0x0;
        }
LAB_02c57d14:
        if (local_68 != (long *)0x0) {
          plVar11 = local_68 + 10;
          do {
            iVar6 = (int)*plVar11 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *(int *)plVar11 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
      }
      lVar14 = lVar14 + 1;
      if (lVar14 == 5) goto LAB_02c57db8;
      plVar7 = *(long **)(param_1 + lVar14 * 8 + 0x58);
      lVar15 = lVar15 + 1;
    } while( true );
  }
  goto LAB_02c57bf4;
LAB_02c57db8:
  plVar11 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar11 != (long *)0x0) {
    plVar7 = plVar11 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *(int *)plVar7 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x80) = lVar13;
LAB_02c57bf4:
  lVar12 = lVar12 + -1;
  bVar5 = lVar8 == 0;
  lVar8 = lVar8 + -1;
  if (bVar5) {
    return;
  }
  goto LAB_02c57c00;
}


