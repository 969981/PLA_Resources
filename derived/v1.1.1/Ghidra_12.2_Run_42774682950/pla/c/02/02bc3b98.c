/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc3b98; name: FUN_02bc3b98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc3b98(long param_1,long param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined2 *puVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  void *pvVar18;
  ulong uVar19;
  char *pcVar20;
  undefined *puVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  void *pvVar30;
  long local_c8;
  int local_c0;
  int iStack_bc;
  int local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined **ppuStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined **ppuStack_70;
  void *local_68;
  
  lVar17 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x50);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar17;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02bc3c08;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar17;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02bc3c08:
  uVar23 = *(undefined8 *)(param_1 + 8);
  lVar17 = tpidr_el0;
  if (*(long *)(lVar17 + 0x20) == 0) {
    *(long **)(lVar17 + 0x20) = DAT_043f1798;
  }
  lVar27 = 1;
  local_88 = *(undefined8 *)(lVar17 + 0x20);
  local_80 = *(undefined8 *)(lVar17 + 0x28);
  *(undefined8 *)(lVar17 + 0x20) = uVar23;
  *(undefined2 *)(lVar17 + 0x28) = 1;
  puVar8 = DAT_043881c0;
  puVar7 = PTR_LAB_043881b8;
  puVar6 = PTR_LAB_043881b0;
  lVar28 = *(long *)(param_1 + 0x10);
  local_b0 = (undefined **)0x60504030201000d;
  local_a8 = CONCAT53(local_a8._3_5_,0xc0907);
  uVar22 = 0xd;
  do {
    switch(uVar22) {
    case 0:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "base";
      puVar21 = PTR_LAB_043881c8;
      break;
    case 1:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "package";
      puVar21 = PTR_LAB_043881e0;
      break;
    case 2:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "coroutine";
      puVar21 = PTR_LAB_043881d0;
      break;
    case 3:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "string";
      puVar21 = PTR_LAB_043881f0;
      break;
    case 4:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "os";
      puVar21 = PTR_LAB_043881f8;
      break;
    case 5:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "math";
      puVar21 = PTR_LAB_043881d8;
      break;
    case 6:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "table";
      puVar21 = PTR_LAB_043881e8;
      break;
    case 7:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "debug";
      puVar21 = puVar6;
      break;
    default:
      goto switchD_02bc3cf0_caseD_8;
    case 9:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "io";
      puVar21 = puVar7;
      break;
    case 0xc:
      uVar23 = *(undefined8 *)(lVar28 + 8);
      pcVar20 = "utf8";
      puVar21 = puVar8;
    }
    FUN_00155bc0(uVar23,pcVar20,puVar21,1);
    FUN_0014ff10(*(undefined8 *)(lVar28 + 8),0xfffffffe);
switchD_02bc3cf0_caseD_8:
    if (lVar27 == 0xb) break;
    uVar22 = *(undefined1 *)((long)&local_b0 + lVar27);
    lVar27 = lVar27 + 1;
  } while( true );
  FUN_00155bc0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8),"bit32",PTR_LAB_04388200,1);
  FUN_0014ff10(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8),0xfffffffe);
  lVar27 = *(long *)(param_2 + 8);
  lVar29 = *(long *)(param_1 + 0x10);
  lVar28 = *(long *)(lVar27 + 0x250);
  if (lVar27 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x240);
  }
  if (((DAT_043f1108 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043f1108), iVar11 != 0)) {
    DAT_043f10f8 = 0;
    DAT_043f1100 = (undefined8 *)0x0;
    _DAT_043f10f0 = 0;
    FUN_00100250(PTR__string_04379718,&DAT_043f10f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f1108);
  }
  uVar19 = _DAT_043f10f0 >> 1 & 0x7f;
  if ((_DAT_043f10f0 & 1) != 0) {
    uVar19 = DAT_043f10f8;
  }
  local_a0 = 0;
  ppuStack_98 = (undefined **)0x0;
  local_b0 = (undefined **)0x0;
  local_a8 = 0;
  if (uVar19 == 0) {
    if (lVar27 == 0) {
      uVar19 = 0;
      lVar3 = lVar28;
    }
    else {
      uVar24 = 0;
      do {
        *(undefined1 *)((long)&local_b0 + uVar24) = *(undefined1 *)(lVar28 + uVar24);
        uVar19 = uVar24 + 1;
        if (0x1b < uVar19) break;
        bVar10 = lVar27 - 1U != uVar24;
        uVar24 = uVar19;
      } while (bVar10);
      lVar3 = lVar28 + uVar19;
    }
    uVar24 = uVar19;
    if (lVar3 != lVar28 + lVar27) {
      uVar24 = uVar19 + 3;
      *(undefined1 *)((long)&local_b0 + uVar19 + 2) = 0x2e;
      *(undefined2 *)((long)&local_b0 + uVar19) = 0x2e2e;
    }
    puVar26 = &local_b0;
    *(undefined1 *)((long)puVar26 + uVar24) = 0;
  }
  else if ((_DAT_043f10f0 & 1) == 0) {
    puVar26 = (undefined8 *)&DAT_043f10f1;
  }
  else {
    puVar26 = DAT_043f1100;
  }
  uVar23 = *(undefined8 *)(lVar29 + 8);
  if (((DAT_043f10e8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_043f10e8), iVar11 != 0)) {
    DAT_043f10a8 = 0;
    DAT_043f10b0 = (undefined2 *)0x0;
    _DAT_043f10a0 = 0x746204;
    _DAT_043f10b8 = 0x7402;
    DAT_043f10e0 = 0;
    DAT_043f10c0 = 0;
    DAT_043f10c8 = 0;
    DAT_043f10d8 = 0;
    _DAT_043f10d0 = 0x6202;
    FUN_00100250(FUN_02bc4890,&DAT_043f10a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043f10e8);
  }
  puVar4 = DAT_043f10b0;
  if ((_DAT_043f10a0 & 1) == 0) {
    puVar4 = &DAT_043f10a1;
  }
  iVar11 = FUN_001555e0(uVar23,lVar28,lVar27,puVar26,puVar4);
  lVar27 = *(long *)(lVar29 + 8);
  iVar12 = FUN_0014feb0(lVar27,0xffffffff);
  if (iVar11 != 0) {
    pvVar18 = (void *)FUN_00150da0(lVar27,iVar12,&local_b0);
    ppuVar9 = local_b0;
    plVar1 = DAT_043f1798;
    local_68 = (void *)0x0;
    local_78 = 0;
    ppuStack_70 = (undefined **)0x0;
    if ((undefined **)0xffffffffffffffef < local_b0) goto LAB_02bc4730;
    if (local_b0 < (undefined **)0x17) {
      local_78 = (ulong)(byte)((int)local_b0 << 1);
      pvVar30 = (void *)((ulong)&local_78 | 1);
      if (local_b0 != (undefined **)0x0) goto LAB_02bc3fa4;
    }
    else {
      ppuVar2 = local_b0 + 2;
      plVar25 = *(long **)(lVar17 + 0x20);
      if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
        *(long **)(lVar17 + 0x20) = DAT_043f1798;
        plVar25 = plVar1;
      }
      pvVar30 = (void *)(**(code **)(*plVar25 + 0x10))
                                  (plVar25,(ulong)ppuVar2 & 0xfffffffffffffff0,8);
      local_78 = (ulong)ppuVar2 & 0xfffffffffffffff0 | 1;
      ppuStack_70 = ppuVar9;
      local_68 = pvVar30;
LAB_02bc3fa4:
      memcpy(pvVar30,pvVar18,(size_t)ppuVar9);
    }
    *(undefined1 *)((long)pvVar30 + (long)ppuVar9) = 0;
    std::runtime_error::runtime_error((runtime_error *)&local_b0,"");
    pvVar18 = local_68;
    plVar1 = DAT_043f1798;
    local_b0 = &PTR_FUN_04286458;
    local_a0 = local_78;
    ppuStack_98 = ppuStack_70;
    local_90 = local_68;
    if (((local_78 & 1) != 0) && (local_68 != (void *)0x0)) {
      plVar25 = *(long **)(lVar17 + 0x20);
      if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
        *(long **)(lVar17 + 0x20) = DAT_043f1798;
        plVar25 = plVar1;
      }
      uVar19 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar19 & 1) != 0) {
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar25,pvVar18,0,8);
          goto LAB_02bc4090;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,pvVar18,0,8);
    }
