/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cdb070; name: FUN_02cdb070
 */


void FUN_02cdb070(long *param_1,long *param_2)

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
  long lVar11;
  long *local_130;
  long *local_128;
  long *local_120;
  undefined8 uStack_118;
  long *local_110;
  undefined8 local_108;
  undefined8 local_100;
  long *local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *local_60 [2];
  undefined1 auStack_50 [8];
  long *local_48;
  
  FUN_013b63a4(local_60,*param_2);
  nn::os::GetSystemTick();
  uVar8 = nn::os::ConvertToTimeSpan();
  puVar9 = (undefined8 *)FUN_013b2b18();
  uVar10 = *puVar9;
  *(undefined8 *)PTR_DAT_0437b480 = uVar10;
  local_110 = (long *)CONCAT62(local_110._2_6_,(short)param_1[1]);
  local_100 = 0;
  local_f8 = (long *)*param_2;
  local_108 = uVar8;
  if (local_f8 != (long *)0x0) {
    lVar11 = local_f8[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02cdb62c;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
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
  FUN_013b4a10(&local_f0,local_60);
  local_a8 = local_f8;
  local_c8 = (undefined *)0x0;
  plStack_c0 = local_110;
  local_b8 = local_108;
  uStack_b0 = local_100;
  local_e0 = (undefined *)0x0;
  local_f8 = (long *)0x0;
  local_98 = 0;
  local_d8 = (code *)0x0;
  local_d0 = (undefined *)0x0;
  uStack_a0 = 0;
  FUN_013b4a10(&uStack_a0,&local_f0);
  local_e0 = PTR_LAB_04388380;
  local_d8 = (code *)PTR_FUN_04388388;
  local_d0 = PTR_LAB_04388390;
  local_c8 = PTR_LAB_04388398;
  local_120 = (long *)0x0;
  uStack_118 = 0;
  FUN_013b4a10(&local_120,local_60);
  FUN_013b385c(uVar10,&local_e0,&local_120);
  plVar5 = local_120;
  if (local_120 != (long *)0x0) {
    plVar2 = local_120 + 1;
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
      local_120[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = (long *)*plVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  pcVar6 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (undefined *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar6)(&plStack_c0);
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
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = (long *)*plVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  if (local_f8 != (long *)0x0) {
    lVar11 = local_f8[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  local_110 = (long *)*param_2;
  if (local_110 == (long *)0x0) {
    local_48 = (long *)0x0;
LAB_02cdb370:
    local_128 = (long *)0x0;
  }
  else {
    lVar11 = local_110[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02cdb62c;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_48 = (long *)*param_2;
    if (local_48 == (long *)0x0) goto LAB_02cdb370;
    lVar11 = local_48[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02cdb62c;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_128 = (long *)*param_2;
    if (local_128 != (long *)0x0) {
      lVar11 = local_128[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02cdb62c;
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar11 + 0xc);
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
  local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
  local_d8 = (code *)0x2000;
  local_130 = (long *)FUN_02cdbbe4(auStack_50,*(undefined8 *)(*param_1 + 8),&local_e0,&local_110,
                                   &local_48,&local_128);
  if (local_130 != (long *)0x0) {
    lVar11 = local_130[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_02cdb62c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_013b651c(*param_1,&local_130);
  if (local_130 != (long *)0x0) {
    lVar11 = local_130[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_130 + 0x20))();
    }
  }
  if (local_128 != (long *)0x0) {
    lVar11 = local_128[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_128 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  puVar9 = local_60[0];
  if (local_110 != (long *)0x0) {
    lVar11 = local_110[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_110 + 0x20))();
      puVar9 = local_60[0];
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
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_e0 = (undefined *)*puVar9;
      FUN_02a44274(lVar11 + 0xd8,&local_e0);
    }
  }
  return;
}


