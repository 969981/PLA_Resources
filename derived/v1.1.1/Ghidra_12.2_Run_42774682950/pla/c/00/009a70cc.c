/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a70cc; name: FUN_009a70cc
 */


uint FUN_009a70cc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  plVar8 = (long *)**(long **)(param_1 + 0xd0);
  if ((*(ulong *)(param_1 + 0xd8) & *(ulong *)(param_1 + 0xd8) - 1) == 0) {
    do {
      do {
        plVar8 = (long *)*plVar8;
      } while (plVar8[1] != 0);
    } while (*(int *)(plVar8 + 2) != 0);
  }
  else {
    do {
      do {
        plVar8 = (long *)*plVar8;
      } while (plVar8[1] != 0);
    } while ((int)plVar8[2] != 0);
  }
  plVar8 = (long *)plVar8[3];
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar9 = FUN_009bce88(plVar8 + 0x1e,&local_40);
  if (lVar9 != 0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00ac3fa4(&local_40,lVar9 + 0x248);
    FUN_0099c748(&local_30,&local_40);
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
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
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_28 = *puVar4;
        FUN_02a44274(lVar9 + 0xd8,&local_28);
      }
    }
    if (local_30 != (long *)0x0) {
      uVar5 = (**(code **)(*local_30 + 0x228))();
      if (local_30 != (long *)0x0) {
        lVar9 = local_30[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
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
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
      goto joined_r0x009a728c;
    }
  }
  uVar5 = 0;
joined_r0x009a728c:
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  return uVar5 & 1;
}


