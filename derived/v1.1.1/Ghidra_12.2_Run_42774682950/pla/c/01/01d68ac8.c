/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d68ac8; name: FUN_01d68ac8
 */


void FUN_01d68ac8(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *local_78 [2];
  long *local_68;
  long local_58;
  
  if (((*PTR_DAT_04379618 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379618), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a720,PTR_DAT_04379620,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379618);
  }
  lVar14 = *(long *)PTR_DAT_04379620;
  *(long *)PTR_DAT_04379628 = lVar14;
  *(undefined8 *)(param_1 + 0x8d8) = *(undefined8 *)(lVar14 + 0x108);
  lVar14 = *param_2;
  if (lVar14 != 0) {
    lVar15 = *(long *)(lVar14 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01d68de4;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar14;
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  lVar14 = FUN_00bd1b18(*(long *)(param_1 + 0x68) + 0xf0,local_78);
  if (lVar14 != 0) {
    lVar15 = *(long *)(lVar14 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01d68de4;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0x170);
  *(long *)(param_1 + 0x170) = lVar14;
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  lVar14 = FUN_01d86e18(*(long *)(param_1 + 0x68) + 0xf0,local_78);
  if (lVar14 != 0) {
    lVar15 = *(long *)(lVar14 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01d68de4;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0x178);
  *(long *)(param_1 + 0x178) = lVar14;
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
    }
  }
  lVar14 = FUN_01d87290(*(long *)(param_1 + 0x68) + 0xf0,local_78);
  if (lVar14 != 0) {
    lVar15 = *(long *)(lVar14 + 0x58);
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_01d68de4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar12 = *(long **)(param_1 + 0x7e8);
  *(long *)(param_1 + 0x7e8) = lVar14;
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))();
      lVar14 = *(long *)(param_1 + 0x90);
      pbVar5 = PTR_DAT_043794d0;
      puVar6 = (undefined8 *)PTR_DAT_043794d8;
      pbVar7 = PTR_DAT_043796e0;
      puVar8 = (undefined8 *)PTR_DAT_043796e8;
      goto joined_r0x01d68c4c;
    }
  }
  lVar14 = *(long *)(param_1 + 0x90);
  pbVar5 = PTR_DAT_043794d0;
  puVar6 = (undefined8 *)PTR_DAT_043794d8;
  pbVar7 = PTR_DAT_043796e0;
  puVar8 = (undefined8 *)PTR_DAT_043796e8;
joined_r0x01d68c4c:
  PTR_DAT_043794d0 = pbVar5;
  PTR_DAT_043794d8 = (undefined *)puVar6;
  PTR_DAT_043796e0 = pbVar7;
  PTR_DAT_043796e8 = (undefined *)puVar8;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar11 = *(int *)(lVar14 + 0xc);
    do {
      puVar17 = *(undefined8 **)(lVar14 + 0x10);
      if (((*pbVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar7), iVar10 != 0)) {
        if (((*pbVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar5), iVar10 != 0)) {
          uVar13 = FUN_0087f8f0();
          *puVar6 = uVar13;
          __cxa_guard_release(pbVar5);
        }
        *puVar8 = puVar6;
        __cxa_guard_release(pbVar7);
      }
      while( true ) {
        if (puVar17 == (undefined8 *)0x0) {
          return;
        }
        if (puVar17 == puVar8) break;
        puVar17 = (undefined8 *)*puVar17;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          plVar12 = (long *)(lVar14 + -0x50);
          if (lVar14 == 0) {
            return;
          }
          FUN_0199f9a0(local_78,plVar12);
          if (local_78[0] == (long *)0x0) {
            local_68 = (long *)0x0;
          }
          else {
            FUN_0198e030(&local_68);
            plVar9 = local_78[0];
            if (local_78[0] != (long *)0x0) {
              plVar2 = local_78[0] + 1;
              do {
                iVar11 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 == 0) {
                local_78[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_58 = *plVar9;
                FUN_02a44274(lVar15 + 0xd8,&local_58);
              }
            }
          }
          if (local_68 != (long *)0x0) {
            lVar15 = *(long *)(param_1 + 0x68);
            lVar16 = local_68[0xe];
            if (*(long *)(lVar15 + 0x318) == 0) {
              local_78[0] = (long *)0x0;
            }
            else {
              FUN_00da9c7c(local_78);
            }
            FUN_02a5ca68(local_78[0],*(undefined4 *)(lVar15 + 0x328),*(undefined4 *)(lVar16 + 0x328)
                        );
            if (local_78[0] != (long *)0x0) {
              lVar15 = local_78[0][0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*local_78[0] + 0x20))();
              }
            }
            if (local_68 != (long *)0x0) {
              lVar15 = local_68[0xb];
              piVar1 = (int *)(lVar15 + 0xc);
              do {
                iVar11 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 + -1 == 0) {
                *(undefined8 *)(lVar15 + 0x18) = 0;
                (**(code **)(*local_68 + 0x20))();
              }
            }
          }
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar10;
    } while (iVar10 != 0);
  }
  return;
}


