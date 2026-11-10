/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01849d88; name: FUN_01849d88
 */


undefined8 FUN_01849d88(long param_1,uint param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_78 [2];
  long local_68;
  
  if (*(uint *)(param_1 + 0xec) <= param_2) {
    return 0;
  }
  if (*(long *)(*(long *)(param_1 + 0x78) + (ulong)param_2 * 8) == 0) {
    plVar7 = *(long **)(param_1 + 0xf8);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar7;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    lVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,0x70,8);
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
                    /* WARNING: Subroutine does not return */
      FUN_008a93d8(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8();
  }
  *(uint *)(*param_3 + 0x90) = param_2;
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    return 0;
  }
  lVar11 = param_3[0xb];
  if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0184a364;
  lVar10 = *(long *)(*(long *)(param_1 + 0x78) + (ulong)param_2 * 8);
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
    *(undefined8 *)(lVar11 + 0x10) = uVar6;
  }
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_3[0xd] != 0) {
    FUN_0184a83c(local_78);
    plVar7 = local_78[0];
    if (local_78[0] == (long *)0x0) {
      lVar11 = 0;
    }
    else {
      plVar8 = local_78[0] + 1;
      lVar11 = *local_78[0];
      do {
        iVar5 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *plVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
    FUN_0184a83c(local_78,lVar10);
    if (local_78[0] == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      plVar7 = local_78[0] + 1;
      lVar12 = *local_78[0];
      do {
        iVar5 = (int)*plVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        local_78[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_68 = *local_78[0];
        FUN_02a44274(lVar9 + 0xd8,&local_68);
      }
    }
    if (lVar12 == lVar11) {
      uVar6 = 0;
      goto LAB_01849fbc;
    }
  }
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    lVar11 = param_3[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0184a364;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = *(long **)(lVar10 + 0x68);
    *(long **)(lVar10 + 0x68) = param_3;
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar5 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
joined_r0x0184a198:
      if (iVar5 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
  }
  else {
    lVar12 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_0184a364;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar6;
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
    plVar7 = (long *)param_3[0x11];
    param_3[0x11] = lVar11;
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    lVar11 = param_3[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0184a364;
    lVar12 = *(long *)(lVar10 + 0x68);
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = *(long **)(lVar12 + 0x80);
    *(long **)(lVar12 + 0x80) = param_3;
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    lVar11 = param_3[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_0184a364;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = *(long **)(lVar10 + 0x68);
    *(long **)(lVar10 + 0x68) = param_3;
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar5 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto joined_r0x0184a198;
    }
  }
  lVar11 = *(long *)(lVar10 + 0x58);
  if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = (long *)param_3[0xd];
    param_3[0xd] = lVar10;
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 1) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    uVar6 = 1;
LAB_01849fbc:
    lVar11 = param_3[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*param_3 + 0x20))(param_3);
      return uVar6;
    }
    return uVar6;
  }
LAB_0184a364:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


