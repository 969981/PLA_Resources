/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8769c; name: FUN_01a8769c
 */


undefined8 FUN_01a8769c(long *param_1)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long *plVar19;
  long lVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined1 in_q3 [16];
  undefined8 uVar27;
  undefined8 local_a8;
  int local_a0;
  undefined4 uStack_9c;
  byte local_98;
  undefined4 local_94;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  long *local_78;
  
  uVar27 = in_q3._8_8_;
  plVar19 = in_q3._0_8_;
  if ((*(uint *)((long)param_1 + 0x914) & 0xfffffffe) != 2) {
    return 0;
  }
  FUN_01839c8c(&local_a8,param_1 + 0x15a);
  if (local_a8 == (long *)0x0) {
    fVar21 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    goto LAB_01a8776c;
  }
  FUN_01839c8c(&local_90,param_1 + 0x15a);
  if (local_90 == (long *)0x0) {
joined_r0x01a87acc:
    fVar24 = 0.0;
    fVar23 = 0.0;
    fVar21 = 0.0;
  }
  else {
    lVar16 = local_90[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    iVar13 = *(int *)((long)local_90 + 0x7c);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
    if ((iVar13 != 2) || (lVar16 = local_a8[0x1a], lVar16 == 0)) goto joined_r0x01a87acc;
    pauVar1 = (undefined1 (*) [12])(lVar16 + 0xc0);
    uVar14 = (undefined4)((ulong)*(undefined8 *)(lVar16 + 200) >> 0x20);
    fVar21 = (float)*(undefined8 *)*pauVar1;
    fVar23 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar25._12_4_ = uVar14;
    auVar25._0_12_ = *pauVar1;
    auVar8._12_4_ = uVar14;
    auVar8._0_12_ = *pauVar1;
    auVar25 = NEON_ext(auVar25,auVar8,8,1);
    fVar24 = auVar25._0_4_;
  }
  if (local_a8 != (long *)0x0) {
    lVar16 = local_a8[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
LAB_01a8776c:
  fVar21 = fVar21 * fVar21;
  fVar23 = fVar23 * fVar23;
  *(undefined1 *)((long)param_1 + 0x704) = 1;
  auVar6._4_4_ = fVar23;
  auVar6._0_4_ = fVar21;
  auVar6._8_4_ = fVar24 * fVar24;
  auVar6._12_4_ = 0;
  auVar7._4_4_ = fVar23;
  auVar7._0_4_ = fVar21;
  auVar7._8_4_ = fVar24 * fVar24;
  auVar7._12_4_ = 0;
  auVar25 = NEON_ext(auVar6,auVar7,8,1);
  *(float *)(param_1 + 0xe1) = SQRT(auVar25._0_4_ + fVar21 + auVar25._4_4_ + fVar23);
  (**(code **)(*param_1 + 0x100))(param_1,PTR_DAT_0437a330);
  if (((*(int *)((long)param_1 + 0x914) == 2) &&
      (FUN_009c685c(&local_90,param_1 + 0xb9), local_90 != (long *)0x0)) &&
     ((**(code **)(*local_90 + 0x268))(local_90,1), local_90 != (long *)0x0)) {
    lVar16 = local_90[0xb];
    piVar2 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  *(undefined4 *)((long)param_1 + 0x914) = 0;
  *(undefined4 *)(param_1[0xb8] + 0xd0) = *(undefined4 *)(param_1[0xb8] + 0xcc);
  if (param_1[0x158] != 0) {
    iVar13 = FUN_01a87cb8(param_1);
    if (iVar13 == 0) {
      uVar14 = (**(code **)(*param_1 + 0x350))(param_1);
      uVar22 = (**(code **)(*param_1 + 0x348))(param_1,uVar14);
      bVar12 = 0;
    }
    else {
      if (iVar13 == 1) {
        uVar14 = (**(code **)(*param_1 + 0x368))(param_1);
        pcVar18 = *(code **)(*param_1 + 0x360);
      }
      else {
        uVar14 = (**(code **)(*param_1 + 0x380))(param_1);
        pcVar18 = *(code **)(*param_1 + 0x378);
      }
      uVar22 = (*pcVar18)(param_1,uVar14);
      local_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_01a9e404(&local_90,param_1 + 0xc1);
      FUN_01a821fc(&local_78,&local_90);
      plVar9 = local_90;
      if (local_90 != (long *)0x0) {
        plVar3 = local_90 + 1;
        do {
          iVar15 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 == 0) {
          local_90[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_a8 = (long *)*plVar9;
          FUN_02a44274(lVar16 + 0xd8,&local_a8);
        }
      }
      plVar9 = local_78;
      bVar12 = 0;
      if (local_78 != (long *)0x0) {
        FUN_009c69bc(&local_90,param_1);
        (**(code **)(*local_90 + 0x40))();
        if (local_90 != (long *)0x0) {
          lVar16 = local_90[0xb];
          piVar2 = (int *)(lVar16 + 0xc);
          do {
            iVar15 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_90 + 0x20))();
          }
        }
        local_90 = plVar19;
        uStack_88 = uVar27;
        bVar12 = FUN_0182ff34(plVar9,&local_90);
        if (local_78 != (long *)0x0) {
          lVar16 = local_78[0xb];
          piVar2 = (int *)(lVar16 + 0xc);
          do {
            iVar15 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*local_78 + 0x20))();
          }
        }
      }
    }
    uVar26 = (undefined4)((ulong)plVar19 >> 0x20);
    lVar16 = param_1[0x138];
    FUN_009c69bc(&local_90,param_1);
    (**(code **)(*local_90 + 0x40))();
    if (local_90 != (long *)0x0) {
      lVar17 = local_90[0xb];
      piVar2 = (int *)(lVar17 + 0xc);
      do {
        iVar15 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
      }
    }
    lVar20 = param_1[0x158];
    lVar17 = nn::os::GetCurrentThread();
    plVar19 = (long *)(lVar20 + 0xf8);
    do {
      if (*plVar19 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0xec));
          while (*plVar19 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *plVar19 = lVar17;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01a878b4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar17;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01a878b4:
    puVar11 = PTR_DAT_043794a8;
    puVar10 = PTR_DAT_043794a0;
    plVar19 = *(long **)(lVar20 + 0xb0);
    while (plVar19 != (long *)0x0) {
      local_90 = (long *)0x0;
      uStack_88 = 0;
      FUN_008802f0(&local_90,plVar19 + 3);
      local_80 = (long *)plVar19[5];
      if ((local_90 == (long *)0x0) || (*(int *)((long)local_90 + 0xc) == 0)) {
        plVar19 = (long *)FUN_01aa18b0(lVar20 + 0x80,plVar19);
        plVar9 = local_90;
      }
      else {
        local_a8 = (long *)CONCAT44(uVar26,(int)lVar16);
        local_a0 = iVar13;
        uStack_9c = uVar14;
        local_98 = bVar12 & 1;
        local_94 = uVar22;
        (**(code **)(*local_80 + 0x30))(local_80,&local_a8);
        plVar19 = (long *)*plVar19;
        plVar9 = local_90;
      }
      local_90 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 1;
        do {
          iVar15 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar15 == 0) {
          plVar9[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)puVar10;
          *(long *)puVar11 = lVar17;
          local_78 = (long *)*plVar9;
          FUN_02a44274(lVar17 + 0xd8,&local_78);
        }
      }
    }
    *(undefined8 *)(lVar20 + 0xf8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0xec));
  }
  return 1;
}


