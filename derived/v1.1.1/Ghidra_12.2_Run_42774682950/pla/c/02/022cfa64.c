/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022cfa64; name: FUN_022cfa64
 */


undefined8 FUN_022cfa64(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  byte *pbVar15;
  string *psVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  code *pcVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long lVar27;
  ulong uVar28;
  undefined1 *local_9c0;
  undefined8 uStack_9b8;
  long local_9b0;
  long lStack_9a8;
  undefined8 local_9a0;
  undefined *puStack_998;
  undefined4 local_990 [2];
  long local_988;
  undefined4 local_980;
  long local_978;
  undefined4 local_970 [2];
  string asStack_968 [752];
  undefined8 auStack_678 [2];
  string local_668;
  undefined1 auStack_667 [7];
  size_t local_660;
  undefined1 *local_658;
  char *apcStack_378 [2];
  char *local_368;
  code *local_360;
  long local_358;
  
  puVar5 = PTR_DAT_04383bc8;
  if (((DAT_043e1268 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e1268), iVar8 != 0)) {
    local_358 = 0;
    local_360 = (code *)0x0;
    local_368 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04383bc8);
      puVar2 = PTR_DAT_04383bd0;
      if (iVar8 != 0) {
        FUN_02031690(PTR_DAT_04383bd0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383bc8);
      }
    }
    pcVar25 = (char *)FUN_022d35cc(&local_368,PTR_DAT_04383bd0);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043e1250,psVar16);
    lVar12 = local_358;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_368 & 1) != 0) && (local_358 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_022d1a34;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_022d1a34:
    FUN_00100250(PTR__string_04379718,&DAT_043e1250,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1268);
  }
  std::string::string(&local_668,(string *)&DAT_043e1250);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e1248);
  sVar1 = (ulong)((byte)local_668 >> 1);
  if (((byte)local_668 & 1) != 0) {
    sVar1 = local_660;
  }
  std::string::append((ulong)&local_668,(char)iVar8);
  if (((byte)local_668 & 1) == 0) {
    puVar26 = auStack_667;
    local_660 = (size_t)((byte)local_668 >> 1);
  }
  else {
    puVar26 = local_658;
  }
  snprintf(puVar26 + (sVar1 - 1),local_660,"%d",(ulong)DAT_043e1248);
  DAT_043e1248 = DAT_043e1248 + 1;
  if (((DAT_043e1288 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e1288), iVar8 != 0)) {
    local_358 = 0;
    local_360 = (code *)0x0;
    local_368 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04383bc8);
      puVar2 = PTR_DAT_04383bd0;
      if (iVar8 != 0) {
        FUN_02031690(PTR_DAT_04383bd0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383bc8);
      }
    }
    pcVar25 = (char *)FUN_022d35cc(&local_368,PTR_DAT_04383bd0);
    psVar16 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043e1270,psVar16);
    lVar12 = local_358;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_368 & 1) != 0) && (local_358 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_022d1b80;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_022d1b80:
    FUN_00100250(PTR__string_04379718,&DAT_043e1270,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e1288);
  }
  puVar2 = DAT_043e1280;
  if ((DAT_043e1270 & 1) == 0) {
    puVar2 = &DAT_043e1271;
  }
  if (((byte)local_668 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_668 | 1);
  }
  else {
    puVar26 = local_658;
  }
  if (((DAT_043e1298 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e1298), iVar8 != 0)) {
    DAT_043e1290 = 0x208;
    __cxa_guard_release(&DAT_043e1298);
  }
  if (((DAT_043e12a8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e12a8), iVar8 != 0)) {
    DAT_043e12a0 = 0x20f;
    __cxa_guard_release(&DAT_043e12a8);
  }
  uVar21 = DAT_043e1290;
  lVar12 = FUN_00153520(param_2,DAT_043e1290);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x208)) ||
     (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043e12a0;
    lVar12 = FUN_00153520(param_2,DAT_043e12a0);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x208)) ||
       (puVar17 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_022d56b0();
      puVar3 = DAT_043e12c0;
      if ((DAT_043e12b0 & 1) == 0) {
        puVar3 = &DAT_043e12b1;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar17[1] = uVar18;
  puVar17[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar17[3] = lVar12;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar22;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar17[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar28 = 0;
      if (uVar23 != 0) {
        uVar28 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar28 * uVar23;
    }
    *(undefined8 **)(puVar17[1] + uVar21 * 8) = puVar17 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar18;
  puVar17[7] = uVar4;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar17 = &PTR_FUN_0425bab0;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x1a8);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_022d5670,0);
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
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_668 & 1) != 0) && (local_658 != (undefined1 *)0x0)) {
    lVar22 = tpidr_el0;
    plVar24 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar24 = plVar6;
    }
    uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar24,local_658,0,8);
        goto LAB_022cfdd8;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_658,0,8);
  }