LAB_02bc4090:
    std::runtime_error::~runtime_error((runtime_error *)&local_b0);
  }
  if (lVar27 == 0) {
    uVar13 = 0xfffffffe;
  }
  else {
    FUN_00151860(lVar27,PTR_DAT_04380778);
    FUN_00150260(lVar27,0xffffffff);
    uVar13 = FUN_00155070(lVar27,0xfff0b9d8);
    FUN_0014ff10(lVar27,0xfffffffe);
  }
  FUN_00150260(lVar27,iVar12);
  iVar11 = FUN_00155070(lVar27,0xfff0b9d8);
  local_c8 = lVar27;
  if (uVar13 < 0xfffffffe) {
    iVar14 = FUN_0014fef0(lVar27);
    iVar14 = iVar14 + 1;
    if (lVar27 == 0) {
      FUN_00151490(0);
      FUN_00151490(0);
    }
    else {
      FUN_00151e00(lVar27,0xfff0b9d8,(long)(int)uVar13);
      FUN_00151e00(lVar27,0xfff0b9d8,(long)iVar11);
    }
    local_c0 = FUN_0014fef0(lVar27);
    local_c0 = local_c0 + -1;
    if (local_c0 < 2) {
      local_c0 = 1;
    }
    uVar15 = FUN_00152e10(lVar27,0,0xffffffff,iVar14,0,0);
    iStack_bc = FUN_0014fef0(lVar27);
    iStack_bc = iStack_bc - local_c0;
    local_b8 = iStack_bc;
    local_b4 = uVar15;
    if (iVar14 != 0) {
      FUN_0014ff70(lVar27,iVar14,0xffffffff);
      FUN_0014ff10(lVar27,0xfffffffe);
    }
  }
  else {
    if (lVar27 == 0) {
      FUN_00151490(0);
    }
    else {
      FUN_00151e00(lVar27,0xfff0b9d8,(long)iVar11);
    }
    local_c0 = FUN_0014fef0(lVar27);
    if (local_c0 < 2) {
      local_c0 = 1;
    }
    uVar15 = FUN_00152e10(lVar27,0,0xffffffff,0,0,0);
    iVar14 = FUN_0014fef0(lVar27);
    iStack_bc = (iVar14 - local_c0) + 1;
    local_b8 = iStack_bc;
    local_b4 = uVar15;
  }
  if (lVar27 != 0) {
    if (uVar13 != 0xfffffffe) {
      FUN_00155150(lVar27,0xfff0b9d8,uVar13);
    }
    if (iVar11 != -2) {
      FUN_00155150(lVar27,0xfff0b9d8,iVar11);
    }
  }
  if (local_b4 < 2) goto LAB_02bc4388;
  pvVar18 = (void *)FUN_00150da0(local_c8,local_c0,&local_b0);
  ppuVar9 = local_b0;
  plVar1 = DAT_043f1798;
  local_68 = (void *)0x0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  if ((undefined **)0xffffffffffffffef < local_b0) {
LAB_02bc4730:
    local_68 = (void *)0x0;
    ppuStack_70 = (undefined **)0x0;
    local_78 = 0;
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (local_b0 < (undefined **)0x17) {
    local_78 = (ulong)(byte)((int)local_b0 << 1);
    pvVar30 = (void *)((ulong)&local_78 | 1);
    if (local_b0 != (undefined **)0x0) goto LAB_02bc4294;
  }
  else {
    ppuVar2 = local_b0 + 2;
    plVar25 = *(long **)(lVar17 + 0x20);
    if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
      *(long **)(lVar17 + 0x20) = DAT_043f1798;
      plVar25 = plVar1;
    }
    pvVar30 = (void *)(**(code **)(*plVar25 + 0x10))(plVar25,(ulong)ppuVar2 & 0xfffffffffffffff0,8);
    local_78 = (ulong)ppuVar2 & 0xfffffffffffffff0 | 1;
    ppuStack_70 = ppuVar9;
    local_68 = pvVar30;
LAB_02bc4294:
    memcpy(pvVar30,pvVar18,(size_t)ppuVar9);
  }
  *(undefined1 *)((long)pvVar30 + (long)ppuVar9) = 0;
  std::runtime_error::runtime_error((runtime_error *)&local_b0,"");
  pvVar18 = local_68;
  plVar1 = DAT_043f1798;
  local_b0 = &PTR_FUN_04286458;
  local_a0 = local_78;
  ppuStack_98 = ppuStack_70;
  local_90 = local_68;
  if (((local_78 & 1) != 0) && (local_68 != (void *)0x0)) {
    plVar25 = *(long **)(lVar17 + 0x20);
    if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
      *(long **)(lVar17 + 0x20) = DAT_043f1798;
      plVar25 = plVar1;
    }
    uVar19 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar25,pvVar18,0,8);
        goto LAB_02bc4380;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,pvVar18,0,8);
  }
