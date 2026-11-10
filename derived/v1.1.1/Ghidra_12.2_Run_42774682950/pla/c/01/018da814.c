/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018da814; name: FUN_018da814
 */


undefined8 FUN_018da814(long param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  undefined8 *local_230;
  undefined8 local_228;
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
  undefined8 local_190;
  code *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [96];
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
    plVar7 = local_200;
    if (local_200 != (long *)0x0) {
      plVar2 = local_200 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_200[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_230 = (undefined8 *)*plVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_230);
      }
    }
  }
  if (local_50 == (long *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x668) == 0) {
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
      local_190 = 0;
      local_188 = (code *)0x0;
      local_180 = 0;
      uStack_178 = 0;
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
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          local_230[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_48 = *puVar6;
          FUN_02a44274(lVar10 + 0xd8,&local_48);
        }
      }
      FUN_018e47b0(&local_1e0,&local_210);
      plVar7 = local_210;
      if (local_210 != (long *)0x0) {
        plVar2 = local_210 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          local_210[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_230 = (undefined8 *)*plVar7;
          FUN_02a44274(lVar10 + 0xd8,&local_230);
        }
      }
      FUN_01aee1bc(&local_230,local_58);
      FUN_00947cf8(&local_210,local_228);
      plVar7 = local_1c0;
      local_1c0 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      local_1c0 = local_210;
      local_210 = (long *)0x0;
      if (local_218 != (long *)0x0) {
        (**(code **)(*local_218 + 0x20))();
      }
      FUN_01b3fd80(param_2,&local_200);
      FUN_01b41aa8(local_50,&local_200);
      FUN_018dc318(param_1);
      pcVar8 = local_108;
      if (local_108 != (code *)0x0) {
        local_100 = 0;
        uStack_f8 = 0;
        local_110 = 0;
        local_108 = (code *)0x0;
        (*pcVar8)(auStack_f0);
      }
      pcVar8 = local_188;
      if (local_188 != (code *)0x0) {
        local_180 = 0;
        uStack_178 = 0;
        local_190 = 0;
        local_188 = (code *)0x0;
        (*pcVar8)(auStack_170);
      }
      if (local_1c0 != (long *)0x0) {
        (**(code **)(*local_1c0 + 0x20))();
      }
      plVar7 = local_1d0;
      if (local_1d0 != (long *)0x0) {
        plVar2 = local_1d0 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          local_1d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_230 = (undefined8 *)*plVar7;
          FUN_02a44274(lVar10 + 0xd8,&local_230);
        }
      }
      plVar7 = local_1e0;
      if (local_1e0 != (long *)0x0) {
        plVar2 = local_1e0 + 1;
        do {
          iVar9 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          local_1e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_230 = (undefined8 *)*plVar7;
          FUN_02a44274(lVar10 + 0xd8,&local_230);
        }
      }
      if (local_58 != (long *)0x0) {
        lVar10 = local_58[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 1) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      bVar5 = true;
      goto joined_r0x018dabe0;
    }
  }
  bVar5 = false;
joined_r0x018dabe0:
  if (local_50 != (long *)0x0) {
    lVar10 = local_50[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (bVar5) {
    return 1;
  }
  return 0;
}


