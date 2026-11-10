/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015306c4; name: FUN_015306c4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015306c4(long param_1)

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
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
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
  undefined2 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_164;
  byte local_163;
  undefined4 local_15c;
  long local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  uVar15 = *(undefined8 *)(param_1 + 8);
  local_78 = (long *)0x0;
  FUN_01352fe4(auStack_268,uVar15);
  local_180 = *(undefined4 *)(param_1 + 0x480);
  local_178 = *(undefined4 *)(param_1 + 0x488);
  local_174 = *(undefined2 *)(param_1 + 0x48c);
  local_170 = *(undefined4 *)(param_1 + 0x490);
  local_16c = *(undefined4 *)(param_1 + 0x494);
  local_17c = *(undefined2 *)(param_1 + 0x484);
  local_164 = *(undefined1 *)(param_1 + 0x4a0);
  local_163 = FUN_01090d40();
  puVar7 = PTR_DAT_0437f890;
  puVar6 = PTR_DAT_0437f888;
  puVar5 = PTR_DAT_043794d0;
  local_163 = local_163 & 1;
  if (*(int *)(param_1 + 0x4b4) == 0) {
    local_15c = 1;
  }
  local_188 = 0;
  lVar14 = *(long *)(param_1 + 0x98);
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0xc) == 0)) {
LAB_01530764:
    plVar16 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      puVar17 = *(undefined8 **)(lVar14 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar6);
      }
      if (puVar17 == (undefined8 *)0x0) goto LAB_01530764;
      while (puVar17 != (undefined8 *)puVar7) {
        puVar17 = (undefined8 *)*puVar17;
        plVar16 = (long *)0x0;
        if (puVar17 == (undefined8 *)0x0) goto LAB_01530768;
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
          plVar16 = (long *)0x0;
          if (*(long *)(lVar14 + 0x18) != 0) {
            plVar16 = (long *)(*(long *)(lVar14 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar16 = (long *)0x0;
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01530768:
  local_278 = (undefined8 *)plVar16[0x13];
  lStack_270 = plVar16[0x14];
  plVar12 = (long *)FUN_0152b4a4(local_70,uVar15,&local_278,auStack_268);
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01530b8c;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = local_78;
  local_78 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    lVar14 = plVar9[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  local_78 = plVar12;
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  if (((*PTR_DAT_0437a780 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e65a40(&local_278);
  FUN_0135ad58(local_78 + 0x4d,&local_278);
  puVar17 = local_278;
  if (local_278 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_278 + 1);
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
      local_278[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_70[0] = *puVar17;
      FUN_02a44274(lVar14 + 0xd8,local_70);
    }
  }
  *(undefined4 *)(local_80 + 0x68) = 3;
  puVar8 = PTR_DAT_0437f890;
  puVar7 = PTR_DAT_0437f888;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar14 = *(long *)(param_1 + 0x98);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          uVar15 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar15;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto joined_r0x01530ce8;
        if (plVar16 == (long *)puVar8) break;
        plVar16 = (long *)*plVar16;
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
          plVar16 = (long *)0x0;
          if (*(long *)(lVar14 + 0x18) != 0) {
            plVar16 = (long *)(*(long *)(lVar14 + 0x18) + -0x50);
          }
          plVar12 = (long *)plVar16[0x5f];
          goto joined_r0x01530cb4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
joined_r0x01530ce8:
  plVar16 = (long *)0x0;
  plVar12 = _DAT_000002f8;
joined_r0x01530cb4:
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01530b8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_300 = &LAB_01531f48;
  local_2f8 = FUN_01532f38;
  local_2f0 = &LAB_01533e00;
  local_2e8 = &LAB_01533e0c;
  alStack_2e0[0] = param_1;
  FUN_01352900(&local_280,plVar12,0,&local_78,&local_300,0);
  pcVar4 = local_2f8;
  if (local_280 != (long *)0x0) {
    lVar14 = local_280[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_280 + 0x20))();
      pcVar4 = local_2f8;
      local_2f8 = (code *)0x0;
    }
  }
  if (pcVar4 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar4)(alStack_2e0);
  }
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar14 = plVar16[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  FUN_00b17558(auStack_268);
  if (local_78 != (long *)0x0) {
    lVar14 = local_78[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return;
}


