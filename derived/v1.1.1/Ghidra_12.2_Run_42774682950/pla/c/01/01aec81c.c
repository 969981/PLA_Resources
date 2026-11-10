/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aec81c; name: FUN_01aec81c
 */


void FUN_01aec81c(long param_1)

{
  undefined1 (*pauVar1) [12];
  long *plVar2;
  long *plVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined4 uVar18;
  long *local_48;
  long *local_40;
  long *local_38;
  undefined8 uStack_30;
  long *local_28;
  
  local_38 = (long *)0x0;
  uStack_30 = 0;
  FUN_00cf9db0(&local_38,param_1 + 0x788);
  plVar3 = local_38;
  if (local_38 != (long *)0x0) {
    iVar10 = *(int *)((long)local_38 + 0xc);
    if (local_38 != (long *)0x0) {
      plVar2 = local_38 + 1;
      do {
        iVar11 = (int)*plVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        local_38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_28 = (long *)*plVar3;
        FUN_02a44274(lVar13 + 0xd8,&local_28);
      }
    }
    if (iVar10 != 0) {
      return;
    }
  }
  local_38 = (long *)0x0;
  uStack_30 = 0;
  FUN_00ac3fa4(&local_38,param_1 + 0x248);
  FUN_0099c748(&local_40,&local_38);
  plVar3 = local_38;
  if (local_38 != (long *)0x0) {
    plVar2 = local_38 + 1;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 == 0) {
      local_38[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_28 = (long *)*plVar3;
      FUN_02a44274(lVar13 + 0xd8,&local_28);
    }
  }
  if (local_40 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x798) == 0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_01b034a0(&local_48,*(long *)(param_1 + 0x798));
  }
  uVar12 = (**(code **)(*local_40 + 0x1a0))();
  if ((uVar12 & 1) == 0) goto joined_r0x01aecaac;
  plVar3 = local_40 + 0x15a;
  FUN_01839c8c(&local_28,plVar3);
  if (local_28 == (long *)0x0) {
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
  }
  else {
    FUN_01839c8c(&local_38,plVar3);
    if (local_38 == (long *)0x0) {
joined_r0x01aecad4:
      fVar16 = 0.0;
      fVar15 = 0.0;
      fVar14 = 0.0;
    }
    else {
      lVar13 = local_38[0xb];
      piVar4 = (int *)(lVar13 + 0xc);
      iVar10 = *(int *)((long)local_38 + 0x7c);
      do {
        iVar11 = *piVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar6) {
          *piVar4 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
      if ((iVar10 != 2) || (lVar13 = local_28[0x1a], lVar13 == 0)) goto joined_r0x01aecad4;
      pauVar1 = (undefined1 (*) [12])(lVar13 + 0xc0);
      uVar18 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 200) >> 0x20);
      fVar14 = (float)*(undefined8 *)*pauVar1;
      fVar15 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar17._12_4_ = uVar18;
      auVar17._0_12_ = *pauVar1;
      auVar9._12_4_ = uVar18;
      auVar9._0_12_ = *pauVar1;
      auVar17 = NEON_ext(auVar17,auVar9,8,1);
      fVar16 = auVar17._0_4_;
    }
    if (local_28 != (long *)0x0) {
      lVar13 = local_28[0xb];
      piVar4 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar6) {
          *piVar4 = iVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  auVar7._4_4_ = fVar15;
  auVar7._0_4_ = fVar14;
  auVar7._8_4_ = fVar16 * fVar16;
  auVar7._12_4_ = 0;
  auVar8._4_4_ = fVar15;
  auVar8._0_4_ = fVar14;
  auVar8._8_4_ = fVar16 * fVar16;
  auVar8._12_4_ = 0;
  auVar17 = NEON_ext(auVar7,auVar8,8,1);
  iVar10 = (int)local_48[0xd] +
           (int)(*(float *)(*(long *)PTR_DAT_0437b4c8 + 0x50) *
                SQRT(auVar17._0_4_ + fVar14 + auVar17._4_4_ + fVar15));
  *(undefined1 *)(local_48 + 0xe) = 1;
  iVar11 = *(int *)((long)local_48 + 0x6c);
  if (iVar10 <= *(int *)((long)local_48 + 0x6c)) {
    iVar11 = iVar10;
  }
  if (iVar10 < 0) {
    *(undefined4 *)(local_48 + 0xd) = 0;
  }
  else {
    *(int *)(local_48 + 0xd) = iVar11;
  }
joined_r0x01aecaac:
  if (local_48 != (long *)0x0) {
    lVar13 = local_48[0xb];
    piVar4 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_40 != (long *)0x0) {
    lVar13 = local_40[0xb];
    piVar4 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  return;
}


