/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0b804; name: FUN_00d0b804
 */


void FUN_00d0b804(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *local_58;
  long local_50;
  undefined8 *local_48;
  undefined8 local_38;
  
  uVar13 = *(ulong *)(param_2 + 0x88);
  if (uVar13 != 0) {
    uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar10 = *(ulong *)(param_3 + 8);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar13 - 1 & uVar10;
    }
    else if (uVar10 < uVar13) {
      uVar17 = uVar10;
    }
    else {
      uVar17 = 0;
      if (uVar13 != 0) {
        uVar17 = uVar10 / uVar13;
      }
      uVar17 = uVar10 - uVar17 * uVar13;
    }
    plVar18 = *(long **)(*(long *)(param_2 + 0x80) + uVar17 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar18[1] == uVar10) {
            if (plVar18[2] == uVar10) goto LAB_00d0b918;
          }
          else if ((plVar18[1] & uVar13 - 1) != uVar17) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == uVar10) {
            if (plVar18[2] == uVar10) {
LAB_00d0b918:
              local_58 = (undefined8 *)0x0;
              local_50 = 0;
              FUN_008802f0(&local_58,plVar18[3] + 0x58);
              *param_1 = 0;
              param_1[1] = 0;
              puVar5 = PTR_DAT_04379498;
              do {
                lVar12 = local_50;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(&local_50,0x10);
                if (bVar3) {
                  local_50 = 0;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              puVar7 = PTR_DAT_043794a8;
              puVar6 = PTR_DAT_043794a0;
              uVar9 = *(undefined8 *)PTR_DAT_043794a0;
              *(undefined8 *)PTR_DAT_043794a8 = uVar9;
              FUN_02a44e0c(&local_48,uVar9,lVar12);
              puVar11 = local_58;
              local_58 = (undefined8 *)0x0;
              if (puVar11 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar11 + 1);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  puVar11[2] = 0;
                  if (((*puVar5 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar14 = *(long *)puVar6;
                  *(long *)puVar7 = lVar14;
                  local_38 = *puVar11;
                  FUN_02a44274(lVar14 + 0xd8,&local_38);
                }
              }
              puVar11 = (undefined8 *)*param_1;
              *param_1 = 0;
              if (local_48 == (undefined8 *)0x0) {
                lVar12 = 0;
                if (puVar11 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar11 + 1);
                  do {
                    iVar8 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar8 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 == 1) {
                    puVar11[2] = 0;
                    if (((*puVar5 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar12 = *(long *)puVar6;
                    *(long *)puVar7 = lVar12;
                    local_38 = *puVar11;
                    FUN_02a44274(lVar12 + 0xd8,&local_38);
                  }
                  lVar12 = 0;
                }
              }
              else {
                puVar15 = local_48;
                if (puVar11 != (undefined8 *)0x0) {
                  piVar1 = (int *)(puVar11 + 1);
                  do {
                    iVar8 = *piVar1;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar3) {
                      *piVar1 = iVar8 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (iVar8 + -1 == 0) {
                    puVar11[2] = 0;
                    if (((*puVar5 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar14 = *(long *)puVar6;
                    *(long *)puVar7 = lVar14;
                    local_38 = *puVar11;
                    FUN_02a44274(lVar14 + 0xd8,&local_38);
                  }
                  puVar15 = local_48;
                }
                local_48 = (undefined8 *)0x0;
                *param_1 = (long)puVar15;
              }
              puVar11 = local_48;
              param_1[1] = lVar12;
              if (local_48 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_48 + 1);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  local_48[2] = 0;
                  if (((*puVar5 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar12 = *(long *)puVar6;
                  *(long *)puVar7 = lVar12;
                  local_38 = *puVar11;
                  FUN_02a44274(lVar12 + 0xd8,&local_38);
                }
              }
              puVar11 = local_58;
              if (local_58 == (undefined8 *)0x0) {
                return;
              }
              piVar1 = (int *)(local_58 + 1);
              do {
                iVar8 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar8 + -1 != 0) {
                return;
              }
              local_58[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)puVar6;
              *(long *)puVar7 = lVar12;
              local_38 = *puVar11;
              FUN_02a44274(lVar12 + 0xd8,&local_38);
              return;
            }
          }
          else {
            if (uVar13 <= uVar16) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar16 / uVar13;
              }
              uVar16 = uVar16 - uVar4 * uVar13;
            }
            if (uVar16 != uVar17) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


