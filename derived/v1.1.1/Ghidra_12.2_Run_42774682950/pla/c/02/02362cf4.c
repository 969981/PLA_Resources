/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02362cf4; name: FUN_02362cf4
 */


undefined8 FUN_02362cf4(long param_1,long param_2)

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
  undefined4 local_960 [2];
  long local_958;
  undefined4 local_950;
  long local_948;
  undefined4 local_940 [2];
  string asStack_938 [736];
  undefined8 auStack_658 [2];
  string local_648;
  undefined1 auStack_647 [7];
  size_t local_640;
  undefined1 *local_638;
  char *apcStack_368 [2];
  char *local_358;
  code *local_350;
  long local_348;
  
  puVar4 = PTR_DAT_04386010;
  if (((DAT_043e2488 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e2488), iVar8 != 0)) {
    local_348 = 0;
    local_350 = (code *)0x0;
    local_358 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04386010);
      puVar1 = PTR_DAT_04386018;
      if (iVar8 != 0) {
        FUN_0221be60(PTR_DAT_04386018);
        FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386010);
      }
    }
    pcVar26 = (char *)FUN_0236683c(&local_358,PTR_DAT_04386018);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e2470,psVar17);
    lVar12 = local_348;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_358 & 1) != 0) && (local_348 != 0)) {
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
          goto LAB_02364c9c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_02364c9c:
    FUN_00100250(PTR__string_04379718,&DAT_043e2470,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2488);
  }
  std::string::string(&local_648,(string *)&DAT_043e2470);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e2468);
  if (((byte)local_648 & 1) == 0) {
    uVar22 = (ulong)((byte)local_648 >> 1);
  }
  else {
    uVar22 = local_640;
  }
  std::string::append((ulong)&local_648,(char)iVar8);
  if (((byte)local_648 & 1) == 0) {
    puVar27 = auStack_647;
    local_640 = (size_t)((byte)local_648 >> 1);
  }
  else {
    puVar27 = local_638;
  }
  snprintf(puVar27 + (uVar22 - 1),local_640,"%d",(ulong)DAT_043e2468);
  DAT_043e2468 = DAT_043e2468 + 1;
  if (((DAT_043e24a8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e24a8), iVar8 != 0)) {
    local_348 = 0;
    local_350 = (code *)0x0;
    local_358 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04386010);
      puVar1 = PTR_DAT_04386018;
      if (iVar8 != 0) {
        FUN_0221be60(PTR_DAT_04386018);
        FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386010);
      }
    }
    pcVar26 = (char *)FUN_0236683c(&local_358,PTR_DAT_04386018);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e2490,psVar17);
    lVar12 = local_348;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_358 & 1) != 0) && (local_348 != 0)) {
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
          goto LAB_02364de8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_02364de8:
    FUN_00100250(PTR__string_04379718,&DAT_043e2490,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e24a8);
  }
  puVar1 = DAT_043e24a0;
  if ((DAT_043e2490 & 1) == 0) {
    puVar1 = &DAT_043e2491;
  }
  if (((byte)local_648 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_648 | 1);
  }
  else {
    puVar27 = local_638;
  }
  if (((DAT_043e24b8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e24b8), iVar8 != 0)) {
    DAT_043e24b0 = 0x208;
    __cxa_guard_release(&DAT_043e24b8);
  }
  if (((DAT_043e24c8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e24c8), iVar8 != 0)) {
    DAT_043e24c0 = 0x20f;
    __cxa_guard_release(&DAT_043e24c8);
  }
  uVar22 = DAT_043e24b0;
  lVar12 = FUN_00153520(param_2,DAT_043e24b0);
  if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x208)) ||
     (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e24c0;
    lVar12 = FUN_00153520(param_2,DAT_043e24c0);
    if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x208)) ||
       (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_023688b0();
      puVar2 = DAT_043e24e0;
      if ((DAT_043e24d0 & 1) == 0) {
        puVar2 = &DAT_043e24d1;
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
  *puVar18 = &PTR_FUN_0425bd08;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x1a8);
  iVar8 = FUN_00154450(param_2,puVar27);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_02368870,0);
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
  if ((((byte)local_648 & 1) != 0) && (local_638 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_638,0,8);
        goto LAB_02363060;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_638,0,8);
  }
