/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0195ab24; name: FUN_0195ab24
 */


void FUN_0195ab24(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *local_70 [2];
  long *local_58;
  
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar13 = *(long *)(*param_1 + 0x98);
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0xc) == 0)) {
LAB_0195ab50:
    plVar14 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar9 = *(int *)(lVar13 + 0xc);
    do {
      puVar16 = *(undefined8 **)(lVar13 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      if (puVar16 == (undefined8 *)0x0) goto LAB_0195ab50;
      while (puVar16 != (undefined8 *)puVar8) {
        puVar16 = (undefined8 *)*puVar16;
        plVar14 = (long *)0x0;
        if (puVar16 == (undefined8 *)0x0) goto LAB_0195ab54;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar14 = (long *)0x0;
          if (*(long *)(lVar13 + 0x18) != 0) {
            plVar14 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar14 = (long *)0x0;
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
LAB_0195ab54:
  FUN_0199d068(local_70,plVar14);
  plVar15 = local_70[0];
  puVar8 = PTR_DAT_04379f80;
  puVar7 = PTR_DAT_04379f78;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_70[0] == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    if (*(int *)((long)local_70[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_70[0] + 0xc);
      iVar9 = *(int *)((long)local_70[0] + 0xc);
      do {
        plVar17 = (long *)plVar15[2];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar17 == (long *)0x0) goto LAB_0195aee8;
          if (plVar17 == (long *)puVar8) break;
          plVar17 = (long *)*plVar17;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = plVar15[3];
            plVar15 = (long *)0x0;
            plVar17 = local_70[0];
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x0195ae58;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_0195aee8:
    plVar15 = (long *)0x0;
    plVar17 = local_70[0];
joined_r0x0195ae58:
    local_70[0] = plVar17;
    if (plVar17 != (long *)0x0) {
      plVar2 = plVar17 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        plVar17[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*plVar17;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
  }
  uVar11 = FUN_01f634f0(plVar15);
  if ((uVar11 & 1) != 0) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    *(undefined8 *)PTR_DAT_04379688 = *(undefined8 *)PTR_DAT_04379680;
    FUN_00d8c950(&local_58);
    FUN_016b6250(local_70,local_58);
    FUN_017839f8(local_70[0]);
    if (local_70[0] != (long *)0x0) {
      plVar17 = local_70[0] + 10;
      do {
        iVar9 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
    }
    if (local_58 != (long *)0x0) {
      plVar17 = local_58 + 10;
      do {
        iVar9 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


