/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0251be04; name: FUN_0251be04
 */


undefined8 FUN_0251be04(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  size_t sVar15;
  byte *pbVar16;
  string *psVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_990;
  undefined8 uStack_988;
  long local_980;
  long lStack_978;
  undefined8 local_970;
  undefined *puStack_968;
  long local_960;
  undefined4 local_958;
  long local_950;
  undefined4 local_948 [2];
  string asStack_940 [736];
  undefined8 auStack_660 [2];
  string local_650;
  undefined1 auStack_64f [7];
  size_t local_648;
  undefined1 *local_640;
  char *apcStack_370 [2];
  char *local_360;
  code *local_358;
  long local_350;
  undefined1 auStack_70 [16];
  
  puVar4 = PTR_DAT_043846a0;
  if (((DAT_043e8c38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e8c38), iVar8 != 0)) {
    local_350 = 0;
    local_358 = (code *)0x0;
    local_360 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_043846a0);
      puVar1 = PTR_DAT_043846a8;
      if (iVar8 != 0) {
        FUN_020a04a0(PTR_DAT_043846a8);
        FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043846a0);
      }
    }
    pcVar26 = (char *)FUN_0251f7dc(&local_360,PTR_DAT_043846a8);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e8c20,psVar17);
    lVar12 = local_350;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_360 & 1) != 0) && (local_350 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_0251dc5c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_0251dc5c:
    FUN_00100250(PTR__string_04379718,&DAT_043e8c20,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8c38);
  }
  std::string::string(&local_650,(string *)&DAT_043e8c20);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e8c18);
  if (((byte)local_650 & 1) == 0) {
    uVar22 = (ulong)((byte)local_650 >> 1);
  }
  else {
    uVar22 = local_648;
  }
  std::string::append((ulong)&local_650,(char)iVar8);
  if (((byte)local_650 & 1) == 0) {
    puVar27 = auStack_64f;
    local_648 = (size_t)((byte)local_650 >> 1);
  }
  else {
    puVar27 = local_640;
  }
  snprintf(puVar27 + (uVar22 - 1),local_648,"%d",(ulong)DAT_043e8c18);
  DAT_043e8c18 = DAT_043e8c18 + 1;
  if (((DAT_043e8c58 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e8c58), iVar8 != 0)) {
    local_350 = 0;
    local_358 = (code *)0x0;
    local_360 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_043846a0);
      puVar1 = PTR_DAT_043846a8;
      if (iVar8 != 0) {
        FUN_020a04a0(PTR_DAT_043846a8);
        FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043846a0);
      }
    }
    pcVar26 = (char *)FUN_0251f7dc(&local_360,PTR_DAT_043846a8);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e8c40,psVar17);
    lVar12 = local_350;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_360 & 1) != 0) && (local_350 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_0251dda8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_0251dda8:
    FUN_00100250(PTR__string_04379718,&DAT_043e8c40,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8c58);
  }
  puVar1 = DAT_043e8c50;
  if ((DAT_043e8c40 & 1) == 0) {
    puVar1 = &DAT_043e8c41;
  }
  if (((byte)local_650 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_650 | 1);
  }
  else {
    puVar27 = local_640;
  }
  if (((DAT_043e8c68 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e8c68), iVar8 != 0)) {
    DAT_043e8c60 = 0x1e8;
    __cxa_guard_release(&DAT_043e8c68);
  }
  if (((DAT_043e8c78 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e8c78), iVar8 != 0)) {
    DAT_043e8c70 = 0x1ef;
    __cxa_guard_release(&DAT_043e8c78);
  }
  uVar22 = DAT_043e8c60;
  lVar12 = FUN_00153520(param_2,DAT_043e8c60);
  if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x1e8)) ||
     (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e8c70;
    lVar12 = FUN_00153520(param_2,DAT_043e8c70);
    if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x1e8)) ||
       (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02522780();
      puVar2 = DAT_043e8c90;
      if ((DAT_043e8c80 & 1) == 0) {
        puVar2 = &DAT_043e8c81;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar12;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar12 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar5 = 0;
      if (uVar24 != 0) {
        uVar5 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar5 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425c478;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x188);
  iVar8 = FUN_00154450(param_2,puVar27);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_02522740,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar9 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar9);
  }
  FUN_001522a0(param_2,puVar1);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar1);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_650 & 1) != 0) && (local_640 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar6;
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
        FUN_02bcc824(plVar25,local_640,0,8);
        goto LAB_0251c170;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_640,0,8);
  }
