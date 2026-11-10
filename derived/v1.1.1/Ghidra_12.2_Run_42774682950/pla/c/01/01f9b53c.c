/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f9b53c; name: FUN_01f9b53c
 */


void FUN_01f9b53c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined2 param_9,undefined2 param_10,byte param_11,undefined2 param_12,
                 byte param_13,byte param_14,byte param_15)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long *local_228;
  undefined1 *local_220;
  code *local_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 auStack_200 [96];
  long *local_1a0;
  long *local_198;
  long local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined2 local_164;
  undefined4 local_162;
  undefined2 local_15e;
  undefined4 local_15c;
  undefined2 local_158;
  undefined8 local_156;
  undefined4 local_14e;
  undefined8 local_14a;
  undefined8 local_142;
  undefined8 local_13a;
  undefined4 local_130;
  undefined1 local_12c;
  undefined2 local_12a;
  undefined2 local_128;
  undefined2 local_126;
  byte local_124;
  undefined1 local_123;
  undefined4 local_11c;
  undefined8 local_118;
  long *local_110;
  byte local_104 [4];
  long *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [104];
  long *local_78 [3];
  
  local_104[0] = param_14 & 1;
  local_110 = (long *)0x0;
  local_118 = 0;
  FUN_01f9abc4(&local_100);
  if (local_100 == (long *)0x0) {
    local_78[0] = (long *)0x0;
  }
  else {
    FUN_017e9e98(local_78);
    plVar2 = local_100;
    if (local_100 != (long *)0x0) {
      plVar3 = local_100 + 1;
      do {
        iVar6 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_190 = *plVar2;
        FUN_02a44274(lVar8 + 0xd8,&local_190);
      }
    }
  }
  if (local_78[0] == (long *)0x0) goto joined_r0x01f9b894;
  local_118 = FUN_017d1b40(local_78[0],4);
  if (local_78[0] != (long *)0x0) {
    lVar8 = local_78[0][0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_78[0] + 0x20))();
    }
  }
  local_190 = 0;
  local_11c = 0;
  if ((param_15 & 1) == 0) {
    local_11c = 0x20;
  }
  local_170 = 0xffffffffffffffff;
  local_188 = 0;
  local_180 = 0xffffffffffffffff;
  local_162 = 0x10000;
  local_15c = 0xffffffff;
  local_158 = 0x1ff;
  local_130 = 0xffff;
  local_126 = 0xffff;
  local_12c = 0;
  local_12a = 0x100;
  local_123 = 0;
  local_156 = 0xffffffffffffffff;
  local_14e = 0xffffffff;
  local_14a = 0;
  local_142 = 0;
  local_13a = 0;
  local_178 = 0x2ffffffff;
  if ((param_11 & 1) == 0) {
    local_178 = 0x1ffffffff;
  }
  local_164 = param_9;
  local_15e = param_10;
  local_128 = param_12;
  local_168 = param_8;
  local_124 = param_13 & 1;
  local_198 = (long *)FUN_0093dcbc(&local_100,local_118,&local_118,&local_190);
  if (local_198 != (long *)0x0) {
    plVar2 = local_198 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01f9bb60(&local_100,local_118,param_2,param_3,param_4,param_5,param_6,param_7,&local_11c,
               &local_198,local_104);
  plVar2 = local_110;
  local_110 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    lVar8 = plVar2[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  local_110 = local_100;
  FUN_01f9addc(&local_100);
  if (local_100 == (long *)0x0) {
    local_1a0 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_1a0);
    plVar2 = local_100;
    if (local_100 != (long *)0x0) {
      plVar3 = local_100 + 1;
      do {
        iVar6 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_78[0] = (long *)*plVar2;
        FUN_02a44274(lVar8 + 0xd8,local_78);
      }
    }
  }
  if (local_1a0 != (long *)0x0) {
    local_220 = &LAB_01fa8c80;
    local_218 = FUN_01fa8e98;
    local_210 = &LAB_01fa8e9c;
    puStack_208 = &LAB_01fa8ea0;
    local_100 = (long *)&LAB_01fa8c80;
    local_f8 = FUN_01fa8e98;
    local_f0 = &LAB_01fa8e9c;
    puStack_e8 = &LAB_01fa8ea0;
    FUN_01f81218(local_78,local_1a0[0xf],2,&local_110,&local_100,0);
    pcVar9 = local_f8;
    if (local_f8 == (code *)0x0) {
      pcVar9 = FUN_01fa8e98;
LAB_01f9b798:
      local_210 = (undefined1 *)0x0;
      puStack_208 = (undefined1 *)0x0;
      local_220 = (undefined1 *)0x0;
      local_218 = (code *)0x0;
      (*pcVar9)(auStack_200);
    }
    else {
      local_f0 = (undefined1 *)0x0;
      puStack_e8 = (undefined1 *)0x0;
      local_100 = (long *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar9)(auStack_e0);
      pcVar9 = local_218;
      if (local_218 != (code *)0x0) goto LAB_01f9b798;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    local_228 = local_78[0];
    if (local_78[0] != (long *)0x0) {
      lVar8 = local_78[0][0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_01cbc9e0(uVar10,&local_228,1);
    if (local_228 != (long *)0x0) {
      lVar8 = local_228[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_228 + 0x20))();
      }
    }
    if (local_78[0] != (long *)0x0) {
      lVar8 = local_78[0][0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_78[0] + 0x20))();
      }
    }
    if (local_1a0 != (long *)0x0) {
      lVar8 = local_1a0[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_1a0 + 0x20))();
      }
    }
  }
  if (local_198 != (long *)0x0) {
    plVar2 = local_198 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_198 + 0x10))();
    }
  }
joined_r0x01f9b894:
  if (local_110 != (long *)0x0) {
    lVar8 = local_110[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_110 + 0x20))();
    }
  }
  return;
}


