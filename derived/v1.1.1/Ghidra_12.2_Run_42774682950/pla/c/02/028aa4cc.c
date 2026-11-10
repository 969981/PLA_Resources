/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028aa4cc; name: FUN_028aa4cc
 */


void FUN_028aa4cc(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  plVar17 = *(long **)(param_1 + 0x70);
  plVar11 = *(long **)(param_1 + 0x78);
  if ((plVar17 != plVar11) && (*plVar17 != *param_2)) {
    do {
      plVar17 = plVar17 + 6;
      if (plVar11 == plVar17) {
        return;
      }
    } while (*plVar17 != *param_2);
  }
  if (plVar11 == plVar17) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0xb0);
  for (lVar14 = *(long *)(param_1 + 0xa8); lVar14 != lVar3; lVar14 = lVar14 + 0x58) {
    plVar11 = *(long **)(lVar14 + 0x20);
    plVar13 = *(long **)(lVar14 + 0x28);
    if ((plVar11 != plVar13) && (*plVar11 != plVar17[4])) {
      do {
        plVar11 = plVar11 + 3;
        if (plVar13 == plVar11) goto LAB_028aa55c;
      } while (*plVar11 != plVar17[4]);
    }
    if (plVar13 != plVar11) {
      plVar15 = plVar11;
      if (plVar11 + 3 == plVar13) {
LAB_028aa614:
        do {
          plVar13 = plVar13 + -3;
          puVar16 = (undefined8 *)*plVar13;
          if (puVar16 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar16 + 1);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              puVar16[2] = 0;
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
              }
              lVar12 = *(long *)puVar7;
              *(long *)puVar8 = lVar12;
              local_68 = *puVar16;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
        } while (plVar13 != plVar11);
      }
      else {
        do {
          plVar11 = plVar15 + 3;
          FUN_00af8c10(plVar15,plVar11);
          *(int *)(plVar15 + 2) = (int)plVar15[5];
          plVar1 = plVar15 + 6;
          plVar15 = plVar11;
        } while (plVar1 != plVar13);
        plVar13 = *(long **)(lVar14 + 0x28);
        if (plVar13 != plVar11) goto LAB_028aa614;
      }
      *(long **)(lVar14 + 0x28) = plVar11;
    }
LAB_028aa55c:
  }
  lVar3 = *(long *)(param_1 + 0xe8);
  for (lVar14 = *(long *)(param_1 + 0xe0); lVar14 != lVar3; lVar14 = lVar14 + 0x58) {
    plVar11 = *(long **)(lVar14 + 0x20);
    plVar13 = *(long **)(lVar14 + 0x28);
    if ((plVar11 != plVar13) && (*plVar11 != plVar17[4])) {
      do {
        plVar11 = plVar11 + 3;
        if (plVar13 == plVar11) goto LAB_028aa694;
      } while (*plVar11 != plVar17[4]);
    }
    if (plVar13 != plVar11) {
      plVar15 = plVar11;
      if (plVar11 + 3 == plVar13) {
LAB_028aa74c:
        do {
          plVar13 = plVar13 + -3;
          puVar16 = (undefined8 *)*plVar13;
          if (puVar16 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar16 + 1);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              puVar16[2] = 0;
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
              }
              lVar12 = *(long *)puVar7;
              *(long *)puVar8 = lVar12;
              local_68 = *puVar16;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
        } while (plVar13 != plVar11);
      }
      else {
        do {
          plVar11 = plVar15 + 3;
          FUN_00af8c10(plVar15,plVar11);
          *(int *)(plVar15 + 2) = (int)plVar15[5];
          plVar1 = plVar15 + 6;
          plVar15 = plVar11;
        } while (plVar1 != plVar13);
        plVar13 = *(long **)(lVar14 + 0x28);
        if (plVar13 != plVar11) goto LAB_028aa74c;
      }
      *(long **)(lVar14 + 0x28) = plVar11;
    }