LAB_0251c170:
  memset(&local_360,0,0x2f0);
  pcVar26 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar23 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0251fbdc;
  if (uVar10 != 0) {
    pcVar20 = FUN_0251fb1c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 0x13) {
        uVar24 = 0;
        *(code **)(lVar12 + 0x198) = pcVar20;
        goto LAB_0251c26c;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251c26c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_360 = pcVar26;
  local_358 = pcVar20;
LAB_0251c26c:
  puVar1 = PTR_DAT_0437dcc8;
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *puVar1 = 1;
  pcVar26 = *(char **)(lVar12 + 0x70);
  *(undefined1 **)(lVar12 + 0x1c8) = &LAB_02522bd4;
  *(undefined1 **)(lVar12 + 0x1d0) = &LAB_02522c90;
  *(undefined1 **)(lVar12 + 0x1b8) = &LAB_02522ce0;
  *(undefined1 **)(lVar12 + 0x1c0) = &LAB_02522cf0;
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0251fee4;
  if (uVar10 != 0) {
    pcVar20 = FUN_0251fcdc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251c510;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251c510;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251c510:
  pcVar26 = *(char **)(lVar12 + 0x88);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02520120;
  if (uVar10 != 0) {
    pcVar20 = FUN_0251ffd0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251c650;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251c650;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251c650:
  pcVar26 = *(char **)(lVar12 + 0xa0);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0252030c;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_0252020c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251c790;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251c790;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251c790:
  pcVar26 = *(char **)(lVar12 + 0xb8);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02520464;
  if (uVar10 != 0) {
    pcVar20 = FUN_0252041c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251c8d0;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251c8d0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251c8d0:
  pcVar26 = *(char **)(lVar12 + 0xd0);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_025204f4;
  if (uVar10 != 0) {
    pcVar20 = FUN_025204ac;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251ca10;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251ca10;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251ca10:
  pcVar26 = *(char **)(lVar12 + 0xe8);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02520584;
  if (uVar10 != 0) {
    pcVar20 = FUN_0252053c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251cb50;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251cb50;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251cb50:
  pcVar26 = *(char **)(lVar12 + 0x100);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02520880;
  if (uVar10 != 0) {
    pcVar20 = FUN_025205cc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251cc90;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251cc90;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251cc90:
  pcVar26 = *(char **)(lVar12 + 0x118);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02521064;
  if (uVar10 != 0) {
    pcVar20 = FUN_0252096c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251cdd0;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251cdd0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251cdd0:
  pcVar26 = *(char **)(lVar12 + 0x130);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02521314;
  if (uVar10 != 0) {
    pcVar20 = FUN_0252115c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251cf10;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251cf10;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251cf10:
  pcVar26 = *(char **)(lVar12 + 0x148);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02521448;
  if (uVar10 != 0) {
    pcVar20 = FUN_02521400;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251d050;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251d050;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251d050:
  pcVar26 = *(char **)(lVar12 + 0x160);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02521644;
  if (uVar10 != 0) {
    pcVar20 = FUN_02521490;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251d190;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251d190;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251d190:
  pcVar26 = *(char **)(lVar12 + 0x178);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02521858;
  if (uVar10 != 0) {
    pcVar20 = FUN_02521730;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            goto LAB_0251d2d0;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      goto LAB_0251d2d0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0251d2d0:
  pcVar26 = *(char **)(lVar12 + 400);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_025220d8;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_02521980;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x198) = pcVar20;
            uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1e0);
            goto joined_r0x0251dab0;
          }
          *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x1e0) = *(ulong *)(lVar12 + 0x1e0) | 1L << (uVar22 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1e0);
      goto joined_r0x0251dab0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_360)[uVar24 * 2] = pcVar26;
  (&local_358)[uVar24 * 2] = pcVar20;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1e0);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0251dab0:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1e0);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1e0);
  }
  uVar22 = uVar24;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_360)[uVar24 * 2] = pcVar26;
    (&local_358)[uVar24 * 2] = (code *)PTR_LAB_04384678;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x1e0);
  }
  uVar24 = uVar22;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_360)[uVar22 * 2] = pcVar26;
    (&local_358)[uVar22 * 2] = (code *)PTR_LAB_04384680;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar12 + 0x198) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar12 + 0x198);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_360)[uVar24 * 2] = pcVar26;
    (&local_358)[uVar24 * 2] = pcVar20;
  }
  (&local_360)[uVar22 * 2] = (char *)0x0;
  (&local_358)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_650,&local_360,0x2f0);
  memcpy(asStack_940,&local_360,0x2f0);
  lVar28 = FUN_008cca50();
  lVar14 = uVar22 - 1;
  pcVar26 = (&local_360)[lVar14 * 2];
  sVar15 = strlen(pcVar26);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) == 0) {
    sVar13 = (size_t)(*(byte *)(lVar28 + 0x1c8) >> 1);
  }
  else {
    sVar13 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar15 == sVar13) &&
     (iVar8 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar8 == 0)) {
    auStack_660[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_64f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_940 + lVar14 * 0x10) = (&local_360)[lVar14 * 2];
  *(undefined1 **)(asStack_940 + (lVar14 * 2 + 1) * 8) = &LAB_02522280;
  FUN_00151fe0(param_2,0,2);
  local_948[0] = FUN_0014feb0(param_2,0xffffffff);
  local_950 = param_2;
  if ((*puVar4 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_043846a0);
    puVar4 = PTR_DAT_043846a8;
    if (iVar8 != 0) {
      FUN_020a04a0(PTR_DAT_043846a8);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043846a0);
    }
  }
  uVar9 = local_948[0];
  uVar22 = *(ulong *)(PTR_DAT_043846a8 + 8);
  puVar4 = *(undefined **)(PTR_DAT_043846a8 + 0x10);
  if ((*PTR_DAT_043846a8 & 1) == 0) {
    puVar4 = PTR_DAT_043846a8 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_043846a8 >> 1);
  }
  FUN_001514f0(param_2,puVar4,uVar22);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_02521f60,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_940;
      pbVar16 = (byte *)FUN_020a0884();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_650;
      pbVar16 = (byte *)FUN_0209f4b8();
    }
    else {
      psVar17 = (string *)&local_360;
      pbVar16 = (byte *)FUN_020a0264();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_958 = FUN_0014feb0(param_2,0xffffffff);
    local_990 = (undefined1 *)CONCAT44(local_990._4_4_,0x1e);
    local_960 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_990,&local_950,local_958);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar17,2);
    uVar9 = local_958;
    if (*(long *)(lVar12 + 0x1c8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
    }
    uVar9 = local_958;
    if (*(long *)(lVar12 + 0x1d0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_958;
    uVar19 = *(undefined8 *)(lVar12 + 0x1a8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_958;
    uVar19 = *(undefined8 *)(lVar12 + 0x1b0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_990 = (undefined1 *)CONCAT44(local_990._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_990,&local_960,local_958);
    }
    else {
      local_990 = &LAB_02522370;
      uStack_988 = 0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_025222d0(param_2,1,&local_990,local_958);
      local_990 = &LAB_0252267c;
      uStack_988 = 0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_025222d0(param_2,2,&local_990,local_958);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_990 = (undefined1 *)CONCAT44(local_990._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_990,&local_950,uVar9);
    if (*(undefined1 **)(lVar12 + 0x1a0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x1d8) != '\0') goto LAB_0251da28;
LAB_0251d7e0:
      if (param_2 == 0) goto LAB_0251da7c;
LAB_0251d7e8:
      uVar11 = local_958;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_988 = 0;
      local_990 = *(undefined1 **)(lVar12 + 0x1a0);
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_025222d0(param_2,4,&local_990,uVar9);
      if (*(char *)(lVar12 + 0x1d8) == '\0') goto LAB_0251d7e0;
LAB_0251da28:
      local_990 = &LAB_02522370;
      uStack_988 = 0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_025222d0(param_2,1,&local_990,uVar9);
      local_990 = &LAB_0252267c;
      uStack_988 = 0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_025222d0(param_2,2,&local_990,uVar9);
      if (param_2 != 0) goto LAB_0251d7e8;
LAB_0251da7c:
      uVar11 = local_958;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_960,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_0251efa4();
      puVar4 = DAT_043e8b78;
      if ((DAT_043e8b68 & 1) == 0) {
        puVar4 = &DAT_043e8b69;
      }
      FUN_00154450(param_2,puVar4);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_990._0_4_ = 0x1e;
      FUN_008fe304(&local_960,param_2,&local_990,&local_950,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_360,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_990 = (undefined1 *)CONCAT44(local_990._4_4_,0x1e);
      FUN_008fe304(&local_960,param_2,&local_990,&local_950,uVar11);
      local_990 = *(undefined1 **)(lVar12 + 0x1a0);
      if (local_990 != (undefined1 *)0x0) {
        uStack_988 = 0;
        local_980 = lVar12;
        lStack_978 = lVar23;
        FUN_025222d0(param_2,4,&local_990,uVar11);
      }
      local_990 = &LAB_02522738;
      uStack_988 = 0;
      local_970 = 0;
      puStack_968 = &DAT_03a7d5e0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_02522680(param_2,1,&local_990,uVar11);
      local_990 = &LAB_0252273c;
      uStack_988 = 0;
      local_970 = 0;
      puStack_968 = &DAT_03a7d5e0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_02522680(param_2,2,&local_990,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_948[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


