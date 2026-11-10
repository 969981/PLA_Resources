/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8b918; name: FUN_01a8b918
 */


void FUN_01a8b918(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined8 *local_58;
  
  local_80 = (undefined8 *)0x0;
  pcStack_78 = (char *)0x0;
  FUN_00af7e30(&local_80,param_2 + 0x230);
  puVar10 = local_80;
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  if (local_80 != (undefined8 *)0x0) {
    if (*(int *)((long)local_80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_80 + 0xc);
      iVar8 = *(int *)((long)local_80 + 0xc);
      do {
        plVar16 = (long *)puVar10[2];
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar15 = FUN_00aa0310();
          *(undefined8 *)puVar6 = uVar15;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_01a8bea4;
          if (plVar16 == (long *)puVar6) break;
          plVar16 = (long *)*plVar16;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = puVar10[3];
            plVar16 = (long *)0x0;
            if (lVar12 != 0) {
              plVar16 = (long *)(lVar12 + -0x50);
            }
            goto LAB_01a8ba88;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01a8bea4:
    plVar16 = (long *)0x0;
LAB_01a8ba88:
    puVar10 = local_80;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
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
        local_80[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)puVar6;
        *(long *)puVar7 = lVar12;
        local_90 = (undefined8 *)*puVar10;
        FUN_02a44274(lVar12 + 0xd8,&local_90);
      }
    }
    if (plVar16 != (long *)0x0) {
      FUN_00a9ecd4(&local_80,plVar16);
      FUN_009983e4(&local_60,&local_80);
      puVar10 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
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
          local_80[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)puVar6;
          *(long *)puVar7 = lVar12;
          local_90 = (undefined8 *)*puVar10;
          FUN_02a44274(lVar12 + 0xd8,&local_90);
        }
      }
      if (local_60 == (long *)0x0) {
        bVar3 = false;
      }
      else {
        local_80 = (undefined8 *)&DAT_afc4d6c05abef19e;
        pcStack_78 = "default";
        local_70 = 7;
        local_68 = (long *)0x0;
        puVar10 = (undefined8 *)FUN_0289f734(local_60,&local_80);
        plVar14 = (long *)*puVar10;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        bVar3 = false;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x20))(&local_80,plVar14);
          local_90 = (undefined8 *)0x0;
          local_88 = 0;
          FUN_00af8910(&local_90,&local_80);
          puVar10 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_80 + 1);
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
              local_80[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)puVar6;
              *(long *)puVar7 = lVar12;
              local_58 = (undefined8 *)*puVar10;
              FUN_02a44274(lVar12 + 0xd8,&local_58);
            }
          }
          *param_1 = 0;
          param_1[1] = 0;
          do {
            uVar15 = local_88;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(&local_88,0x10);
            if (bVar3) {
              local_88 = 0;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          uVar11 = *(undefined8 *)puVar6;
          *(undefined8 *)puVar7 = uVar11;
          FUN_02a44e0c(&local_58,uVar11,uVar15);
          puVar10 = local_90;
          local_90 = (undefined8 *)0x0;
          if (puVar10 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar10 + 1);
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
              puVar10[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)puVar6;
              *(long *)puVar7 = lVar12;
              local_80 = (undefined8 *)*puVar10;
              FUN_02a44274(lVar12 + 0xd8,&local_80);
            }
          }
          puVar10 = (undefined8 *)*param_1;
          *param_1 = 0;
          if (local_58 == (undefined8 *)0x0) {
            if (puVar10 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar10 + 1);
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
                puVar10[2] = 0;
                if (((*puVar5 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar12 = *(long *)puVar6;
                *(long *)puVar7 = lVar12;
                local_80 = (undefined8 *)*puVar10;
                FUN_02a44274(lVar12 + 0xd8,&local_80);
              }
            }
            uVar15 = 0;
          }
          else {
            puVar13 = local_58;
            if (puVar10 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar10 + 1);
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
                puVar10[2] = 0;
                if (((*puVar5 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar12 = *(long *)puVar6;
                *(long *)puVar7 = lVar12;
                local_80 = (undefined8 *)*puVar10;
                FUN_02a44274(lVar12 + 0xd8,&local_80);
              }
              puVar13 = local_58;
            }
            local_58 = (undefined8 *)0x0;
            *param_1 = puVar13;
          }
          puVar10 = local_58;
          param_1[1] = uVar15;
          if (local_58 != (undefined8 *)0x0) {
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
            if (iVar8 + -1 == 0) {
              local_58[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)puVar6;
              *(long *)puVar7 = lVar12;
              local_80 = (undefined8 *)*puVar10;
              FUN_02a44274(lVar12 + 0xd8,&local_80);
            }
          }
          puVar10 = local_90;
          if (local_90 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_90 + 1);
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
              local_90[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)puVar6;
              *(long *)puVar7 = lVar12;
              local_80 = (undefined8 *)*puVar10;
              FUN_02a44274(lVar12 + 0xd8,&local_80);
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14);
          bVar3 = true;
        }
        if (local_60 != (long *)0x0) {
          lVar12 = local_60[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))();
          }
        }
      }
      lVar12 = plVar16[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
      if (bVar3) {
        return;
      }
    }
  }
  local_80 = (undefined8 *)0x0;
  pcStack_78 = (char *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01a9de8c(param_1,&local_80);
  puVar10 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
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
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_90 = (undefined8 *)*puVar10;
      FUN_02a44274(lVar12 + 0xd8,&local_90);
    }
  }
  return;
}


