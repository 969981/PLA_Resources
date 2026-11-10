/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285d890; name: FUN_0285d890
 */


void FUN_0285d890(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
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
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  local_3c = 0xffffff18;
  plVar10 = *(long **)(lVar8 + 0xc0);
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
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
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *local_50[0];
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  if (plVar10 == (long *)0x0) {
LAB_0285d9d8:
    lVar8 = *plVar2;
    puVar9 = (undefined8 *)0x0;
    if (lVar8 == 0) goto LAB_0285da24;
  }
  else {
    lVar8 = plVar10[0xb];
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
    if (iVar5 + -1 != 0) goto LAB_0285d9d8;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
    lVar8 = *plVar2;
    if (lVar8 == 0) {
      puVar9 = (undefined8 *)0x0;
      goto LAB_0285da24;
    }
  }
  puVar11 = *(undefined8 **)(lVar8 + 0x18);
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
          puVar9 = puVar11 + -10;
          break;
        }
        puVar7 = (undefined8 *)*puVar7;
        puVar9 = (undefined8 *)0x0;
      } while (puVar7 != (undefined8 *)0x0);
      goto LAB_0285da24;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_0285da24:
  *(undefined8 **)(param_1 + 0x18) = puVar9;
  return;
}


