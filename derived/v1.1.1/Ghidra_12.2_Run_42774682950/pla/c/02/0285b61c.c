/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285b61c; name: FUN_0285b61c
 */


void FUN_0285b61c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *local_50 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_28;
  
  local_38 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  local_3c = 0xffffff00;
  if (*(char *)(param_1 + 0x84) == '\0') {
    local_40 = 3;
  }
  else {
    local_40 = 2;
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  uVar6 = *(undefined8 *)PTR_DAT_04379698;
  *(undefined8 *)PTR_DAT_043796a0 = uVar6;
  FUN_0286ba60(uVar6,&local_40);
  plVar10 = *(long **)(lVar9 + 0xc0);
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0285e0a0(local_50,plVar10,local_38,&local_38,&local_3c,param_1 + 0x30);
  plVar2 = (long *)(param_1 + 8);
  FUN_02860ae4(plVar2,local_50);
  if (local_50[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50[0] + 1);
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
      local_50[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_28 = *local_50[0];
      FUN_02a44274(lVar9 + 0xd8,&local_28);
    }
  }
  if (plVar10 == (long *)0x0) {
LAB_0285b7a4:
    lVar9 = *plVar2;
    puVar8 = (undefined8 *)0x0;
    if (lVar9 == 0) goto LAB_0285b7f0;
  }
  else {
    lVar9 = plVar10[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_0285b7a4;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
    lVar9 = *plVar2;
    if (lVar9 == 0) {
      puVar8 = (undefined8 *)0x0;
      goto LAB_0285b7f0;
    }
  }
  puVar11 = *(undefined8 **)(lVar9 + 0x18);
  if (puVar11 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(**(code **)*puVar11)(puVar11);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar5 != 0)) {
      uVar6 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar6;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar7 != (undefined8 *)0x0) {
      do {
        if (puVar7 == (undefined8 *)PTR_DAT_0437f808) {
          puVar8 = puVar11 + -10;
          break;
        }
        puVar7 = (undefined8 *)*puVar7;
        puVar8 = (undefined8 *)0x0;
      } while (puVar7 != (undefined8 *)0x0);
      goto LAB_0285b7f0;
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_0285b7f0:
  *(undefined8 **)(param_1 + 0x18) = puVar8;
  return;
}


