/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7e710; name: FUN_01b7e710
 */


long * FUN_01b7e710(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  plVar8 = (long *)FUN_00ad6c08(local_50);
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_68 = plVar8;
  FUN_02a4dad4(param_1 + 0x70,&local_68);
  if (local_68 == (long *)0x0) {
LAB_01b7e770:
    lVar11 = *(long *)(param_1 + 0x1a8);
  }
  else {
    lVar11 = local_68[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01b7e770;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_68 + 0x20))();
    lVar11 = *(long *)(param_1 + 0x1a8);
  }
  if ((lVar11 != 0) && (puVar13 = *(undefined8 **)(lVar11 + 0x18), puVar13 != (undefined8 *)0x0)) {
    puVar9 = (undefined8 *)(**(code **)*puVar13)(puVar13);
    puVar4 = (undefined8 *)PTR_DAT_043794b8;
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar5 = PTR_DAT_043794c8,
       puVar4 = (undefined8 *)PTR_DAT_043794b8, iVar7 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar6 = PTR_DAT_043794d8, iVar7 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      puVar4 = (undefined8 *)PTR_DAT_043794b8;
      *(undefined **)PTR_DAT_043794b8 = puVar5;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
    if (puVar9 != (undefined8 *)0x0) {
      do {
        if (puVar9 == puVar4) {
          plVar12 = puVar13 + -10;
          break;
        }
        puVar9 = (undefined8 *)*puVar9;
        plVar12 = (long *)0x0;
      } while (puVar9 != (undefined8 *)0x0);
      goto LAB_01b7e7b8;
    }
  }
  plVar12 = (long *)0x0;
LAB_01b7e7b8:
  (**(code **)(*plVar12 + 0x10))(local_50,plVar12);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_0087f944(&local_60,local_50);
  puVar13 = local_50[0];
  if (local_50[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50[0] + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_50[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_38 = *puVar13;
      FUN_02a44274(lVar11 + 0xd8,&local_38);
    }
  }
  FUN_0087fcf0(plVar8 + 0x35,&local_60);
  puVar13 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_50[0] = (undefined8 *)*puVar13;
      FUN_02a44274(lVar11 + 0xd8,local_50);
    }
  }
  (**(code **)(*plVar8 + 0x48))(plVar8,(int)plVar8[0x3d]);
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_009ad580(&local_78,param_1 + 0x1b8);
  FUN_0087fff0(plVar8 + 0x37,&local_78);
  puVar13 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_50[0] = (undefined8 *)*puVar13;
      FUN_02a44274(lVar11 + 0xd8,local_50);
    }
  }
  FUN_02a4d1f8(plVar8,*(undefined1 *)(param_1 + 0x1ee));
  (**(code **)(*plVar8 + 0x70))(plVar8);
  return plVar8;
}


