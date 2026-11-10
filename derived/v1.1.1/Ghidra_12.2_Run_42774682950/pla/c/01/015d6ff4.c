/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015d6ff4; name: FUN_015d6ff4
 */


undefined8 FUN_015d6ff4(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
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
  char *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *local_8d0;
  undefined8 uStack_8c8;
  long local_8c0;
  long lStack_8b8;
  undefined8 local_8b0;
  undefined *puStack_8a8;
  long local_8a0;
  undefined4 local_898;
  long local_890;
  undefined4 local_888 [2];
  string asStack_880 [672];
  undefined8 auStack_5e0 [2];
  string local_5d0;
  undefined1 auStack_5cf [7];
  size_t local_5c8;
  undefined1 *local_5c0;
  char *apcStack_330 [2];
  char *local_320 [2];
  long local_310;
  undefined1 auStack_70 [16];
  
  puVar6 = PTR_DAT_0437fd80;
  if (((DAT_043cb768 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cb768), iVar10 != 0)) {
    local_310 = 0;
    local_320[1] = (undefined1 *)0x0;
    local_320[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_0437fd80);
      puVar3 = PTR_DAT_0437fd88;
      if (iVar10 != 0) {
        FUN_015be680(PTR_DAT_0437fd88);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437fd80);
      }
    }
    pcVar27 = (char *)FUN_015da5ac(local_320,PTR_DAT_0437fd88);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043cb750,psVar18);
    lVar14 = local_310;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_320[0] & 1) != 0) && (local_310 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
      }
      uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_015d8a5c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_015d8a5c:
    FUN_00100250(PTR__string_04379718,&DAT_043cb750,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cb768);
  }
  std::string::string(&local_5d0,(string *)&DAT_043cb750);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cb748);
  sVar2 = (ulong)((byte)local_5d0 >> 1);
  if (((byte)local_5d0 & 1) != 0) {
    sVar2 = local_5c8;
  }
  std::string::append((ulong)&local_5d0,(char)iVar10);
  if (((byte)local_5d0 & 1) == 0) {
    puVar28 = auStack_5cf;
    local_5c8 = (size_t)((byte)local_5d0 >> 1);
  }
  else {
    puVar28 = local_5c0;
  }
  snprintf(puVar28 + (sVar2 - 1),local_5c8,"%d",(ulong)DAT_043cb748);
  DAT_043cb748 = DAT_043cb748 + 1;
  if (((DAT_043cb788 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cb788), iVar10 != 0)) {
    local_310 = 0;
    local_320[1] = (undefined1 *)0x0;
    local_320[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_0437fd80);
      puVar3 = PTR_DAT_0437fd88;
      if (iVar10 != 0) {
        FUN_015be680(PTR_DAT_0437fd88);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437fd80);
      }
    }
    pcVar27 = (char *)FUN_015da5ac(local_320,PTR_DAT_0437fd88);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043cb770,psVar18);
    lVar14 = local_310;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_320[0] & 1) != 0) && (local_310 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
      }
      uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_015d8ba8;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_015d8ba8:
    FUN_00100250(PTR__string_04379718,&DAT_043cb770,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cb788);
  }
  puVar3 = DAT_043cb780;
  if ((DAT_043cb770 & 1) == 0) {
    puVar3 = &DAT_043cb771;
  }
  if (((byte)local_5d0 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_5d0 | 1);
  }
  else {
    puVar28 = local_5c0;
  }
  if (((DAT_043cb798 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cb798), iVar10 != 0)) {
    DAT_043cb790 = 400;
    __cxa_guard_release(&DAT_043cb798);
  }
  if (((DAT_043cb7a8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cb7a8), iVar10 != 0)) {
    DAT_043cb7a0 = 0x197;
    __cxa_guard_release(&DAT_043cb7a8);
  }
  uVar23 = DAT_043cb790;
  lVar14 = FUN_00153520(param_2,DAT_043cb790);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 400)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043cb7a0;
    lVar14 = FUN_00153520(param_2,DAT_043cb7a0);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 400)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_015dc550();
      puVar4 = DAT_043cb7c0;
      if ((DAT_043cb7b0 & 1) == 0) {
        puVar4 = &DAT_043cb7b1;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar4);
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
  lVar24 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar14 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar7 = 0;
      if (uVar25 != 0) {
        uVar7 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar7 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar5;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_0421e548;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0x130);
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_015dc510,0);
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
  FUN_001522a0(param_2,puVar3);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar3);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_5d0 & 1) != 0) && (local_5c0 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar8;
    }
    uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
    if ((uVar23 & 1) != 0) {
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar24 + 0x38d480)) {
        FUN_02bcc824(plVar26,local_5c0,0,8);
        goto LAB_015d7368;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_5c0,0,8);
  }
