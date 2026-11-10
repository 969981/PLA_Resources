/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158c7e8; name: FUN_0158c7e8
 */


void FUN_0158c7e8(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long local_58;
  long *local_50 [2];
  long local_38;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  plVar10 = *(long **)(lVar8 + 0xc0);
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0158cb84;
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
  local_38 = plVar10[0x18];
  local_58 = local_38 + plVar10[0x19] * 8;
  FUN_0158dd80(local_50,&local_38,&local_58);
  if (local_50[0] != (long *)(plVar10[0x18] + plVar10[0x19] * 8)) {
    plVar11 = (long *)*local_50[0];
    puVar7 = (undefined8 *)(**(code **)plVar11[10])(plVar11 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar5 != 0)) {
      uVar6 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar6;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar7 != (undefined8 *)0x0) {
LAB_0158c8d0:
      if (puVar7 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0158caac;
      lVar8 = plVar11[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
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
          plVar9 = plVar11;
        } while (cVar2 != '\0');
        goto joined_r0x0158c914;
      }
      goto LAB_0158cb84;
    }
  }
  plVar9 = (long *)0x0;
joined_r0x0158c914:
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
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
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = (long *)plVar9[0x1a];
    bVar3 = false;
    if (plVar10 != (long *)0x0) {
      lVar8 = plVar10[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0158cb84:
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
      (**(code **)(*plVar10 + 0x10))(local_50,plVar10);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_0125d18c(param_1,local_50);
      if (local_50[0] != (long *)0x0) {
        plVar11 = local_50[0] + 1;
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
          local_50[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = *local_50[0];
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
      lVar8 = plVar10[0xb];
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
      if (iVar5 == 1) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      bVar3 = true;
    }
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (bVar3) {
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_0158caac:
  puVar7 = (undefined8 *)*puVar7;
  plVar9 = (long *)0x0;
  if (puVar7 == (undefined8 *)0x0) goto joined_r0x0158c914;
  goto LAB_0158c8d0;
}


