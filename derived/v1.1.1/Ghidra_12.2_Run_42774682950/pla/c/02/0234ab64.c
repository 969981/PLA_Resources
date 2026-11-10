/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0234ab64; name: FUN_0234ab64
 */


undefined8 FUN_0234ab64(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
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
  undefined1 *local_8a0;
  undefined8 uStack_898;
  long local_890;
  long lStack_888;
  undefined8 local_880;
  undefined *puStack_878;
  long local_870;
  undefined4 local_868;
  long local_860;
  undefined4 local_858 [2];
  string asStack_850 [656];
  undefined8 auStack_5c0 [2];
  string local_5b0;
  undefined1 auStack_5af [7];
  size_t local_5a8;
  undefined1 *local_5a0;
  char *apcStack_320 [2];
  char *local_310 [2];
  long local_300;
  undefined1 auStack_70 [16];
  
  if (((DAT_043e1fd0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e1fd0), iVar9 != 0)) {
    local_300 = 0;
    local_310[1] = (undefined1 *)0x0;
    local_310[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385bf8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04385bf8);
      puVar3 = PTR_DAT_04385c00;
      if (iVar9 != 0) {
        FUN_021fe180(PTR_DAT_04385c00);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385bf8);
      }
    }
    pcVar26 = (char *)FUN_0234de7c(local_310,PTR_DAT_04385c00);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e1fb8,psVar17);
    lVar13 = local_300;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_310[0] & 1) != 0) && (local_300 != 0)) {
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
          goto LAB_0234c36c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0234c36c:
    FUN_00100250(PTR__string_04379718,&DAT_043e1fb8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1fd0);
  }
  std::string::string(&local_5b0,(string *)&DAT_043e1fb8);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e1fb0);
  sVar2 = (ulong)((byte)local_5b0 >> 1);
  if (((byte)local_5b0 & 1) != 0) {
    sVar2 = local_5a8;
  }
  std::string::append((ulong)&local_5b0,(char)iVar9);
  if (((byte)local_5b0 & 1) == 0) {
    puVar27 = auStack_5af;
    local_5a8 = (size_t)((byte)local_5b0 >> 1);
  }
  else {
    puVar27 = local_5a0;
  }
  snprintf(puVar27 + (sVar2 - 1),local_5a8,"%d",(ulong)DAT_043e1fb0);
  DAT_043e1fb0 = DAT_043e1fb0 + 1;
  if (((DAT_043e1ff0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e1ff0), iVar9 != 0)) {
    local_300 = 0;
    local_310[1] = (undefined1 *)0x0;
    local_310[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04385bf8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04385bf8);
      puVar3 = PTR_DAT_04385c00;
      if (iVar9 != 0) {
        FUN_021fe180(PTR_DAT_04385c00);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04385bf8);
      }
    }
    pcVar26 = (char *)FUN_0234de7c(local_310,PTR_DAT_04385c00);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e1fd8,psVar17);
    lVar13 = local_300;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_310[0] & 1) != 0) && (local_300 != 0)) {
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
          goto LAB_0234c4c0;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0234c4c0:
    FUN_00100250(PTR__string_04379718,&DAT_043e1fd8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1ff0);
  }
  puVar3 = DAT_043e1fe8;
  if ((DAT_043e1fd8 & 1) == 0) {
    puVar3 = &DAT_043e1fd9;
  }
  if (((byte)local_5b0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_5b0 | 1);
  }
  else {
    puVar27 = local_5a0;
  }
  if (((DAT_043e2000 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2000), iVar9 != 0)) {
    DAT_043e1ff8 = 0x170;
    __cxa_guard_release(&DAT_043e2000);
  }
  if (((DAT_043e2010 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2010), iVar9 != 0)) {
    DAT_043e2008 = 0x177;
    __cxa_guard_release(&DAT_043e2010);
  }
  uVar22 = DAT_043e1ff8;
  lVar13 = FUN_00153520(param_2,DAT_043e1ff8);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x170)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e2008;
    lVar13 = FUN_00153520(param_2,DAT_043e2008);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x170)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0234ec90();
      puVar4 = DAT_043e2028;
      if ((DAT_043e2018 & 1) == 0) {
        puVar4 = &DAT_043e2019;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
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
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar5;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425bc90;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x110);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_0234ec50,0);
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
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_5b0 & 1) != 0) && (local_5a0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_5a0,0,8);
        goto LAB_0234aed0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_5a0,0,8);
  }
