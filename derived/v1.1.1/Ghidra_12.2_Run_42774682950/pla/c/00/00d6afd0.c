/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6afd0; name: FUN_00d6afd0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d6afd0(long param_1,undefined8 *param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar8 = PTR_DAT_0437b438;
  puVar7 = PTR_DAT_0437b430;
  puVar6 = PTR_DAT_0437b2c0;
  puVar5 = PTR_DAT_0437b2a8;
  puVar4 = PTR_DAT_043794d0;
  param_3 = param_3 & 0xffffffff;
  do {
    plVar10 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))((undefined8 *)(param_1 + 0x50));
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*PTR_DAT_0437b2d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b2d0), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)PTR_DAT_0437b2b0 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar6 = PTR_DAT_0437b2b0;
        __cxa_guard_release(PTR_DAT_0437b2d0);
      }
      *(undefined **)puVar8 = puVar6;
      __cxa_guard_release(puVar7);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar8) {
        if ((*(long *)(param_1 + 0x68) == param_2[1]) && (*(long *)*param_2 == 0)) {
          *(long *)*param_2 = param_1;
          plVar10 = *(long **)(param_1 + 0x98);
          goto joined_r0x00d6b254;
        }
        break;
      }
    }
    plVar10 = *(long **)(param_1 + 0x98);
joined_r0x00d6b254:
    if (plVar10 != (long *)0x0) {
      lVar12 = plVar10[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00d6b320;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
      lVar12 = plVar10[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
        plVar10 = *(long **)(param_1 + 0x98);
      }
      else {
        plVar10 = *(long **)(param_1 + 0x98);
      }
      if (plVar10 == (long *)0x0) {
        FUN_00d6afd0(0,param_2,1);
      }
      else {
        lVar12 = plVar10[0xb];
        if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00d6b320;
        if (*(long *)(lVar12 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
          *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
        FUN_00d6afd0(plVar10,param_2,1);
        lVar12 = plVar10[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    plVar10 = *(long **)(param_1 + 0x90);
    if (plVar10 == (long *)0x0) {
      return;
    }
    lVar12 = plVar10[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_00d6b320;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    plVar10 = *(long **)(param_1 + 0x90);
    param_3 = 1;
    param_1 = 0;
  } while (plVar10 == (long *)0x0);
  lVar12 = plVar10[0xb];
  if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
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
    FUN_00d6afd0(plVar10,param_2,1);
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d6b2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x20))(plVar10);
      return;
    }
    return;
  }
LAB_00d6b320:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


