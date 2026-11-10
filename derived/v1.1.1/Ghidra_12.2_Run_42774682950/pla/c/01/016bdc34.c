/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016bdc34; name: FUN_016bdc34
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_016bdc34(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  FUN_0165aaf8(local_70);
  puVar7 = local_70[0];
  puVar11 = PTR_DAT_04380750;
  puVar10 = PTR_DAT_04380748;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  if (local_70[0] == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)((long)local_70[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_70[0] + 0xc);
    iVar13 = *(int *)((long)local_70[0] + 0xc);
    do {
      plVar22 = (long *)puVar7[2];
      if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar9 = uVar14;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar11 = puVar9;
        __cxa_guard_release(puVar10);
      }
      while( true ) {
        if (plVar22 == (long *)0x0) goto LAB_016be280;
        if (plVar22 == (long *)puVar11) break;
        plVar22 = (long *)*plVar22;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = puVar7[3];
          plVar22 = (long *)0x0;
          puVar7 = local_70[0];
          if (lVar15 != 0) {
            plVar22 = (long *)(lVar15 + -0x50);
          }
          goto joined_r0x016bdd08;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar12;
    } while (iVar12 != 0);
  }
LAB_016be280:
  plVar22 = (long *)0x0;
  puVar7 = local_70[0];
joined_r0x016bdd08:
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_58 = *puVar7;
      FUN_02a44274(lVar15 + 0xd8,&local_58);
    }
  }
  if (plVar22 == (long *)0x0) {
    return;
  }
  uVar16 = plVar22[0x28];
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((uint)uVar16 - 1) & 3;
    }
    else {
      uVar18 = 3;
      if (uVar16 < 4) {
        uVar2 = (uint)uVar16 & 0xff;
        uVar5 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar5 = 3 / uVar2;
        }
        uVar18 = (ulong)(3 - uVar5 * uVar2);
      }
    }
    plVar19 = *(long **)(plVar22[0x27] + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar19[1] == 3) {
            if ((int)plVar19[2] == 3) goto LAB_016bde20;
          }
          else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar19[1];
          if (uVar17 == 3) {
            if ((int)plVar19[2] == 3) goto LAB_016bde20;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar6 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
LAB_016be340:
  FUN_016c1a70();
LAB_016be344:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_016bde20:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    lVar15 = plVar19[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_016be344;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar14;
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
  lVar15 = FUN_016c1d30(plVar19 + 10);
  plVar21 = *(long **)(lVar15 + 0x98);
joined_r0x016bde6c:
  if (plVar21 != (long *)0x0) {
    do {
      plVar20 = (long *)plVar21[3];
      if (plVar20 == (long *)0x0) {
        FUN_01ad8888(0,param_1);
        plVar21 = (long *)*plVar21;
      }
      else {
        lVar15 = plVar20[0xb];
        if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_016be344;
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar14;
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
        lVar15 = plVar20[0xb];
        if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_016be344;
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar14;
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
        FUN_01ad8888(plVar20,param_1);
        lVar15 = plVar20[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar20 + 0x20))(plVar20);
        }
        lVar15 = plVar20[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) goto LAB_016be190;
        plVar21 = (long *)*plVar21;
      }
      if (plVar21 == (long *)0x0) break;
    } while( true );
  }
  if (plVar19 == (long *)0x0) {
LAB_016bdf54:
    uVar16 = plVar22[0x28];
  }
  else {
    lVar15 = plVar19[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 != 0) goto LAB_016bdf54;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
    uVar16 = plVar22[0x28];
  }
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = (ulong)((uint)uVar16 - 1) & 5;
    }
    else {
      uVar18 = 5;
      if (uVar16 < 6) {
        uVar2 = (uint)uVar16 & 0xff;
        uVar5 = 0;
        if ((uVar16 & 0xff) != 0) {
          uVar5 = 5 / uVar2;
        }
        uVar18 = (ulong)(5 - uVar5 * uVar2);
      }
    }
    plVar19 = *(long **)(plVar22[0x27] + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (1 < uVar17) {
        do {
          uVar17 = plVar19[1];
          if (uVar17 == 5) {
            if ((int)plVar19[2] == 5) goto LAB_016be010;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar6 * uVar16;
            }
            if (uVar17 != uVar18) goto LAB_016be340;
          }
          plVar19 = (long *)*plVar19;
          if (plVar19 == (long *)0x0) goto LAB_016be340;
        } while( true );
      }
      do {
        if (plVar19[1] == 5) {
          if ((int)plVar19[2] == 5) goto LAB_016be010;
        }
        else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
        plVar19 = (long *)*plVar19;
      } while (plVar19 != (long *)0x0);
    }
  }
  goto LAB_016be340;
LAB_016be190:
  *(undefined8 *)(lVar15 + 0x18) = 0;
  (**(code **)(*plVar20 + 0x20))(plVar20);
  plVar21 = (long *)*plVar21;
  goto joined_r0x016bde6c;
LAB_016be010:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    lVar15 = plVar19[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_016be344;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar14;
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
  lVar15 = FUN_016c1e60(plVar19 + 10);
  plVar21 = *(long **)(lVar15 + 0x98);
  while( true ) {
    while( true ) {
      if (plVar21 == (long *)0x0) {
        if (plVar19 != (long *)0x0) {
          lVar15 = plVar19[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
          }
        }
        lVar15 = plVar22[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
          return;
        }
        return;
      }
      plVar20 = *(long **)((long)plVar21 + 0x18);
      if (plVar20 != (long *)0x0) break;
      FUN_01add924(0,param_1);
      plVar21 = (long *)*plVar21;
    }
    lVar15 = plVar20[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) break;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar14;
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
    lVar15 = plVar20[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) break;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar14;
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
    FUN_01add924(plVar20,param_1);
    lVar15 = plVar20[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
    lVar15 = plVar20[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
      plVar21 = (long *)*plVar21;
    }
    else {
      plVar21 = (long *)*plVar21;
    }
  }
  goto LAB_016be344;
}


