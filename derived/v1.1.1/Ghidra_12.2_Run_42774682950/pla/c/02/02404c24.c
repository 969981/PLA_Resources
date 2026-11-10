/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02404c24; name: FUN_02404c24
 */


undefined8 FUN_02404c24(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
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
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_900;
  undefined8 uStack_8f8;
  long local_8f0;
  long lStack_8e8;
  undefined8 local_8e0;
  undefined *puStack_8d8;
  long local_8d0;
  undefined4 local_8c8;
  long local_8c0;
  undefined4 local_8b8 [2];
  string asStack_8b0 [688];
  undefined8 auStack_600 [2];
  string local_5f0;
  undefined1 auStack_5ef [7];
  size_t local_5e8;
  undefined1 *local_5e0;
  char *apcStack_340 [2];
  char *local_330;
  code *local_328;
  long local_320;
  undefined1 auStack_70 [16];
  
  puVar4 = PTR_DAT_0437ce28;
  if (((DAT_043e5030 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5030), iVar9 != 0)) {
    local_320 = 0;
    local_328 = (code *)0x0;
    local_330 = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437ce20 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437ce20), puVar2 = PTR_DAT_0437ce28, iVar9 != 0)) {
      FUN_00ef0b80(PTR_DAT_0437ce28);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437ce20);
    }
    puVar2 = *(undefined **)(puVar4 + 0x10);
    if ((*puVar4 & 1) == 0) {
      puVar2 = puVar4 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_330,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e5018,psVar17);
    lVar13 = local_320;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_330 & 1) != 0) && (local_320 != 0)) {
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
          goto LAB_024067e4;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_024067e4:
    FUN_00100250(PTR__string_04379718,&DAT_043e5018,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5030);
  }
  std::string::string(&local_5f0,(string *)&DAT_043e5018);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e5010);
  sVar1 = (ulong)((byte)local_5f0 >> 1);
  if (((byte)local_5f0 & 1) != 0) {
    sVar1 = local_5e8;
  }
  std::string::append((ulong)&local_5f0,(char)iVar9);
  if (((byte)local_5f0 & 1) == 0) {
    puVar27 = auStack_5ef;
    local_5e8 = (size_t)((byte)local_5f0 >> 1);
  }
  else {
    puVar27 = local_5e0;
  }
  snprintf(puVar27 + (sVar1 - 1),local_5e8,"%d",(ulong)DAT_043e5010);
  DAT_043e5010 = DAT_043e5010 + 1;
  if (((DAT_043e5050 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5050), iVar9 != 0)) {
    local_320 = 0;
    local_328 = (code *)0x0;
    local_330 = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437ce20 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437ce20), puVar2 = PTR_DAT_0437ce28, iVar9 != 0)) {
      FUN_00ef0b80(PTR_DAT_0437ce28);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437ce20);
    }
    puVar2 = *(undefined **)(puVar4 + 0x10);
    if ((*puVar4 & 1) == 0) {
      puVar2 = puVar4 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_330,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e5038,psVar17);
    lVar13 = local_320;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_330 & 1) != 0) && (local_320 != 0)) {
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
          goto LAB_02406948;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_02406948:
    FUN_00100250(PTR__string_04379718,&DAT_043e5038,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5050);
  }
  puVar2 = DAT_043e5048;
  if ((DAT_043e5038 & 1) == 0) {
    puVar2 = &DAT_043e5039;
  }
  if (((byte)local_5f0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_5f0 | 1);
  }
  else {
    puVar27 = local_5e0;
  }
  if (((DAT_043e5060 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5060), iVar9 != 0)) {
    DAT_043e5058 = 0x180;
    __cxa_guard_release(&DAT_043e5060);
  }
  if (((DAT_043e5070 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e5070), iVar9 != 0)) {
    DAT_043e5068 = 0x187;
    __cxa_guard_release(&DAT_043e5070);
  }
  uVar22 = DAT_043e5058;
  lVar13 = FUN_00153520(param_2,DAT_043e5058);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x180)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e5068;
    lVar13 = FUN_00153520(param_2,DAT_043e5068);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x180)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_024101e0();
      puVar3 = DAT_043e5088;
      if ((DAT_043e5078 & 1) == 0) {
        puVar3 = &DAT_043e5079;
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
  *puVar18 = &PTR_FUN_0425bf38;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x120);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_024101a0,0);
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
  if ((((byte)local_5f0 & 1) != 0) && (local_5e0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_5e0,0,8);
        goto LAB_02404f98;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_5e0,0,8);
  }
