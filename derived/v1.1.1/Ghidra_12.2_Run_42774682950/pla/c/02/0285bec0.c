/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285bec0; name: FUN_0285bec0
 */


void FUN_0285bec0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *local_50 [2];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_28;
  
  local_38 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar10 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar10;
  local_3c = 0xffffff19;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  puVar6 = (undefined4 *)FUN_0286bb0c();
  *puVar6 = 1;
  plVar11 = *(long **)(lVar10 + 0xc0);
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0285e0a0(local_50,plVar11,local_38,&local_38,&local_3c,param_1 + 0x30);
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
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *local_50[0];
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  if (plVar11 == (long *)0x0) {
LAB_0285c03c:
    lVar10 = *plVar2;
    puVar9 = (undefined8 *)0x0;
    if (lVar10 == 0) goto LAB_0285c088;
  }
  else {
    lVar10 = plVar11[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_0285c03c;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar11 + 0x20))(plVar11);
    lVar10 = *plVar2;
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)0x0;
      goto LAB_0285c088;
    }
  }
  puVar12 = *(undefined8 **)(lVar10 + 0x18);
  if (puVar12 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar5 != 0)) {
      uVar7 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar7;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar8 != (undefined8 *)0x0) {
      do {
        if (puVar8 == (undefined8 *)PTR_DAT_0437f808) {
          puVar9 = puVar12 + -10;
          break;
        }
        puVar8 = (undefined8 *)*puVar8;
        puVar9 = (undefined8 *)0x0;
      } while (puVar8 != (undefined8 *)0x0);
      goto LAB_0285c088;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_0285c088:
  *(undefined8 **)(param_1 + 0x18) = puVar9;
  return;
}


