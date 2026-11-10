/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea0940; name: FUN_01ea0940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea0940(long *param_1)

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
  long lVar11;
  float fVar12;
  undefined1 in_q3 [16];
  long lVar13;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  long *local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [104];
  long *local_128;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  long *local_100;
  long *local_f8;
  undefined1 auStack_f0 [24];
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long lStack_b8;
  long *local_b0;
  code *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  lVar13 = in_q3._8_8_;
  lVar11 = in_q3._0_8_;
  FUN_00956dac(&local_b0,param_1 + 0x35);
  lStack_b8 = local_b0[0x1b];
  local_c0 = local_b0[0x1a];
  if (local_b0 != (long *)0x0) {
    lVar10 = local_b0[0xb];
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
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  FUN_00956dac(&local_b0,param_1 + 0x46);
  if ((local_b0 != (long *)0x0) &&
     ((**(code **)(*local_b0 + 0x40))(), local_c0 = lVar11, lStack_b8 = lVar13,
     local_b0 != (long *)0x0)) {
    lVar11 = local_b0[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  fVar12 = (float)FUN_0108e5c0(param_1[0x41]);
  local_d0 = CONCAT44((float)((ulong)_DAT_03888fc0 >> 0x20) * fVar12,(float)_DAT_03888fc0 * fVar12);
  uStack_c8 = CONCAT44((float)((ulong)_UNK_03888fc8 >> 0x20) * fVar12,(float)_UNK_03888fc8 * fVar12)
  ;
  FUN_0108e484(auStack_f0,param_1[0x41]);
  if (param_1[0xc0] == 0) {
    local_f8 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_f8);
    if (local_f8 != (long *)0x0) {
      local_100 = (long *)0x0;
      lVar11 = param_1[1];
      local_1c0 = (undefined8 *)CONCAT71(local_1c0._1_7_,1);
      local_104[0] = 1;
      local_110[0] = 1;
      local_108[0] = 0;
      local_10c[0] = 0;
      FUN_01ea5884(&local_b0,param_1);
      plVar8 = (long *)FUN_01ead5f4(lVar11,&local_c0,&local_d0,auStack_f0,&local_1c0,local_104,
                                    local_108,local_10c,local_110,&local_b0);
      if (plVar8 != (long *)0x0) {
        lVar11 = plVar8[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar9;
        }
        plVar6 = local_100;
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_100 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          lVar11 = plVar6[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
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
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
      }
      plVar6 = local_b0;
      local_100 = plVar8;
      if (local_b0 != (long *)0x0) {
        plVar8 = local_b0 + 1;
        do {
          iVar7 = (int)*plVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_120 = (undefined8 *)*plVar6;
          FUN_02a44274(lVar11 + 0xd8,&local_120);
        }
      }
      (**(code **)(*param_1 + 0x10))(&local_b0,param_1);
      local_120 = (undefined8 *)0x0;
      uStack_118 = 0;
      FUN_01eacb9c(&local_120,&local_b0);
      if (local_b0 != (long *)0x0) {
        plVar8 = local_b0 + 1;
        do {
          iVar7 = (int)*plVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_1c0 = (undefined8 *)*local_b0;
          FUN_02a44274(lVar11 + 0xd8,&local_1c0);
        }
      }
      plVar8 = local_f8;
      local_1c0 = (undefined8 *)0x0;
      uStack_1b8 = 0;
      FUN_01ead384(&local_1c0,&local_120);
      local_1a0 = (code *)0x0;
      uStack_198 = 0;
      local_1b0 = (long *)0x0;
      local_1a8 = (code *)0x0;
      FUN_01eaf004(&local_1b0,&local_1c0);
      lVar11 = plVar8[0xf];
      local_a0 = (code *)0x0;
      local_98 = 0;
      local_b0 = (long *)0x0;
      local_a8 = (code *)0x0;
      if (local_1a0 != (code *)0x0) {
        (*local_1a0)(auStack_190,auStack_90);
        local_b0 = local_1b0;
        local_98 = uStack_198;
        local_a8 = local_1a8;
        local_a0 = local_1a0;
      }
      FUN_00bdc73c(&local_128,lVar11,0xc,&local_100,&local_b0,0);
      pcVar5 = local_a8;
      if (local_a8 == (code *)0x0) {
        local_a8 = (code *)0x0;
      }
      else {
        local_a0 = (code *)0x0;
        local_98 = 0;
        local_b0 = (long *)0x0;
        local_a8 = (code *)0x0;
        (*pcVar5)(auStack_90);
      }
      pcVar5 = local_1a8;
      if (local_128 != (long *)0x0) {
        lVar11 = local_128[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_128 + 0x20))();
          pcVar5 = local_1a8;
        }
      }
      local_1a8 = (code *)0x0;
      puVar4 = local_1c0;
      if (pcVar5 != (code *)0x0) {
        local_1a0 = (code *)0x0;
        uStack_198 = 0;
        local_1b0 = (long *)0x0;
        local_1a8 = (code *)0x0;
        (*pcVar5)(auStack_190);
        puVar4 = local_1c0;
      }
      local_1c0 = puVar4;
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
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_b0 = (long *)*puVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_b0);
        }
      }
      puVar4 = local_120;
      if (local_120 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_120 + 1);
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
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_b0 = (long *)*puVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_b0);
        }
      }
      if (local_100 != (long *)0x0) {
        lVar11 = local_100[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
        }
      }
      if (local_f8 != (long *)0x0) {
        lVar11 = local_f8[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_f8 + 0x20))();
        }
      }
    }
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  return;
}


