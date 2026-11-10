/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a0d9fc; name: FUN_01a0d9fc
 */


void FUN_01a0d9fc(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  long *local_198;
  long *local_190;
  undefined8 uStack_188;
  undefined8 *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined1 local_70;
  undefined8 *local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 uStack_48;
  long local_38;
  
  if (*(int *)(param_1 + 0x680) == 1) {
    *(int *)(param_1 + 0x684) = (int)param_2[8];
    *(undefined4 *)(param_1 + 0x688) = 0;
    if ((*(char *)param_2[5] != '\0') && (*param_2 != 0)) {
      FUN_00b911c4(&local_190);
      plVar7 = local_190;
      if (local_190 != (long *)0x0) {
        uVar10 = FUN_01b39c3c(local_190,param_2 + 4);
        if ((uVar10 & 1) != 0) {
          local_60 = (undefined8 *)0x0;
          uStack_58 = 0;
          FUN_008c4b3c(&local_60,param_2 + 2);
          FUN_01b7436c(param_1,&local_60,param_2 + 4,0);
          puVar6 = local_60;
          if (local_60 != (undefined8 *)0x0) {
            piVar3 = (int *)(local_60 + 1);
            do {
              iVar9 = *piVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar5) {
                *piVar3 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              local_60[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_190 = (long *)*puVar6;
              FUN_02a44274(lVar11 + 0xd8,&local_190);
            }
          }
        }
        lVar11 = plVar7[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
    }
    FUN_01a0e05c(param_1);
    FUN_01a0d3e8(param_1);
    lVar11 = *(long *)(param_1 + 0x5f0);
    *(undefined1 *)(lVar11 + 0x230) = 1;
    *(undefined1 *)(lVar11 + 0x1f5) = 0;
    *(undefined4 *)(param_1 + 0x680) = 2;
    local_e0 = 0;
    uStack_d8 = 0;
    local_70 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_190 = (long *)0x0;
    uStack_188 = 0;
    local_180 = (undefined8 *)0x0;
    uStack_178 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_50 = (long *)0x0;
    uStack_48 = 0;
    FUN_0087fcf0(&local_190,&local_50);
    plVar7 = local_50;
    if (local_50 != (long *)0x0) {
      plVar1 = local_50 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_1a8 = (undefined8 *)*plVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_1a8);
      }
    }
    if (*param_2 != 0) {
      FUN_00b911c4(&local_50);
      plVar7 = local_50;
      if (local_50 != (long *)0x0) {
        FUN_009c69bc(&local_198,local_50);
        if (local_198 != (long *)0x0) {
          (**(code **)(*local_198 + 0x10))(&local_50);
          local_1a8 = (undefined8 *)0x0;
          uStack_1a0 = 0;
          FUN_0087f944(&local_1a8,&local_50);
          plVar1 = local_50;
          if (local_50 != (long *)0x0) {
            plVar2 = local_50 + 1;
            do {
              iVar9 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 == 0) {
              local_50[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_38 = *plVar1;
              FUN_02a44274(lVar11 + 0xd8,&local_38);
            }
          }
          FUN_0087fcf0(&local_190,&local_1a8);
          puVar6 = local_1a8;
          if (local_1a8 != (undefined8 *)0x0) {
            piVar3 = (int *)(local_1a8 + 1);
            do {
              iVar9 = *piVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar5) {
                *piVar3 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              local_1a8[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_50 = (long *)*puVar6;
              FUN_02a44274(lVar11 + 0xd8,&local_50);
            }
          }
          if (local_198 != (long *)0x0) {
            lVar11 = local_198[0xb];
            piVar3 = (int *)(lVar11 + 0xc);
            do {
              iVar9 = *piVar3;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar5) {
                *piVar3 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_198 + 0x20))();
            }
          }
        }
        lVar11 = plVar7[0xb];
        piVar3 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
    }
    FUN_00b63974(&local_180,param_1 + 0x5b0);
    if (((*PTR_DAT_0437b520 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b520), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04381aa8,PTR_DAT_0437b528,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b520);
    }
    lVar11 = *(long *)PTR_DAT_0437b528;
    *(long *)PTR_DAT_0437b570 = lVar11;
    if (lVar11 != 0) {
      FUN_0184cdec(lVar11,&local_190);
    }
    pcVar8 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar8)(auStack_d0);
    }
    pcVar8 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar8)(auStack_150);
    }
    puVar6 = local_180;
    if (local_180 != (undefined8 *)0x0) {
      piVar3 = (int *)(local_180 + 1);
      do {
        iVar9 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        local_180[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_50 = (long *)*puVar6;
        FUN_02a44274(lVar11 + 0xd8,&local_50);
      }
    }
    plVar7 = local_190;
    if (local_190 != (long *)0x0) {
      plVar1 = local_190 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        local_190[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_50 = (long *)*plVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_50);
      }
    }
  }
  return;
}


