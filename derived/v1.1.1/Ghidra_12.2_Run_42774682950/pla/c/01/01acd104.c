/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01acd104; name: FUN_01acd104
 */


void FUN_01acd104(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long *local_58;
  long *local_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x810) != 0) && (FUN_009b3e90(&local_50), local_50 != (long *)0x0)) {
    local_78 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    FUN_009ab200(&local_78,local_50 + 0x68);
    puVar6 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar7 = *(int *)((long)local_78 + 0xc);
        while (uVar8 = FUN_009b4090(puVar6[2]), (uVar8 & 1) != 0) {
          iVar2 = *piVar1;
          if (iVar2 == iVar7) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar9 = puVar6[3];
              plVar5 = (long *)0x0;
              puVar6 = local_78;
              if (lVar9 != 0) {
                plVar5 = (long *)(lVar9 + -0x50);
              }
              goto joined_r0x01acd1f0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar2;
          if (iVar2 == 0) break;
        }
      }
      plVar5 = (long *)0x0;
      puVar6 = local_78;
joined_r0x01acd1f0:
      local_78 = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar6 + 1);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          puVar6[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_48[0] = (undefined8 *)*puVar6;
          FUN_02a44274(lVar9 + 0xd8,local_48);
        }
      }
      if (plVar5 != (long *)0x0) {
        FUN_01a73640(&local_78,plVar5);
        if (local_78 == (undefined8 *)0x0) {
          local_58 = (long *)0x0;
        }
        else {
          FUN_00bd915c(&local_58);
          puVar6 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78 + 1);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_48[0] = (undefined8 *)*puVar6;
              FUN_02a44274(lVar9 + 0xd8,local_48);
            }
          }
        }
        if (local_58 != (long *)0x0) {
          local_78 = (undefined8 *)((ulong)local_78 & 0xffffffffffffff00);
          local_60 = 0;
          local_70 = (undefined8 *)0x0;
          uStack_68 = 0;
          FUN_009c69bc(&local_90,param_1);
          (**(code **)(*local_90 + 0x10))(local_48);
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          FUN_0087f944(&local_88,local_48);
          puVar6 = local_48[0];
          if (local_48[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_48[0] + 1);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              local_48[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_38 = *puVar6;
              FUN_02a44274(lVar9 + 0xd8,&local_38);
            }
          }
          FUN_0087fcf0(&local_70,&local_88);
          puVar6 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_88 + 1);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              local_88[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_48[0] = (undefined8 *)*puVar6;
              FUN_02a44274(lVar9 + 0xd8,local_48);
            }
          }
          if (local_90 != (long *)0x0) {
            lVar9 = local_90[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_90 + 0x20))();
            }
          }
          local_60 = 1;
          FUN_018da4f0(plVar5,&local_78);
          puVar6 = local_70;
          if (local_70 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_70 + 1);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              local_70[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_48[0] = (undefined8 *)*puVar6;
              FUN_02a44274(lVar9 + 0xd8,local_48);
            }
          }
          if (local_58 != (long *)0x0) {
            lVar9 = local_58[0xb];
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_58 + 0x20))();
            }
          }
        }
        lVar9 = plVar5[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
      }
    }
    if (local_50 != (long *)0x0) {
      lVar9 = local_50[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
  }
  return;
}