LAB_028aa694:
  }
  lVar3 = *(long *)(param_1 + 0x120);
  for (lVar14 = *(long *)(param_1 + 0x118); lVar14 != lVar3; lVar14 = lVar14 + 0x58) {
    plVar11 = *(long **)(lVar14 + 0x20);
    plVar13 = *(long **)(lVar14 + 0x28);
    if ((plVar11 != plVar13) && (*plVar11 != plVar17[4])) {
      do {
        plVar11 = plVar11 + 3;
        if (plVar13 == plVar11) goto LAB_028aa7cc;
      } while (*plVar11 != plVar17[4]);
    }
    if (plVar13 != plVar11) {
      plVar15 = plVar11;
      if (plVar11 + 3 == plVar13) {
LAB_028aa884:
        do {
          plVar13 = plVar13 + -3;
          puVar16 = (undefined8 *)*plVar13;
          if (puVar16 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar16 + 1);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              puVar16[2] = 0;
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
              }
              lVar12 = *(long *)puVar7;
              *(long *)puVar8 = lVar12;
              local_68 = *puVar16;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
        } while (plVar13 != plVar11);
      }
      else {
        do {
          plVar11 = plVar15 + 3;
          FUN_00af8c10(plVar15,plVar11);
          *(int *)(plVar15 + 2) = (int)plVar15[5];
          plVar1 = plVar15 + 6;
          plVar15 = plVar11;
        } while (plVar1 != plVar13);
        plVar13 = *(long **)(lVar14 + 0x28);
        if (plVar13 != plVar11) goto LAB_028aa884;
      }
      *(long **)(lVar14 + 0x28) = plVar11;
    }
LAB_028aa7cc:
  }
  lVar3 = *(long *)(param_1 + 0x158);
  for (lVar14 = *(long *)(param_1 + 0x150); lVar14 != lVar3; lVar14 = lVar14 + 0x58) {
    plVar11 = *(long **)(lVar14 + 0x20);
    plVar13 = *(long **)(lVar14 + 0x28);
    if ((plVar11 != plVar13) && (*plVar11 != plVar17[4])) {
      do {
        plVar11 = plVar11 + 3;
        if (plVar13 == plVar11) goto LAB_028aa904;
      } while (*plVar11 != plVar17[4]);
    }
    if (plVar13 != plVar11) {
      plVar15 = plVar11;
      if (plVar11 + 3 == plVar13) {
LAB_028aa9bc:
        do {
          plVar13 = plVar13 + -3;
          puVar16 = (undefined8 *)*plVar13;
          if (puVar16 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar16 + 1);
            do {
              iVar10 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar10 + -1 == 0) {
              puVar16[2] = 0;
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
              }
              lVar12 = *(long *)puVar7;
              *(long *)puVar8 = lVar12;
              local_68 = *puVar16;
              FUN_02a44274(lVar12 + 0xd8,&local_68);
            }
          }
        } while (plVar13 != plVar11);
      }
      else {
        do {
          plVar11 = plVar15 + 3;
          FUN_00af8c10(plVar15,plVar11);
          *(int *)(plVar15 + 2) = (int)plVar15[5];
          plVar1 = plVar15 + 6;
          plVar15 = plVar11;
        } while (plVar1 != plVar13);
        plVar13 = *(long **)(lVar14 + 0x28);
        if (plVar13 != plVar11) goto LAB_028aa9bc;
      }
      *(long **)(lVar14 + 0x28) = plVar11;
    }
LAB_028aa904:
  }
  plVar13 = *(long **)(param_1 + 0x78);
  plVar11 = plVar17 + 6;
  if (plVar11 != plVar13) {
    do {
      *plVar17 = plVar17[6];
      plVar17[1] = plVar17[7];
      plVar11 = (long *)plVar17[3];
      plVar17[2] = plVar17[8];
      plVar17[3] = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      lVar14 = plVar17[9];
      plVar17[9] = 0;
      plVar17[3] = lVar14;
      FUN_00af8c10(plVar17 + 4,plVar17 + 10);
      plVar17 = plVar17 + 6;
    } while (plVar13 + -6 != plVar17);
    plVar11 = *(long **)(param_1 + 0x78);
    if (plVar11 == plVar17) goto LAB_028aab4c;
  }
  puVar9 = PTR_LAB_04379590;
  puVar16 = (undefined8 *)plVar11[-2];
  while( true ) {
    if (puVar16 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar16 + 1);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        puVar16[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar14 = *(long *)puVar7;
        *(long *)puVar8 = lVar14;
        local_68 = *puVar16;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
    if ((long *)plVar11[-3] != (long *)0x0) {
      (**(code **)(*(long *)plVar11[-3] + 0x20))();
    }
    if (plVar11 + -6 == plVar17) break;
    puVar16 = (undefined8 *)plVar11[-8];
    plVar11 = plVar11 + -6;
  }
LAB_028aab4c:
  *(long **)(param_1 + 0x78) = plVar17;
  return;
}


