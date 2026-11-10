/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021a0584; name: FUN_021a0584
 */


undefined8 FUN_021a0584(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  byte *pbVar17;
  string *psVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  undefined1 *puVar29;
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
  string asStack_6c8 [528];
  undefined8 auStack_4b8 [2];
  string local_4a8;
  undefined1 auStack_4a7 [7];
  size_t local_4a0;
  undefined1 *local_498;
  char *apcStack_298 [2];
  char *local_288;
  code *local_280;
  long local_278;
  
  puVar5 = PTR_DAT_04385520;
  if (((DAT_043dc878 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dc878), iVar10 != 0)) {
    local_278 = 0;
    local_280 = (code *)0x0;
    local_288 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04385520);
      puVar2 = PTR_DAT_04385528;
      if (iVar10 != 0) {
        FUN_0219a0e0(PTR_DAT_04385528);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385520);
      }
    }
    pcVar28 = (char *)FUN_021a2e24(&local_288,PTR_DAT_04385528);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043dc860,psVar18);
    lVar14 = local_278;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_288 & 1) != 0) && (local_278 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar8;
      }
      uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar14,0,8);
          goto LAB_021a13e4;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar14,0,8);
    }
LAB_021a13e4:
    FUN_00100250(PTR__string_04379718,&DAT_043dc860,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dc878);
  }
  std::string::string(&local_4a8,(string *)&DAT_043dc860);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dc858);
  sVar1 = (ulong)((byte)local_4a8 >> 1);
  if (((byte)local_4a8 & 1) != 0) {
    sVar1 = local_4a0;
  }
  std::string::append((ulong)&local_4a8,(char)iVar10);
  if (((byte)local_4a8 & 1) == 0) {
    puVar29 = auStack_4a7;
    local_4a0 = (size_t)((byte)local_4a8 >> 1);
  }
  else {
    puVar29 = local_498;
  }
  snprintf(puVar29 + (sVar1 - 1),local_4a0,"%d",(ulong)DAT_043dc858);
  DAT_043dc858 = DAT_043dc858 + 1;
  if (((DAT_043dc898 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dc898), iVar10 != 0)) {
    local_278 = 0;
    local_280 = (code *)0x0;
    local_288 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04385520);
      puVar2 = PTR_DAT_04385528;
      if (iVar10 != 0) {
        FUN_0219a0e0(PTR_DAT_04385528);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385520);
      }
    }
    pcVar28 = (char *)FUN_021a2e24(&local_288,PTR_DAT_04385528);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043dc880,psVar18);
    lVar14 = local_278;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_288 & 1) != 0) && (local_278 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar8;
      }
      uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar14,0,8);
          goto LAB_021a1530;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar14,0,8);
    }
LAB_021a1530:
    FUN_00100250(PTR__string_04379718,&DAT_043dc880,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dc898);
  }
  puVar2 = DAT_043dc890;
  if ((DAT_043dc880 & 1) == 0) {
    puVar2 = &DAT_043dc881;
  }
  if (((byte)local_4a8 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_4a8 | 1);
  }
  else {
    puVar29 = local_498;
  }
  if (((DAT_043dc8a8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dc8a8), iVar10 != 0)) {
    DAT_043dc8a0 = 0xb8;
    __cxa_guard_release(&DAT_043dc8a8);
  }
  if (((DAT_043dc8b8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043dc8b8), iVar10 != 0)) {
    DAT_043dc8b0 = 0xbf;
    __cxa_guard_release(&DAT_043dc8b8);
  }
  uVar23 = DAT_043dc8a0;
  lVar14 = FUN_00153520(param_2,DAT_043dc8a0);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0xb8)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043dc8b0;
    lVar14 = FUN_00153520(param_2,DAT_043dc8b0);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0xb8)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_021a3350();
      puVar3 = DAT_043dc8d0;
      if ((DAT_043dc8c0 & 1) == 0) {
        puVar3 = &DAT_043dc8c1;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar14;
  lVar25 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar25;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar19[2];
    uVar23 = *(ulong *)(lVar14 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar23 = uVar26 - 1 & uVar23;
    }
    else if (uVar26 <= uVar23) {
      uVar7 = 0;
      if (uVar26 != 0) {
        uVar7 = uVar23 / uVar26;
      }
      uVar23 = uVar23 - uVar7 * uVar26;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar24 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar24;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_0425b6a0;
  *(undefined1 *)(puVar19 + 0xb) = uVar6;
  uVar24 = *(undefined8 *)(param_1 + 0x70);
  uVar20 = *(undefined8 *)(param_1 + 0x68);
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar19[0xd] = uVar20;
  puVar19[0xe] = uVar24;
  uVar20 = *(undefined8 *)(param_1 + 0x78);
  uVar24 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  puVar19[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar19[0x12] = uVar4;
  puVar19[0xf] = uVar20;
  puVar19[0x10] = uVar24;
  uVar20 = *(undefined8 *)(param_1 + 0x98);
  uVar24 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  puVar19[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar19[0x16] = uVar4;
  puVar19[0x13] = uVar20;
  puVar19[0x14] = uVar24;
  iVar10 = FUN_00154450(param_2,puVar29);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_021a3310,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar11 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar11);
  }
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_4a8 & 1) != 0) && (local_498 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar27 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar27 = plVar8;
    }
    uVar23 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar27,local_498,0,8);
        goto LAB_021a090c;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_498,0,8);
  }