LAB_0234aed0:
  memset(local_310,0,0x2a0);
  pcVar26 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  puVar27 = &LAB_0234e1f4;
  if (uVar11 != 0) {
    puVar27 = &LAB_0234e1bc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
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
            *(undefined1 **)(lVar13 + 0x120) = puVar27;
            goto LAB_0234aff0;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar27;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_0234aff0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_310[0] = pcVar26;
  local_310[1] = puVar27;
LAB_0234aff0:
  pcVar26 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0234e280;
  if (uVar11 != 0) {
    pcVar1 = (code *)&LAB_0234e22c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x120) = pcVar1;
        goto LAB_0234b0d0;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_0234b0d0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_310[uVar24 * 2] = pcVar26;
  local_310[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0234b0d0:
  puVar3 = PTR_DAT_0437dcc8;
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *puVar3 = 1;
  pcVar26 = *(char **)(lVar13 + 0x78);
  *(undefined1 **)(lVar13 + 0x150) = &LAB_0234f0c0;
  *(undefined1 **)(lVar13 + 0x158) = &LAB_0234f17c;
  *(undefined1 **)(lVar13 + 0x140) = &LAB_0234f1d0;
  *(undefined1 **)(lVar13 + 0x148) = &LAB_0234f1e0;
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0234e410;
  if (uVar11 != 0) {
    pcVar1 = FUN_0234e314;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar1;
            goto LAB_0234b3a4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_0234b3a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_310[uVar24 * 2] = pcVar26;
  local_310[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0234b3a4:
  pcVar26 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0234e56c;
  if (uVar11 != 0) {
    pcVar1 = FUN_0234e4a0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar1;
            goto LAB_0234b4e4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_0234b4e4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_310[uVar24 * 2] = pcVar26;
  local_310[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0234b4e4:
  pcVar26 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0234e680;
  if (uVar11 != 0) {
    pcVar1 = FUN_0234e638;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar1;
            goto LAB_0234b624;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_0234b624;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_310[uVar24 * 2] = pcVar26;
  local_310[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0234b624:
  pcVar26 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0234e710;
  if (uVar11 != 0) {
    pcVar1 = FUN_0234e6c8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar1;
            goto LAB_0234b764;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_0234b764;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_310[uVar24 * 2] = pcVar26;
  local_310[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0234b764:
  pcVar26 = *(char **)(lVar13 + 0xd8);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0234e7a0;
  if (uVar11 != 0) {
    pcVar1 = FUN_0234e758;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar1;
            goto LAB_0234b8a4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_0234b8a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_310[uVar24 * 2] = pcVar26;
  local_310[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0234b8a4:
  pcVar26 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0234e830;
  if (uVar11 != 0) {
    pcVar1 = FUN_0234e7e8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar1;
            goto LAB_0234b9e4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_0234b9e4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_310[uVar24 * 2] = pcVar26;
  local_310[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0234b9e4:
  pcVar26 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar26,sVar2);
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
  pcVar1 = FUN_0234e9a8;
  if (uVar11 != 0) {
    pcVar1 = FUN_0234e878;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x120) = pcVar1;
            uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
            goto joined_r0x0234bad8;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
      goto joined_r0x0234bad8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  local_310[uVar24 * 2] = pcVar26;
  local_310[uVar24 * 2 + 1] = (char *)pcVar1;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0234bad8:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    local_310[uVar24 * 2] = pcVar26;
    local_310[uVar24 * 2 + 1] = PTR_LAB_04385bd0;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    local_310[uVar22 * 2] = pcVar26;
    local_310[uVar22 * 2 + 1] = PTR_LAB_04385bd8;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x120) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(char **)(lVar13 + 0x120);
    uVar22 = (ulong)((int)uVar24 + 1);
    local_310[uVar24 * 2] = pcVar26;
    local_310[uVar24 * 2 + 1] = pcVar20;
  }
  local_310[uVar22 * 2] = (char *)0x0;
  local_310[uVar22 * 2 + 1] = (char *)0x0;
  memcpy(&local_5b0,local_310,0x2a0);
  memcpy(asStack_850,local_310,0x2a0);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = local_310[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar2 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_5c0[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5af + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_850 + lVar15 * 0x10) = local_310[lVar15 * 2];
  *(undefined1 **)(asStack_850 + (lVar15 * 2 + 1) * 8) = &LAB_0234ea40;
  FUN_00151fe0(param_2,0,2);
  local_858[0] = FUN_0014feb0(param_2,0xffffffff);
  local_860 = param_2;
  if ((*PTR_DAT_04385bf8 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04385bf8);
    puVar3 = PTR_DAT_04385c00;
    if (iVar9 != 0) {
      FUN_021fe180(PTR_DAT_04385c00);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04385bf8);
    }
  }
  uVar10 = local_858[0];
  uVar22 = *(ulong *)(PTR_DAT_04385c00 + 8);
  puVar3 = *(undefined **)(PTR_DAT_04385c00 + 0x10);
  if ((*PTR_DAT_04385c00 & 1) == 0) {
    puVar3 = PTR_DAT_04385c00 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_04385c00 >> 1);
  }
  FUN_001514f0(param_2,puVar3,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0234ea90,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_850;
      pbVar16 = (byte *)FUN_021fe954();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_5b0;
      pbVar16 = (byte *)FUN_021fcb6c();
    }
    else {
      psVar17 = (string *)local_310;
      pbVar16 = (byte *)FUN_021fdf24();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_868 = FUN_0014feb0(param_2,0xffffffff);
    local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
    local_870 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_8a0,&local_860,local_868);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_868;
    if (*(long *)(lVar13 + 0x150) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
    }
    uVar10 = local_868;
    if (*(long *)(lVar13 + 0x158) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_868;
    uVar19 = *(undefined8 *)(lVar13 + 0x130);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_868;
    uVar19 = *(undefined8 *)(lVar13 + 0x138);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_8a0,&local_870,local_868);
    }
    else {
      local_8a0 = &LAB_0234eb80;
      uStack_898 = 0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_0234eae0(param_2,1,&local_8a0,local_868);
      local_8a0 = &LAB_0234eb84;
      uStack_898 = 0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_0234eae0(param_2,2,&local_8a0,local_868);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_8a0,&local_860,uVar10);
    if (*(undefined1 **)(lVar13 + 0x128) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x160) == '\0') goto LAB_0234bf3c;
LAB_0234c174:
      local_8a0 = &LAB_0234eb80;
      uStack_898 = 0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_0234eae0(param_2,1,&local_8a0,uVar10);
      local_8a0 = &LAB_0234eb84;
      uStack_898 = 0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_0234eae0(param_2,2,&local_8a0,uVar10);
      if (param_2 == 0) goto LAB_0234c1c4;
LAB_0234bf44:
      uVar12 = local_868;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_898 = 0;
      local_8a0 = *(undefined1 **)(lVar13 + 0x128);
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_0234eae0(param_2,4,&local_8a0,uVar10);
      if (*(char *)(lVar13 + 0x160) != '\0') goto LAB_0234c174;
LAB_0234bf3c:
      if (param_2 != 0) goto LAB_0234bf44;
LAB_0234c1c4:
      uVar12 = local_868;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_870,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_0234d644();
      puVar3 = DAT_043e1fa0;
      if ((DAT_043e1f90 & 1) == 0) {
        puVar3 = &DAT_043e1f91;
      }
      FUN_00154450(param_2,puVar3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0._0_4_ = 0x1e;
      FUN_008fe304(&local_870,param_2,&local_8a0,&local_860,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,local_310,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
      FUN_008fe304(&local_870,param_2,&local_8a0,&local_860,uVar12);
      local_8a0 = *(undefined1 **)(lVar13 + 0x128);
      if (local_8a0 != (undefined1 *)0x0) {
        uStack_898 = 0;
        local_890 = lVar13;
        lStack_888 = lVar23;
        FUN_0234eae0(param_2,4,&local_8a0,uVar12);
      }
      local_8a0 = &LAB_0234ec48;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d4c0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_0234eb90(param_2,1,&local_8a0,uVar12);
      local_8a0 = &LAB_0234ec4c;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d4c0;
      local_890 = lVar13;
      lStack_888 = lVar23;
      FUN_0234eb90(param_2,2,&local_8a0,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_858[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


