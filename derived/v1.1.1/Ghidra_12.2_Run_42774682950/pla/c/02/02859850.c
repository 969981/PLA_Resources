/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02859850; name: FUN_02859850
 */


void FUN_02859850(long param_1)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong *local_48 [2];
  undefined8 local_38;
  ulong local_28;
  
  local_38 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  if (-1 < *(int *)(param_1 + 0x1f0)) {
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04379698;
    *(undefined8 *)PTR_DAT_043796a0 = uVar6;
    FUN_0286b68c(local_48,uVar6,0);
    local_28 = (ulong)*(uint *)(param_1 + 0x1f0);
    FUN_027f5774(local_48[0],&local_28);
    if (local_48[0] != (ulong *)0x0) {
      uVar7 = local_48[0][0xb];
      piVar1 = (int *)(uVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(uVar7 + 0x18) = 0;
        (**(code **)(*local_48[0] + 0x20))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1a0) = 7;
  plVar9 = *(long **)(lVar8 + 0xc0);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
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
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0285de60(local_48,plVar9,local_38,&local_38,param_1 + 0x30);
  FUN_0285fe28(param_1 + 8,local_48);
  if (local_48[0] != (ulong *)0x0) {
    puVar2 = local_48[0] + 1;
    do {
      iVar5 = (int)*puVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *(int *)puVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      local_48[0][2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *local_48[0];
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  uVar6 = FUN_0285df34(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  return;
}