LAB_02bc4380:
  std::runtime_error::~runtime_error((runtime_error *)&local_b0);
LAB_02bc4388:
  lVar28 = local_c8;
  local_b0 = (undefined **)local_c8;
  FUN_00150260(local_c8,local_c0);
  uVar16 = FUN_00155070(lVar28,0xfff0b9d8);
  local_a8 = CONCAT44(local_a8._4_4_,uVar16);
  FUN_008ea1e4(param_1 + 0x30,&local_b0);
  if ((local_b0 != (undefined **)0x0) && ((int)local_a8 != -2)) {
    FUN_00155150(local_b0,0xfff0b9d8);
  }
  FUN_0107ebac(&local_c8);
  iVar11 = FUN_0014fef0(lVar27);
  if (0 < iVar11) {
    if ((iVar12 != -1) && (iVar11 != iVar12)) {
      iVar11 = FUN_0014feb0(lVar27,iVar12);
      if (iVar11 < 0) {
        iVar12 = FUN_0014fef0(lVar27);
        iVar11 = iVar11 + iVar12 + 1;
      }
      FUN_0014ff70(lVar27,iVar11,0xffffffff);
    }
    FUN_0014ff10(lVar27,0xfffffffe);
  }
  *(undefined8 *)(lVar17 + 0x20) = local_88;
  *(undefined2 *)(lVar17 + 0x28) = (undefined2)local_80;
  *(undefined8 *)(param_1 + 0x50) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
  return;
}


