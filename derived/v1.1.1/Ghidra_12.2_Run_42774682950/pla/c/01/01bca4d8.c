/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bca4d8; name: FUN_01bca4d8
 */


void FUN_01bca4d8(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78 [2];
  long local_68;
  
  puVar4 = PTR_DAT_043794b8;
  lVar10 = *(long *)(param_1 + 0x1a8);
  if (lVar10 == 0) {
    plVar12 = (long *)0x0;
  }
  else if (*(int *)(lVar10 + 0xc) == 0) {
LAB_01bca83c:
    plVar12 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar6 = *(int *)(lVar10 + 0xc);
    do {
      puVar13 = *(undefined8 **)(lVar10 + 0x10);
      if (((*PTR_DAT_043794b0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_043794b0), iVar7 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar7 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar4 = PTR_DAT_043794c8;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      if (puVar13 == (undefined8 *)0x0) goto LAB_01bca83c;
      while (puVar13 != (undefined8 *)puVar4) {
        puVar13 = (undefined8 *)*puVar13;
        plVar12 = (long *)0x0;
        if (puVar13 == (undefined8 *)0x0) goto LAB_01bca510;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar12 = (long *)0x0;
          if (*(long *)(lVar10 + 0x18) != 0) {
            plVar12 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar12 = (long *)0x0;
      iVar6 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01bca510:
  puVar5 = PTR_DAT_0437a748;
  puVar4 = PTR_DAT_0437a740;
  uVar11 = *(undefined8 *)(param_1 + 8);
  lVar10 = *param_2;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar6 = *(int *)(lVar10 + 0xc);
    do {
      plVar8 = *(long **)(lVar10 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar9;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar8 == (long *)0x0) goto LAB_01bca51c;
        if (plVar8 == (long *)puVar5) break;
        plVar8 = (long *)*plVar8;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          local_78[0] = (long *)0x0;
          if (*(long *)(lVar10 + 0x18) != 0) {
            local_78[0] = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
          }
          goto LAB_01bca520;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar6 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01bca51c:
  local_78[0] = (long *)0x0;
LAB_01bca520:
  plVar8 = (long *)FUN_00ad6a1c(plVar12,uVar11,local_78);
  if (local_78[0] != (long *)0x0) {
    lVar10 = local_78[0][0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_78[0] + 0x20))();
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  FUN_02c90b20(plVar8,param_3);
  lVar10 = *param_4;
  plVar8[0x4b] = param_4[1];
  plVar8[0x4a] = lVar10;
  *(undefined1 *)(plVar8 + 0x4c) = 1;
  FUN_02c90b30(plVar8);
  (**(code **)(*plVar8 + 0x10))(local_78,plVar8);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_00ad3450(&local_88,local_78);
  plVar12 = local_78[0];
  if (local_78[0] != (long *)0x0) {
    plVar8 = local_78[0] + 1;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_68 = *plVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_68);
    }
  }
  FUN_01bca99c(param_1 + 0x238,&local_88);
  puVar13 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_78[0] = (long *)*puVar13;
      FUN_02a44274(lVar10 + 0xd8,local_78);
    }
  }
  return;
}


