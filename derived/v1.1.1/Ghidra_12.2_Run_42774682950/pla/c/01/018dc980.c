/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018dc980; name: FUN_018dc980
 */


void FUN_018dc980(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  undefined8 *local_220;
  undefined8 local_218;
  long *local_208;
  long *local_200;
  undefined8 uStack_1f8;
  long *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  long *local_1d0;
  undefined8 uStack_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  long *local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined1 local_18f;
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  long alStack_160 [12];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  undefined8 local_38;
  
  local_1f0 = (long *)0x0;
  uStack_1e8 = 0;
  FUN_00ac3fa4(&local_1f0,param_1 + 0x248);
  if (local_1f0 == (long *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_48);
    plVar6 = local_1f0;
    if (local_1f0 != (long *)0x0) {
      plVar2 = local_1f0 + 1;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        local_1f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_220 = (undefined8 *)*plVar6;
        FUN_02a44274(lVar9 + 0xd8,&local_220);
      }
    }
  }
  if (local_48 != (long *)0x0) {
    if (*(long *)(param_1 + 0x668) == 0) {
      local_50 = (long *)0x0;
    }
    else {
      FUN_00cfac20(&local_50);
      if (local_50 != (long *)0x0) {
        local_1b0 = (long *)0x0;
        local_18f = 0;
        local_1e0 = 0x3e2aaaab3dccccce;
        local_80 = 0x1100000014;
        local_1d0 = (long *)0x0;
        uStack_1c8 = 0;
        local_78 = 0x14;
        local_1d8 = 1;
        local_74 = 1;
        local_190 = 1;
        local_1c0 = (long *)0x0;
        uStack_1b8 = 0;
        local_1a0 = 0;
        uStack_198 = 0;
        local_180 = (undefined1 *)0x0;
        local_178 = (code *)0x0;
        local_170 = (undefined1 *)0x0;
        local_168 = (undefined1 *)0x0;
        local_100 = 0;
        local_f8 = (code *)0x0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_70 = 0;
        uStack_68 = 0;
        (**(code **)(*local_50 + 0x10))(&local_220);
        local_200 = (long *)0x0;
        uStack_1f8 = 0;
        FUN_00d07698(&local_200,&local_220);
        puVar5 = local_220;
        if (local_220 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_220 + 1);
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
            local_220[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_38 = *puVar5;
            FUN_02a44274(lVar9 + 0xd8,&local_38);
          }
        }
        FUN_018e47b0(&local_1d0,&local_200);
        plVar6 = local_200;
        if (local_200 != (long *)0x0) {
          plVar2 = local_200 + 1;
          do {
            iVar8 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            local_200[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_220 = (undefined8 *)*plVar6;
            FUN_02a44274(lVar9 + 0xd8,&local_220);
          }
        }
        FUN_01aee1bc(&local_220,local_50);
        FUN_00947cf8(&local_200,local_218);
        plVar6 = local_1b0;
        local_1b0 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        local_1b0 = local_200;
        local_200 = (long *)0x0;
        if (local_208 != (long *)0x0) {
          (**(code **)(*local_208 + 0x20))();
        }
        pcVar7 = local_178;
        if (local_178 != (code *)0x0) {
          local_170 = (undefined1 *)0x0;
          local_168 = (undefined1 *)0x0;
          local_180 = (undefined1 *)0x0;
          local_178 = (code *)0x0;
          (*pcVar7)(alStack_160);
        }
        local_180 = &LAB_018e4ab0;
        local_178 = FUN_018e4b84;
        local_170 = &LAB_018e4b88;
        local_168 = &LAB_018e4b94;
        alStack_160[0] = param_1;
        FUN_01b3fd80(1,&local_1f0);
        FUN_01b41aa8(local_48,&local_1f0);
        pcVar7 = local_f8;
        if (local_f8 != (code *)0x0) {
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = 0;
          local_f8 = (code *)0x0;
          (*pcVar7)(auStack_e0);
        }
        pcVar7 = local_178;
        if (local_178 != (code *)0x0) {
          local_170 = (undefined1 *)0x0;
          local_168 = (undefined1 *)0x0;
          local_180 = (undefined1 *)0x0;
          local_178 = (code *)0x0;
          (*pcVar7)(alStack_160);
        }
        if (local_1b0 != (long *)0x0) {
          (**(code **)(*local_1b0 + 0x20))();
        }
        plVar6 = local_1c0;
        if (local_1c0 != (long *)0x0) {
          plVar2 = local_1c0 + 1;
          do {
            iVar8 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            local_1c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_220 = (undefined8 *)*plVar6;
            FUN_02a44274(lVar9 + 0xd8,&local_220);
          }
        }
        plVar6 = local_1d0;
        if (local_1d0 != (long *)0x0) {
          plVar2 = local_1d0 + 1;
          do {
            iVar8 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            local_1d0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_220 = (undefined8 *)*plVar6;
            FUN_02a44274(lVar9 + 0xd8,&local_220);
          }
        }
        if (local_50 != (long *)0x0) {
          lVar9 = local_50[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
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
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*local_50 + 0x20))();
          }
        }
      }
    }
    if (local_48 != (long *)0x0) {
      lVar9 = local_48[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  return;
}


