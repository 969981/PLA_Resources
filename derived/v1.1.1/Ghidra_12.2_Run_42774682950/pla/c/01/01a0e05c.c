/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a0e05c; name: FUN_01a0e05c
 */


void FUN_01a0e05c(long param_1)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  long *plVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  float extraout_s0;
  float extraout_s0_00;
  float fVar11;
  undefined4 uVar12;
  float extraout_var;
  float extraout_var_00;
  float fVar13;
  float extraout_var_01;
  float extraout_var_02;
  float fVar14;
  float extraout_var_03;
  float extraout_var_04;
  float fVar15;
  undefined1 auVar16 [16];
  long *local_80;
  undefined8 uStack_78;
  long *local_60;
  long *local_50;
  char *local_48;
  long *local_38;
  
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_0191c300(&local_80,param_1 + 0x340);
  if (local_80 != (long *)0x0) {
    FUN_0191cb34(&local_50);
    plVar8 = local_50;
    plVar7 = local_80;
    if (local_80 != (long *)0x0) {
      plVar1 = local_80 + 1;
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
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_50 = (long *)*plVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_50);
      }
    }
    if (plVar8 != (long *)0x0) {
      puVar3 = &DAT_0388a860;
      if (*(char *)(param_1 + 0x6c0) != '\0') {
        puVar3 = &DAT_0388a6e8;
      }
      FUN_019225b0(&local_50,plVar8,*puVar3);
      if (*local_48 != '\0') {
        *(undefined8 *)(param_1 + 0x740) = *(undefined8 *)(param_1 + 0x690);
        *(undefined8 *)(param_1 + 0x748) = *(undefined8 *)(param_1 + 0x698);
        if (*(char *)(param_1 + 0x730) == '\0') {
          *(undefined1 *)(param_1 + 0x730) = 1;
        }
        *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)(param_1 + 0x6a0);
        *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_1 + 0x6a8);
        lVar10 = param_1;
        if (*(char *)(param_1 + 0x750) == '\0') {
          lVar10 = 1;
          *(undefined1 *)(param_1 + 0x750) = 1;
        }
        FUN_01b77e98(lVar10,param_1);
        FUN_01b778e0(param_1);
        fVar11 = (extraout_s0 - extraout_s0_00) * (extraout_s0 - extraout_s0_00);
        fVar13 = (extraout_var - extraout_var_00) * (extraout_var - extraout_var_00);
        fVar14 = (extraout_var_01 - extraout_var_02) * (extraout_var_01 - extraout_var_02);
        fVar15 = (extraout_var_03 - extraout_var_04) * (extraout_var_03 - extraout_var_04);
        auVar16._4_4_ = fVar13;
        auVar16._0_4_ = fVar11;
        auVar16._8_4_ = fVar14;
        auVar16._12_4_ = fVar15;
        auVar6._4_4_ = fVar13;
        auVar6._0_4_ = fVar11;
        auVar6._8_4_ = fVar14;
        auVar6._12_4_ = fVar15;
        auVar16 = NEON_ext(auVar16,auVar6,8,1);
        uVar12 = FUN_0191e7ac(SQRT(auVar16._0_4_ + fVar11 + auVar16._4_4_ + fVar13),param_1 + 0x6b0)
        ;
        *(undefined1 *)(param_1 + 0x770) = 1;
        *(undefined4 *)(param_1 + 0x774) = uVar12;
        *(undefined1 *)(param_1 + 0x778) = 0;
        FUN_00adcc04(&local_80,&local_50);
        FUN_01b79690(param_1 + 0x6e0,&local_80);
        if (local_60 != (long *)0x0) {
          (**(code **)(*local_60 + 0x20))();
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        FUN_01b79dfc(param_1 + 0x6e0);
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      lVar10 = plVar8[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
  }
  return;
}


