/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0222bd94; name: FUN_0222bd94
 */


undefined8 FUN_0222bd94(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  string *psVar17;
  code *__maxlen;
  undefined8 *puVar18;
  byte *pbVar19;
  undefined8 uVar20;
  code *pcVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  undefined1 *local_720;
  undefined8 uStack_718;
  long local_710;
  long lStack_708;
  undefined8 local_700;
  undefined *puStack_6f8;
  undefined4 local_6f0 [2];
  long local_6e8;
  undefined4 local_6e0;
  long local_6d8;
  undefined4 local_6d0 [2];
  long alStack_6c8 [66];
  long alStack_4b8 [68];
  long alStack_298 [2];
  undefined8 local_288;
  code *local_280;
  ulong local_278;
  
  puVar4 = PTR_DAT_043845f8;
  if (((DAT_043debd8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043debd8), iVar9 != 0)) {
    local_278 = 0;
    local_280 = (code *)0x0;
    local_288 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043845f8);
      puVar7 = PTR_DAT_04384600;
      if (iVar9 != 0) {
        FUN_02097eb0(PTR_DAT_04384600);
        FUN_00100250(PTR__string_04379718,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043845f8);
      }
    }
    pcVar27 = (char *)FUN_0222e7e4(&local_288,PTR_DAT_04384600);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043debc0,psVar17);
    uVar28 = local_278;
    plVar29 = DAT_043f1798;
    if ((((ulong)local_288 & 1) != 0) && (local_278 != 0)) {
      lVar14 = tpidr_el0;
      plVar26 = *(long **)(lVar14 + 0x20);
      if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
        *(long **)(lVar14 + 0x20) = DAT_043f1798;
        plVar26 = plVar29;
      }
      uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar26,uVar28,0,8);
          goto LAB_0222cbdc;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,uVar28,0,8);
    }
