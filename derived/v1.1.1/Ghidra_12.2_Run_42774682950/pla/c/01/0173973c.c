/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0173973c; name: FUN_0173973c
 */


undefined8 FUN_0173973c(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char cVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  byte *pbVar16;
  string *psVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  char *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_7b0;
  undefined8 uStack_7a8;
  long local_7a0;
  long lStack_798;
  undefined8 local_790;
  undefined *puStack_788;
  undefined4 local_780 [2];
  long local_778;
  undefined4 local_770;
  long local_768;
  undefined4 local_760 [2];
  string asStack_758 [576];
  undefined8 auStack_518 [2];
  string local_508;
  undefined1 auStack_507 [7];
  size_t local_500;
  undefined1 *local_4f8;
  char *apcStack_2c8 [2];
  char *local_2b8 [2];
  long local_2a8;
  
  if (((DAT_043ce7f0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce7f0), iVar9 != 0)) {
    local_2a8 = 0;
    local_2b8[1] = (undefined1 *)0x0;
    local_2b8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04380aa8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04380aa8);
      puVar2 = PTR_DAT_04380ab0;
      if (iVar9 != 0) {
        FUN_01735a00(PTR_DAT_04380ab0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04380aa8);
      }
    }
    pcVar26 = (char *)FUN_0173c0f4(local_2b8,PTR_DAT_04380ab0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043ce7d8,psVar17);
    lVar13 = local_2a8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b8[0] & 1) != 0) && (local_2a8 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar7;
      }
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar13,0,8);
          goto LAB_0173a678;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0173a678:
    FUN_00100250(PTR__string_04379718,&DAT_043ce7d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ce7f0);
  }
  std::string::string(&local_508,(string *)&DAT_043ce7d8);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043ce7d0);
  sVar1 = (ulong)((byte)local_508 >> 1);
  if (((byte)local_508 & 1) != 0) {
    sVar1 = local_500;
  }
  std::string::append((ulong)&local_508,(char)iVar9);
  if (((byte)local_508 & 1) == 0) {
    puVar27 = auStack_507;
    local_500 = (size_t)((byte)local_508 >> 1);
  }
  else {
    puVar27 = local_4f8;
  }
  snprintf(puVar27 + (sVar1 - 1),local_500,"%d",(ulong)DAT_043ce7d0);
  DAT_043ce7d0 = DAT_043ce7d0 + 1;
  if (((DAT_043ce810 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce810), iVar9 != 0)) {
    local_2a8 = 0;
    local_2b8[1] = (undefined1 *)0x0;
    local_2b8[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04380aa8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04380aa8);
      puVar2 = PTR_DAT_04380ab0;
      if (iVar9 != 0) {
        FUN_01735a00(PTR_DAT_04380ab0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04380aa8);
      }
    }
    pcVar26 = (char *)FUN_0173c0f4(local_2b8,PTR_DAT_04380ab0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043ce7f8,psVar17);
    lVar13 = local_2a8;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_2b8[0] & 1) != 0) && (local_2a8 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar7;
      }
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar13,0,8);
          goto LAB_0173a7cc;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0173a7cc:
    FUN_00100250(PTR__string_04379718,&DAT_043ce7f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ce810);
  }
  puVar2 = DAT_043ce808;
  if ((DAT_043ce7f8 & 1) == 0) {
    puVar2 = &DAT_043ce7f9;
  }
  if (((byte)local_508 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_508 | 1);
  }
  else {
    puVar27 = local_4f8;
  }
  if (((DAT_043ce820 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce820), iVar9 != 0)) {
    DAT_043ce818 = 0xf0;
    __cxa_guard_release(&DAT_043ce820);
  }
  if (((DAT_043ce830 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ce830), iVar9 != 0)) {
    DAT_043ce828 = 0xf7;
    __cxa_guard_release(&DAT_043ce830);
  }
  uVar22 = DAT_043ce818;
  lVar13 = FUN_00153520(param_2,DAT_043ce818);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xf0)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043ce828;
    lVar13 = FUN_00153520(param_2,DAT_043ce828);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0xf0)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0173d0a0();
      puVar3 = DAT_043ce848;
      if ((DAT_043ce838 & 1) == 0) {
        puVar3 = &DAT_043ce839;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar13;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar13 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar6 = 0;
      if (uVar24 != 0) {
        uVar6 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar6 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar4;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_04224fb0;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x90);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_0173d060,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar10 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar10);
  }
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_508 & 1) != 0) && (local_4f8 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar7;
    }
    uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar25,local_4f8,0,8);
        goto LAB_01739aa8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_4f8,0,8);
  }
