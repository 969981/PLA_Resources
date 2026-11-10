/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1d924; name: FUN_01e1d924
 */


void FUN_01e1d924(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *local_208 [2];
  long *local_1f8;
  undefined8 local_1f0 [48];
  long local_70 [2];
  
  if (*(long *)(param_1 + 0x70) == 0) {
    local_208[0] = (long *)0x0;
  }
  else {
    FUN_01e17710(local_208);
  }
  FUN_01b014c0(local_1f0,local_208[0] + 0x1a);
  if (local_208[0] != (long *)0x0) {
    lVar13 = local_208[0][0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_208[0] + 0x20))();
    }
  }
  FUN_0095dafc(&local_1f8,local_1f0[0]);
  (**(code **)(*local_1f8 + 0x100))(local_1f8,PTR_DAT_0437a330);
  FUN_01a82160(local_208,local_1f8);
  plVar4 = local_208[0];
  puVar9 = PTR_DAT_0437a3d0;
  puVar8 = PTR_DAT_0437a3c8;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if ((local_208[0] == (long *)0x0) || (*(int *)((long)local_208[0] + 0xc) == 0)) {
LAB_01e1d9bc:
    plVar14 = (long *)0x0;
  }
  else {
    piVar1 = (int *)((long)local_208[0] + 0xc);
    iVar10 = *(int *)((long)local_208[0] + 0xc);
    do {
      puVar15 = (undefined8 *)plVar4[2];
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar7 = puVar6;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB_01e1d9bc;
      while (puVar15 != (undefined8 *)puVar9) {
        puVar15 = (undefined8 *)*puVar15;
        plVar14 = (long *)0x0;
        if (puVar15 == (undefined8 *)0x0) goto LAB_01e1d9c0;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = plVar4[3];
          plVar14 = (long *)0x0;
          if (lVar13 != 0) {
            plVar14 = (long *)(lVar13 + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar14 = (long *)0x0;
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01e1d9c0:
  (**(code **)(*plVar14 + 0x180))(0,plVar14);
  plVar4 = local_208[0];
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
      plVar4 = local_208[0];
    }
  }
  local_208[0] = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar14 = plVar4 + 1;
    do {
      iVar10 = (int)*plVar14 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar10;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 == 0) {
      plVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_70[0] = *plVar4;
      FUN_02a44274(lVar13 + 0xd8,local_70);
    }
  }
  if (local_1f8 != (long *)0x0) {
    lVar13 = local_1f8[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_1f8 + 0x20))();
    }
  }
  FUN_01aebac0(local_1f0);
  return;
}


