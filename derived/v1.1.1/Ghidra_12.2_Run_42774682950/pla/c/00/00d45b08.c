/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d45b08; name: FUN_00d45b08
 */


void FUN_00d45b08(long *param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  long *local_58;
  long local_48;
  
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_00d45370(&local_70,param_2 + 8);
  if (local_70 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    FUN_00d45fa4(&local_78);
    plVar9 = local_70;
    plVar8 = local_78;
    local_78 = (long *)0x0;
    if (local_70 != (long *)0x0) {
      plVar11 = local_70 + 1;
      do {
        iVar5 = (int)*plVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *(int *)plVar11 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_48 = *plVar9;
        FUN_02a44274(lVar7 + 0xd8,&local_48);
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_02a47560(&local_70,plVar8 + 0xb4);
      plVar9 = local_70;
      plVar11 = (long *)*param_3;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (plVar9 == plVar11) {
LAB_00d45da4:
        *param_1 = (long)plVar8;
        return;
      }
    }
  }
  plVar9 = *(long **)(param_2 + 0x28);
  plVar11 = *(long **)(param_2 + 0x30);
  if (plVar9 != plVar11) {
    if ((param_4 & 1) != 0) {
LAB_00d45b60:
      if (*plVar9 == 0) {
        local_70 = (long *)0x0;
      }
      else {
        FUN_00d45fa4(&local_70);
      }
      if (plVar8 != (long *)0x0) {
        lVar7 = plVar8[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
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
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
      plVar8 = local_70;
      local_70 = plVar8;
      if (plVar8 != (long *)0x0) {
        FUN_02a47560(&local_70,plVar8 + 0xb4);
        plVar4 = local_70;
        plVar10 = (long *)*param_3;
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        if (plVar4 == plVar10) goto LAB_00d45da4;
      }
      lVar7 = FUN_00d42b68(plVar8,param_3);
      *param_1 = lVar7;
      if (lVar7 == 0) goto code_r0x00d45bd8;
      lVar7 = *(long *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (plVar8 == (long *)0x0) {
        return;
      }
      goto LAB_00d45c24;
    }
    do {
      if (*plVar9 == 0) {
        local_70 = (long *)0x0;
      }
      else {
        FUN_00d45fa4(&local_70);
      }
      if (plVar8 != (long *)0x0) {
        lVar7 = plVar8[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
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
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
      plVar8 = local_70;
      local_70 = plVar8;
      if (plVar8 != (long *)0x0) {
        FUN_02a47560(&local_70,plVar8 + 0xb4);
        plVar4 = local_70;
        plVar10 = (long *)*param_3;
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        if (plVar4 == plVar10) goto LAB_00d45da4;
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar11);
  }
LAB_00d45d80:
  *param_1 = 0;
  if (plVar8 != (long *)0x0) {
LAB_00d45c24:
    lVar7 = plVar8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  return;
code_r0x00d45bd8:
  plVar9 = plVar9 + 2;
  if (plVar9 == plVar11) goto LAB_00d45d80;
  goto LAB_00d45b60;
}


