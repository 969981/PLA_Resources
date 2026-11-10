/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1296c; name: FUN_01f1296c
 */


void FUN_01f1296c(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  size_t sVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long *local_c8;
  undefined4 local_c0;
  long *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  undefined4 local_90;
  long *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  undefined4 local_60;
  long *local_58;
  long *local_48;
  
  if (*param_2 == 0) {
    local_58 = (long *)0x0;
    goto LAB_01f134f4;
  }
  FUN_019bf828(&local_58);
  puVar4 = PTR_DAT_0437a780;
  if (local_58 == (long *)0x0) goto LAB_01f134f4;
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  puVar6 = PTR_DAT_0437a790;
  puVar5 = PTR_DAT_0437a788;
  lVar12 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar12;
  plVar13 = *(long **)(*(long *)(lVar12 + 0x78) + 0x998);
  if (plVar13 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f134f4;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    lVar12 = *(long *)puVar5;
    *(long *)puVar6 = lVar12;
    plVar14 = *(long **)(*(long *)(lVar12 + 0x78) + 0x998);
    if (plVar14 == (long *)0x0) {
      uVar8 = FUN_00d09a08(0);
    }
    else {
      lVar12 = plVar14[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f134f4;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar8 = FUN_00d09a08(plVar14);
      lVar12 = plVar14[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  local_e8 = (long *)param_2[3];
  sVar9 = strlen(s_data___0427f778);
  iVar7 = strncmp("bin/field/env/",s_data___0427f778,sVar9);
  if (iVar7 == 0) {
    FUN_01f22e54(&local_b8,&local_e8);
  }
  else {
    FUN_01f22f00(&local_e8);
  }
  plVar13 = local_b8;
  local_b8 = (long *)0x0;
  local_88 = plVar13;
  if (plVar13 == (long *)0x0) {
    local_80 = *(long *)PTR_DAT_04379c88;
LAB_01f13424:
    lStack_78 = *(long *)PTR_PTR_04379d00;
    if (plVar13 != (long *)0x0) goto LAB_01f12b10;
LAB_01f13434:
    local_70 = 0;
  }
  else {
    local_80 = plVar13[0xb];
    if (plVar13 == (long *)0x0) goto LAB_01f13424;
    lStack_78 = plVar13[0xc];
    if (plVar13 == (long *)0x0) goto LAB_01f13434;
LAB_01f12b10:
    local_70 = plVar13[0xd];
  }
  local_68 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar14 = plVar13;
  }
  local_60 = 0;
  local_68 = plVar14;
  FUN_02a8eb50(&local_88);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  uVar10 = FUN_00938764(param_1 + 0x6120,1,&local_88,0,*(undefined8 *)(param_1 + 8),uVar8);
  if (((uVar10 & 1) != 0) && (plVar13 = *(long **)(param_1 + 0x6148), plVar13 != (long *)0x0)) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f134f4;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  local_48 = (long *)param_2[3];
  sVar9 = strlen(s_data___0427f778);
  iVar7 = strncmp("bin/field/env/",s_data___0427f778,sVar9);
  if (iVar7 == 0) {
    FUN_01f22fd0(&local_e8,&local_48);
  }
  else {
    FUN_01f23080(&local_48);
  }
  plVar13 = local_e8;
  local_e8 = (long *)0x0;
  local_b8 = plVar13;
  if (plVar13 == (long *)0x0) {
    local_b0 = *(long *)PTR_DAT_04379c88;
LAB_01f1344c:
    local_a8 = *(long *)PTR_PTR_04379d00;
    if (plVar13 != (long *)0x0) goto LAB_01f12bd0;
LAB_01f1345c:
    local_a0 = 0;
  }
  else {
    local_b0 = plVar13[0xb];
    if (plVar13 == (long *)0x0) goto LAB_01f1344c;
    local_a8 = plVar13[0xc];
    if (plVar13 == (long *)0x0) goto LAB_01f1345c;
LAB_01f12bd0:
    local_a0 = plVar13[0xd];
  }
  local_98 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar14 = plVar13;
  }
  local_90 = 0;
  local_98 = plVar14;
  FUN_02a8eb50(&local_b8);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  uVar10 = FUN_00938764(param_1 + 0x285c8,1,&local_b8,0,*(undefined8 *)(param_1 + 8),uVar8);
  if (((uVar10 & 1) != 0) && (plVar13 = *(long **)(param_1 + 0x285f0), plVar13 != (long *)0x0)) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f134f4;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  sVar9 = strlen(s_data___0427f778);
  iVar7 = strncmp("bin/field/env/",s_data___0427f778,sVar9);
  if (iVar7 == 0) {
    FUN_01f23154(&local_48);
  }
  else {
    FUN_01f231e4();
  }
  plVar13 = local_48;
  local_48 = (long *)0x0;
  local_e8 = plVar13;
  if (plVar13 == (long *)0x0) {
    local_e0 = *(long *)PTR_DAT_04379c88;
LAB_01f13474:
    lStack_d8 = *(long *)PTR_PTR_04379d00;
    if (plVar13 != (long *)0x0) goto LAB_01f12c94;
LAB_01f13484:
    local_d0 = 0;
  }
  else {
    local_e0 = plVar13[0xb];
    if (plVar13 == (long *)0x0) goto LAB_01f13474;
    lStack_d8 = plVar13[0xc];
    if (plVar13 == (long *)0x0) goto LAB_01f13484;
LAB_01f12c94:
    local_d0 = plVar13[0xd];
  }
  local_c8 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar14 = plVar13;
  }
  local_c0 = 0;
  local_c8 = plVar14;
  FUN_02a8eb50(&local_e8);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar10 = FUN_00938764(param_1 + 0x5e658,1,&local_e8,0,*(undefined8 *)(param_1 + 8),uVar8);
  if (((uVar10 & 1) != 0) && (plVar13 = *(long **)(param_1 + 0x5e680), plVar13 != (long *)0x0)) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f134f4;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  sVar9 = strlen(s_data___0427f778);
  iVar7 = strncmp("bin/field/env/",s_data___0427f778,sVar9);
  if (iVar7 == 0) {
    FUN_01f2329c(&local_b8);
  }
  else {
    FUN_01f23324();
  }
  plVar13 = local_b8;
  local_b8 = (long *)0x0;
  local_88 = plVar13;
  if (plVar13 == (long *)0x0) {
    local_80 = *(long *)PTR_DAT_04379c88;
LAB_01f1349c:
    lStack_78 = *(long *)PTR_PTR_04379d00;
    if (plVar13 != (long *)0x0) goto LAB_01f12dc4;
LAB_01f134ac:
    local_70 = 0;
  }
  else {
    local_80 = plVar13[0xb];
    if (plVar13 == (long *)0x0) goto LAB_01f1349c;
    lStack_78 = plVar13[0xc];
    if (plVar13 == (long *)0x0) goto LAB_01f134ac;
LAB_01f12dc4:
    local_70 = plVar13[0xd];
  }
  local_68 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar14 = plVar13;
  }
  local_60 = 0;
  local_68 = plVar14;
  FUN_02a8eb50(&local_88);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  lVar12 = param_2[6];
  *(char *)(param_1 + 0x5e650) = (char)lVar12;
  if (((char)lVar12 != '\0') && (uVar10 = FUN_0259830c(), (uVar10 & 1) != 0)) {
    FUN_01f13504(&local_b8);
    plVar13 = local_88;
    local_88 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    plVar13 = local_68;
    local_88 = local_b8;
    local_b8 = (long *)0x0;
    local_80 = local_b0;
    lStack_78 = local_a8;
    local_70 = local_a0;
    local_68 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    local_68 = local_98;
    local_60 = local_90;
    *(undefined1 *)(param_1 + 0x5e651) = 1;
  }
  lVar12 = FUN_01f0adc4(local_58,&local_88);
  *(long *)(param_1 + 0x100) = lVar12;
  if ((((*(long *)(lVar12 + 8) == 0) || (*(char *)(*(long *)(lVar12 + 8) + 0x1e1) == '\0')) &&
      (uVar10 = FUN_0098c5f8(lVar12,1,&local_88,0,*(undefined8 *)(param_1 + 8),uVar8),
      (uVar10 & 1) != 0)) && (plVar13 = *(long **)(lVar12 + 0x28), plVar13 != (long *)0x0)) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f134f4;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  local_48 = (long *)param_2[3];
  sVar9 = strlen(s_data___0427f778);
  iVar7 = strncmp("bin/field/env/",s_data___0427f778,sVar9);
  if (iVar7 == 0) {
    FUN_01f2350c(&local_e8,&local_48);
  }
  else {
    FUN_01f235bc(&local_48);
  }
  plVar13 = local_e8;
  local_e8 = (long *)0x0;
  local_b8 = plVar13;
  if (plVar13 == (long *)0x0) {
    local_b0 = *(long *)PTR_DAT_04379c88;
LAB_01f134c4:
    local_a8 = *(long *)PTR_PTR_04379d00;
    if (plVar13 != (long *)0x0) goto LAB_01f12eb0;
LAB_01f134d4:
    local_a0 = 0;
  }
  else {
    local_b0 = plVar13[0xb];
    if (plVar13 == (long *)0x0) goto LAB_01f134c4;
    local_a8 = plVar13[0xc];
    if (plVar13 == (long *)0x0) goto LAB_01f134d4;
LAB_01f12eb0:
    local_a0 = plVar13[0xd];
  }
  local_98 = (long *)0x0;
  plVar14 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar14 = plVar13;
  }
  local_90 = 0;
  local_98 = plVar14;
  FUN_02a8eb50(&local_b8);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  lVar12 = FUN_01f0adc4(local_58,&local_b8);
  *(long *)(param_1 + 0x108) = lVar12;
  if (((*(long *)(lVar12 + 8) == 0) || (*(char *)(*(long *)(lVar12 + 8) + 0x1e1) == '\0')) &&
     ((uVar10 = FUN_0098c5f8(lVar12,1,&local_b8,0,*(undefined8 *)(param_1 + 8),uVar8),
      (uVar10 & 1) != 0 && (plVar13 = *(long **)(lVar12 + 0x28), plVar13 != (long *)0x0)))) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01f134f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    lVar12 = local_58[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


