/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01514f6c; name: FUN_01514f6c
 */


long * FUN_01514f6c(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  long *local_58 [2];
  long *local_48;
  long *local_40;
  long local_38;
  
  puVar6 = PTR_DAT_0437f888;
  puVar5 = PTR_DAT_043794d8;
  lVar10 = *(long *)(param_1 + 0x98);
  piVar1 = (int *)(lVar10 + 0xc);
  puVar11 = PTR_DAT_0437f890;
  iVar8 = *(int *)(lVar10 + 0xc);
  do {
    while( true ) {
      plVar12 = *(long **)(lVar10 + 0x10);
      if (((*puVar6 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(puVar6), puVar11 = PTR_DAT_0437f890, iVar7 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        puVar11 = PTR_DAT_0437f890;
        *(undefined **)PTR_DAT_0437f890 = puVar5;
        __cxa_guard_release(puVar6);
      }
      for (; plVar12 != (long *)puVar11; plVar12 = (long *)*plVar12) {
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) break;
      ClearExclusiveLocal();
      iVar8 = iVar7;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar8 = iVar7;
  } while (cVar3 != '\0');
  lVar10 = *(long *)(lVar10 + 0x18);
  plVar12 = (long *)0x0;
  if (lVar10 != 0) {
    plVar12 = (long *)(lVar10 + -0x50);
  }
  if (plVar12[0xaa] == 0) {
    local_40 = (long *)0x0;
  }
  else {
    FUN_015196f8(&local_40);
  }
  if (lVar10 != 0) {
    lVar10 = plVar12[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (local_40 == (long *)0x0) goto LAB_01515028;
  FUN_019cc758(local_58);
  if (local_58[0] == (long *)0x0) {
    local_48 = (long *)0x0;
    local_58[0] = plVar12;
LAB_01515074:
    if (local_48 != (long *)0x0) goto LAB_0151507c;
LAB_01515178:
    bVar4 = false;
    plVar12 = local_58[0];
  }
  else {
    FUN_0151986c(&local_48);
    if (local_58[0] == (long *)0x0) goto LAB_01515074;
    plVar12 = local_58[0] + 1;
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != 0) goto LAB_01515074;
    local_58[0][2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar10 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar10;
    local_38 = *local_58[0];
    FUN_02a44274(lVar10 + 0xd8,&local_38);
    if (local_48 == (long *)0x0) goto LAB_01515178;
LAB_0151507c:
    plVar12 = (long *)FUN_019bf360();
    if (local_48 != (long *)0x0) {
      lVar10 = local_48[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 1) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    bVar4 = true;
  }
  if (local_40 != (long *)0x0) {
    lVar10 = local_40[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (bVar4) {
    return plVar12;
  }
LAB_01515028:
  return *(long **)(param_1 + 8);
}