LAB_022cfdd8:
  memset(&local_368,0,0x300);
  puVar2 = PTR_DAT_0437dcc8;
  *(undefined1 *)(lVar12 + 0x58) = 1;
  *puVar2 = 1;
  pcVar25 = *(char **)(lVar12 + 0x60);
  *(undefined1 **)(lVar12 + 0x1e8) = &LAB_022d5aec;
  *(undefined1 **)(lVar12 + 0x1f0) = &LAB_022d5ba8;
  *(undefined1 **)(lVar12 + 0x1d8) = &LAB_022d5c00;
  *(undefined1 **)(lVar12 + 0x1e0) = &LAB_022d5c10;
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar22 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d3a8c;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d394c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar23 = 0;
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d0030;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d0030;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_368 = pcVar25;
  local_360 = pcVar19;
LAB_022d0030:
  pcVar25 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d3ca0;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d3b78;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d0170;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d0170;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d0170:
  pcVar25 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d3e10;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d3dc8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d02b0;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d02b0;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d02b0:
  pcVar25 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d4164;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d3e58;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d03f0;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d03f0;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d03f0:
  pcVar25 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d4360;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d4250;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d0530;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d0530;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d0530:
  pcVar25 = *(char **)(lVar12 + 0xd8);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d45b4;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d4470;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d0670;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d0670;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d0670:
  pcVar25 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d47dc;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d46a0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d07b0;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d07b0;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d07b0:
  pcVar25 = *(char **)(lVar12 + 0x108);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d4a0c;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d48c8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d08f0;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d08f0;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d08f0:
  pcVar25 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d4b40;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d4af8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d0a30;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d0a30;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d0a30:
  pcVar25 = *(char **)(lVar12 + 0x138);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d4d04;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d4b88;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d0b70;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d0b70;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d0b70:
  pcVar25 = *(char **)(lVar12 + 0x150);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d4e38;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d4df0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d0cb0;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d0cb0;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d0cb0:
  pcVar25 = *(char **)(lVar12 + 0x168);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d4ec8;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d4e80;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d0df0;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d0df0;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d0df0:
  pcVar25 = *(char **)(lVar12 + 0x180);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d4f58;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d4f10;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d0f30;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d0f30;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d0f30:
  pcVar25 = *(char **)(lVar12 + 0x198);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d50f4;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d4fa0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1b8) = pcVar19;
            goto LAB_022d1070;
          }
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      goto LAB_022d1070;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_022d1070:
  pcVar25 = *(char **)(lVar12 + 0x1b0);
  sVar13 = strlen(pcVar25);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_022d524c;
  if (uVar10 != 0) {
    pcVar19 = FUN_022d51ec;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar15 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar1 = (ulong)(*pbVar15 >> 1);
    if ((*pbVar15 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar15 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar15,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      uVar28 = uVar23;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x1b8) = pcVar19;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
        goto joined_r0x022d18b8;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar19;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x200) = *(ulong *)(lVar12 + 0x200) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
      goto joined_r0x022d18b8;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar28 = (ulong)((int)uVar23 + 1);
  (&local_368)[uVar23 * 2] = pcVar25;
  (&local_360)[uVar23 * 2] = pcVar19;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
joined_r0x022d18b8:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
  }
  uVar21 = uVar28;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    uVar21 = (ulong)((int)uVar28 + 1);
    (&local_368)[uVar28 * 2] = pcVar25;
    (&local_360)[uVar28 * 2] = (code *)PTR_LAB_04383ba0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x200);
  }
  uVar23 = uVar21;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    uVar23 = (ulong)((int)uVar21 + 1);
    (&local_368)[uVar21 * 2] = pcVar25;
    (&local_360)[uVar21 * 2] = (code *)PTR_LAB_04383ba8;
  }
  uVar21 = uVar23;
  if (*(long *)(lVar12 + 0x1b8) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar12 + 0x1b8);
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_368)[uVar23 * 2] = pcVar25;
    (&local_360)[uVar23 * 2] = pcVar19;
  }
  (&local_368)[uVar21 * 2] = (char *)0x0;
  (&local_360)[uVar21 * 2] = (code *)0x0;
  memcpy(&local_668,&local_368,0x300);
  memcpy(asStack_968,&local_368,0x300);
  lVar27 = FUN_008cca50();
  lVar14 = uVar21 - 1;
  pcVar25 = (&local_368)[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_678[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_667 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_968 + lVar14 * 0x10) = (&local_368)[lVar14 * 2];
  *(undefined1 **)(asStack_968 + (lVar14 * 2 + 1) * 8) = &LAB_022d52b0;
  FUN_00151fe0(param_2,0,2);
  local_970[0] = FUN_0014feb0(param_2,0xffffffff);
  local_978 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04383bc8);
    puVar5 = PTR_DAT_04383bd0;
    if (iVar8 != 0) {
      FUN_02031690(PTR_DAT_04383bd0);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04383bc8);
    }
  }
  uVar9 = local_970[0];
  uVar21 = *(ulong *)(PTR_DAT_04383bd0 + 8);
  puVar5 = *(undefined **)(PTR_DAT_04383bd0 + 0x10);
  if ((*PTR_DAT_04383bd0 & 1) == 0) {
    puVar5 = PTR_DAT_04383bd0 + 1;
    uVar21 = (ulong)((byte)*PTR_DAT_04383bd0 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_022d5300,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar16 = asStack_968;
      pbVar15 = (byte *)FUN_02031e98();
    }
    else if (lVar27 == 0) {
      psVar16 = &local_668;
      pbVar15 = (byte *)FUN_0202ffd8();
    }
    else {
      psVar16 = (string *)&local_368;
      pbVar15 = (byte *)FUN_02031434();
    }
    pbVar20 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar20 = pbVar15 + 1;
    }
    FUN_00154450(param_2,pbVar20);
    local_980 = FUN_0014feb0(param_2,0xffffffff);
    local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
    local_988 = param_2;
    FUN_008fe304(local_990,param_2,&local_9c0,&local_978,local_980);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar16,2);
    uVar9 = local_980;
    if (*(long *)(lVar12 + 0x1e8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
    }
    uVar9 = local_980;
    if (*(long *)(lVar12 + 0x1f0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_980;
    uVar18 = *(undefined8 *)(lVar12 + 0x1c8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_980;
    uVar18 = *(undefined8 *)(lVar12 + 0x1d0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,1);
      FUN_008fe304(local_990,param_2,&local_9c0,&local_988,local_980);
    }
    else {
      local_990[0] = 1;
      local_9c0 = &LAB_022d5350;
      uStack_9b8 = 0;
      local_9b0 = lVar12;
      lStack_9a8 = lVar22;
      FUN_022d6038(param_2,local_990,&local_9c0,local_980);
      local_990[0] = 2;
      local_9c0 = &LAB_022d565c;
      uStack_9b8 = 0;
      local_9b0 = lVar12;
      lStack_9a8 = lVar22;
      FUN_022d6038(param_2,local_990,&local_9c0,local_980);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
    FUN_008fe304(local_990,param_2,&local_9c0,&local_978,uVar9);
    if (*(undefined1 **)(lVar12 + 0x1c0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x1f8) == '\0') goto LAB_022d1560;
LAB_022d17f8:
      local_990[0] = 1;
      local_9c0 = &LAB_022d5350;
      uStack_9b8 = 0;
      local_9b0 = lVar12;
      lStack_9a8 = lVar22;
      FUN_022d6038(param_2,local_990,&local_9c0,uVar9);
      local_990[0] = 2;
      local_9c0 = &LAB_022d565c;
      uStack_9b8 = 0;
      local_9b0 = lVar12;
      lStack_9a8 = lVar22;
      FUN_022d6038(param_2,local_990,&local_9c0,uVar9);
      if (param_2 == 0) goto LAB_022d185c;
LAB_022d1568:
      uVar11 = local_980;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_9b8 = 0;
      local_990[0] = 4;
      local_9c0 = *(undefined1 **)(lVar12 + 0x1c0);
      local_9b0 = lVar12;
      lStack_9a8 = lVar22;
      FUN_022d6038(param_2,local_990,&local_9c0,uVar9);
      if (*(char *)(lVar12 + 0x1f8) != '\0') goto LAB_022d17f8;
LAB_022d1560:
      if (param_2 != 0) goto LAB_022d1568;
LAB_022d185c:
      uVar11 = local_980;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_988,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_022d2d94();
      puVar5 = DAT_043e1238;
      if ((DAT_043e1228 & 1) == 0) {
        puVar5 = &DAT_043e1229;
      }
      FUN_00154450(param_2,puVar5);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_9c0._0_4_ = 0x1e;
      FUN_008fe304(&local_988,param_2,&local_9c0,&local_978,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_368,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
      FUN_008fe304(&local_988,param_2,&local_9c0,&local_978,uVar11);
      local_9c0 = *(undefined1 **)(lVar12 + 0x1c0);
      if (local_9c0 != (undefined1 *)0x0) {
        local_988 = CONCAT44(local_988._4_4_,4);
        uStack_9b8 = 0;
        local_9b0 = lVar12;
        lStack_9a8 = lVar22;
        FUN_022d6038(param_2,&local_988,&local_9c0,uVar11);
      }
      local_988._0_4_ = 1;
      local_9c0 = &LAB_022d5660;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a7d460;
      local_9b0 = lVar12;
      lStack_9a8 = lVar22;
      FUN_022d63e0(param_2,&local_988,&local_9c0,uVar11);
      local_988 = CONCAT44(local_988._4_4_,2);
      local_9c0 = &LAB_022d5664;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a7d460;
      local_9b0 = lVar12;
      lStack_9a8 = lVar22;
      FUN_022d63e0(param_2,&local_988,&local_9c0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_970[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


