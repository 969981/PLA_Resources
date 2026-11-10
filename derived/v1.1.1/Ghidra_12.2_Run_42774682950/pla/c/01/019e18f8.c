/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e18f8; name: FUN_019e18f8
 */


void FUN_019e18f8(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  ulong local_80 [3];
  long *local_68;
  
  puVar8 = PTR_DAT_0437a558;
  puVar7 = PTR_DAT_0437a550;
  lVar12 = *(long *)(param_1 + 0x280);
  if (lVar12 == 0) {
    return;
  }
  if (*(int *)(lVar12 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar12 + 0xc);
  iVar14 = *(int *)(lVar12 + 0xc);
  do {
    plVar15 = *(long **)(lVar12 + 0x10);
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      uVar11 = FUN_00aa0310();
      *(undefined8 *)puVar8 = uVar11;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar15 == (long *)0x0) {
        return;
      }
      if (plVar15 == (long *)puVar8) break;
      plVar15 = (long *)*plVar15;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar14) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar6 = PTR_DAT_0437a130;
      puVar5 = PTR_DAT_0437a128;
      puVar4 = PTR_DAT_043795e0;
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x18);
        if (lVar12 == 0) {
          return;
        }
        lVar16 = *(long *)(lVar12 + 0x1a0);
        if ((lVar16 == 0) || (*(int *)(lVar16 + 0xc) == 0)) goto LAB_019e19b8;
        piVar1 = (int *)(lVar16 + 0xc);
        iVar14 = *(int *)(lVar16 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar14 = iVar9;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
LAB_019e1a50:
  plVar15 = *(long **)(lVar16 + 0x10);
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
    if (((*PTR_DAT_043795d8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar11;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar4 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_043795d8);
    }
    *(undefined **)puVar6 = puVar4;
    __cxa_guard_release(puVar5);
  }
  while( true ) {
    if (plVar15 == (long *)0x0) goto LAB_019e19b8;
    if (plVar15 == (long *)puVar6) break;
    plVar15 = (long *)*plVar15;
  }
  iVar9 = *piVar1;
  if (iVar9 == iVar14) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar14 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar16 = *(long *)(lVar16 + 0x18);
      if (lVar16 != 0) {
        plVar15 = (long *)(lVar16 + -0x50);
        FUN_02a4754c(local_80,PTR_DAT_0437a3d8);
        puVar10 = (undefined8 *)FUN_0289f734(plVar15,local_80);
        plVar13 = (long *)*puVar10;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (plVar13 != (long *)0x0) {
          local_80[0] = (**(code **)(*plVar13 + 200))(plVar13,param_2);
          if ((local_80[0] & 0xff) != 0) {
            (**(code **)(*plVar13 + 0xd8))(plVar13,local_80,1);
          }
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        lVar16 = *(long *)(lVar16 + 8);
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar14 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar15 + 0x20))(plVar15);
        }
      }
      goto LAB_019e19b8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar14 = iVar9;
  if (iVar9 == 0) {
LAB_019e19b8:
    lVar16 = *(long *)(lVar12 + 8);
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar14 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
    }
    return;
  }
  goto LAB_019e1a50;
}


