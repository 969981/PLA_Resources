/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0285af78; name: FUN_0285af78
 */


void FUN_0285af78(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_38;
  
  local_48 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x68);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  puVar5 = PTR_DAT_04379690;
  local_4c = 0xffff0908;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  puVar7 = PTR_DAT_043796a0;
  puVar6 = PTR_DAT_04379698;
  uVar9 = *(undefined8 *)PTR_DAT_04379698;
  *(undefined8 *)PTR_DAT_043796a0 = uVar9;
  FUN_0286badc(uVar9,param_1 + 0x70,0);
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379690), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  uVar9 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar9;
  local_60 = 5;
  FUN_0286bc28(uVar9,&local_60);
  plVar13 = *(long **)(lVar12 + 0xc0);
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0285e0a0(&local_60,plVar13,local_48,&local_48,&local_4c,param_1 + 0x30);
  plVar2 = (long *)(param_1 + 8);
  FUN_02860ae4(plVar2,&local_60);
  puVar11 = (undefined8 *)CONCAT44(uStack_5c,local_60);
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
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
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_38 = *puVar11;
      FUN_02a44274(lVar12 + 0xd8,&local_38);
    }
  }
  if (plVar13 == (long *)0x0) {
LAB_0285b118:
    lVar12 = *plVar2;
    puVar11 = (undefined8 *)0x0;
    if (lVar12 == 0) goto LAB_0285b164;
  }
  else {
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 != 0) goto LAB_0285b118;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
    lVar12 = *plVar2;
    if (lVar12 == 0) {
      puVar11 = (undefined8 *)0x0;
      goto LAB_0285b164;
    }
  }
  puVar14 = *(undefined8 **)(lVar12 + 0x18);
  if (puVar14 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)(**(code **)*puVar14)(puVar14);
    if (((*PTR_DAT_0437f800 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437f800), iVar8 != 0)) {
      uVar9 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437f808 = uVar9;
      __cxa_guard_release(PTR_DAT_0437f800);
    }
    if (puVar10 != (undefined8 *)0x0) {
      do {
        if (puVar10 == (undefined8 *)PTR_DAT_0437f808) {
          puVar11 = puVar14 + -10;
          break;
        }
        puVar10 = (undefined8 *)*puVar10;
        puVar11 = (undefined8 *)0x0;
      } while (puVar10 != (undefined8 *)0x0);
      goto LAB_0285b164;
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_0285b164:
  *(undefined8 **)(param_1 + 0x18) = puVar11;
  return;
}


