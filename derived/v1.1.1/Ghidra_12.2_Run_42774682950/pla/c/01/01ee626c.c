/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ee626c; name: FUN_01ee626c
 */


long * FUN_01ee626c(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  FUN_01ee66b0(&local_68,param_2);
  plVar7 = local_68;
  local_70 = local_68;
  local_68 = (long *)0x0;
  FUN_02a4dad4(param_1 + 0x70,&local_70);
  if (local_70 == (long *)0x0) {
LAB_01ee62cc:
    lVar11 = *(long *)(param_1 + 0x1a8);
  }
  else {
    lVar11 = local_70[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01ee62cc;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_70 + 0x20))();
    lVar11 = *(long *)(param_1 + 0x1a8);
  }
  if ((lVar11 != 0) && (puVar13 = *(undefined8 **)(lVar11 + 0x18), puVar13 != (undefined8 *)0x0)) {
    puVar9 = (undefined8 *)(**(code **)*puVar13)(puVar13);
    puVar4 = (undefined8 *)PTR_DAT_043794b8;
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar5 = PTR_DAT_043794c8,
       puVar4 = (undefined8 *)PTR_DAT_043794b8, iVar8 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar6 = PTR_DAT_043794d8, iVar8 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
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
      goto LAB_01ee6314;
    }
  }
  plVar12 = (long *)0x0;
LAB_01ee6314:
  (**(code **)(*plVar12 + 0x10))(local_50,plVar12);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_0087f944(&local_60,local_50);
  puVar13 = local_50[0];
  if (local_50[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50[0] + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_50[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_38 = *puVar13;
      FUN_02a44274(lVar11 + 0xd8,&local_38);
    }
  }
  FUN_0087fcf0(plVar7 + 0x35,&local_60);
  puVar13 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_50[0] = (undefined8 *)*puVar13;
      FUN_02a44274(lVar11 + 0xd8,local_50);
    }
  }
  (**(code **)(*plVar7 + 0x48))(plVar7,(int)plVar7[0x3d]);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_009ad580(&local_80,param_1 + 0x1b8);
  FUN_0087fff0(plVar7 + 0x37,&local_80);
  puVar13 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_50[0] = (undefined8 *)*puVar13;
      FUN_02a44274(lVar11 + 0xd8,local_50);
    }
  }
  FUN_02a4d1f8(plVar7,*(undefined1 *)(param_1 + 0x1ee));
  FUN_02a4d094(plVar7);
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return plVar7;
}


