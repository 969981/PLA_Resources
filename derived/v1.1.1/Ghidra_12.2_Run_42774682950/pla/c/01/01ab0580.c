/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab0580; name: FUN_01ab0580
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01ab0580(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  puVar6 = PTR_DAT_0437aea0;
  puVar5 = PTR_DAT_0437ae98;
  lVar12 = *(long *)(param_1 + 0x1f8);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0xc) == 0)) {
    return true;
  }
  piVar1 = (int *)(lVar12 + 0xc);
  iVar9 = *(int *)(lVar12 + 0xc);
  do {
    puVar13 = *(undefined8 **)(lVar12 + 0x10);
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
      uVar10 = FUN_00ab38cc();
      *(undefined8 *)puVar6 = uVar10;
      __cxa_guard_release(puVar5);
    }
    if (puVar13 == (undefined8 *)0x0) {
      return true;
    }
    while (puVar13 != (undefined8 *)puVar6) {
      puVar13 = (undefined8 *)*puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        return true;
      }
    }
    iVar8 = *piVar1;
    if (iVar8 == iVar9) {
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x18);
        if (lVar12 == 0) {
          return true;
        }
        uVar4 = *(int *)(lVar12 + 0x218) - 1;
        if ((uVar4 < 5) && ((0x1dU >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
          bVar7 = false;
          goto LAB_01ab06b0;
        }
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        FUN_00aeb228(&local_60,lVar12 + 0x358);
        puVar13 = local_60;
        puVar6 = PTR_DAT_0437a6e0;
        puVar5 = PTR_DAT_0437a6d8;
        if (local_60 == (undefined8 *)0x0) goto LAB_01ab06a4;
        if (*(int *)((long)local_60 + 0xc) == 0) goto LAB_01ab0778;
        piVar1 = (int *)((long)local_60 + 0xc);
        iVar9 = *(int *)((long)local_60 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar8;
    if (iVar8 == 0) {
      return true;
    }
  } while( true );
LAB_01ab0718:
  plVar14 = (long *)puVar13[2];
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
    uVar10 = FUN_00ad3750();
    *(undefined8 *)puVar6 = uVar10;
    __cxa_guard_release(puVar5);
  }
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_01ab0778;
    if (plVar14 == (long *)puVar6) break;
    plVar14 = (long *)*plVar14;
  }
  iVar8 = *piVar1;
  if (iVar8 == iVar9) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar11 = puVar13[3];
      plVar14 = (long *)0x0;
      puVar13 = local_60;
      if (lVar11 != 0) {
        plVar14 = (long *)(lVar11 + -0x50);
      }
      goto joined_r0x01ab079c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar8;
  if (iVar8 == 0) {
LAB_01ab0778:
    plVar14 = (long *)0x0;
    puVar13 = local_60;
joined_r0x01ab079c:
    local_60 = puVar13;
    if (puVar13 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar13 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar13[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar13;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar14 == (long *)0x0) {
LAB_01ab06a4:
      bVar7 = true;
    }
    else {
      lVar11 = *(long *)(plVar14[0x5d] + 0xe8);
      if ((lVar11 == 0) || (*(int *)(plVar14[0x5d] + 0xf0) != *(int *)(lVar11 + 0x2c))) {
        bVar7 = true;
      }
      else {
        lVar11 = FUN_002669c8();
        bVar7 = lVar11 == 0;
      }
      lVar11 = plVar14[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
LAB_01ab06b0:
    lVar11 = *(long *)(lVar12 + 8);
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
    }
    return bVar7;
  }
  goto LAB_01ab0718;
}


