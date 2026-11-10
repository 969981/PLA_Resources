/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a83a4; name: FUN_026a83a4
 */


void FUN_026a83a4(undefined1 param_1 [16],long *param_2,char *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  byte bVar15;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 local_58;
  
  *(undefined1 *)((long)param_2 + 0xd1c) = 0;
  param_2[0x19e] = 0;
  param_2[0x19f] = 0;
  param_2[0x1a0] = 0;
  param_2[0x1a1] = 0;
  if ((char)param_2[0x19a] != '\0') {
    *(undefined1 *)(param_2 + 0x19a) = 0;
  }
  *(char *)((long)param_2 + 0xd1d) = param_3[1];
  auVar16 = NEON_rev64(param_1,4);
  auVar17._4_12_ = auVar16._4_12_;
  auVar17._0_4_ = auVar16._4_4_;
  auVar18._0_8_ = auVar17._0_8_;
  auVar18._8_4_ = auVar16._12_4_;
  auVar18._12_4_ = auVar16._12_4_;
  *(char *)((long)param_2 + 0xd1e) = param_3[2];
  bVar15 = -(*param_3 == '\0');
  param_2[0x1a1] = auVar18._8_8_ & 0xffffffff;
  param_2[0x1a0] = (ulong)auVar16._4_4_;
  param_2[0x19f] = 0;
  param_2[0x19e] =
       (ulong)CONCAT13(param_1[7] & bVar15,
                       CONCAT12(param_1[6] & bVar15,
                                CONCAT11(param_1[5] & bVar15,param_1[4] & bVar15))) << 0x20;
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_026b20ec(&local_70,param_2 + 0x196);
  if (local_70 == (undefined8 *)0x0) {
    local_60 = (long *)0x0;
  }
  else {
    FUN_026b1c3c(&local_60);
    puVar5 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = *puVar5;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
  }
  if ((local_60 != (long *)0x0) && (FUN_026a1350(local_60,*param_3), local_60 != (long *)0x0)) {
    lVar13 = local_60[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_008c4b3c(&local_70,param_2 + 0x198);
  FUN_00956dac(&local_60,&local_70);
  puVar5 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = *puVar5;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  if (local_60 != (long *)0x0) {
    lVar13 = *(long *)PTR_DAT_04379570;
    lVar2 = *(long *)(PTR_DAT_04379570 + 8);
    *(undefined1 *)(local_60 + 0x1c) = 1;
    local_60[0x18] = lVar13;
    local_60[0x19] = lVar2;
    lVar13 = local_60[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  (**(code **)(*param_2 + 0x198))(param_2);
  *(undefined1 *)((long)param_2 + 0xd24) = 0;
  *(uint *)(param_2 + 0x1a4) =
       CONCAT13(extraout_var_01,CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_00cf98c8(&local_70,param_2 + 0x4c);
  puVar5 = local_70;
  puVar9 = PTR_DAT_0437a668;
  puVar8 = PTR_DAT_0437a660;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_70 != (undefined8 *)0x0) {
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar11 = *(int *)((long)local_70 + 0xc);
      do {
        plVar14 = (long *)puVar5[2];
        if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar8 = puVar7;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_026a87f4;
          if (plVar14 == (long *)puVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = puVar5[3];
            plVar14 = (long *)0x0;
            puVar5 = local_70;
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x026a8710;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_026a87f4:
    plVar14 = (long *)0x0;
    puVar5 = local_70;
joined_r0x026a8710:
    local_70 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = *puVar5;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    if (plVar14 != (long *)0x0) {
      FUN_01e42f90(1,0xc,1);
      FUN_01e42f90(1,0x18,1);
      lVar13 = plVar14[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  return;
}