LAB_02363060:
  memset(&local_358,0,0x2f0);
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
  pcVar20 = FUN_02366d10;
  if (uVar10 != 0) {
    pcVar20 = FUN_02366b7c;
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
            uVar24 = 0;
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02363284;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02363284;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_358 = pcVar26;
  local_350 = pcVar20;
LAB_02363284:
  pcVar26 = *(char **)(lVar12 + 0x78);
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
  pcVar20 = FUN_02366e50;
  if (uVar10 != 0) {
    pcVar20 = FUN_02366e08;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_023633c4;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_023633c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023633c4:
  pcVar26 = *(char **)(lVar12 + 0x90);
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
  pcVar20 = FUN_02366fcc;
  if (uVar10 != 0) {
    pcVar20 = FUN_02366e98;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02363504;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02363504;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02363504:
  pcVar26 = *(char **)(lVar12 + 0xa8);
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
  pcVar20 = FUN_02367148;
  if (uVar10 != 0) {
    pcVar20 = FUN_02367100;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02363644;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02363644;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02363644:
  pcVar26 = *(char **)(lVar12 + 0xc0);
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
  pcVar20 = FUN_023671d8;
  if (uVar10 != 0) {
    pcVar20 = FUN_02367190;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02363784;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02363784;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02363784:
  pcVar26 = *(char **)(lVar12 + 0xd8);
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
  pcVar20 = FUN_02367328;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_02367220;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_023638c4;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_023638c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023638c4:
  pcVar26 = *(char **)(lVar12 + 0xf0);
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
  pcVar20 = (code *)&LAB_0236752c;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_02367440;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02363a04;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02363a04;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02363a04:
  pcVar26 = *(char **)(lVar12 + 0x108);
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
  pcVar20 = FUN_0236778c;
  if (uVar10 != 0) {
    pcVar20 = FUN_02367648;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02363b44;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02363b44;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02363b44:
  pcVar26 = *(char **)(lVar12 + 0x120);
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
  pcVar20 = FUN_023679d4;
  if (uVar10 != 0) {
    pcVar20 = FUN_02367884;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02363c84;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02363c84;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02363c84:
  pcVar26 = *(char **)(lVar12 + 0x138);
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
  pcVar20 = FUN_02367b14;
  if (uVar10 != 0) {
    pcVar20 = FUN_02367acc;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02363dc4;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02363dc4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02363dc4:
  pcVar26 = *(char **)(lVar12 + 0x150);
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
  pcVar20 = FUN_02367ba4;
  if (uVar10 != 0) {
    pcVar20 = FUN_02367b5c;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02363f04;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02363f04;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02363f04:
  pcVar26 = *(char **)(lVar12 + 0x168);
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
  pcVar20 = FUN_02367e04;
  if (uVar10 != 0) {
    pcVar20 = FUN_02367bec;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02364044;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02364044;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02364044:
  pcVar26 = *(char **)(lVar12 + 0x180);
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
  pcVar20 = FUN_02367f44;
  if (uVar10 != 0) {
    pcVar20 = FUN_02367efc;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_02364184;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_02364184;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02364184:
  pcVar26 = *(char **)(lVar12 + 0x198);
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
  pcVar20 = FUN_02367fd4;
  if (uVar10 != 0) {
    pcVar20 = FUN_02367f8c;
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
            *(code **)(lVar12 + 0x1b8) = pcVar20;
            goto LAB_023642c4;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      goto LAB_023642c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023642c4:
  pcVar26 = *(char **)(lVar12 + 0x1b0);
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
  pcVar20 = (code *)&LAB_02368780;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_0236801c;
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
        *(code **)(lVar12 + 0x1b8) = pcVar20;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
        goto joined_r0x023643a8;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar22 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
      goto joined_r0x023643a8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_358)[uVar24 * 2] = pcVar26;
  (&local_350)[uVar24 * 2] = pcVar20;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x023643a8:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
  }
  uVar22 = uVar24;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_358)[uVar24 * 2] = pcVar26;
    (&local_350)[uVar24 * 2] = (code *)PTR_LAB_04385fe8;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
  }
  uVar24 = uVar22;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_358)[uVar22 * 2] = pcVar26;
    (&local_350)[uVar22 * 2] = (code *)PTR_LAB_04385ff0;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar12 + 0x1b8) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar12 + 0x1b8);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_358)[uVar24 * 2] = pcVar26;
    (&local_350)[uVar24 * 2] = pcVar20;
  }
  (&local_358)[uVar22 * 2] = (char *)0x0;
  (&local_350)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_648,&local_358,0x2f0);
  memcpy(asStack_938,&local_358,0x2f0);
  lVar28 = FUN_008cca50();
  lVar14 = uVar22 - 1;
  pcVar26 = (&local_358)[lVar14 * 2];
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
    auStack_658[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_647 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_938 + lVar14 * 0x10) = (&local_358)[lVar14 * 2];
  *(undefined1 **)(asStack_938 + (lVar14 * 2 + 1) * 8) = &LAB_023687c0;
  FUN_00151fe0(param_2,0,2);
  local_940[0] = FUN_0014feb0(param_2,0xffffffff);
  local_948 = param_2;
  if ((*puVar4 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04386010);
    puVar4 = PTR_DAT_04386018;
    if (iVar8 != 0) {
      FUN_0221be60(PTR_DAT_04386018);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04386010);
    }
  }
  uVar9 = local_940[0];
  uVar22 = *(ulong *)(PTR_DAT_04386018 + 8);
  puVar4 = *(undefined **)(PTR_DAT_04386018 + 0x10);
  if ((*PTR_DAT_04386018 & 1) == 0) {
    puVar4 = PTR_DAT_04386018 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_04386018 >> 1);
  }
  FUN_001514f0(param_2,puVar4,uVar22);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_02368810,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_938;
      pbVar16 = (byte *)FUN_0221c25c();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_648;
      pbVar16 = (byte *)FUN_0221abec();
    }
    else {
      psVar17 = (string *)&local_358;
      pbVar16 = (byte *)FUN_0221bc24();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_950 = FUN_0014feb0(param_2,0xffffffff);
    local_990 = (undefined1 *)CONCAT44(local_990._4_4_,0x1e);
    local_958 = param_2;
    FUN_008fe304(local_960,param_2,&local_990,&local_948,local_950);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar17,2);
    uVar9 = local_950;
    if (*(long *)(lVar12 + 0x1e8) == 0) {
      lVar14 = *(long *)(lVar12 + 0x1f0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x1f0);
      uVar9 = local_950;
    }
    local_950 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_950;
    uVar19 = *(undefined8 *)(lVar12 + 0x1c8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_950;
    uVar19 = *(undefined8 *)(lVar12 + 0x1d0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_990 = (undefined1 *)CONCAT44(local_990._4_4_,1);
      FUN_008fe304(local_960,param_2,&local_990,&local_958,local_950);
    }
    else {
      local_960[0] = 1;
      local_990 = &LAB_02368860;
      uStack_988 = 0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_02368d68(param_2,local_960,&local_990,local_950);
      local_960[0] = 2;
      local_990 = &LAB_02368864;
      uStack_988 = 0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_02368d68(param_2,local_960,&local_990,local_950);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_990 = (undefined1 *)CONCAT44(local_990._4_4_,0x1e);
    FUN_008fe304(local_960,param_2,&local_990,&local_948,uVar9);
    if (*(undefined1 **)(lVar12 + 0x1c0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x1f8) != '\0') goto LAB_02364a60;
LAB_0236473c:
      if (param_2 == 0) goto LAB_02364ac0;
LAB_02364744:
      uVar11 = local_950;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_988 = 0;
      local_960[0] = 4;
      local_990 = *(undefined1 **)(lVar12 + 0x1c0);
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_02368d68(param_2,local_960,&local_990,uVar9);
      if (*(char *)(lVar12 + 0x1f8) == '\0') goto LAB_0236473c;
LAB_02364a60:
      local_960[0] = 1;
      local_990 = &LAB_02368860;
      uStack_988 = 0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_02368d68(param_2,local_960,&local_990,uVar9);
      local_960[0] = 2;
      local_990 = &LAB_02368864;
      uStack_988 = 0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_02368d68(param_2,local_960,&local_990,uVar9);
      if (param_2 != 0) goto LAB_02364744;
LAB_02364ac0:
      uVar11 = local_950;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_958,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_02365ffc();
      puVar4 = DAT_043e2458;
      if ((DAT_043e2448 & 1) == 0) {
        puVar4 = &DAT_043e2449;
      }
      FUN_00154450(param_2,puVar4);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_990._0_4_ = 0x1e;
      FUN_008fe304(&local_958,param_2,&local_990,&local_948,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_358,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_990 = (undefined1 *)CONCAT44(local_990._4_4_,0x1e);
      FUN_008fe304(&local_958,param_2,&local_990,&local_948,uVar11);
      local_990 = *(undefined1 **)(lVar12 + 0x1c0);
      if (local_990 != (undefined1 *)0x0) {
        uStack_988 = 0;
        local_958 = CONCAT44(local_958._4_4_,4);
        local_980 = lVar12;
        lStack_978 = lVar23;
        FUN_02368d68(param_2,&local_958,&local_990,uVar11);
      }
      local_958._0_4_ = 1;
      local_990 = &LAB_02368868;
      uStack_988 = 0;
      local_970 = 0;
      puStack_968 = &DAT_03a7d4e0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_0236941c(param_2,&local_958,&local_990,uVar11);
      local_958 = CONCAT44(local_958._4_4_,2);
      local_990 = &LAB_0236886c;
      uStack_988 = 0;
      local_970 = 0;
      puStack_968 = &DAT_03a7d4e0;
      local_980 = lVar12;
      lStack_978 = lVar23;
      FUN_0236941c(param_2,&local_958,&local_990,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_940[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


