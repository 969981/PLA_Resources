/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023b5774; name: FUN_023b5774
 */


undefined8 FUN_023b5774(long param_1,long param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  byte *pbVar14;
  string *psVar15;
  undefined *puVar16;
  undefined1 *puVar17;
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
  ulong uVar29;
  undefined8 uVar30;
  undefined1 *local_9c0;
  undefined8 uStack_9b8;
  long local_9b0;
  long lStack_9a8;
  undefined8 local_9a0;
  undefined *puStack_998;
  long local_990;
  undefined4 local_988;
  long local_980;
  undefined4 local_978 [2];
  string asStack_970 [752];
  undefined8 auStack_680 [2];
  string local_670;
  undefined1 auStack_66f [7];
  size_t local_668;
  undefined1 *local_660;
  char *apcStack_380 [2];
  char *local_370;
  code *local_368;
  long local_360;
  undefined1 auStack_70 [16];
  
  puVar16 = PTR_DAT_04386a80;
  if (((DAT_043e32f0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e32f0), iVar7 != 0)) {
    local_360 = 0;
    local_368 = (code *)0x0;
    local_370 = (char *)0x2e6c6f7308;
    if ((*puVar16 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04386a80);
      puVar3 = PTR_DAT_04386aa0;
      if (iVar7 != 0) {
        FUN_023ba4a0(PTR_DAT_04386aa0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386a80);
      }
    }
    pcVar26 = (char *)FUN_023b98b4(&local_370,PTR_DAT_04386aa0);
    psVar15 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e32d8,psVar15);
    lVar11 = local_360;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_370 & 1) != 0) && (local_360 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar5;
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
          FUN_02bcc824(plVar25,lVar11,0,8);
          goto LAB_023b7720;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar11,0,8);
    }
LAB_023b7720:
    FUN_00100250(PTR__string_04379718,&DAT_043e32d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e32f0);
  }
  std::string::string(&local_670,(string *)&DAT_043e32d8);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e32d0);
  sVar1 = (ulong)((byte)local_670 >> 1);
  if (((byte)local_670 & 1) != 0) {
    sVar1 = local_668;
  }
  std::string::append((ulong)&local_670,(char)iVar7);
  if (((byte)local_670 & 1) == 0) {
    puVar27 = auStack_66f;
    local_668 = (size_t)((byte)local_670 >> 1);
  }
  else {
    puVar27 = local_660;
  }
  snprintf(puVar27 + (sVar1 - 1),local_668,"%d",(ulong)DAT_043e32d0);
  DAT_043e32d0 = DAT_043e32d0 + 1;
  if (((DAT_043e3310 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e3310), iVar7 != 0)) {
    local_360 = 0;
    local_368 = (code *)0x0;
    local_370 = (char *)0x2e6c6f7308;
    if ((*puVar16 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04386a80);
      puVar3 = PTR_DAT_04386aa0;
      if (iVar7 != 0) {
        FUN_023ba4a0(PTR_DAT_04386aa0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386a80);
      }
    }
    pcVar26 = (char *)FUN_023b98b4(&local_370,PTR_DAT_04386aa0);
    psVar15 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e32f8,psVar15);
    lVar11 = local_360;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_370 & 1) != 0) && (local_360 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar5;
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
          FUN_02bcc824(plVar25,lVar11,0,8);
          goto LAB_023b786c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar11,0,8);
    }
