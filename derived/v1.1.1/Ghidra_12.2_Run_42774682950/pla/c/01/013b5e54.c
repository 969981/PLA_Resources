/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b5e54; name: FUN_013b5e54
 */


void FUN_013b5e54(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *local_138;
  long *local_130;
  long *local_128;
  undefined8 uStack_120;
  long *local_118;
  undefined2 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long *local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  undefined8 *local_58 [2];
  long *local_48;
  
  FUN_013b63a4(local_58,*param_2);
  nn::os::GetSystemTick();
  uVar8 = nn::os::ConvertToTimeSpan();
  puVar9 = (undefined8 *)FUN_013b2b18();
  uVar11 = *puVar9;
  *(undefined8 *)PTR_DAT_0437b480 = uVar11;
  local_118 = (long *)*param_1;
  if (local_118 != (long *)0x0) {
    lVar12 = local_118[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_013b638c;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_110 = (undefined2)param_1[1];
  uStack_100 = 0;
  local_f8 = (long *)*param_2;
  local_108 = uVar8;
  if (local_f8 != (long *)0x0) {
    lVar12 = local_f8[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_013b638c;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  FUN_013b4a10(&local_f0,local_58);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  FUN_013b6578(&local_e0,&local_118);
  local_128 = (long *)0x0;
  uStack_120 = 0;
  FUN_013b4a10(&local_128,local_58);
  FUN_013b385c(uVar11,&local_e0,&local_128);
  plVar5 = local_128;
  if (local_128 != (long *)0x0) {
    plVar2 = local_128 + 1;
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
      local_128[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_48 = (long *)*plVar5;
      FUN_02a44274(lVar12 + 0xd8,&local_48);
    }
  }
  pcVar6 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar6)(auStack_c0);
  }
  plVar5 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar2 = local_f0 + 1;
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
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_48 = (long *)*plVar5;
      FUN_02a44274(lVar12 + 0xd8,&local_48);
    }
  }
  if (local_f8 != (long *)0x0) {
    lVar12 = local_f8[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  if (local_118 != (long *)0x0) {
    lVar12 = local_118[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  local_118 = (long *)0x0;
  local_48 = (long *)*param_2;
  if (local_48 == (long *)0x0) {
    local_130 = (long *)0x0;
  }
  else {
    lVar12 = local_48[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_013b638c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_130 = (long *)*param_2;
    if (local_130 != (long *)0x0) {
      lVar12 = local_130[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_013b638c;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  local_e0 = CONCAT44(local_e0._4_4_,1);
  local_d8 = (code *)0x2000;
  FUN_013b648c(&local_138,*(undefined8 *)(*param_1 + 8),&local_e0,&local_118,&local_48,&local_130);
  FUN_013b651c(*param_1,&local_138);
  if (local_138 != (long *)0x0) {
    lVar12 = local_138[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_138 + 0x20))();
    }
  }
  if (local_130 != (long *)0x0) {
    lVar12 = local_130[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_130 + 0x20))();
    }
  }
  puVar9 = local_58[0];
  if (local_48 != (long *)0x0) {
    lVar12 = local_48[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
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
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      puVar9 = local_58[0];
    }
  }
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
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
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_e0 = *puVar9;
      FUN_02a44274(lVar12 + 0xd8,&local_e0);
    }
  }
  return;
}