LAB_02404f98:
  memset(&local_330,0,0x2c0);
  pcVar26 = *(char **)(lVar13 + 0x60);
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
  pcVar20 = FUN_0240871c;
  if (uVar11 != 0) {
    pcVar20 = FUN_024085c0;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_024051b4;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024051b4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_330 = pcVar26;
  local_328 = pcVar20;
LAB_024051b4:
  pcVar26 = *(char **)(lVar13 + 0x78);
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
  pcVar20 = FUN_0240896c;
  if (uVar11 != 0) {
    pcVar20 = FUN_02408808;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_024052f4;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024052f4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024052f4:
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02408abc;
  if (uVar11 != 0) {
    pcVar20 = FUN_02408a58;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_02405434;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_02405434;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02405434:
  pcVar26 = *(char **)(lVar13 + 0xa0);
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
  pcVar20 = FUN_02408c6c;
  if (uVar11 != 0) {
    pcVar20 = FUN_02408b20;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_02405574;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_02405574;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02405574:
  pcVar26 = *(char **)(lVar13 + 0xb8);
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
  pcVar20 = (code *)&LAB_02408fe0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02408d58;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_024056b4;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024056b4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024056b4:
  pcVar26 = *(char **)(lVar13 + 0xc0);
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
  pcVar20 = FUN_0240c170;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02409024;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_024057f4;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024057f4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024057f4:
  pcVar26 = *(char **)(lVar13 + 200);
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
  pcVar20 = FUN_0240c2b8;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0240c1c8;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_02405934;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_02405934;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02405934:
  pcVar26 = *(char **)(lVar13 + 0xe0);
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
  pcVar20 = FUN_0240c4c0;
  if (uVar11 != 0) {
    pcVar20 = FUN_0240c3e0;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_02405a74;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_02405a74;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02405a74:
  pcVar26 = *(char **)(lVar13 + 0xf8);
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
  pcVar20 = FUN_0240f52c;
  if (uVar11 != 0) {
    pcVar20 = FUN_0240c5d0;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_02405bb4;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_02405bb4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02405bb4:
  pcVar26 = *(char **)(lVar13 + 0x108);
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
  pcVar20 = FUN_0240f5d8;
  if (uVar11 != 0) {
    pcVar20 = FUN_0240f590;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_02405cf4;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_02405cf4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02405cf4:
  pcVar26 = *(char **)(lVar13 + 0x120);
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
  pcVar20 = (code *)&LAB_0240fd78;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0240f620;
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
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x130) = pcVar20;
            goto LAB_02405e04;
          }
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_02405e04;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02405e04:
  pcVar26 = *(char **)(lVar13 + 0x128);
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
  pcVar20 = FUN_0240ff7c;
  if (uVar11 != 0) {
    pcVar20 = FUN_0240ff1c;
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
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x130) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x178);
        goto joined_r0x02405ee8;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x178) = *(ulong *)(lVar13 + 0x178) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x178);
      goto joined_r0x02405ee8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x178);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x02405ee8:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x178);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x178);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_330)[uVar24 * 2] = pcVar26;
    (&local_328)[uVar24 * 2] = (code *)PTR_LAB_0437cdf8;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x178);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_330)[uVar22 * 2] = pcVar26;
    (&local_328)[uVar22 * 2] = (code *)PTR_LAB_0437ce00;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x130) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x130);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_330)[uVar24 * 2] = pcVar26;
    (&local_328)[uVar24 * 2] = pcVar20;
  }
  (&local_330)[uVar22 * 2] = (char *)0x0;
  (&local_328)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_5f0,&local_330,0x2c0);
  memcpy(asStack_8b0,&local_330,0x2c0);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_330)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_600[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5ef + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_8b0 + lVar15 * 0x10) = (&local_330)[lVar15 * 2];
  *(undefined1 **)(asStack_8b0 + (lVar15 * 2 + 1) * 8) = &LAB_0240ffe0;
  FUN_00151fe0(param_2,0,2);
  local_8b8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_8c0 = param_2;
  if (((*PTR_DAT_0437ce20 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_0437ce20), puVar2 = PTR_DAT_0437ce28, iVar9 != 0)) {
    FUN_00ef0b80(PTR_DAT_0437ce28);
    FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437ce20);
  }
  uVar10 = local_8b8[0];
  uVar22 = (ulong)((byte)*puVar4 >> 1);
  puVar2 = *(undefined **)(puVar4 + 0x10);
  if ((*puVar4 & 1) == 0) {
    puVar2 = puVar4 + 1;
  }
  else {
    uVar22 = *(ulong *)(puVar4 + 8);
  }
  FUN_001514f0(param_2,puVar2,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0240fc00,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_8b0;
      pbVar16 = (byte *)FUN_00ef1388();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_5f0;
      pbVar16 = (byte *)FUN_00eef4c8();
    }
    else {
      psVar17 = (string *)&local_330;
      pbVar16 = (byte *)FUN_00ef0924();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_8c8 = FUN_0014feb0(param_2,0xffffffff);
    local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
    local_8d0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_900,&local_8c0,local_8c8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_8c8;
    if (*(long *)(lVar13 + 0x160) == 0) {
      lVar15 = *(long *)(lVar13 + 0x168);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x168);
      uVar10 = local_8c8;
    }
    local_8c8 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_8c8;
    uVar19 = *(undefined8 *)(lVar13 + 0x140);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_8c8;
    uVar19 = *(undefined8 *)(lVar13 + 0x148);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_900 = (undefined1 *)CONCAT44(local_900._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_900,&local_8d0,local_8c8);
    }
    else {
      local_900 = &LAB_024100d0;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_02410030(param_2,1,&local_900,local_8c8);
      local_900 = &LAB_024100d4;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_02410030(param_2,2,&local_900,local_8c8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_900,&local_8c0,uVar10);
    if (*(undefined1 **)(lVar13 + 0x138) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x170) == '\0') goto LAB_0240627c;