LAB_023b786c:
    FUN_00100250(PTR__string_04379718,&DAT_043e32f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e3310);
  }
  if ((DAT_043e32f8 & 1) == 0) {
    uVar30 = 0x43e32f9;
    if (((byte)local_670 & 1) == 0) goto LAB_023b5c68;
LAB_023b586c:
    puVar27 = local_660;
  }
  else {
    uVar30 = DAT_043e3308;
    if (((byte)local_670 & 1) != 0) goto LAB_023b586c;
LAB_023b5c68:
    puVar27 = (undefined1 *)((ulong)&local_670 | 1);
  }
  if (((DAT_043e3320 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e3320), iVar7 != 0)) {
    DAT_043e3318 = 0x1f8;
    __cxa_guard_release(&DAT_043e3320);
  }
  if (((DAT_043e3330 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e3330), iVar7 != 0)) {
    DAT_043e3328 = 0x1ff;
    __cxa_guard_release(&DAT_043e3330);
  }
  uVar22 = DAT_043e3318;
  lVar11 = FUN_00153520(param_2,DAT_043e3318);
  if ((uVar22 < ((ulong)(uint)-(int)lVar11 & 7 | 0x1f8)) ||
     (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e3328;
    lVar11 = FUN_00153520(param_2,DAT_043e3328);
    if ((uVar22 < ((ulong)(uint)-(int)lVar11 & 7 | 0x1f8)) ||
       (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_023bc500();
      if ((DAT_043e3338 & 1) == 0) {
        puVar17 = &DAT_043e3339;
      }
      else {
        puVar17 = DAT_043e3348;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar17);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar11;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar11 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar29 = 0;
      if (uVar24 != 0) {
        uVar29 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar29 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar2;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425be20;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x198);
  iVar7 = FUN_00154450(param_2,puVar27);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_023bc4c0,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar8 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar8);
  }
  FUN_001522a0(param_2,uVar30);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,uVar30);
  lVar11 = FUN_001511d0(param_2,0xffffffff);
  lVar11 = lVar11 + ((ulong)(uint)-(int)lVar11 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar5 = DAT_043f1798;
  if ((((byte)local_670 & 1) != 0) && (local_660 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar5;
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
        FUN_02bcc824(plVar25,local_660,0,8);
        goto LAB_023b5ae4;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_660,0,8);
  }
LAB_023b5ae4:
  memset(&local_370,0,0x300);
  puVar4 = PTR_DAT_04386a88;
  *(undefined1 *)(lVar11 + 0x58) = 1;
  puVar3 = PTR_DAT_043816f8;
  *puVar4 = 1;
  *puVar3 = 1;
  pcVar26 = *(char **)(lVar11 + 0x60);
  *(undefined1 **)(lVar11 + 0x1d8) = &LAB_023bc930;
  *(undefined1 **)(lVar11 + 0x1e0) = &LAB_023bc9ec;
  *(undefined1 **)(lVar11 + 0x1c8) = &LAB_023bcc70;
  *(undefined1 **)(lVar11 + 0x1d0) = &LAB_023bce90;
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  lVar23 = lVar11 + 8;
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023baf70;
  if (uVar9 != 0) {
    pcVar20 = FUN_023ba8d0;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b5d40;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b5d40;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_370 = pcVar26;
  local_368 = pcVar20;
LAB_023b5d40:
  pcVar26 = *(char **)(lVar11 + 0x68);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bb18c;
  if (uVar9 != 0) {
    pcVar20 = (code *)&LAB_023bafc8;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b5e80;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b5e80;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b5e80:
  pcVar26 = *(char **)(lVar11 + 0x80);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bb380;
  if (uVar9 != 0) {
    pcVar20 = (code *)&LAB_023bb284;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b5fc0;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b5fc0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b5fc0:
  pcVar26 = *(char **)(lVar11 + 0x98);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bb4fc;
  if (uVar9 != 0) {
    pcVar20 = FUN_023bb4b4;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b6100;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b6100;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b6100:
  pcVar26 = *(char **)(lVar11 + 0xb0);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bb58c;
  if (uVar9 != 0) {
    pcVar20 = FUN_023bb544;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b6240;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b6240;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b6240:
  pcVar26 = *(char **)(lVar11 + 200);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bb6f0;
  if (uVar9 != 0) {
    pcVar20 = FUN_023bb5d4;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b6380;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b6380;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b6380:
  pcVar26 = *(char **)(lVar11 + 0xe0);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bba34;
  if (uVar9 != 0) {
    pcVar20 = FUN_023bb80c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b64c0;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b64c0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b64c0:
  pcVar26 = *(char **)(lVar11 + 0xf8);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bbb74;
  if (uVar9 != 0) {
    pcVar20 = FUN_023bbb2c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b6600;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b6600;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b6600:
  pcVar26 = *(char **)(lVar11 + 0x110);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_023bbbf4;
  if (uVar9 != 0) {
    pcVar20 = (code *)&LAB_023bbbbc;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b6740;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b6740;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b6740:
  pcVar26 = *(char **)(lVar11 + 0x128);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bbc84;
  if (uVar9 != 0) {
    pcVar20 = FUN_023bbc3c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b6880;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b6880;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b6880:
  pcVar26 = *(char **)(lVar11 + 0x140);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_023bbd04;
  if (uVar9 != 0) {
    pcVar20 = (code *)&LAB_023bbccc;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b69c0;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b69c0;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b69c0:
  pcVar26 = *(char **)(lVar11 + 0x158);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bbd94;
  if (uVar9 != 0) {
    pcVar20 = FUN_023bbd4c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b6b00;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b6b00;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b6b00:
  pcVar26 = *(char **)(lVar11 + 0x170);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bbe24;
  if (uVar9 != 0) {
    pcVar20 = FUN_023bbddc;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b6c40;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b6c40;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b6c40:
  pcVar26 = *(char **)(lVar11 + 0x188);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_023bbea4;
  if (uVar9 != 0) {
    pcVar20 = (code *)&LAB_023bbe6c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x1a8) = pcVar20;
            goto LAB_023b6d80;
          }
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      goto LAB_023b6d80;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023b6d80:
  pcVar26 = *(char **)(lVar11 + 0x1a0);
  sVar12 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_023bbf4c;
  if (uVar9 != 0) {
    pcVar20 = FUN_023bbeec;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar28);
    sVar12 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      uVar29 = uVar24;
      if (iVar7 == 0x13) {
        *(code **)(lVar11 + 0x1a8) = pcVar20;
        uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1f0);
        goto joined_r0x023b758c;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar20;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1f0) = *(ulong *)(lVar11 + 0x1f0) | 1L << (uVar22 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1f0);
      goto joined_r0x023b758c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar29 = (ulong)((int)uVar24 + 1);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar20;
  uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1f0);
joined_r0x023b758c:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1f0);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1f0);
  }
  uVar22 = uVar29;
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    if ((*(byte *)(lVar28 + 0x180) & 1) == 0) {
      pcVar26 = (char *)(lVar28 + 0x181);
    }
    else {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar29 + 1);
    (&local_370)[uVar29 * 2] = pcVar26;
    (&local_368)[uVar29 * 2] = (code *)PTR_LAB_04386a90;
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1f0);
  }
  uVar24 = uVar22;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    if ((*(byte *)(lVar28 + 0x288) & 1) == 0) {
      pcVar26 = (char *)(lVar28 + 0x289);
    }
    else {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_370)[uVar22 * 2] = pcVar26;
    (&local_368)[uVar22 * 2] = (code *)PTR_LAB_04386a98;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar11 + 0x1a8) != 0) {
    lVar28 = FUN_008cca50();
    if ((*(byte *)(lVar28 + 0x1c8) & 1) == 0) {
      pcVar26 = (char *)(lVar28 + 0x1c9);
    }
    else {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar11 + 0x1a8);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_370)[uVar24 * 2] = pcVar26;
    (&local_368)[uVar24 * 2] = pcVar20;
  }
  (&local_370)[uVar22 * 2] = (char *)0x0;
  (&local_368)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_670,&local_370,0x300);
  memcpy(asStack_970,&local_370,0x300);
  lVar28 = FUN_008cca50();
  lVar13 = uVar22 - 1;
  pcVar26 = (&local_370)[lVar13 * 2];
  sVar12 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar12 == sVar1) &&
     (iVar7 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar7 == 0)) {
    auStack_680[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_66f + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_970 + lVar13 * 0x10) = (&local_370)[lVar13 * 2];
  *(undefined1 **)(asStack_970 + (lVar13 * 2 + 1) * 8) = &LAB_023bbfb0;
  FUN_00151fe0(param_2,0,2);
  local_978[0] = FUN_0014feb0(param_2,0xffffffff);
  local_980 = param_2;
  if ((*puVar16 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04386a80);
    puVar16 = PTR_DAT_04386aa0;
    if (iVar7 != 0) {
      FUN_023ba4a0(PTR_DAT_04386aa0);
      FUN_00100250(PTR__string_04379718,puVar16,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04386a80);
    }
  }
  uVar8 = local_978[0];
  uVar22 = *(ulong *)(PTR_DAT_04386aa0 + 8);
  puVar16 = *(undefined **)(PTR_DAT_04386aa0 + 0x10);
  if ((*PTR_DAT_04386aa0 & 1) == 0) {
    puVar16 = PTR_DAT_04386aa0 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_04386aa0 >> 1);
  }
  FUN_001514f0(param_2,puVar16,uVar22);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_023bc000,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar15 = asStack_970;
      pbVar14 = (byte *)FUN_023b8c60();
    }
    else if (lVar28 == 0) {
      psVar15 = &local_670;
      pbVar14 = (byte *)FUN_023b8a80();
    }
    else {
      psVar15 = (string *)&local_370;
      pbVar14 = (byte *)FUN_023b8e40();
    }
    pbVar21 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar21 = pbVar14 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_988 = FUN_0014feb0(param_2,0xffffffff);
    local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
    local_990 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_9c0,&local_980,local_988);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar15,2);
    uVar8 = local_988;
    if (*(long *)(lVar11 + 0x1d8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
    }
    uVar8 = local_988;
    if (*(long *)(lVar11 + 0x1e0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_988;
    uVar30 = *(undefined8 *)(lVar11 + 0x1b8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar30,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_988;
    uVar30 = *(undefined8 *)(lVar11 + 0x1c0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar30,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_9c0,&local_990,local_988);
    }
    else {
      local_9c0 = &LAB_023bc0f0;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_023bc050(param_2,1,&local_9c0,local_988);
      local_9c0 = &LAB_023bc3fc;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_023bc050(param_2,2,&local_9c0,local_988);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_9c0,&local_980,uVar8);
    if (*(undefined1 **)(lVar11 + 0x1b0) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0x1e8) == '\0') goto LAB_023b7248;
LAB_023b74c4:
      local_9c0 = &LAB_023bc0f0;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_023bc050(param_2,1,&local_9c0,uVar8);
      local_9c0 = &LAB_023bc3fc;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_023bc050(param_2,2,&local_9c0,uVar8);
      if (param_2 == 0) goto LAB_023b7518;
LAB_023b7250:
      uVar10 = local_988;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_9b8 = 0;
      local_9c0 = *(undefined1 **)(lVar11 + 0x1b0);
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_023bc050(param_2,4,&local_9c0,uVar8);
      if (*(char *)(lVar11 + 0x1e8) != '\0') goto LAB_023b74c4;
LAB_023b7248:
      if (param_2 != 0) goto LAB_023b7250;
LAB_023b7518:
      uVar10 = local_988;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_990,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_023b9078();
      if ((DAT_043e3278 & 1) == 0) {
        puVar16 = &DAT_043e3279;
      }
      else {
        puVar16 = DAT_043e3288;
      }
      FUN_00154450(param_2,puVar16);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_9c0._0_4_ = 0x1e;
      FUN_008fe304(&local_990,param_2,&local_9c0,&local_980,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,&local_370,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
      FUN_008fe304(&local_990,param_2,&local_9c0,&local_980,uVar10);
      local_9c0 = *(undefined1 **)(lVar11 + 0x1b0);
      if (local_9c0 != (undefined1 *)0x0) {
        uStack_9b8 = 0;
        local_9b0 = lVar11;
        lStack_9a8 = lVar23;
        FUN_023bc050(param_2,4,&local_9c0,uVar10);
      }
      local_9c0 = &LAB_023bc4b8;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a7d528;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_023bc400(param_2,1,&local_9c0,uVar10);
      local_9c0 = &LAB_023bc4bc;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a7d528;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_023bc400(param_2,2,&local_9c0,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_978[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