LAB_021a090c:
  memset(&local_288,0,0x220);
  puVar2 = PTR_DAT_043816f8;
  *(undefined1 *)(lVar14 + 0x58) = 1;
  *puVar2 = 1;
  pcVar28 = *(char **)(lVar14 + 0x60);
  *(undefined1 **)(lVar14 + 0x98) = &LAB_021a378c;
  *(undefined1 **)(lVar14 + 0xa0) = &LAB_021a3848;
  *(undefined1 **)(lVar14 + 0x88) = &LAB_021a38a0;
  *(undefined1 **)(lVar14 + 0x90) = &LAB_021a38b0;
  sVar15 = strlen(pcVar28);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar25 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar30 = 0;
  uVar23 = 0;
  pcVar21 = FUN_021a31fc;
  if (uVar12 != 0) {
    pcVar21 = FUN_021a319c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar30);
    sVar15 = strlen(pcVar28);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 0x13) {
        uVar26 = 0;
        *(code **)(lVar14 + 0x68) = pcVar21;
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0xb0);
        goto joined_r0x021a1238;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0xb0) = *(ulong *)(lVar14 + 0xb0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xb0) = *(ulong *)(lVar14 + 0xb0) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0xb0);
      goto joined_r0x021a1238;
    }
    uVar23 = uVar23 + 1;
    lVar30 = lVar30 + 0x18;
  } while (uVar23 != 0x20);
  uVar26 = 1;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0xb0);
  local_288 = pcVar28;
  local_280 = pcVar21;
