/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01534064; name: FUN_01534064
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01534064(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined1 *local_300;
  code *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  long alStack_2e0 [12];
  long *local_280;
  undefined8 *local_278;
  long lStack_270;
  undefined1 auStack_268 [224];
  undefined4 local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined4 local_178;
  undefined1 local_174;
  undefined1 local_173;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  byte local_163;
  undefined4 local_15c;
  long local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  puVar16 = PTR_DAT_0437f890;
  puVar15 = PTR_DAT_0437f888;
  puVar14 = PTR_DAT_043794d8;
  puVar13 = PTR_DAT_043794d0;
  uVar22 = *(undefined8 *)(param_1 + 8);
  lVar25 = *(long *)(param_1 + 0x98);
  if (lVar25 == 0) {
    plVar24 = (long *)0x0;
  }
  else if (*(int *)(lVar25 + 0xc) == 0) {
LAB_01534688:
    plVar24 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar25 + 0xc);
    iVar18 = *(int *)(lVar25 + 0xc);
    do {
      puVar26 = *(undefined8 **)(lVar25 + 0x10);
      if (((*puVar15 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar15), iVar19 != 0)) {
        if (((*puVar13 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar13), iVar19 != 0)) {
          uVar21 = FUN_0087f8f0();
          *(undefined8 *)puVar14 = uVar21;
          __cxa_guard_release(puVar13);
        }
        *(undefined **)puVar16 = puVar14;
        __cxa_guard_release(puVar15);
      }
      if (puVar26 == (undefined8 *)0x0) goto LAB_01534688;
      while (puVar26 != (undefined8 *)puVar16) {
        puVar26 = (undefined8 *)*puVar26;
        plVar24 = (long *)0x0;
        if (puVar26 == (undefined8 *)0x0) goto LAB_01534098;
      }
      iVar19 = *piVar1;
      if (iVar19 == iVar18) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar18 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          plVar24 = (long *)0x0;
          if (*(long *)(lVar25 + 0x18) != 0) {
            plVar24 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar24 = (long *)0x0;
      iVar18 = iVar19;
    } while (iVar19 != 0);
  }
LAB_01534098:
  iVar18 = *(int *)(param_1 + 0x480);
  lVar25 = plVar24[(long)iVar18 * 5 + 0x6c];
  uVar6 = *(undefined2 *)((long)plVar24 + (long)iVar18 * 0x28 + 0x364);
  lVar10 = plVar24[(long)iVar18 * 5 + 0x6d];
  uVar4 = *(undefined1 *)((long)plVar24 + (long)iVar18 * 0x28 + 0x36c);
  uVar5 = *(undefined1 *)((long)plVar24 + (long)iVar18 * 0x28 + 0x36d);
  lVar11 = plVar24[(long)iVar18 * 5 + 0x6e];
  uVar2 = *(undefined4 *)((long)plVar24 + (long)iVar18 * 0x28 + 0x374);
  lVar12 = plVar24[(long)iVar18 * 5 + 0x70];
  uVar3 = *(undefined4 *)((long)plVar24 + (long)iVar18 * 0x28 + 900);
  if (plVar24 != (long *)0x0) {
    lVar23 = plVar24[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
  }
  local_78 = (long *)0x0;
  FUN_01352fe4(auStack_268);
  local_180 = (int)lVar25;
  local_17c = uVar6;
  local_178 = (int)lVar10;
  local_174 = uVar4;
  local_173 = uVar5;
  local_170 = (int)lVar11;
  local_16c = uVar2;
  local_164 = (char)lVar12;
  local_163 = FUN_01090d40((int)lVar25,uVar6);
  puVar16 = PTR_DAT_0437f890;
  puVar15 = PTR_DAT_0437f888;
  puVar14 = PTR_DAT_043794d8;
  puVar13 = PTR_DAT_043794d0;
  local_163 = local_163 & 1;
  if (*(int *)(param_1 + 0x490) == 0) {
    local_15c = 1;
  }
  local_188 = 0;
  lVar25 = *(long *)(param_1 + 0x98);
  local_168 = uVar3;
  if ((lVar25 == 0) || (*(int *)(lVar25 + 0xc) == 0)) {
LAB_01534158:
    plVar24 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar25 + 0xc);
    iVar18 = *(int *)(lVar25 + 0xc);
    do {
      puVar26 = *(undefined8 **)(lVar25 + 0x10);
      if (((*puVar15 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar15), iVar19 != 0)) {
        if (((*puVar13 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar13), iVar19 != 0)) {
          uVar21 = FUN_0087f8f0();
          *(undefined8 *)puVar14 = uVar21;
          __cxa_guard_release(puVar13);
        }
        *(undefined **)puVar16 = puVar14;
        __cxa_guard_release(puVar15);
      }
      if (puVar26 == (undefined8 *)0x0) goto LAB_01534158;
      while (puVar26 != (undefined8 *)puVar16) {
        puVar26 = (undefined8 *)*puVar26;
        plVar24 = (long *)0x0;
        if (puVar26 == (undefined8 *)0x0) goto LAB_0153415c;
      }
      iVar19 = *piVar1;
      if (iVar19 == iVar18) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar18 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          plVar24 = (long *)0x0;
          if (*(long *)(lVar25 + 0x18) != 0) {
            plVar24 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar24 = (long *)0x0;
      iVar18 = iVar19;
    } while (iVar19 != 0);
  }
LAB_0153415c:
  local_278 = (undefined8 *)plVar24[0x13];
  lStack_270 = plVar24[0x14];
  plVar20 = (long *)FUN_0152b4a4(local_70,uVar22,&local_278,auStack_268);
  if (plVar20 != (long *)0x0) {
    lVar25 = plVar20[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) goto LAB_015345e8;
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar22;
    }
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar17 = local_78;
  local_78 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    lVar25 = plVar17[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
  local_78 = plVar20;
  if (plVar24 != (long *)0x0) {
    lVar25 = plVar24[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar18 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar18 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e65a40(&local_278);
  FUN_0135ad58(local_78 + 0x4d,&local_278);
  puVar26 = local_278;
  if (local_278 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_278 + 1);
    do {
      iVar18 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 + -1 == 0) {
      local_278[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar18 = __cxa_guard_acquire(PTR_DAT_04379498), iVar18 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar25 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar25;
      local_70[0] = *puVar26;
      FUN_02a44274(lVar25 + 0xd8,local_70);
    }
  }
  *(undefined4 *)(local_80 + 0x68) = 3;
  puVar16 = PTR_DAT_0437f890;
  puVar15 = PTR_DAT_0437f888;
  puVar14 = PTR_DAT_043794d8;
  puVar13 = PTR_DAT_043794d0;
  lVar25 = *(long *)(param_1 + 0x98);
  if ((lVar25 != 0) && (*(int *)(lVar25 + 0xc) != 0)) {
    piVar1 = (int *)(lVar25 + 0xc);
    iVar18 = *(int *)(lVar25 + 0xc);
    do {
      plVar24 = *(long **)(lVar25 + 0x10);
      if (((*puVar15 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar15), iVar19 != 0)) {
        if (((*puVar13 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar13), iVar19 != 0)) {
          uVar22 = FUN_0087f8f0();
          *(undefined8 *)puVar14 = uVar22;
          __cxa_guard_release(puVar13);
        }
        *(undefined **)puVar16 = puVar14;
        __cxa_guard_release(puVar15);
      }
      while( true ) {
        if (plVar24 == (long *)0x0) goto joined_r0x01534818;
        if (plVar24 == (long *)puVar16) break;
        plVar24 = (long *)*plVar24;
      }
      iVar19 = *piVar1;
      if (iVar19 == iVar18) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar18 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          plVar24 = (long *)0x0;
          if (*(long *)(lVar25 + 0x18) != 0) {
            plVar24 = (long *)(*(long *)(lVar25 + 0x18) + -0x50);
          }
          plVar20 = (long *)plVar24[0x5f];
          goto joined_r0x015347e0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar18 = iVar19;
    } while (iVar19 != 0);
  }
joined_r0x01534818:
  plVar24 = (long *)0x0;
  plVar20 = _DAT_000002f8;
joined_r0x015347e0:
  if (plVar20 != (long *)0x0) {
    lVar25 = plVar20[0xb];
    if (*(undefined8 **)(lVar25 + 0x18) == (undefined8 *)0x0) {
LAB_015345e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar25 + 0x10) == 0) {
      uVar22 = (**(code **)**(undefined8 **)(lVar25 + 0x18))();
      *(undefined8 *)(lVar25 + 0x10) = uVar22;
    }
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  local_300 = &LAB_01535a7c;
  local_2f8 = FUN_01536ac8;
  local_2f0 = &LAB_01536acc;
  local_2e8 = &LAB_01536ad8;
  alStack_2e0[0] = param_1;
  FUN_01352900(&local_280,plVar20,0,&local_78,&local_300,0);
  pcVar9 = local_2f8;
  if (local_280 != (long *)0x0) {
    lVar25 = local_280[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_280 + 0x20))();
      pcVar9 = local_2f8;
      local_2f8 = (code *)0x0;
    }
  }
  if (pcVar9 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar9)(alStack_2e0);
  }
  if (plVar20 != (long *)0x0) {
    lVar25 = plVar20[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar25 = plVar24[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
  FUN_00b17558(auStack_268);
  if (local_78 != (long *)0x0) {
    lVar25 = local_78[0xb];
    piVar1 = (int *)(lVar25 + 0xc);
    do {
      iVar18 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 + -1 == 0) {
      *(undefined8 *)(lVar25 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return;
}


