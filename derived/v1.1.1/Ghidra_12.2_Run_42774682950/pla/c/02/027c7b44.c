/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027c7b44; name: FUN_027c7b44
 */


void FUN_027c7b44(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *local_d8;
  undefined8 uStack_d0;
  long *local_c8 [2];
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  puVar9 = param_1 + 2;
  uVar10 = *param_1;
  local_68 = 0xda18f75bd78cc467;
  pcStack_60 = "ThenThrough";
  local_58 = 0xb;
  uStack_50 = 0;
  local_70 = (long *)*param_2;
  if (local_70 != (long *)0x0) {
    lVar11 = local_70[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_027c8094;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar7;
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
  FUN_027c80ac(&local_48,uVar10,&local_68,puVar9,&local_70);
  plVar5 = local_48;
  local_90 = 0x279f7ce8b7e9256d;
  pcStack_88 = "CatchThrough";
  local_80 = 0xc;
  uStack_78 = 0;
  local_98 = (long *)*param_2;
  if (local_98 != (long *)0x0) {
    lVar11 = local_98[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_027c8094;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
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
  FUN_027c81d4(&local_38,plVar5,&local_90,puVar9,&local_98);
  plVar5 = local_38;
  local_b8 = 0x204a34dd4562f7d1;
  pcStack_b0 = "OnCancelSeq";
  local_a8 = 0xb;
  uStack_a0 = 0;
  local_c8[0] = (long *)*param_2;
  if (local_c8[0] != (long *)0x0) {
    lVar11 = local_c8[0][0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_027c8094:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
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
  FUN_027c8608(&local_40,plVar5,&local_b8,puVar9,local_c8);
  if (local_c8[0] != (long *)0x0) {
    lVar11 = local_c8[0][0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_c8[0] + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (local_98 != (long *)0x0) {
    lVar11 = local_98[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (local_70 != (long *)0x0) {
    lVar11 = local_70[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  FUN_013b63a4(local_c8,*param_2);
  if (local_c8[0] != (long *)0x0) {
    plVar8 = (long *)FUN_013b36b8();
    plVar5 = local_c8[0];
    if (local_c8[0] != (long *)0x0) {
      plVar2 = local_c8[0] + 1;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_c8[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_38 = (long *)*plVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_38);
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_013b1c3c(local_c8,local_40);
      local_d8 = (long *)0x0;
      uStack_d0 = 0;
      FUN_013b8954(&local_d8,local_c8);
      (**(code **)(*plVar8 + 0x68))(plVar8,&local_d8);
      plVar5 = local_d8;
      if (local_d8 != (long *)0x0) {
        plVar8 = local_d8 + 1;
        do {
          iVar6 = (int)*plVar8 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_d8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_38 = (long *)*plVar5;
          FUN_02a44274(lVar11 + 0xd8,&local_38);
        }
      }
      plVar5 = local_c8[0];
      if (local_c8[0] != (long *)0x0) {
        plVar8 = local_c8[0] + 1;
        do {
          iVar6 = (int)*plVar8 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_c8[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_38 = (long *)*plVar5;
          FUN_02a44274(lVar11 + 0xd8,&local_38);
        }
      }
    }
  }
  if (local_40 != (long *)0x0) {
    lVar11 = local_40[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  return;
}


