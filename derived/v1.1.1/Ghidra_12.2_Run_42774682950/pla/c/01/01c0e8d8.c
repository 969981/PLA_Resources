/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c0e8d8; name: FUN_01c0e8d8
 */


void FUN_01c0e8d8(long param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_0437a5c0;
  puVar5 = PTR_DAT_0437a5b8;
  lVar14 = *(long *)(param_1 + 0x308);
  if (lVar14 == 0) {
    return;
  }
  if (*(int *)(lVar14 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar14 + 0xc);
  iVar9 = *(int *)(lVar14 + 0xc);
  do {
    plVar16 = *(long **)(lVar14 + 0x10);
    uVar13 = param_2;
    if ((*puVar5 & 1) == 0) {
      uVar13 = param_2 & 0xffffffff;
      iVar8 = __cxa_guard_acquire(puVar5,param_2);
      if (iVar8 != 0) {
        uVar10 = FUN_00ab4284();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
    }
    while( true ) {
      if (plVar16 == (long *)0x0) {
        return;
      }
      param_2 = uVar13 & 0xffffffff;
      if (plVar16 == (long *)puVar6) break;
      plVar16 = (long *)*plVar16;
      uVar13 = param_2;
    }
    iVar8 = *piVar1;
    if (iVar8 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar14 = *(long *)(lVar14 + 0x18);
        plVar16 = (long *)(lVar14 + -0x50);
        if (lVar14 == 0) {
          return;
        }
        FUN_00aaeed4(&local_80,plVar16);
        puVar11 = local_80;
        puVar6 = PTR_DAT_0437a140;
        puVar5 = PTR_DAT_0437a138;
        if (local_80 == (undefined8 *)0x0) goto LAB_01c0e9b4;
        if (*(int *)((long)local_80 + 0xc) == 0) goto LAB_01c0eae0;
        piVar1 = (int *)((long)local_80 + 0xc);
        iVar9 = *(int *)((long)local_80 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar8;
    if (iVar8 == 0) {
      return;
    }
  } while( true );
LAB_01c0ea68:
  plVar17 = (long *)puVar11[2];
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
    uVar10 = FUN_009b19b4();
    *(undefined8 *)puVar6 = uVar10;
    __cxa_guard_release(puVar5);
  }
  while( true ) {
    if (plVar17 == (long *)0x0) goto LAB_01c0eae0;
    if (plVar17 == (long *)puVar6) break;
    plVar17 = (long *)*plVar17;
  }
  iVar8 = *piVar1;
  if (iVar8 == iVar9) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar12 = puVar11[3];
      plVar17 = (long *)0x0;
      puVar11 = local_80;
      if (lVar12 != 0) {
        plVar17 = (long *)(lVar12 + -0x50);
      }
      goto joined_r0x01c0eab8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar8;
  if (iVar8 == 0) {
LAB_01c0eae0:
    plVar17 = (long *)0x0;
    puVar11 = local_80;
joined_r0x01c0eab8:
    local_80 = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar11 + 1);
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
        puVar11[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_58 = *puVar11;
        FUN_02a44274(lVar12 + 0xd8,&local_58);
      }
    }
    if (plVar17 != (long *)0x0) {
      puVar11 = (undefined8 *)FUN_02aac0f0(plVar17);
      plVar15 = (long *)*puVar11;
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_80 = (undefined8 *)0xde5b3d895e3b750;
      pcStack_78 = "eff_eye_01";
      local_70 = 10;
      local_68 = (long *)0x0;
      sVar7 = FUN_02b68184(plVar15,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (sVar7 != -1) {
        FUN_01c0d5d0(param_1,1,param_2);
      }
      local_80 = (undefined8 *)0xde5b6d895e3bc69;
      pcStack_78 = "eff_eye_02";
      local_70 = 10;
      local_68 = (long *)0x0;
      sVar7 = FUN_02b68184(plVar15,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (sVar7 != -1) {
        FUN_01c0d5d0(param_1,2,param_2);
      }
      local_80 = (undefined8 *)0xde5b5d895e3bab6;
      pcStack_78 = "eff_eye_03";
      local_70 = 10;
      local_68 = (long *)0x0;
      sVar7 = FUN_02b68184(plVar15,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (sVar7 != -1) {
        FUN_01c0d5d0(param_1,3,param_2);
      }
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 10;
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
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      lVar12 = plVar17[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
LAB_01c0e9b4:
    lVar14 = *(long *)(lVar14 + 8);
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    return;
  }
  goto LAB_01c0ea68;
}


