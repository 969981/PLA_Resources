/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e9f7cc; name: FUN_01e9f7cc
 */


void FUN_01e9f7cc(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar11;
  undefined8 *local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  code *local_198;
  code *local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [104];
  long *local_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  long *local_f0;
  long *local_e8;
  undefined1 auStack_e0 [24];
  long *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  FUN_0108cf04(param_1[0x41]);
  fVar11 = *(float *)((long)param_1 + 0x4e4);
  uStack_b8 = CONCAT44(extraout_var_01 * fVar11,extraout_var_00 * fVar11);
  local_c0 = CONCAT44(extraout_var * fVar11,extraout_s0 * fVar11);
  FUN_0108de64(auStack_e0,param_1[0x41]);
  if (param_1[0xc0] == 0) {
    local_e8 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_e8);
    if (local_e8 != (long *)0x0) {
      local_f0 = (long *)0x0;
      lVar10 = param_1[1];
      local_1b0 = (undefined8 *)CONCAT71(local_1b0._1_7_,1);
      local_f4[0] = 1;
      local_100[0] = 1;
      local_f8[0] = 0;
      local_fc[0] = 0;
      FUN_01ea5884(&local_b0,param_1);
      plVar8 = (long *)FUN_01eae484(lVar10,&local_c0,auStack_e0,&local_1b0,local_f4,local_f8,
                                    local_fc,local_100,&local_b0);
      if (plVar8 != (long *)0x0) {
        lVar10 = plVar8[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar9;
        }
        plVar6 = local_f0;
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_f0 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          lVar10 = plVar6[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
      }
      puVar4 = local_b0;
      local_f0 = plVar8;
      if (local_b0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_b0 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_110 = (undefined8 *)*puVar4;
          FUN_02a44274(lVar10 + 0xd8,&local_110);
        }
      }
      (**(code **)(*param_1 + 0x10))(&local_b0,param_1);
      local_110 = (undefined8 *)0x0;
      uStack_108 = 0;
      FUN_01eacb9c(&local_110,&local_b0);
      if (local_b0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_b0 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_1b0 = (undefined8 *)*local_b0;
          FUN_02a44274(lVar10 + 0xd8,&local_1b0);
        }
      }
      plVar8 = local_e8;
      local_1b0 = (undefined8 *)0x0;
      uStack_1a8 = 0;
      FUN_01ead384(&local_1b0,&local_110);
      local_190 = (code *)0x0;
      uStack_188 = 0;
      local_1a0 = (undefined8 *)0x0;
      local_198 = (code *)0x0;
      FUN_01eaf410(&local_1a0,&local_1b0);
      lVar10 = plVar8[0xf];
      local_a0 = (code *)0x0;
      local_98 = 0;
      local_b0 = (undefined8 *)0x0;
      local_a8 = (code *)0x0;
      if (local_190 != (code *)0x0) {
        (*local_190)(auStack_180,auStack_90);
        local_b0 = local_1a0;
        local_98 = uStack_188;
        local_a8 = local_198;
        local_a0 = local_190;
      }
      FUN_00bdc73c(&local_118,lVar10,0xc,&local_f0,&local_b0,0);
      pcVar5 = local_a8;
      if (local_a8 == (code *)0x0) {
        local_a8 = (code *)0x0;
      }
      else {
        local_a0 = (code *)0x0;
        local_98 = 0;
        local_b0 = (undefined8 *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar5)(auStack_90);
      }
      pcVar5 = local_198;
      if (local_118 != (long *)0x0) {
        lVar10 = local_118[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_118 + 0x20))();
          pcVar5 = local_198;
        }
      }
      local_198 = (code *)0x0;
      puVar4 = local_1b0;
      if (pcVar5 != (code *)0x0) {
        local_190 = (code *)0x0;
        uStack_188 = 0;
        local_1a0 = (undefined8 *)0x0;
        local_198 = (code *)0x0;
        (*pcVar5)(auStack_180);
        puVar4 = local_1b0;
      }
      local_1b0 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_b0 = (undefined8 *)*puVar4;
          FUN_02a44274(lVar10 + 0xd8,&local_b0);
        }
      }
      puVar4 = local_110;
      if (local_110 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_110 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          local_110[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_b0 = (undefined8 *)*puVar4;
          FUN_02a44274(lVar10 + 0xd8,&local_b0);
        }
      }
      if (local_f0 != (long *)0x0) {
        lVar10 = local_f0[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_f0 + 0x20))();
        }
      }
      if (local_e8 != (long *)0x0) {
        lVar10 = local_e8[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_e8 + 0x20))();
        }
      }
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


