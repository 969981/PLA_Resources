/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dbad18; name: FUN_01dbad18
 */


uint FUN_01dbad18(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar11 = *(long *)(param_1 + 0x120);
  if (((*(char *)(lVar11 + 0x4b0) == '\0') || (**(char **)(lVar11 + 0x4c0) == '\0')) ||
     (*(char *)(param_1 + 0x150) != '\0')) {
    uVar6 = 1;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x140);
    if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) {
LAB_01dbad64:
      uVar6 = 0;
    }
    else {
      piVar1 = (int *)(lVar10 + 0xc);
      iVar12 = *(int *)(lVar10 + 0xc);
      do {
        plVar13 = *(long **)(lVar10 + 0x10);
        plVar7 = (long *)FUN_00a3edb8();
        if (plVar13 == (long *)0x0) goto LAB_01dbad64;
        while (plVar13 != plVar7) {
          plVar13 = (long *)*plVar13;
          uVar6 = 0;
          if (plVar13 == (long *)0x0) goto LAB_01dbad68;
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x18);
            plVar7 = (long *)(lVar10 + -0x50);
            uVar6 = 0;
            if (lVar10 != 0) {
              uVar6 = FUN_02a9b49c(plVar7);
              uVar8 = FUN_02a9b49c(plVar7);
              if ((uVar8 & 1) != 0) {
                *(undefined1 *)(param_1 + 0x150) = 1;
                FUN_02a9d180(plVar7,*(undefined1 *)(lVar11 + 0x4e4));
                if (0 < *(int *)(lVar10 + 0x220)) {
                  iVar12 = 0;
                  do {
                    puVar9 = (undefined8 *)FUN_02a9b354(plVar7,iVar12);
                    local_80 = *puVar9;
                    local_78 = puVar9[1];
                    local_70 = puVar9[2];
                    local_68 = (long *)puVar9[3];
                    if (local_68 != (long *)0x0) {
                      (**(code **)(*local_68 + 0x18))();
                    }
                    puVar9 = (undefined8 *)FUN_02a9b144(plVar7,&local_80);
                    plVar13 = (long *)*puVar9;
                    if (plVar13 != (long *)0x0) {
                      plVar2 = plVar13 + 10;
                      do {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar5) {
                          *(int *)plVar2 = (int)*plVar2 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    local_a0 = &DAT_45e350da1d34436d;
                    puStack_98 = &DAT_03a834e8;
                    local_90 = 0x1f;
                    local_88 = (long *)0x0;
                    local_a4 = *(undefined4 *)(lVar11 + 0x4e0);
                    local_c8 = &DAT_cbf29ce484222645;
                    puStack_c0 = &DAT_03996322;
                    local_b8 = 0;
                    local_b0 = (long *)0x0;
                    FUN_02b39d68(plVar13,&local_a0,&local_a4,&local_c8);
                    if (local_b0 != (long *)0x0) {
                      (**(code **)(*local_b0 + 0x20))();
                    }
                    if (local_88 != (long *)0x0) {
                      (**(code **)(*local_88 + 0x20))();
                    }
                    if (plVar13 != (long *)0x0) {
                      plVar2 = plVar13 + 10;
                      do {
                        iVar3 = (int)*plVar2 + -1;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar5) {
                          *(int *)plVar2 = iVar3;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (iVar3 == 0) {
                        (**(code **)(*plVar13 + 0x10))(plVar13);
                      }
                    }
                    if (local_68 != (long *)0x0) {
                      (**(code **)(*local_68 + 0x20))();
                    }
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < *(int *)(lVar10 + 0x220));
                }
              }
              lVar11 = *(long *)(lVar10 + 8);
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar7 + 0x20))(plVar7);
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        uVar6 = 0;
        iVar12 = iVar3;
      } while (iVar3 != 0);
    }
  }
LAB_01dbad68:
  return uVar6 & 1;
}