LAB_015d7368:
  memset(local_320,0,0x2b0);
  pcVar27 = *(char **)(lVar14 + 0x60);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar24 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  puVar28 = &LAB_015da924;
  if (uVar12 != 0) {
    puVar28 = &LAB_015da8ec;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar28;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar14 + 0x140) = puVar28;
            goto LAB_015d748c;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d748c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_320[0] = pcVar27;
  local_320[1] = puVar28;
LAB_015d748c:
  pcVar27 = *(char **)(lVar14 + 0x68);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015daa1c;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_015da95c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 0x13) {
        *(code **)(lVar14 + 0x140) = pcVar1;
        goto LAB_015d756c;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d756c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015d756c:
  pcVar27 = *(char **)(lVar14 + 0x78);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015dae14;
  if (uVar12 != 0) {
    pcVar1 = FUN_015daadc;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x140) = pcVar1;
            goto LAB_015d7804;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d7804;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015d7804:
  pcVar27 = *(char **)(lVar14 + 0x80);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015db060;
  if (uVar12 != 0) {
    pcVar1 = FUN_015dae6c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x140) = pcVar1;
            goto LAB_015d7944;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d7944;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015d7944:
  pcVar27 = *(char **)(lVar14 + 0x98);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015db268;
  if (uVar12 != 0) {
    pcVar1 = FUN_015db14c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x140) = pcVar1;
            goto LAB_015d7a84;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d7a84;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015d7a84:
  pcVar27 = *(char **)(lVar14 + 0xb0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015db584;
  if (uVar12 != 0) {
    pcVar1 = FUN_015db3b4;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x140) = pcVar1;
            goto LAB_015d7bc4;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d7bc4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015d7bc4:
  pcVar27 = *(char **)(lVar14 + 200);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015db860;
  if (uVar12 != 0) {
    pcVar1 = FUN_015db670;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x140) = pcVar1;
            goto LAB_015d7d04;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d7d04;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015d7d04:
  pcVar27 = *(char **)(lVar14 + 0xe0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015dba58;
  if (uVar12 != 0) {
    pcVar1 = FUN_015db94c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x140) = pcVar1;
            goto LAB_015d7e44;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d7e44;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015d7e44:
  pcVar27 = *(char **)(lVar14 + 0xf8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = "\x01";
  if (uVar12 != 0) {
    pcVar21 = "\x01";
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(char **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(char **)(lVar14 + 0x140) = pcVar21;
            goto LAB_015d7f84;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d7f84;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015d7f84:
  pcVar27 = *(char **)(lVar14 + 0x110);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015dbfb0;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_015dbd98;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x140) = pcVar1;
            goto LAB_015d80c4;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      goto LAB_015d80c4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015d80c4:
  pcVar27 = *(char **)(lVar14 + 0x128);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_015dc208;
  if (uVar12 != 0) {
    pcVar1 = FUN_015dc09c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x140) = pcVar1;
            uVar12 = (uint)*(undefined8 *)(lVar14 + 0x188);
            goto joined_r0x015d81b8;
          }
          *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x188) = *(ulong *)(lVar14 + 0x188) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0x188);
      goto joined_r0x015d81b8;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_320[uVar25 * 2] = pcVar27;
  local_320[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0x188);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x015d81b8:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x188);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x188);
  }
  uVar23 = uVar25;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    local_320[uVar25 * 2] = pcVar27;
    local_320[uVar25 * 2 + 1] = PTR_LAB_0437fd58;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x188);
  }
  uVar25 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    local_320[uVar23 * 2] = pcVar27;
    local_320[uVar23 * 2 + 1] = PTR_LAB_0437fd60;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar14 + 0x140) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar14 + 0x140);
    uVar23 = (ulong)((int)uVar25 + 1);
    local_320[uVar25 * 2] = pcVar27;
    local_320[uVar25 * 2 + 1] = pcVar21;
  }
  local_320[uVar23 * 2] = (char *)0x0;
  local_320[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_5d0,local_320,0x2b0);
  memcpy(asStack_880,local_320,0x2b0);
  lVar29 = FUN_008cca50();
  lVar16 = uVar23 - 1;
  pcVar27 = local_320[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    auStack_5e0[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5cf + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_880 + lVar16 * 0x10) = local_320[lVar16 * 2];
  *(undefined1 **)(asStack_880 + (lVar16 * 2 + 1) * 8) = &LAB_015dc300;
  FUN_00151fe0(param_2,0,2);
  local_888[0] = FUN_0014feb0(param_2,0xffffffff);
  local_890 = param_2;
  if ((*puVar6 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_0437fd80);
    puVar6 = PTR_DAT_0437fd88;
    if (iVar10 != 0) {
      FUN_015be680(PTR_DAT_0437fd88);
      FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437fd80);
    }
  }
  uVar11 = local_888[0];
  uVar23 = *(ulong *)(PTR_DAT_0437fd88 + 8);
  puVar6 = *(undefined **)(PTR_DAT_0437fd88 + 0x10);
  if ((*PTR_DAT_0437fd88 & 1) == 0) {
    puVar6 = PTR_DAT_0437fd88 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437fd88 >> 1);
  }
  FUN_001514f0(param_2,puVar6,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_015dc350,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_880;
      pbVar17 = (byte *)FUN_015bee50();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_5d0;
      pbVar17 = (byte *)FUN_015bd27c();
    }
    else {
      psVar18 = (string *)local_320;
      pbVar17 = (byte *)FUN_015be424();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_898 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    local_8a0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_8d0,&local_890,local_898);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_898;
    if (*(long *)(lVar14 + 0x170) == 0) {
      lVar16 = *(long *)(lVar14 + 0x178);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0x178);
      uVar11 = local_898;
    }
    local_898 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_898;
    uVar20 = *(undefined8 *)(lVar14 + 0x150);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_898;
    uVar20 = *(undefined8 *)(lVar14 + 0x158);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_8d0,&local_8a0,local_898);
    }
    else {
      local_8d0 = &LAB_015dc440;
      uStack_8c8 = 0;
      local_8c0 = lVar14;
      lStack_8b8 = lVar24;
      FUN_015dc3a0(param_2,1,&local_8d0,local_898);
      local_8d0 = &LAB_015dc444;
      uStack_8c8 = 0;
      local_8c0 = lVar14;
      lStack_8b8 = lVar24;
      FUN_015dc3a0(param_2,2,&local_8d0,local_898);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_8d0,&local_890,uVar11);
    if (*(undefined1 **)(lVar14 + 0x148) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0x180) != '\0') goto LAB_015d8864;
