/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028928a4; name: FUN_028928a4
 */


void FUN_028928a4(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_48;
  
  lVar13 = *(long *)(param_2 + 0x1f0);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar8 = *(int *)(lVar13 + 0xc);
    do {
      plVar16 = *(long **)(lVar13 + 0x10);
      lVar9 = FUN_00fd7558();
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_02892924;
        if (plVar16 == (long *)lVar9) break;
        plVar16 = (long *)*plVar16;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          puVar15 = *(undefined8 **)(lVar13 + 0x18);
          if (puVar15 != (undefined8 *)0x0) {
            plVar14 = puVar15 + -10;
            plVar16 = (long *)(**(code **)*puVar15)(puVar15);
            if (((*PTR_DAT_0437de20 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_0437de20), iVar8 != 0)) {
              uVar10 = FUN_00fd7558();
              *(undefined8 *)PTR_DAT_0437de28 = uVar10;
              __cxa_guard_release(PTR_DAT_0437de20);
            }
            for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
              if (plVar16 == (long *)PTR_DAT_0437de28) {
                *param_1 = 0;
                param_1[1] = 0;
                puVar5 = PTR_DAT_04379498;
                lVar13 = *(long *)(param_2 + 0x1f8);
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                puVar7 = PTR_DAT_043794a8;
                puVar6 = PTR_DAT_043794a0;
                uVar10 = *(undefined8 *)PTR_DAT_043794a0;
                *(undefined8 *)PTR_DAT_043794a8 = uVar10;
                FUN_02a44e0c(&local_48,uVar10,lVar13);
                puVar11 = (undefined8 *)*param_1;
                *param_1 = 0;
                if (local_48 == (undefined8 *)0x0) {
                  if (puVar11 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar11 + 1);
                    do {
                      iVar8 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar8 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar8 == 1) {
                      puVar11[2] = 0;
                      if (((*puVar5 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar13 = *(long *)puVar6;
                      *(long *)puVar7 = lVar13;
                      local_60 = (undefined8 *)*puVar11;
                      FUN_02a44274(lVar13 + 0xd8,&local_60);
                    }
                  }
                  lVar13 = 0;
                }
                else {
                  puVar12 = local_48;
                  if (puVar11 != (undefined8 *)0x0) {
                    piVar1 = (int *)(puVar11 + 1);
                    do {
                      iVar8 = *piVar1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar4) {
                        *piVar1 = iVar8 + -1;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar8 + -1 == 0) {
                      puVar11[2] = 0;
                      if (((*puVar5 & 1) == 0) &&
                         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar9 = *(long *)puVar6;
                      *(long *)puVar7 = lVar9;
                      local_60 = (undefined8 *)*puVar11;
                      FUN_02a44274(lVar9 + 0xd8,&local_60);
                    }
                    puVar12 = local_48;
                  }
                  local_48 = (undefined8 *)0x0;
                  *param_1 = (long)puVar12;
                }
                puVar11 = local_48;
                param_1[1] = lVar13;
                if (local_48 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_48 + 1);
                  do {
                    iVar8 = *piVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar4) {
                      *piVar1 = iVar8 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (iVar8 + -1 == 0) {
                    local_48[2] = 0;
                    if (((*puVar5 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar13 = *(long *)puVar6;
                    *(long *)puVar7 = lVar13;
                    local_60 = (undefined8 *)*puVar11;
                    FUN_02a44274(lVar13 + 0xd8,&local_60);
                  }
                }
                lVar13 = puVar15[1];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02892b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar14 + 0x20))(plVar14);
                  return;
                }
                return;
              }
            }
            lVar13 = puVar15[1];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar14 + 0x20))(plVar14);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_02892924:
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01a78270(param_1,&local_60);
  puVar15 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_48 = (undefined8 *)*puVar15;
      FUN_02a44274(lVar13 + 0xd8,&local_48);
    }
  }
  return;
}


