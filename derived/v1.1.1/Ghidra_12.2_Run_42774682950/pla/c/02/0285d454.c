/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285d454; name: FUN_0285d454
 */


void FUN_0285d454(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *local_60 [2];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_38;
  
  local_48 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  puVar5 = PTR_DAT_04379690;
  local_4c = 0xffff1702;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  puVar7 = PTR_DAT_043796a0;
  puVar6 = PTR_DAT_04379698;
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  puVar9 = (undefined4 *)FUN_0286bafc();
  *puVar9 = 1;
  plVar10 = *(long **)(param_1 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1a5) = 1;
  *(undefined8 *)(param_1 + 0x1a8) = 0xa2f26dabadcb1279;
  *(char **)(param_1 + 0x1b0) = "PLAY_UI_COMMON_PICBOOK_OPEN";
  *(undefined8 *)(param_1 + 0x1b8) = 0x1b;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  plVar10 = *(long **)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0xa7fc6bc1b7658c53;
  *(char **)(param_1 + 0x1d0) = "PLAY_UI_COMMON_PICBOOK_CLOSE";
  *(undefined8 *)(param_1 + 0x1d8) = 0x1c;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
  puVar11 = (undefined8 *)FUN_0286bc80();
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  pcVar14 = *(code **)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 400) = 1;
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar14)(param_1 + 0xb0);
  }
  *(undefined1 **)(param_1 + 0x90) = &LAB_02861208;
  *(undefined1 **)(param_1 + 0x98) = &LAB_02861210;
  *(undefined1 **)(param_1 + 0xa0) = &LAB_02861214;
  *(undefined1 **)(param_1 + 0xa8) = &LAB_02861218;
  plVar10 = *(long **)(lVar15 + 0xc0);
  if (plVar10 != (long *)0x0) {
    lVar15 = plVar10[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0285e0a0(local_60,plVar10,local_48,&local_48,&local_4c,param_1 + 0x30);
  plVar2 = (long *)(param_1 + 8);
  FUN_02860ae4(plVar2,local_60);
  if (local_60[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60[0] + 1);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_38 = *local_60[0];
      FUN_02a44274(lVar15 + 0xd8,&local_38);
    }
  }
  if (plVar10 == (long *)0x0) {
LAB_0285d6b8:
    lVar15 = *plVar2;
    puVar11 = (undefined8 *)0x0;
    if (lVar15 == 0) goto LAB_0285d704;
  }
  else {
    lVar15 = plVar10[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 != 0) goto LAB_0285d6b8;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar10 + 0x20))(plVar10);
    lVar15 = *plVar2;
    if (lVar15 == 0) {
      puVar11 = (undefined8 *)0x0;
      goto LAB_0285d704;
    }
  }
  puVar16 = *(undefined8 **)(lVar15 + 0x18);
  if (puVar16 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)(**(code **)*puVar16)(puVar16);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar8 != 0)) {
      uVar12 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar12;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar13 != (undefined8 *)0x0) {
      do {
        if (puVar13 == (undefined8 *)PTR_DAT_0437f808) {
          puVar11 = puVar16 + -10;
          break;
        }
        puVar13 = (undefined8 *)*puVar13;
        puVar11 = (undefined8 *)0x0;
      } while (puVar13 != (undefined8 *)0x0);
      goto LAB_0285d704;
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_0285d704:
  *(undefined8 **)(param_1 + 0x18) = puVar11;
  return;
}


