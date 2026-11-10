/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b32300; name: FUN_01b32300
 */


void FUN_01b32300(long param_1,byte param_2)

{
  int *piVar1;
  long *plVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined1 auStack_a0 [24];
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  pbVar3 = (byte *)(param_1 + 0x2800);
  if (((*pbVar3 != (param_2 & 1)) && (lVar15 = *(long *)(param_1 + 0x1f0), lVar15 != 0)) &&
     (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar9 = *(int *)(lVar15 + 0xc);
    do {
      plVar17 = *(long **)(lVar15 + 0x10);
      lVar10 = FUN_00a3edb8();
      while( true ) {
        if (plVar17 == (long *)0x0) {
          return;
        }
        if (plVar17 == (long *)lVar10) break;
        plVar17 = (long *)*plVar17;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar9) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar9 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          plVar17 = (long *)(lVar15 + -0x50);
          if (lVar15 == 0) {
            return;
          }
          if (*(int *)(lVar15 + 0x1a8) == 3) {
            local_70 = (long *)&DAT_4355e65a738c7bd3;
            pcStack_68 = "shoes";
            local_60 = 5;
            local_58 = (long *)0x0;
            puVar11 = (undefined8 *)FUN_02a9b144(plVar17,&local_70);
            plVar16 = (long *)*puVar11;
            if (plVar16 != (long *)0x0) {
              plVar14 = plVar16 + 10;
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar8) {
                  *(int *)plVar14 = (int)*plVar14 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            if (local_58 != (long *)0x0) {
              (**(code **)(*local_58 + 0x20))();
            }
            if (plVar16 == (long *)0x0) goto LAB_01b325cc;
            *pbVar3 = param_2 & 1;
            local_78 = *(long **)(param_1 + 0x1808);
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x18))();
            }
            local_80 = *(long **)(param_1 + 0x1810);
            if (local_80 == (long *)0x0) {
              bVar5 = *pbVar3;
            }
            else {
              (**(code **)(*local_80 + 0x18))();
              bVar5 = *pbVar3;
            }
            if (bVar5 != 0) {
              if (((*PTR_DAT_04379cd0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379cd0);
              }
              uVar12 = *(undefined8 *)PTR_DAT_04379cd8;
              *(undefined8 *)PTR_DAT_04379ce0 = uVar12;
              FUN_02a47cd8(&local_70,uVar12,"barefoot");
              plVar2 = local_70;
              plVar14 = local_80;
              local_80 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x20))();
              }
              local_80 = plVar2;
            }
            if (((*(long *)(param_1 + 0x230) != 0) &&
                (*(int *)(*(long *)(param_1 + 0x230) + 0xc) != 0)) &&
               ((lVar10 = *(long *)(param_1 + 0x230), lVar10 != 0 && (*(int *)(lVar10 + 0xc) != 0)))
               ) {
              piVar1 = (int *)(lVar10 + 0xc);
              iVar9 = *(int *)(lVar10 + 0xc);
              do {
                plVar14 = *(long **)(lVar10 + 0x10);
                lVar13 = FUN_01091efc();
                while( true ) {
                  if (plVar14 == (long *)0x0) goto LAB_01b324d0;
                  if (plVar14 == (long *)lVar13) break;
                  plVar14 = (long *)*plVar14;
                }
                iVar6 = *piVar1;
                if (iVar6 == iVar9) {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar8) {
                    *piVar1 = iVar9 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') {
                    lVar10 = *(long *)(lVar10 + 0x18);
                    plVar14 = (long *)(lVar10 + -0x50);
                    if (lVar10 != 0) {
                      if (((local_78 != (long *)0x0) && (*(char *)local_78[0xc] != '\0')) ||
                         ((local_80 != (long *)0x0 && (*(char *)local_80[0xc] != '\0')))) {
                        FUN_02a47560(&local_70,&local_78);
                        FUN_02a47560(auStack_a0,&local_80);
                        (**(code **)(*plVar14 + 0xf0))(plVar14,&local_70,auStack_a0);
                        if (local_88 != (long *)0x0) {
                          (**(code **)(*local_88 + 0x20))();
                        }
                        if (local_58 != (long *)0x0) {
                          (**(code **)(*local_58 + 0x20))();
                        }
                      }
                      lVar10 = *(long *)(lVar10 + 8);
                      piVar1 = (int *)(lVar10 + 0xc);
                      do {
                        iVar9 = *piVar1;
                        cVar7 = '\x01';
                        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar8) {
                          *piVar1 = iVar9 + -1;
                          cVar7 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar7 != '\0');
                      if (iVar9 + -1 == 0) {
                        *(undefined8 *)(lVar10 + 0x18) = 0;
                        (**(code **)(*plVar14 + 0x20))(plVar14);
                      }
                    }
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar9 = iVar6;
              } while (iVar6 != 0);
            }
LAB_01b324d0:
            FUN_01b287a0(param_1);
            puVar11 = (undefined8 *)plVar16[0x1d];
            puVar4 = (undefined8 *)plVar16[0x1e];
            if (puVar11 != puVar4) {
              plVar14 = (long *)*puVar11;
              if (plVar14 == (long *)0x0) goto LAB_01b3263c;
              plVar2 = plVar14 + 10;
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              FUN_02b45d0c(plVar14,*pbVar3 == 0);
              do {
                iVar9 = (int)*plVar2 + -1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *(int *)plVar2 = iVar9;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              do {
                if (iVar9 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
                while( true ) {
                  puVar11 = puVar11 + 1;
                  if (puVar11 == puVar4) goto LAB_01b3258c;
                  plVar14 = (long *)*puVar11;
                  if (plVar14 != (long *)0x0) break;
LAB_01b3263c:
                  FUN_02b45d0c(0,*pbVar3 == 0);
                }
                plVar2 = plVar14 + 10;
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *(int *)plVar2 = (int)*plVar2 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                FUN_02b45d0c(plVar14,*pbVar3 == 0);
                do {
                  iVar9 = (int)*plVar2 + -1;
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *(int *)plVar2 = iVar9;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              } while( true );
            }
LAB_01b3258c:
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x20))();
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 0x20))();
            }
            plVar14 = plVar16 + 10;
            do {
              iVar9 = (int)*plVar14 + -1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar8) {
                *(int *)plVar14 = iVar9;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
LAB_01b325cc:
          lVar15 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = iVar9 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))(plVar17);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar6;
    } while (iVar6 != 0);
  }
  return;
}