LAB_015d85ac:
      if (param_2 == 0) goto LAB_015d88b8;
LAB_015d85b4:
      uVar13 = local_898;
      FUN_00150260(param_2,uVar11);
    }
    else {
      uStack_8c8 = 0;
      local_8d0 = *(undefined1 **)(lVar14 + 0x148);
      local_8c0 = lVar14;
      lStack_8b8 = lVar24;
      FUN_015dc3a0(param_2,4,&local_8d0,uVar11);
      if (*(char *)(lVar14 + 0x180) == '\0') goto LAB_015d85ac;
LAB_015d8864:
      local_8d0 = &LAB_015dc440;
      uStack_8c8 = 0;
      local_8c0 = lVar14;
      lStack_8b8 = lVar24;
      FUN_015dc3a0(param_2,1,&local_8d0,uVar11);
      local_8d0 = &LAB_015dc444;
      uStack_8c8 = 0;
      local_8c0 = lVar14;
      lStack_8b8 = lVar24;
      FUN_015dc3a0(param_2,2,&local_8d0,uVar11);
      if (param_2 != 0) goto LAB_015d85b4;
LAB_015d88b8:
      uVar13 = local_898;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_8a0,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_015d9d5c();
      puVar6 = DAT_043cb738;
      if ((DAT_043cb728 & 1) == 0) {
        puVar6 = &DAT_043cb729;
      }
      FUN_00154450(param_2,puVar6);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0._0_4_ = 0x1e;
      FUN_008fe304(&local_8a0,param_2,&local_8d0,&local_890,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_320,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
      FUN_008fe304(&local_8a0,param_2,&local_8d0,&local_890,uVar13);
      local_8d0 = *(undefined1 **)(lVar14 + 0x148);
      if (local_8d0 != (undefined1 *)0x0) {
        uStack_8c8 = 0;
        local_8c0 = lVar14;
        lStack_8b8 = lVar24;
        FUN_015dc3a0(param_2,4,&local_8d0,uVar13);
      }
      local_8d0 = &LAB_015dc508;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a7c418;
      local_8c0 = lVar14;
      lStack_8b8 = lVar24;
      FUN_015dc450(param_2,1,&local_8d0,uVar13);
      local_8d0 = &LAB_015dc50c;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a7c418;
      local_8c0 = lVar14;
      lStack_8b8 = lVar24;
      FUN_015dc450(param_2,2,&local_8d0,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_888[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


