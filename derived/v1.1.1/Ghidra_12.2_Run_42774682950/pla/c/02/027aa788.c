/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027aa788; name: FUN_027aa788
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_027aa788(undefined8 *param_1,long *param_2)

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
  long *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long *local_b8 [2];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  long *local_38;
  
  puVar9 = param_1 + 2;
  uVar10 = *param_1;
  local_70 = 0xaab34d49cc8a6590;
  pcStack_68 = "RecoverThen";
  local_60 = 0xb;
  uStack_58 = 0;
  local_78 = (long *)*param_2;
  if (local_78 != (long *)0x0) {
    lVar11 = local_78[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_027aacf4;
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
  FUN_027aad0c(&local_50,uVar10,&local_70,puVar9,&local_78);
  plVar5 = local_50;
  local_98 = 0x89797befd2cf9766;
  pcStack_90 = "RecoverCatch";
  local_88 = 0xc;
  uStack_80 = 0;
  local_b8[0] = (long *)*param_2;
  if (local_b8[0] != (long *)0x0) {
    lVar11 = local_b8[0][0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_027aacf4;
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
  local_a8 = *(undefined4 *)(param_1 + 2);
  local_a0 = param_1[3];
  FUN_027aae34(&local_38,plVar5,&local_98,puVar9,local_b8);
  plVar5 = local_38;
  local_d8 = 0xb23cc3a7edb7ac7d;
  pcStack_d0 = "RecoverCancel";
  local_c8 = 0xd;
  uStack_c0 = 0;
  local_e0 = (long *)*param_2;
  if (local_e0 != (long *)0x0) {
    lVar11 = local_e0[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_027aacf4:
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
  FUN_027ab278(&local_48,plVar5,&local_d8,puVar9,&local_e0);
  if (local_e0 != (long *)0x0) {
    lVar11 = local_e0[0xb];
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
      (**(code **)(*local_e0 + 0x20))();
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
  if (local_b8[0] != (long *)0x0) {
    lVar11 = local_b8[0][0xb];
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
      (**(code **)(*local_b8[0] + 0x20))();
    }
  }
  if (local_50 != (long *)0x0) {
    lVar11 = local_50[0xb];
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
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_78 != (long *)0x0) {
    lVar11 = local_78[0xb];
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
      (**(code **)(*local_78 + 0x20))();
    }
  }
  FUN_013b63a4(local_b8,*param_2);
  if (local_b8[0] != (long *)0x0) {
    plVar8 = (long *)FUN_013b36b8();
    plVar5 = local_b8[0];
    if (local_b8[0] != (long *)0x0) {
      plVar2 = local_b8[0] + 1;
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
        local_b8[0][2] = 0;
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
      FUN_013b1c3c(local_b8,local_48);
      local_f0 = (long *)0x0;
      uStack_e8 = 0;
      FUN_013b8954(&local_f0,local_b8);
      (**(code **)(*plVar8 + 0x68))(plVar8,&local_f0);
      plVar5 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar8 = local_f0 + 1;
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
          local_f0[2] = 0;
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
      plVar5 = local_b8[0];
      if (local_b8[0] != (long *)0x0) {
        plVar8 = local_b8[0] + 1;
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
          local_b8[0][2] = 0;
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
  return;
}


