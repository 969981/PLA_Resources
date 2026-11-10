/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285d088; name: FUN_0285d088
 */


void FUN_0285d088(long param_1)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *local_68 [2];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar16 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar16;
  puVar5 = PTR_DAT_04379690;
  local_54 = 0xffff1916;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  puVar7 = PTR_DAT_043796a0;
  puVar6 = PTR_DAT_04379698;
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  puVar9 = (undefined4 *)FUN_0286bb0c();
  *puVar9 = 2;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
  puVar10 = (undefined8 *)FUN_0286bc80();
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  pcVar13 = *(code **)(param_1 + 0x98);
  *(undefined1 *)(param_1 + 400) = 1;
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar13)(param_1 + 0xb0);
  }
  *(undefined1 **)(param_1 + 0x90) = &LAB_02861054;
  *(undefined1 **)(param_1 + 0x98) = &LAB_02861058;
  *(undefined4 **)(param_1 + 0xb0) = puVar9;
  *(undefined8 **)(param_1 + 0xb8) = puVar10;
  *(undefined1 **)(param_1 + 0xa0) = &LAB_028611f0;
  *(undefined1 **)(param_1 + 0xa8) = &LAB_028611fc;
  plVar14 = *(long **)(lVar16 + 0xc0);
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0285e0a0(local_68,plVar14,local_50,&local_50,&local_54,param_1 + 0x30);
  plVar2 = (long *)(param_1 + 8);
  FUN_02860ae4(plVar2,local_68);
  if (local_68[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68[0] + 1);
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
      local_68[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_48 = *local_68[0];
      FUN_02a44274(lVar16 + 0xd8,&local_48);
    }
  }
  if (plVar14 == (long *)0x0) {
LAB_0285d27c:
    lVar16 = *plVar2;
    puVar10 = (undefined8 *)0x0;
    if (lVar16 == 0) goto LAB_0285d2c8;
  }
  else {
    lVar16 = plVar14[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 != 0) goto LAB_0285d27c;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
    lVar16 = *plVar2;
    if (lVar16 == 0) {
      puVar10 = (undefined8 *)0x0;
      goto LAB_0285d2c8;
    }
  }
  puVar15 = *(undefined8 **)(lVar16 + 0x18);
  if (puVar15 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)(**(code **)*puVar15)(puVar15);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar8 != 0)) {
      uVar11 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar11;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar12 != (undefined8 *)0x0) {
      do {
        if (puVar12 == (undefined8 *)PTR_DAT_0437f808) {
          puVar10 = puVar15 + -10;
          break;
        }
        puVar12 = (undefined8 *)*puVar12;
        puVar10 = (undefined8 *)0x0;
      } while (puVar12 != (undefined8 *)0x0);
      goto LAB_0285d2c8;
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_0285d2c8:
  *(undefined8 **)(param_1 + 0x18) = puVar10;
  return;
}


