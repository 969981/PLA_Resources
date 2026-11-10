/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285c1e0; name: FUN_0285c1e0
 */


void FUN_0285c1e0(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
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
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  local_3c = 0xffffff02;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  puVar6 = (undefined4 *)FUN_0286bafc();
  *puVar6 = 0;
  plVar7 = *(long **)(param_1 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1a5) = 1;
  *(undefined8 *)(param_1 + 0x1a8) = 0xa2f26dabadcb1279;
  *(char **)(param_1 + 0x1b0) = "PLAY_UI_COMMON_PICBOOK_OPEN";
  *(undefined8 *)(param_1 + 0x1b8) = 0x1b;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  plVar7 = *(long **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0xa7fc6bc1b7658c53;
  *(char **)(param_1 + 0x1d0) = "PLAY_UI_COMMON_PICBOOK_CLOSE";
  *(undefined8 *)(param_1 + 0x1d8) = 0x1c;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  plVar7 = *(long **)(lVar11 + 0xc0);
  if (plVar7 != (long *)0x0) {
    lVar11 = plVar7[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0285e0a0(local_50,plVar7,local_38,&local_38,&local_3c,param_1 + 0x30);
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
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_28 = *local_50[0];
      FUN_02a44274(lVar11 + 0xd8,&local_28);
    }
  }
  if (plVar7 == (long *)0x0) {
LAB_0285c3d8:
    lVar11 = *plVar2;
    puVar10 = (undefined8 *)0x0;
    if (lVar11 == 0) goto LAB_0285c424;
  }
  else {
    lVar11 = plVar7[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_0285c3d8;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))(plVar7);
    lVar11 = *plVar2;
    if (lVar11 == 0) {
      puVar10 = (undefined8 *)0x0;
      goto LAB_0285c424;
    }
  }
  puVar12 = *(undefined8 **)(lVar11 + 0x18);
  if (puVar12 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar5 != 0)) {
      uVar8 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar8;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar9 != (undefined8 *)0x0) {
      do {
        if (puVar9 == (undefined8 *)PTR_DAT_0437f808) {
          puVar10 = puVar12 + -10;
          break;
        }
        puVar9 = (undefined8 *)*puVar9;
        puVar10 = (undefined8 *)0x0;
      } while (puVar9 != (undefined8 *)0x0);
      goto LAB_0285c424;
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_0285c424:
  *(undefined8 **)(param_1 + 0x18) = puVar10;
  return;
}


