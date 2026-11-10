/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0152c0b4; name: FUN_0152c0b4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0152c0b4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined1 *local_320;
  code *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  long alStack_300 [12];
  long *local_2a0;
  long *local_298;
  long *local_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [488];
  long local_98;
  long *local_90;
  long *local_88;
  undefined8 *local_80;
  long lStack_78;
  undefined8 local_70 [2];
  
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_88);
  local_90 = (long *)0x0;
  uVar16 = *(undefined8 *)(param_1 + 8);
  uVar10 = FUN_01123ce8(local_88);
  FUN_0135efcc(auStack_280,uVar16,uVar10,*(undefined4 *)(param_1 + 0x480));
  puVar7 = PTR_DAT_0437f890;
  puVar6 = PTR_DAT_0437f888;
  puVar5 = PTR_DAT_043794d0;
  uVar16 = *(undefined8 *)(param_1 + 8);
  plVar17 = (long *)0x0;
  lVar15 = *(long *)(param_1 + 0x98);
  if (lVar15 != 0) {
    if (*(int *)(lVar15 + 0xc) == 0) {
LAB_0152c838:
      plVar17 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar15 + 0xc);
      iVar11 = *(int *)(lVar15 + 0xc);
      do {
        puVar18 = *(undefined8 **)(lVar15 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6,uVar16), iVar12 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar7 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar6);
        }
        if (puVar18 == (undefined8 *)0x0) goto LAB_0152c838;
        while (puVar18 != (undefined8 *)puVar7) {
          puVar18 = (undefined8 *)*puVar18;
          plVar17 = (long *)0x0;
          if (puVar18 == (undefined8 *)0x0) goto LAB_0152c13c;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar17 = (long *)0x0;
            if (*(long *)(lVar15 + 0x18) != 0) {
              plVar17 = (long *)(*(long *)(lVar15 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar17 = (long *)0x0;
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
  }
LAB_0152c13c:
  local_80 = (undefined8 *)plVar17[0x13];
  lStack_78 = plVar17[0x14];
  plVar13 = (long *)FUN_0152b4a4(&local_290,uVar16,&local_80,auStack_280);
  if (plVar13 != (long *)0x0) {
    lVar15 = plVar13[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0152c794;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = local_90;
  local_90 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    lVar15 = plVar9[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  local_90 = plVar13;
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e65a40(&local_80);
  FUN_0135ad58(local_90 + 0x4d,&local_80);
  puVar18 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_290 = (long *)*puVar18;
      FUN_02a44274(lVar15 + 0xd8,&local_290);
    }
  }
  FUN_015129f4(&local_298,param_1,0xffffffff);
  (**(code **)(*local_298 + 0x10))(&local_80);
  local_290 = (long *)0x0;
  uStack_288 = 0;
  FUN_0087f944(&local_290,&local_80);
  puVar18 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_70[0] = *puVar18;
      FUN_02a44274(lVar15 + 0xd8,local_70);
    }
  }
  FUN_0087fcf0(local_90 + 0x4f,&local_290);
  plVar17 = local_290;
  if (local_290 != (long *)0x0) {
    plVar13 = local_290 + 1;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = iVar11;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 == 0) {
      local_290[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_80 = (undefined8 *)*plVar17;
      FUN_02a44274(lVar15 + 0xd8,&local_80);
    }
  }
  if (local_298 != (long *)0x0) {
    lVar15 = local_298[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_298 + 0x20))();
    }
  }
  *(undefined4 *)(local_98 + 0x68) = 2;
  puVar8 = PTR_DAT_0437f890;
  puVar7 = PTR_DAT_0437f888;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x98);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar11 = *(int *)(lVar15 + 0xc);
    do {
      plVar17 = *(long **)(lVar15 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
          uVar16 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar16;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto joined_r0x0152c908;
        if (plVar17 == (long *)puVar8) break;
        plVar17 = (long *)*plVar17;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar17 = (long *)0x0;
          if (*(long *)(lVar15 + 0x18) != 0) {
            plVar17 = (long *)(*(long *)(lVar15 + 0x18) + -0x50);
          }
          plVar13 = (long *)plVar17[0x5f];
          goto joined_r0x0152c8d4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
joined_r0x0152c908:
  plVar17 = (long *)0x0;
  plVar13 = _DAT_000002f8;
joined_r0x0152c8d4:
  if (plVar13 != (long *)0x0) {
    lVar15 = plVar13[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_0152c794:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar16;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_320 = &LAB_0152ea9c;
  local_318 = FUN_0152f58c;
  local_310 = &LAB_015303dc;
  local_308 = &LAB_015303e8;
  alStack_300[0] = param_1;
  FUN_01352900(&local_2a0,plVar13,0,&local_90,&local_320,0);
  pcVar4 = local_318;
  if (local_2a0 != (long *)0x0) {
    lVar15 = local_2a0[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_2a0 + 0x20))();
      pcVar4 = local_318;
    }
  }
  if (pcVar4 == (code *)0x0) {
    local_318 = (code *)0x0;
  }
  else {
    local_310 = (undefined1 *)0x0;
    local_308 = (undefined1 *)0x0;
    local_320 = (undefined1 *)0x0;
    local_318 = (code *)0x0;
    (*pcVar4)(alStack_300);
  }
  if (plVar13 != (long *)0x0) {
    lVar15 = plVar13[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  FUN_00b17558(auStack_280);
  if (local_90 != (long *)0x0) {
    lVar15 = local_90[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_90 + 0x20))();
    }
  }
  if (local_88 != (long *)0x0) {
    lVar15 = local_88[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  return;
}


