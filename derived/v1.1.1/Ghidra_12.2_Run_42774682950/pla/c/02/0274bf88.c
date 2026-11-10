/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0274bf88; name: FUN_0274bf88
 */


/* WARNING: Removing unreachable block (ram,0x0274c254) */
/* WARNING: Removing unreachable block (ram,0x0274c25c) */
/* WARNING: Removing unreachable block (ram,0x0274c264) */
/* WARNING: Removing unreachable block (ram,0x0274c26c) */
/* WARNING: Removing unreachable block (ram,0x0274c950) */
/* WARNING: Removing unreachable block (ram,0x0274c968) */
/* WARNING: Removing unreachable block (ram,0x0274c278) */
/* WARNING: Removing unreachable block (ram,0x0274c280) */
/* WARNING: Removing unreachable block (ram,0x0274c288) */
/* WARNING: Removing unreachable block (ram,0x0274c290) */
/* WARNING: Removing unreachable block (ram,0x0274c96c) */
/* WARNING: Removing unreachable block (ram,0x0274c984) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0274bf88(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *local_208;
  long *local_200;
  undefined8 local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long *aplStack_1d0 [12];
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long *aplStack_150 [12];
  long *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long *plStack_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *plStack_98;
  undefined4 local_90;
  long local_88;
  
  plVar16 = (long *)*param_2;
  *param_2 = 0;
  plVar18 = *(long **)(*param_1 + 8);
  local_200 = (long *)((ulong)local_200 & 0xffffffff00000000);
  local_1f8 = 0x2000;
  if (plVar16 == (long *)0x0) {
    local_208 = (long *)0x0;
  }
  else {
    lVar17 = plVar16[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar17 = plVar16[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar17 = plVar16[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      local_208 = plVar16;
    } while (cVar6 != '\0');
  }
  puVar8 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar9 = PTR_DAT_04379528;
  lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_0274cb24:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar18;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
  plVar13 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x200,0x10);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*plVar18 + 0xb8))(plVar18);
  }
  local_f0 = (long *)&LAB_0274cbd4;
  local_e8 = FUN_0274cc04;
  local_e0 = &LAB_0274cc3c;
  local_d8 = &LAB_0274ccb0;
  local_170 = &LAB_0274ccc0;
  local_168 = FUN_0274cd08;
  local_160 = &LAB_0274cd40;
  local_158 = &LAB_0274cdb4;
  aplStack_150[0] = local_208;
  local_1f0 = &LAB_0274cdc4;
  local_1e8 = FUN_0274cdd8;
  local_1e0 = &LAB_0274ce10;
  local_1d8 = &LAB_0274ce84;
  aplStack_1d0[0] = local_208;
  plStack_d0 = plVar16;
  FUN_013b7bdc(plVar13,&local_200,&local_f0,&local_170,&local_1f0);
  pcVar10 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar10)(aplStack_1d0);
  }
  pcVar10 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar10)(aplStack_150);
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&plStack_d0);
  }
  plVar13[1] = (long)plVar18;
  plVar13[2] = (long)plVar13;
  plVar13[3] = 0x200;
  plVar13[4] = 0x10;
  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
  if (plVar13 != (long *)0x0) {
    lVar17 = plVar13[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar18 = (long *)*param_1;
  if (plVar18 != (long *)0x0) {
    lVar17 = plVar18[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar20 = (long *)param_1[5];
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar13 != (long *)0x0) {
    lVar17 = plVar13[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar17 = param_1[1];
  lVar3 = param_1[2];
  lVar2 = param_1[3];
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  uVar5 = (undefined4)param_1[6];
  lVar15 = param_1[7];
  if (plVar16 == (long *)0x0) {
    local_200 = (long *)0x0;
  }
  else {
    lVar21 = plVar16[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar21 = plVar16[0xb];
    local_200 = plVar16;
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar22 = *(long **)(*param_1 + 8);
  if (((*puVar8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar21 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
  if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_0274cb24;
  *(long **)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = plVar22;
  *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
  plVar14 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x200,0x10);
  if (plVar14 == (long *)0x0) {
    (**(code **)(*plVar22 + 0xb8))(plVar22);
  }
  local_d8 = (undefined1 *)0x0;
  local_e8 = (code *)0x0;
  local_e0 = (undefined1 *)0x0;
  local_f0 = (long *)0x0;
  plStack_d0 = plVar18;
  if (plVar18 != (long *)0x0) {
    lVar19 = plVar18[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_c8 = plVar20;
  if (plVar20 != (long *)0x0) {
    lVar19 = plVar20[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_c0 = plVar13;
  if (plVar13 != (long *)0x0) {
    lVar19 = plVar13[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_b8 = plVar16;
  if (plVar16 != (long *)0x0) {
    lVar19 = plVar16[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_b0 = lVar17;
  lStack_a8 = lVar3;
  local_a0 = lVar2;
  plStack_98 = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_158 = (undefined1 *)0x0;
  local_f0 = (long *)&LAB_0274ce94;
  local_e8 = FUN_0274d344;
  local_e0 = &LAB_0274d69c;
  local_d8 = &LAB_0274d830;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  aplStack_150[0] = plVar16;
  local_90 = uVar5;
  local_88 = lVar15;
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_1f0 = (undefined1 *)0x0;
  local_170 = &LAB_0274d97c;
  local_168 = FUN_0274d9c4;
  local_160 = &LAB_0274d9fc;
  local_158 = &LAB_0274da70;
  local_1d8 = (undefined1 *)0x0;
  aplStack_1d0[0] = local_200;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  if (local_200 != (long *)0x0) {
    lVar17 = local_200[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_0274cb0c;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_1f0 = &LAB_0274da80;
  local_1e8 = FUN_0274da94;
  local_1e0 = &LAB_0274dacc;
  local_1d8 = &LAB_0274db40;
  FUN_013b7bdc(plVar14,param_1 + 6,&local_f0,&local_170,&local_1f0);
  pcVar10 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar10)(aplStack_1d0);
  }
  pcVar10 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    local_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar10)(aplStack_150);
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&plStack_d0);
  }
  plVar14[1] = (long)plVar22;
  plVar14[2] = (long)plVar14;
  plVar14[3] = 0x200;
  plVar14[4] = 0x10;
  *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
  local_f0 = plVar14;
  if (plVar14 != (long *)0x0) {
    lVar17 = plVar14[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_0274cb0c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_013b651c(*param_1,&local_f0);
  if (local_f0 != (long *)0x0) {
    lVar17 = local_f0[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  if (local_200 != (long *)0x0) {
    lVar17 = local_200[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_200 + 0x20))();
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar17 = plVar13[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  if (plVar18 != (long *)0x0) {
    lVar17 = plVar18[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar17 = plVar13[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return;
}