LAB_02406574:
      local_900 = &LAB_024100d0;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_02410030(param_2,1,&local_900,uVar10);
      local_900 = &LAB_024100d4;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_02410030(param_2,2,&local_900,uVar10);
      if (param_2 == 0) goto LAB_024065c8;
LAB_02406284:
      uVar12 = local_8c8;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_8f8 = 0;
      local_900 = *(undefined1 **)(lVar13 + 0x138);
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_02410030(param_2,4,&local_900,uVar10);
      if (*(char *)(lVar13 + 0x170) != '\0') goto LAB_02406574;
LAB_0240627c:
      if (param_2 != 0) goto LAB_02406284;
LAB_024065c8:
      uVar12 = local_8c8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_8d0,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_02407b14();
      puVar4 = DAT_043e4ba0;
      if ((DAT_043e4b90 & 1) == 0) {
        puVar4 = &DAT_043e4b91;
      }
      FUN_00154450(param_2,puVar4);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_900._0_4_ = 0x1e;
      FUN_008fe304(&local_8d0,param_2,&local_900,&local_8c0,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_330,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
      FUN_008fe304(&local_8d0,param_2,&local_900,&local_8c0,uVar12);
      local_900 = *(undefined1 **)(lVar13 + 0x138);
      if (local_900 != (undefined1 *)0x0) {
        uStack_8f8 = 0;
        local_8f0 = lVar13;
        lStack_8e8 = lVar23;
        FUN_02410030(param_2,4,&local_900,uVar12);
      }
      local_900 = &LAB_02410198;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7d548;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_024100e0(param_2,1,&local_900,uVar12);
      local_900 = &LAB_0241019c;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7d548;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_024100e0(param_2,2,&local_900,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_8b8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