LAB_01739aa8:
  memset(local_2b8,0,0x250);
  pcVar26 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar23 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  puVar27 = &LAB_0173ce14;
  if (uVar11 != 0) {
    puVar27 = &LAB_0173cb78;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar27;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(undefined1 **)(lVar13 + 0xa0) = puVar27;
            goto LAB_01739bc8;
          }
          *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar27;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_01739bc8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_2b8[0] = pcVar26;
  local_2b8[1] = puVar27;
LAB_01739bc8:
  pcVar26 = *(char **)(lVar13 + 0x98);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = &LAB_0173cfd0;
  if (uVar11 != 0) {
    pcVar20 = &LAB_0173cfa4;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar22 == 0x20) {
LAB_0173a308:
      local_2b8[uVar24 * 2] = pcVar26;
      local_2b8[uVar24 * 2 + 1] = pcVar20;
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x01739cac:
      if ((uVar11 >> 0x11 & 1) == 0) {
LAB_01739cb0:
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
      }
LAB_01739cb8:
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
      }
      uVar22 = uVar24;
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x181);
        if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 400);
        }
        uVar22 = (ulong)((int)uVar24 + 1);
        local_2b8[uVar24 * 2] = pcVar26;
        local_2b8[uVar24 * 2 + 1] = PTR_LAB_04380af8;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
      }
      uVar24 = uVar22;
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x289);
        if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x298);
        }
        uVar24 = (ulong)((int)uVar22 + 1);
        local_2b8[uVar22 * 2] = pcVar26;
        local_2b8[uVar22 * 2 + 1] = PTR_LAB_04380b00;
      }
      uVar22 = uVar24;
      if (*(long *)(lVar13 + 0xa0) != 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x1c9);
        if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(char **)(lVar13 + 0xa0);
        uVar22 = (ulong)((int)uVar24 + 1);
        local_2b8[uVar24 * 2] = pcVar26;
        local_2b8[uVar24 * 2 + 1] = pcVar20;
      }
      local_2b8[uVar22 * 2] = (char *)0x0;
      local_2b8[uVar22 * 2 + 1] = (char *)0x0;
      memcpy(&local_508,local_2b8,0x250);
      memcpy(asStack_758,local_2b8,0x250);
      lVar28 = FUN_008cca50();
      lVar15 = uVar22 - 1;
      pcVar26 = local_2b8[lVar15 * 2];
      sVar14 = strlen(pcVar26);
      sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar14 == sVar1) &&
         (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
         iVar9 == 0)) {
        auStack_518[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_507 + lVar15 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_758 + lVar15 * 0x10) = local_2b8[lVar15 * 2];
      *(undefined1 **)(asStack_758 + (lVar15 * 2 + 1) * 8) = &LAB_0173d000;
      FUN_00151fe0(param_2,0,2);
      local_760[0] = FUN_0014feb0(param_2,0xffffffff);
      local_768 = param_2;
      if ((*PTR_DAT_04380aa8 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04380aa8);
        puVar2 = PTR_DAT_04380ab0;
        if (iVar9 != 0) {
          FUN_01735a00(PTR_DAT_04380ab0);
          FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04380aa8);
        }
      }
      uVar10 = local_760[0];
      uVar22 = *(ulong *)(PTR_DAT_04380ab0 + 8);
      puVar2 = *(undefined **)(PTR_DAT_04380ab0 + 0x10);
      if ((*PTR_DAT_04380ab0 & 1) == 0) {
        puVar2 = PTR_DAT_04380ab0 + 1;
        uVar22 = (ulong)((byte)*PTR_DAT_04380ab0 >> 1);
      }
      FUN_001514f0(param_2,puVar2,uVar22);
      FUN_00152550(param_2,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_2,PTR_LAB_04380ae0,0);
      FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar17 = asStack_758;
          pbVar16 = (byte *)FUN_01736ab4();
        }
        else if (lVar28 == 0) {
          psVar17 = &local_508;
          pbVar16 = (byte *)FUN_01736494();
        }
        else {
          psVar17 = (string *)local_2b8;
          pbVar16 = (byte *)FUN_01735370();
        }
        pbVar21 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar21 = pbVar16 + 1;
        }
        FUN_00154450(param_2,pbVar21);
        local_770 = FUN_0014feb0(param_2,0xffffffff);
        local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
        local_778 = param_2;
        FUN_008fe304(local_780,param_2,&local_7b0,&local_768,local_770);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00155a20(param_2,psVar17,2);
        uVar10 = local_770;
        if (*(long *)(lVar13 + 0xd0) == 0) {
          lVar15 = *(long *)(lVar13 + 0xd8);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_check");
          lVar15 = *(long *)(lVar13 + 0xd8);
          uVar10 = local_770;
        }
        local_770 = uVar10;
        if (lVar15 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_cast");
        }
        uVar10 = local_770;
        uVar19 = *(undefined8 *)(lVar13 + 0xb0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_03955ac7);
        uVar10 = local_770;
        uVar19 = *(undefined8 *)(lVar13 + 0xb8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
          FUN_008fe304(local_780,param_2,&local_7b0,&local_778,local_770);
        }
        else {
          local_780[0] = 1;
          local_7b0 = &LAB_0173d050;
          uStack_7a8 = 0;
          local_7a0 = lVar13;
          lStack_798 = lVar23;
          FUN_0173d4dc(param_2,local_780,&local_7b0,local_770);
          local_780[0] = 2;
          local_7b0 = &LAB_0173d054;
          uStack_7a8 = 0;
          local_7a0 = lVar13;
          lStack_798 = lVar23;
          FUN_0173d4dc(param_2,local_780,&local_7b0,local_770);
        }
        FUN_00151fe0(param_2,0,3);
        uVar10 = FUN_0014feb0(param_2,0xffffffff);
        local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
        FUN_008fe304(local_780,param_2,&local_7b0,&local_768,uVar10);
        if (*(undefined1 **)(lVar13 + 0xa8) == (undefined1 *)0x0) {
          cVar5 = *(char *)(lVar13 + 0xe0);
        }
        else {
          local_780[0] = 4;
          uStack_7a8 = 0;
          local_7b0 = *(undefined1 **)(lVar13 + 0xa8);
          local_7a0 = lVar13;
          lStack_798 = lVar23;
          FUN_0173d4dc(param_2,local_780,&local_7b0,uVar10);
          cVar5 = *(char *)(lVar13 + 0xe0);
        }
        if (cVar5 != '\0') {
          local_780[0] = 1;
          local_7b0 = &LAB_0173d050;
          uStack_7a8 = 0;
          local_7a0 = lVar13;
          lStack_798 = lVar23;
          FUN_0173d4dc(param_2,local_780,&local_7b0,uVar10);
          local_780[0] = 2;
          local_7b0 = &LAB_0173d054;
          uStack_7a8 = 0;
          local_7a0 = lVar13;
          lStack_798 = lVar23;
          FUN_0173d4dc(param_2,local_780,&local_7b0,uVar10);
        }
        uVar12 = local_770;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar10);
        }
        FUN_00152ae0(param_2,uVar12);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_778,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_0173b8a8();
      puVar2 = DAT_043ce7a0;
      if ((DAT_043ce790 & 1) == 0) {
        puVar2 = &DAT_043ce791;
      }
      FUN_00154450(param_2,puVar2);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,local_2b8,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar12);
      local_7b0 = *(undefined1 **)(lVar13 + 0xa8);
      if (local_7b0 != (undefined1 *)0x0) {
        local_778 = CONCAT44(local_778._4_4_,4);
        uStack_7a8 = 0;
        local_7a0 = lVar13;
        lStack_798 = lVar23;
        FUN_0173d4dc(param_2,&local_778,&local_7b0,uVar12);
      }
      local_778._0_4_ = 1;
      local_7b0 = &LAB_0173d058;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7c550;
      local_7a0 = lVar13;
      lStack_798 = lVar23;
      FUN_0173db90(param_2,&local_778,&local_7b0,uVar12);
      local_778 = CONCAT44(local_778._4_4_,2);
      local_7b0 = &LAB_0173d05c;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7c550;
      local_7a0 = lVar13;
      lStack_798 = lVar23;
      FUN_0173db90(param_2,&local_778,&local_7b0,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_760[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar9 = (int)uVar22;
  if (iVar9 == 0x13) {
    *(char **)(lVar13 + 0xa0) = pcVar20;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
    goto joined_r0x01739cac;
  }
  if (iVar9 == 1) {
    *(char **)(lVar13 + 0x30) = pcVar20;
  }
  else {
    if (iVar9 != 2) {
      *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
      goto LAB_0173a308;
    }
    *(char **)(lVar13 + 0x38) = pcVar20;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0xe8) = *(ulong *)(lVar13 + 0xe8) | 1L << (uVar22 & 0x3f);
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0xe8);
  if ((uVar11 >> 0x11 & 1) == 0) goto LAB_01739cb0;
  goto LAB_01739cb8;
}


