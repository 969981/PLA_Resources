/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a6a14; name: FUN_009a6a14
 */


uint FUN_009a6a14(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_28;
  
  plVar9 = (long *)**(long **)(param_1 + 0xd0);
  if ((*(ulong *)(param_1 + 0xd8) & *(ulong *)(param_1 + 0xd8) - 1) == 0) {
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != 0);
    } while (*(int *)(plVar9 + 2) != 0);
  }
  else {
    do {
      do {
        plVar9 = (long *)*plVar9;
      } while (plVar9[1] != 0);
    } while ((int)plVar9[2] != 0);
  }
  plVar9 = (long *)plVar9[3];
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar7;
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
  }
  lVar11 = FUN_009bce88(plVar9 + 0x1e,&local_48);
  if (lVar11 != 0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_00cf9db0(&local_48,lVar11 + 0x788);
    if (local_48 == (undefined8 *)0x0) {
      local_38 = (long *)0x0;
    }
    else {
      FUN_00959eac(&local_38);
      puVar12 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48 + 1);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_28 = *puVar12;
          FUN_02a44274(lVar10 + 0xd8,&local_28);
        }
      }
    }
    if (local_38 != (long *)0x0) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_00ac3fa4(&local_48,local_38 + 0x49);
      FUN_0099c748(&local_50,&local_48);
      puVar12 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48 + 1);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_28 = *puVar12;
          FUN_02a44274(lVar10 + 0xd8,&local_28);
        }
      }
      if (local_50 == (long *)0x0) {
        bVar3 = false;
        bVar4 = false;
        if (local_38 != (long *)0x0) goto LAB_009a6db8;
LAB_009a6dd4:
        uVar5 = (uint)puVar12;
      }
      else {
        uVar8 = (**(code **)(*local_50 + 0x1a0))();
        puVar12 = (undefined8 *)(uVar8 & 0xffffffff);
        if (local_50 != (long *)0x0) {
          lVar10 = local_50[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 1) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_50 + 0x20))();
          }
        }
        bVar3 = true;
        bVar4 = true;
        if (local_38 == (long *)0x0) goto LAB_009a6dd4;
LAB_009a6db8:
        bVar3 = bVar4;
        uVar5 = (uint)puVar12;
        lVar10 = local_38[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 != 0) goto LAB_009a6dd4;
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
      if (bVar3) goto joined_r0x009a6c20;
    }
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_00ac3fa4(&local_48,lVar11 + 0x248);
    FUN_0099c748(&local_38,&local_48);
    puVar12 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_28 = *puVar12;
        FUN_02a44274(lVar11 + 0xd8,&local_28);
      }
    }
    if (local_38 != (long *)0x0) {
      uVar8 = (**(code **)(*local_38 + 0x1a0))();
      if (((uVar8 & 1) == 0) || (uVar8 = (**(code **)(*local_38 + 0x218))(), (uVar8 & 1) != 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*local_38 + 0x228))();
        uVar5 = uVar5 ^ 1;
      }
      if (local_38 != (long *)0x0) {
        lVar11 = local_38[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      goto joined_r0x009a6c20;
    }
  }
  uVar5 = 0;
joined_r0x009a6c20:
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  return uVar5 & 1;
}


