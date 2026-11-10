/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285a19c; name: FUN_0285a19c
 */


void FUN_0285a19c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 local_50;
  undefined4 uStack_4c;
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
  local_3c = 0xffffff03;
  plVar6 = *(long **)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1a8) = 0xa2f26dabadcb1279;
  *(char **)(param_1 + 0x1b0) = "PLAY_UI_COMMON_PICBOOK_OPEN";
  *(undefined8 *)(param_1 + 0x1b8) = 0x1b;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = *(long **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0xa7fc6bc1b7658c53;
  *(char **)(param_1 + 0x1d0) = "PLAY_UI_COMMON_PICBOOK_CLOSE";
  *(undefined8 *)(param_1 + 0x1d8) = 0x1c;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  local_50 = 0;
  uVar7 = *(undefined8 *)PTR_DAT_04379698;
  *(undefined8 *)PTR_DAT_043796a0 = uVar7;
  FUN_0286bc28(uVar7,&local_50);
  plVar6 = *(long **)(lVar10 + 0xc0);
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[0xb];
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
  FUN_0285e0a0(&local_50,plVar6,local_38,&local_38,&local_3c,param_1 + 0x30);
  plVar2 = (long *)(param_1 + 8);
  FUN_02860ae4(plVar2,&local_50);
  puVar9 = (undefined8 *)CONCAT44(uStack_4c,local_50);
  if (puVar9 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar9 + 1);
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
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *puVar9;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  if (plVar6 == (long *)0x0) {
LAB_0285a390:
    lVar10 = *plVar2;
    puVar9 = (undefined8 *)0x0;
    if (lVar10 == 0) goto LAB_0285a3dc;
  }
  else {
    lVar10 = plVar6[0xb];
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
    if (iVar5 + -1 != 0) goto LAB_0285a390;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))(plVar6);
    lVar10 = *plVar2;
    if (lVar10 == 0) {
      puVar9 = (undefined8 *)0x0;
      goto LAB_0285a3dc;
    }
  }
  puVar11 = *(undefined8 **)(lVar10 + 0x18);
  if (puVar11 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)(**(code **)*puVar11)(puVar11);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar5 != 0)) {
      uVar7 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar7;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar8 != (undefined8 *)0x0) {
      do {
        if (puVar8 == (undefined8 *)PTR_DAT_0437f808) {
          puVar9 = puVar11 + -10;
          break;
        }
        puVar8 = (undefined8 *)*puVar8;
        puVar9 = (undefined8 *)0x0;
      } while (puVar8 != (undefined8 *)0x0);
      goto LAB_0285a3dc;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_0285a3dc:
  *(undefined8 **)(param_1 + 0x18) = puVar9;
  return;
}