LAB_0222cbdc:
    FUN_00100250(PTR__string_04379718,&DAT_043debc0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043debd8);
  }
  std::string::string((string *)&local_288,(string *)&DAT_043debc0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043debb8);
  pcVar21 = (code *)((ulong)local_288 >> 1 & 0x7f);
  if (((ulong)local_288 & 1) != 0) {
    pcVar21 = local_280;
  }
  std::string::append((ulong)&local_288,(char)iVar9);
  if (((ulong)local_288 & 1) == 0) {
    uVar28 = (long)&local_288 + 1;
    __maxlen = (code *)((ulong)local_288 >> 1 & 0x7f);
  }
  else {
    __maxlen = local_280;
    uVar28 = local_278;
  }
  iVar9 = snprintf((char *)(pcVar21 + (uVar28 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043debb8);
  DAT_043debb8 = DAT_043debb8 + 1;
  pbVar13 = (byte *)FUN_02098858(iVar9);
  pbVar19 = *(byte **)(pbVar13 + 0x10);
  if ((*pbVar13 & 1) == 0) {
    pbVar19 = pbVar13 + 1;
  }
  if (((ulong)local_288 & 1) == 0) {
    uVar28 = (ulong)&local_288 | 1;
  }
  else {
    uVar28 = local_278;
  }
  if (((DAT_043debe8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043debe8), iVar9 != 0)) {
    DAT_043debe0 = 0xb8;
    __cxa_guard_release(&DAT_043debe8);
  }
  if (((DAT_043debf8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043debf8), iVar9 != 0)) {
    DAT_043debf0 = 0xbf;
    __cxa_guard_release(&DAT_043debf8);
  }
  uVar22 = DAT_043debe0;
  lVar14 = FUN_00153520(param_2,DAT_043debe0);
  if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0xb8)) ||
     (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043debf0;
    lVar14 = FUN_00153520(param_2,DAT_043debf0);
    if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0xb8)) ||
       (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0222f5c0();
      puVar2 = DAT_043dec10;
      if ((DAT_043dec00 & 1) == 0) {
        puVar2 = &DAT_043dec01;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar20;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar14;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar24;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar18[2];
    uVar22 = *(ulong *)(lVar14 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar22 = uVar25 - 1 & uVar22;
    }
    else if (uVar25 <= uVar22) {
      uVar6 = 0;
      if (uVar25 != 0) {
        uVar6 = uVar22 / uVar25;
      }
      uVar22 = uVar22 - uVar6 * uVar25;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar23 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar20;
  puVar18[7] = uVar23;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar18 = &PTR_FUN_0425b808;
  *(undefined1 *)(puVar18 + 0xb) = uVar5;
  uVar23 = *(undefined8 *)(param_1 + 0x70);
  uVar20 = *(undefined8 *)(param_1 + 0x68);
  puVar18[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar18[0xd] = uVar20;
  puVar18[0xe] = uVar23;
  uVar20 = *(undefined8 *)(param_1 + 0x78);
  uVar23 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  puVar18[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar18[0x12] = uVar3;
  puVar18[0xf] = uVar20;
  puVar18[0x10] = uVar23;
  uVar20 = *(undefined8 *)(param_1 + 0x98);
  uVar23 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  puVar18[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar18[0x16] = uVar3;
  puVar18[0x13] = uVar20;
  puVar18[0x14] = uVar23;
  iVar9 = FUN_00154450(param_2,uVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_0222f580,0);
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
  FUN_001522a0(param_2,pbVar19);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,pbVar19);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  uVar28 = local_278;
  plVar29 = DAT_043f1798;
  if ((((ulong)local_288 & 1) != 0) && (local_278 != 0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar29;
    }
    uVar22 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar22 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar26,uVar28,0,8);
        goto LAB_0222c104;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,uVar28,0,8);
  }
LAB_0222c104:
  memset(&local_288,0,0x220);
  puVar7 = PTR_DAT_04380660;
  *(undefined1 *)(lVar14 + 0x58) = 1;
  *puVar7 = 1;
  pcVar27 = *(char **)(lVar14 + 0x60);
  *(undefined1 **)(lVar14 + 0x98) = &LAB_0222f9fc;
  *(undefined1 **)(lVar14 + 0xa0) = &LAB_0222fab8;
  *(undefined1 **)(lVar14 + 0x88) = &LAB_0222fb10;
  *(undefined1 **)(lVar14 + 0x90) = &LAB_0222fb20;
  sVar15 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar24 = lVar14 + 8;
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar30 = 0;
  uVar28 = 0;
  pcVar21 = FUN_0222f464;
  if (uVar11 != 0) {
    pcVar21 = FUN_0222f404;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar19 = (byte *)(lVar16 + lVar30);
    sVar15 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar28;
      if (iVar9 == 0x13) {
        uVar22 = 0;
        *(code **)(lVar14 + 0x68) = pcVar21;
        uVar11 = (uint)*(undefined8 *)(lVar14 + 0xb0);
        goto joined_r0x0222ca30;
      }
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar14 + 0xb0) = *(ulong *)(lVar14 + 0xb0) | 1L << (uVar28 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xb0) = *(ulong *)(lVar14 + 0xb0) | 1L << (uVar28 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar14 + 0xb0);
      goto joined_r0x0222ca30;
    }
    uVar28 = uVar28 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar28 != 0x20);
  uVar22 = 1;
  uVar11 = (uint)*(undefined8 *)(lVar14 + 0xb0);
  local_288 = pcVar27;
  local_280 = pcVar21;
joined_r0x0222ca30:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar14 + 0xb0);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar14 + 0xb0);
  }
  uVar28 = uVar22;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar16 = FUN_008cca50();
    lVar30 = lVar16 + 0x181;
    if ((*(byte *)(lVar16 + 0x180) & 1) != 0) {
      lVar30 = *(long *)(lVar16 + 400);
    }
    uVar28 = (ulong)((int)uVar22 + 1);
    alStack_298[uVar22 * 2 + 2] = lVar30;
    (&local_280)[uVar22 * 2] = (code *)PTR_LAB_043860a0;
    uVar11 = (uint)*(undefined8 *)(lVar14 + 0xb0);
  }
  uVar22 = uVar28;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar16 = FUN_008cca50();
    lVar30 = lVar16 + 0x289;
    if ((*(byte *)(lVar16 + 0x288) & 1) != 0) {
      lVar30 = *(long *)(lVar16 + 0x298);
    }
    uVar22 = (ulong)((int)uVar28 + 1);
    alStack_298[uVar28 * 2 + 2] = lVar30;
    (&local_280)[uVar28 * 2] = (code *)PTR_LAB_043860a8;
  }
  uVar28 = uVar22;
  if (*(long *)(lVar14 + 0x68) != 0) {
    lVar16 = FUN_008cca50();
    lVar30 = lVar16 + 0x1c9;
    if ((*(byte *)(lVar16 + 0x1c8) & 1) != 0) {
      lVar30 = *(long *)(lVar16 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar14 + 0x68);
    uVar28 = (ulong)((int)uVar22 + 1);
    alStack_298[uVar22 * 2 + 2] = lVar30;
    (&local_280)[uVar22 * 2] = pcVar21;
  }
  alStack_298[uVar28 * 2 + 2] = 0;
  (&local_280)[uVar28 * 2] = (code *)0x0;
  memcpy(alStack_4b8 + 2,&local_288,0x220);
  memcpy(alStack_6c8,&local_288,0x220);
  lVar30 = FUN_008cca50();
  lVar16 = uVar28 - 1;
  pcVar27 = (char *)alStack_298[lVar16 * 2 + 2];
  sVar15 = strlen(pcVar27);
  sVar1 = (ulong)(*(byte *)(lVar30 + 0x1c8) >> 1);
  if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar30 + 0x1d0);
  }
  if ((sVar15 == sVar1) &&
     (iVar9 = std::string::compare(lVar30 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    alStack_4b8[lVar16 * 2 + 2] = 0;
    alStack_4b8[lVar16 * 2 + 3] = 0;
  }
  alStack_6c8[lVar16 * 2] = alStack_298[lVar16 * 2 + 2];
  alStack_6c8[lVar16 * 2 + 1] = (long)&LAB_0222f4d0;
  FUN_00151fe0(param_2,0,2);
  local_6d0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_6d8 = param_2;
  if ((*puVar4 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_043845f8);
    puVar4 = PTR_DAT_04384600;
    if (iVar9 != 0) {
      FUN_02097eb0(PTR_DAT_04384600);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043845f8);
    }
  }
  uVar10 = local_6d0[0];
  uVar28 = *(ulong *)(PTR_DAT_04384600 + 8);
  puVar4 = *(undefined **)(PTR_DAT_04384600 + 0x10);
  if ((*PTR_DAT_04384600 & 1) == 0) {
    puVar4 = PTR_DAT_04384600 + 1;
    uVar28 = (ulong)((byte)*PTR_DAT_04384600 >> 1);
  }
  FUN_001514f0(param_2,puVar4,uVar28);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0222f520,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar30 = 0;
  do {
    if (lVar30 == 1) {
      plVar29 = alStack_6c8;
      pbVar19 = (byte *)FUN_0222ddcc();
    }
    else if (lVar30 == 0) {
      plVar29 = alStack_4b8 + 2;
      pbVar19 = (byte *)FUN_0222dbec();
    }
    else {
      plVar29 = &local_288;
      pbVar19 = (byte *)FUN_02098608();
    }
    pbVar13 = *(byte **)(pbVar19 + 0x10);
    if ((*pbVar19 & 1) == 0) {
      pbVar13 = pbVar19 + 1;
    }
    FUN_00154450(param_2,pbVar13);
    local_6e0 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    local_6e8 = param_2;
    FUN_008fe304(local_6f0,param_2,&local_720,&local_6d8,local_6e0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,plVar29,2);
    uVar10 = local_6e0;
    if (*(long *)(lVar14 + 0x98) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
    }
    uVar10 = local_6e0;
    if (*(long *)(lVar14 + 0xa0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_6e0;
    uVar20 = *(undefined8 *)(lVar14 + 0x78);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_6e0;
    uVar20 = *(undefined8 *)(lVar14 + 0x80);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_720 = (undefined1 *)CONCAT44(local_720._4_4_,1);
      FUN_008fe304(local_6f0,param_2,&local_720,&local_6e8,local_6e0);
    }
    else {
      local_6f0[0] = 1;
      local_720 = &LAB_0222f570;
      uStack_718 = 0;
      local_710 = lVar14;
      lStack_708 = lVar24;
      FUN_02230d24(param_2,local_6f0,&local_720,local_6e0);
      local_6f0[0] = 2;
      local_720 = &LAB_0222f574;
      uStack_718 = 0;
      local_710 = lVar14;
      lStack_708 = lVar24;
      FUN_02230d24(param_2,local_6f0,&local_720,local_6e0);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    FUN_008fe304(local_6f0,param_2,&local_720,&local_6d8,uVar10);
    if (*(undefined1 **)(lVar14 + 0x70) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0xa8) == '\0') goto LAB_0222c648;
LAB_0222c8ec:
      local_6f0[0] = 1;
      local_720 = &LAB_0222f570;
      uStack_718 = 0;
      local_710 = lVar14;
      lStack_708 = lVar24;
      FUN_02230d24(param_2,local_6f0,&local_720,uVar10);
      local_6f0[0] = 2;
      local_720 = &LAB_0222f574;
      uStack_718 = 0;
      local_710 = lVar14;
      lStack_708 = lVar24;
      FUN_02230d24(param_2,local_6f0,&local_720,uVar10);
      if (param_2 == 0) goto LAB_0222c94c;
LAB_0222c650:
      uVar12 = local_6e0;
      FUN_00150260(param_2,uVar10);
    }
    else {
      local_6f0[0] = 4;
      uStack_718 = 0;
      local_720 = *(undefined1 **)(lVar14 + 0x70);
      local_710 = lVar14;
      lStack_708 = lVar24;
      FUN_02230d24(param_2,local_6f0,&local_720,uVar10);
      if (*(char *)(lVar14 + 0xa8) != '\0') goto LAB_0222c8ec;
LAB_0222c648:
      if (param_2 != 0) goto LAB_0222c650;
LAB_0222c94c:
      uVar12 = local_6e0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_6e8,0xfffffffe);
    lVar30 = lVar30 + 1;
    if (lVar30 == 3) {
      FUN_0222dfac();
      puVar4 = DAT_043deba8;
      if ((DAT_043deb98 & 1) == 0) {
        puVar4 = &DAT_043deb99;
      }
      FUN_00154450(param_2,puVar4);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_720._0_4_ = 0x1e;
      FUN_008fe304(&local_6e8,param_2,&local_720,&local_6d8,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,&local_288,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
      FUN_008fe304(&local_6e8,param_2,&local_720,&local_6d8,uVar12);
      local_720 = *(undefined1 **)(lVar14 + 0x70);
      if (local_720 != (undefined1 *)0x0) {
        local_6e8 = CONCAT44(local_6e8._4_4_,4);
        uStack_718 = 0;
        local_710 = lVar14;
        lStack_708 = lVar24;
        FUN_02230d24(param_2,&local_6e8,&local_720,uVar12);
      }
      local_6e8._0_4_ = 1;
      local_720 = &LAB_0222f578;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a7d3e0;
      local_710 = lVar14;
      lStack_708 = lVar24;
      FUN_022313d8(param_2,&local_6e8,&local_720,uVar12);
      local_6e8 = CONCAT44(local_6e8._4_4_,2);
      local_720 = &LAB_0222f57c;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a7d3e0;
      local_710 = lVar14;
      lStack_708 = lVar24;
      FUN_022313d8(param_2,&local_6e8,&local_720,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_6d0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


