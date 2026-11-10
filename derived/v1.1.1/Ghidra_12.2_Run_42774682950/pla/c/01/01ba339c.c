/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba339c; name: FUN_01ba339c
 */


undefined8 FUN_01ba339c(long param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *local_230;
  char *local_228;
  long *local_218;
  long *local_210;
  undefined8 uStack_208;
  long *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  long *local_1d0;
  undefined8 uStack_1c8;
  long *local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  long alStack_170 [12];
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [96];
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  
  local_200 = (long *)0x0;
  uStack_1f8 = 0;
  FUN_00ac3fa4(&local_200,param_1 + 0x248);
  if (local_200 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_50);
    plVar10 = local_200;
    if (local_200 != (long *)0x0) {
      plVar2 = local_200 + 1;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
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
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_230 = (undefined8 *)*plVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_230);
      }
    }
  }
  if (local_50 == (long *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x720) == 0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_58);
    if (local_58 != (long *)0x0) {
      local_1c0 = (long *)0x0;
      local_19f = 0;
      local_1f0 = 0x3e2aaaab3dccccce;
      local_90 = 0x1100000014;
      local_1e0 = (long *)0x0;
      uStack_1d8 = 0;
      local_88 = 0x14;
      local_1e8 = 1;
      local_84 = 1;
      local_1a0 = 1;
      local_1d0 = (long *)0x0;
      uStack_1c8 = 0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_190 = (undefined1 *)0x0;
      local_188 = (code *)0x0;
      local_180 = (undefined1 *)0x0;
      local_178 = (undefined1 *)0x0;
      local_110 = 0;
      local_108 = (code *)0x0;
      local_100 = 0;
      uStack_f8 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      (**(code **)(*local_58 + 0x10))(&local_230);
      local_210 = (long *)0x0;
      uStack_208 = 0;
      FUN_00d07698(&local_210,&local_230);
      puVar6 = local_230;
      if (local_230 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_230 + 1);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          local_230[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = *puVar6;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      FUN_018e47b0(&local_1e0,&local_210);
      plVar10 = local_210;
      if (local_210 != (long *)0x0) {
        plVar2 = local_210 + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_210[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_230 = (undefined8 *)*plVar10;
          FUN_02a44274(lVar11 + 0xd8,&local_230);
        }
      }
      FUN_01aee1bc(&local_230,local_58);
      if (*local_228 == '\0') {
        plVar10 = (long *)FUN_00938550();
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      else {
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar9 = *(undefined8 *)PTR_DAT_04379cd8;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar9;
        FUN_02a47cd8(&local_210,uVar9,local_228);
        plVar10 = local_210;
      }
      plVar2 = local_1c0;
      local_1c0 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      local_1c0 = plVar10;
      if (local_218 != (long *)0x0) {
        (**(code **)(*local_218 + 0x20))();
      }
      pcVar7 = local_188;
      if (local_188 != (code *)0x0) {
        local_180 = (undefined1 *)0x0;
        local_178 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        local_188 = (code *)0x0;
        (*pcVar7)(alStack_170);
      }
      local_190 = &LAB_01ba80f4;
      local_188 = FUN_01ba8180;
      local_180 = &LAB_01ba8184;
      local_178 = &LAB_01ba8190;
      alStack_170[0] = param_1;
      FUN_01b3fd80(param_2,&local_200);
      FUN_01b41aa8(local_50,&local_200);
      pcVar7 = local_108;
      if (local_108 != (code *)0x0) {
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        local_108 = (code *)0x0;
        (*pcVar7)(auStack_f0);
      }
      pcVar7 = local_188;
      if (local_188 != (code *)0x0) {
        local_180 = (undefined1 *)0x0;
        local_178 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        local_188 = (code *)0x0;
        (*pcVar7)(alStack_170);
      }
      if (local_1c0 != (long *)0x0) {
        (**(code **)(*local_1c0 + 0x20))();
      }
      plVar10 = local_1d0;
      if (local_1d0 != (long *)0x0) {
        plVar2 = local_1d0 + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
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
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_230 = (undefined8 *)*plVar10;
          FUN_02a44274(lVar11 + 0xd8,&local_230);
        }
      }
      plVar10 = local_1e0;
      if (local_1e0 != (long *)0x0) {
        plVar2 = local_1e0 + 1;
        do {
          iVar8 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          local_1e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_230 = (undefined8 *)*plVar10;
          FUN_02a44274(lVar11 + 0xd8,&local_230);
        }
      }
      if (local_58 != (long *)0x0) {
        lVar11 = local_58[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 1) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      bVar5 = true;
      goto joined_r0x01ba37d8;
    }
  }
  bVar5 = false;
joined_r0x01ba37d8:
  if (local_50 != (long *)0x0) {
    lVar11 = local_50[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (bVar5) {
    return 1;
  }
  return 0;
}


