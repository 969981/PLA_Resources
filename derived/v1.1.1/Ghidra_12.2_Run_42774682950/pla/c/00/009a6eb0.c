/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a6eb0; name: FUN_009a6eb0
 */


uint FUN_009a6eb0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *local_40 [2];
  long *local_30;
  undefined8 local_28;
  
  plVar7 = (long *)**(long **)(param_1 + 0xd0);
  if ((*(ulong *)(param_1 + 0xd8) & *(ulong *)(param_1 + 0xd8) - 1) == 0) {
    do {
      do {
        plVar7 = (long *)*plVar7;
      } while (plVar7[1] != 0);
    } while (*(int *)(plVar7 + 2) != 0);
  }
  else {
    do {
      do {
        plVar7 = (long *)*plVar7;
      } while (plVar7[1] != 0);
    } while ((int)plVar7[2] != 0);
  }
  plVar7 = (long *)plVar7[3];
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar8 = FUN_009bce88(plVar7 + 0x1e,local_40);
  if (lVar8 != 0) {
    FUN_01aed8e0(local_40);
    if (local_40[0] == (undefined8 *)0x0) {
      local_30 = (long *)0x0;
    }
    else {
      FUN_009bd2d4(&local_30);
      if (local_40[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_40[0] + 1);
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
          local_40[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *local_40[0];
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
      }
    }
    if (local_30 != (long *)0x0) {
      uVar4 = FUN_025f403c();
      if (local_30 != (long *)0x0) {
        lVar8 = local_30[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
      goto joined_r0x009a6ff4;
    }
  }
  uVar4 = 0;
joined_r0x009a6ff4:
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return uVar4 & 1;
}


