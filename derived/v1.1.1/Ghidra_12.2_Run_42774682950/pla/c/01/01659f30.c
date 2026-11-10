/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01659f30; name: FUN_01659f30
 */


void FUN_01659f30(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long local_58;
  long *local_50 [2];
  long local_38;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar7 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar7;
  plVar8 = *(long **)(lVar7 + 0xc0);
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_0165a248:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
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
  }
  local_38 = plVar8[0x18];
  local_58 = local_38 + plVar8[0x19] * 8;
  FUN_0165cd60(local_50,&local_38,&local_58);
  if (local_50[0] != (long *)(plVar8[0x18] + plVar8[0x19] * 8)) {
    plVar10 = (long *)*local_50[0];
    puVar6 = (undefined8 *)(**(code **)plVar10[10])(plVar10 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar4 != 0)) {
      uVar5 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar5;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar6 != (undefined8 *)0x0) {
LAB_0165a018:
      if (puVar6 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0165a170;
      lVar7 = plVar10[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_0165a248;
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar9 = plVar10;
      } while (cVar2 != '\0');
LAB_0165a05c:
      if (plVar8 == (long *)0x0) goto joined_r0x0165a164;
      goto LAB_0165a060;
    }
  }
  plVar9 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
LAB_0165a060:
    lVar7 = plVar8[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
joined_r0x0165a164:
  if (plVar9 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x10))(local_50,plVar9);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_0158da80(param_1,local_50);
    if (local_50[0] != (long *)0x0) {
      plVar8 = local_50[0] + 1;
      do {
        iVar4 = (int)*plVar8 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *local_50[0];
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
    lVar7 = plVar9[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  return;
LAB_0165a170:
  puVar6 = (undefined8 *)*puVar6;
  plVar9 = (long *)0x0;
  if (puVar6 == (undefined8 *)0x0) goto LAB_0165a05c;
  goto LAB_0165a018;
}


