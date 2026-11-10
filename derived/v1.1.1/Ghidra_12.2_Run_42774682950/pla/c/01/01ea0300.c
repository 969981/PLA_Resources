/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea0300; name: FUN_01ea0300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea0300(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 extraout_s0;
  float fVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar12;
  undefined1 in_q3 [16];
  undefined8 uVar13;
  undefined8 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  long *local_1d0;
  code *local_1c8;
  code *local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [96];
  long *local_150;
  undefined1 local_144 [4];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  long *local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  long *local_118;
  undefined1 auStack_110 [24];
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  char *local_c8;
  long *local_b8;
  long *local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  uVar13 = in_q3._8_8_;
  uVar9 = in_q3._0_8_;
  FUN_0108da48(auStack_d0,param_1[0x41]);
  FUN_00956dac(&local_b0,param_1 + 0x35);
  (**(code **)(*local_b0 + 0x40))();
  local_e0 = uVar9;
  uStack_d8 = uVar13;
  if (local_b0 != (long *)0x0) {
    lVar10 = local_b0[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  if (*local_c8 != '\0') {
    FUN_01e98760(param_1,auStack_d0);
    uStack_d8 = CONCAT44(extraout_var_01,extraout_var_00);
    local_e0 = CONCAT44(extraout_var,extraout_s0);
  }
  fVar11 = (float)FUN_0108da04(param_1[0x41]);
  fVar12 = *(float *)((long)param_1 + 0x4e4);
  uStack_e8 = CONCAT44((float)((ulong)_UNK_03888fc8 >> 0x20) * fVar11 * fVar12,
                       (float)_UNK_03888fc8 * fVar11 * fVar12);
  local_f0 = CONCAT44((float)((ulong)_DAT_03888fc0 >> 0x20) * fVar11 * fVar12,
                      (float)_DAT_03888fc0 * fVar11 * fVar12);
  FUN_0108d8b8(auStack_110,param_1[0x41]);
  if (param_1[0xc0] == 0) {
    local_118 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_118);
    if (local_118 != (long *)0x0) {
      (**(code **)(*param_1 + 0x10))(&local_b0,param_1);
      local_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      FUN_01eacb9c(&local_128,&local_b0);
      plVar8 = local_b0;
      if (local_b0 != (long *)0x0) {
        plVar2 = local_b0 + 1;
        do {
          iVar7 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_1f0 = (undefined8 *)*plVar8;
          FUN_02a44274(lVar10 + 0xd8,&local_1f0);
        }
      }
      local_130 = (long *)0x0;
      lVar10 = param_1[1];
      local_134[0] = 1;
      local_138[0] = 1;
      local_144[0] = 1;
      local_13c[0] = 0;
      local_140[0] = 0;
      FUN_01ea5884(&local_b0,param_1);
      plVar8 = (long *)FUN_01ead5f4(lVar10,&local_e0,&local_f0,auStack_110,local_134,local_138,
                                    local_13c,local_140,local_144,&local_b0);
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
        plVar2 = local_130;
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_130 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          lVar10 = plVar2[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*plVar2 + 0x20))();
          }
        }
      }
      local_130 = plVar8;
      if (local_b0 != (long *)0x0) {
        plVar8 = local_b0 + 1;
        do {
          iVar7 = (int)*plVar8 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_1f0 = (undefined8 *)*local_b0;
          FUN_02a44274(lVar10 + 0xd8,&local_1f0);
        }
      }
      plVar8 = local_118;
      local_1f0 = (undefined8 *)0x0;
      uStack_1e8 = 0;
      FUN_01ead384(&local_1f0,&local_128);
      local_1c0 = (code *)0x0;
      uStack_1b8 = 0;
      local_1e0 = local_e0;
      uStack_1d8 = uStack_d8;
      local_1d0 = (long *)0x0;
      local_1c8 = (code *)0x0;
      FUN_01ead84c(&local_1d0,&local_1f0);
      lVar10 = plVar8[0xf];
      local_a0 = (code *)0x0;
      local_98 = 0;
      local_b0 = (long *)0x0;
      local_a8 = (code *)0x0;
      if (local_1c0 != (code *)0x0) {
        (*local_1c0)(auStack_1b0,auStack_90);
        local_b0 = local_1d0;
        local_98 = uStack_1b8;
        local_a8 = local_1c8;
        local_a0 = local_1c0;
      }
      FUN_00bdc73c(&local_150,lVar10,0xc,&local_130,&local_b0,0);
      pcVar6 = local_a8;
      if (local_a8 == (code *)0x0) {
        local_a8 = (code *)0x0;
      }
      else {
        local_a0 = (code *)0x0;
        local_98 = 0;
        local_b0 = (long *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar6)(auStack_90);
      }
      pcVar6 = local_1c8;
      if (local_150 != (long *)0x0) {
        lVar10 = local_150[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
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
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_150 + 0x20))();
          pcVar6 = local_1c8;
        }
      }
      local_1c8 = (code *)0x0;
      puVar5 = local_1f0;
      if (pcVar6 != (code *)0x0) {
        local_1c0 = (code *)0x0;
        uStack_1b8 = 0;
        local_1d0 = (long *)0x0;
        local_1c8 = (code *)0x0;
        (*pcVar6)(auStack_1b0);
        puVar5 = local_1f0;
      }
      local_1f0 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
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
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_b0 = (long *)*puVar5;
          FUN_02a44274(lVar10 + 0xd8,&local_b0);
        }
      }
      puVar5 = local_128;
      if (local_130 != (long *)0x0) {
        lVar10 = local_130[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
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
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_130 + 0x20))();
          puVar5 = local_128;
        }
      }
      local_128 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
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
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_b0 = (long *)*puVar5;
          FUN_02a44274(lVar10 + 0xd8,&local_b0);
        }
      }
      if (local_118 != (long *)0x0) {
        lVar10 = local_118[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
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
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_118 + 0x20))();
        }
      }
    }
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  return;
}