joined_r0x021a1238:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xb0);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xb0);
  }
  uVar23 = uVar26;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x181);
    if ((*(byte *)(lVar30 + 0x180) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 400);
    }
    uVar23 = (ulong)((int)uVar26 + 1);
    (&local_288)[uVar26 * 2] = pcVar28;
    (&local_280)[uVar26 * 2] = (code *)PTR_LAB_043854f8;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xb0);
  }
  uVar26 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x289);
    if ((*(byte *)(lVar30 + 0x288) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x298);
    }
    uVar26 = (ulong)((int)uVar23 + 1);
    (&local_288)[uVar23 * 2] = pcVar28;
    (&local_280)[uVar23 * 2] = (code *)PTR_LAB_04385500;
  }
  uVar23 = uVar26;
  if (*(long *)(lVar14 + 0x68) != 0) {
    lVar30 = FUN_008cca50();
    pcVar28 = (char *)(lVar30 + 0x1c9);
    if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
      pcVar28 = *(char **)(lVar30 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar14 + 0x68);
    uVar23 = (ulong)((int)uVar26 + 1);
    (&local_288)[uVar26 * 2] = pcVar28;
    (&local_280)[uVar26 * 2] = pcVar21;
  }
  (&local_288)[uVar23 * 2] = (char *)0x0;
  (&local_280)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_4a8,&local_288,0x220);
  memcpy(asStack_6c8,&local_288,0x220);
  lVar30 = FUN_008cca50();
  lVar16 = uVar23 - 1;
  pcVar28 = (&local_288)[lVar16 * 2];
  sVar15 = strlen(pcVar28);
  sVar1 = (ulong)(*(byte *)(lVar30 + 0x1c8) >> 1);
  if ((*(byte *)(lVar30 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar30 + 0x1d0);
  }
  if ((sVar15 == sVar1) &&
     (iVar10 = std::string::compare(lVar30 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
     iVar10 == 0)) {
    auStack_4b8[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4a7 + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_6c8 + lVar16 * 0x10) = (&local_288)[lVar16 * 2];
  *(undefined1 **)(asStack_6c8 + (lVar16 * 2 + 1) * 8) = &LAB_021a3260;
  FUN_00151fe0(param_2,0,2);
  local_6d0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_6d8 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04385520);
    puVar5 = PTR_DAT_04385528;
    if (iVar10 != 0) {
      FUN_0219a0e0(PTR_DAT_04385528);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04385520);
    }
  }
  uVar11 = local_6d0[0];
  uVar23 = *(ulong *)(PTR_DAT_04385528 + 8);
  puVar5 = *(undefined **)(PTR_DAT_04385528 + 0x10);
  if ((*PTR_DAT_04385528 & 1) == 0) {
    puVar5 = PTR_DAT_04385528 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_04385528 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_021a32b0,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar30 = 0;
  do {
    if (lVar30 == 1) {
      psVar18 = asStack_6c8;
      pbVar17 = (byte *)FUN_0219a8a8();
    }
    else if (lVar30 == 0) {
      psVar18 = &local_4a8;
      pbVar17 = (byte *)FUN_02198ad0();
    }
    else {
      psVar18 = (string *)&local_288;
      pbVar17 = (byte *)FUN_02199e84();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_6e0 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    local_6e8 = param_2;
    FUN_008fe304(local_6f0,param_2,&local_720,&local_6d8,local_6e0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_6e0;
    if (*(long *)(lVar14 + 0x98) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
    }
    uVar11 = local_6e0;
    if (*(long *)(lVar14 + 0xa0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_6e0;
    uVar20 = *(undefined8 *)(lVar14 + 0x78);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar25);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_6e0;
    uVar20 = *(undefined8 *)(lVar14 + 0x80);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar25);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_720 = (undefined1 *)CONCAT44(local_720._4_4_,1);
      FUN_008fe304(local_6f0,param_2,&local_720,&local_6e8,local_6e0);
    }
    else {
      local_6f0[0] = 1;
      local_720 = &LAB_021a3300;
      uStack_718 = 0;
      local_710 = lVar14;
      lStack_708 = lVar25;
      FUN_021a3e68(param_2,local_6f0,&local_720,local_6e0);
      local_6f0[0] = 2;
      local_720 = &LAB_021a3304;
      uStack_718 = 0;
      local_710 = lVar14;
      lStack_708 = lVar25;
      FUN_021a3e68(param_2,local_6f0,&local_720,local_6e0);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
    FUN_008fe304(local_6f0,param_2,&local_720,&local_6d8,uVar11);
    if (*(undefined1 **)(lVar14 + 0x70) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0xa8) == '\0') goto LAB_021a0e50;
LAB_021a10f4:
      local_6f0[0] = 1;
      local_720 = &LAB_021a3300;
      uStack_718 = 0;
      local_710 = lVar14;
      lStack_708 = lVar25;
      FUN_021a3e68(param_2,local_6f0,&local_720,uVar11);
      local_6f0[0] = 2;
      local_720 = &LAB_021a3304;
      uStack_718 = 0;
      local_710 = lVar14;
      lStack_708 = lVar25;
      FUN_021a3e68(param_2,local_6f0,&local_720,uVar11);
      if (param_2 == 0) goto LAB_021a1154;
LAB_021a0e58:
      uVar13 = local_6e0;
      FUN_00150260(param_2,uVar11);
    }
    else {
      local_6f0[0] = 4;
      uStack_718 = 0;
      local_720 = *(undefined1 **)(lVar14 + 0x70);
      local_710 = lVar14;
      lStack_708 = lVar25;
      FUN_021a3e68(param_2,local_6f0,&local_720,uVar11);
      if (*(char *)(lVar14 + 0xa8) != '\0') goto LAB_021a10f4;
LAB_021a0e50:
      if (param_2 != 0) goto LAB_021a0e58;
LAB_021a1154:
      uVar13 = local_6e0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_6e8,0xfffffffe);
    lVar30 = lVar30 + 1;
    if (lVar30 == 3) {
      FUN_021a25f4();
      puVar5 = DAT_043dc848;
      if ((DAT_043dc838 & 1) == 0) {
        puVar5 = &DAT_043dc839;
      }
      FUN_00154450(param_2,puVar5);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_720._0_4_ = 0x1e;
      FUN_008fe304(&local_6e8,param_2,&local_720,&local_6d8,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,&local_288,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_720 = (undefined1 *)CONCAT44(local_720._4_4_,0x1e);
      FUN_008fe304(&local_6e8,param_2,&local_720,&local_6d8,uVar13);
      local_720 = *(undefined1 **)(lVar14 + 0x70);
      if (local_720 != (undefined1 *)0x0) {
        local_6e8 = CONCAT44(local_6e8._4_4_,4);
        uStack_718 = 0;
        local_710 = lVar14;
        lStack_708 = lVar25;
        FUN_021a3e68(param_2,&local_6e8,&local_720,uVar13);
      }
      local_6e8._0_4_ = 1;
      local_720 = &LAB_021a3308;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a7d390;
      local_710 = lVar14;
      lStack_708 = lVar25;
      FUN_021a451c(param_2,&local_6e8,&local_720,uVar13);
      local_6e8 = CONCAT44(local_6e8._4_4_,2);
      local_720 = &LAB_021a330c;
      uStack_718 = 0;
      local_700 = 0;
      puStack_6f8 = &DAT_03a7d390;
      local_710 = lVar14;
      lStack_708 = lVar25;
      FUN_021a451c(param_2,&local_6e8,&local_720,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_6d0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


