/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017ac464; name: FUN_017ac464
 */


void FUN_017ac464(long param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  size_t sVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
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
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  char *pcVar22;
  byte *pbVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  char *pcVar28;
  undefined1 *puVar29;
  undefined1 *local_a80;
  undefined8 uStack_a78;
  long local_a70;
  long lStack_a68;
  undefined8 local_a60;
  undefined *puStack_a58;
  long local_a50;
  undefined4 local_a48;
  long local_a40;
  undefined4 local_a38 [2];
  string asStack_a30 [816];
  undefined8 auStack_700 [2];
  string local_6f0;
  undefined1 auStack_6ef [7];
  size_t local_6e8;
  undefined1 *local_6e0;
  char *apcStack_3c0 [2];
  char *local_3b0 [2];
  long local_3a0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043d0370 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d0370), iVar10 != 0)) {
    local_3a0 = 0;
    local_3b0[1] = (undefined1 *)0x0;
    local_3b0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04381140 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04381140);
      puVar4 = PTR_DAT_04381148;
      if (iVar10 != 0) {
        FUN_017a4b70(PTR_DAT_04381148);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04381140);
      }
    }
    puVar4 = *(undefined **)(PTR_DAT_04381148 + 0x10);
    if ((*PTR_DAT_04381148 & 1) == 0) {
      puVar4 = PTR_DAT_04381148 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_3b0,(ulong)puVar4);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043d0358,psVar18);
    lVar14 = local_3a0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_3b0[0] & 1) != 0) && (local_3a0 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar8;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar14,0,8);
          goto LAB_017aea88;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar14,0,8);
    }
LAB_017aea88:
    FUN_00100250(PTR__string_04379718,&DAT_043d0358,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d0370);
  }
  std::string::string(&local_6f0,(string *)&DAT_043d0358);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d0350);
  sVar3 = (ulong)((byte)local_6f0 >> 1);
  if (((byte)local_6f0 & 1) != 0) {
    sVar3 = local_6e8;
  }
  std::string::append((ulong)&local_6f0,(char)iVar10);
  if (((byte)local_6f0 & 1) == 0) {
    puVar29 = auStack_6ef;
    local_6e8 = (size_t)((byte)local_6f0 >> 1);
  }
  else {
    puVar29 = local_6e0;
  }
  snprintf(puVar29 + (sVar3 - 1),local_6e8,"%d",(ulong)DAT_043d0350);
  DAT_043d0350 = DAT_043d0350 + 1;
  if (((DAT_043d0390 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d0390), iVar10 != 0)) {
    local_3a0 = 0;
    local_3b0[1] = (undefined1 *)0x0;
    local_3b0[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04381140 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04381140);
      puVar4 = PTR_DAT_04381148;
      if (iVar10 != 0) {
        FUN_017a4b70(PTR_DAT_04381148);
        FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04381140);
      }
    }
    puVar4 = *(undefined **)(PTR_DAT_04381148 + 0x10);
    if ((*PTR_DAT_04381148 & 1) == 0) {
      puVar4 = PTR_DAT_04381148 + 1;
    }
    pcVar28 = (char *)std::string::append((char *)local_3b0,(ulong)puVar4);
    psVar18 = (string *)std::string::append(pcVar28);
    std::string::string((string *)&DAT_043d0378,psVar18);
    lVar14 = local_3a0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_3b0[0] & 1) != 0) && (local_3a0 != 0)) {
      lVar25 = tpidr_el0;
      plVar27 = *(long **)(lVar25 + 0x20);
      if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
        *(long **)(lVar25 + 0x20) = DAT_043f1798;
        plVar27 = plVar8;
      }
      uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
      if ((uVar24 & 1) != 0) {
        if (*(char *)(lVar25 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar25 + 0x38d488) = 1;
          *(undefined8 *)(lVar25 + 0x38d478) = 0;
          *(undefined8 *)(lVar25 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar25 + 0x38d480)) {
          FUN_02bcc824(plVar27,lVar14,0,8);
          goto LAB_017aebf8;
        }
      }
      (**(code **)(*plVar27 + 0x18))(plVar27,lVar14,0,8);
    }
LAB_017aebf8:
    FUN_00100250(PTR__string_04379718,&DAT_043d0378,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d0390);
  }
  puVar4 = DAT_043d0388;
  if ((DAT_043d0378 & 1) == 0) {
    puVar4 = &DAT_043d0379;
  }
  if (((byte)local_6f0 & 1) == 0) {
    puVar29 = (undefined1 *)((ulong)&local_6f0 | 1);
  }
  else {
    puVar29 = local_6e0;
  }
  if (((DAT_043d03a0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d03a0), iVar10 != 0)) {
    DAT_043d0398 = 0x278;
    __cxa_guard_release(&DAT_043d03a0);
  }
  if (((DAT_043d03b0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043d03b0), iVar10 != 0)) {
    DAT_043d03a8 = 0x27f;
    __cxa_guard_release(&DAT_043d03b0);
  }
  uVar24 = DAT_043d0398;
  lVar14 = FUN_00153520(param_1,DAT_043d0398);
  if ((uVar24 < ((ulong)(uint)-(int)lVar14 & 7 | 0x278)) ||
     (puVar20 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar24 = DAT_043d03a8;
    lVar14 = FUN_00153520(param_1,DAT_043d03a8);
    if ((uVar24 < ((ulong)(uint)-(int)lVar14 & 7 | 0x278)) ||
       (puVar20 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_017af270();
      puVar5 = DAT_043d03c8;
      if ((DAT_043d03b8 & 1) == 0) {
        puVar5 = &DAT_043d03b9;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar5);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar21 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar20[1] = uVar21;
  puVar20[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar14 = *(long *)(param_2 + 0x18);
  puVar20[3] = lVar14;
  lVar25 = *(long *)(param_2 + 0x20);
  puVar20[4] = lVar25;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar25 != 0) {
    uVar26 = puVar20[2];
    uVar24 = *(ulong *)(lVar14 + 8);
    if ((uVar26 & uVar26 - 1) == 0) {
      uVar24 = uVar26 - 1 & uVar24;
    }
    else if (uVar26 <= uVar24) {
      uVar7 = 0;
      if (uVar26 != 0) {
        uVar7 = uVar24 / uVar26;
      }
      uVar24 = uVar24 - uVar7 * uVar26;
    }
    *(undefined8 **)(puVar20[1] + uVar24 * 8) = puVar20 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar21 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar21;
  puVar20[7] = uVar6;
  puVar20[8] = *(undefined8 *)(param_2 + 0x40);
  puVar20[9] = *(undefined8 *)(param_2 + 0x48);
  puVar20[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar20 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar20 = &PTR_FUN_04225400;
  memcpy(puVar20 + 0xc,(void *)(param_2 + 0x60),0x218);
  iVar10 = FUN_00154450(param_1,puVar29);
  if (iVar10 != 0) {
    FUN_001516f0(param_1,&LAB_017af230,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar11 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar11);
  }
  FUN_001522a0(param_1,puVar4);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar4);
  lVar14 = FUN_001511d0(param_1,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_6f0 & 1) != 0) && (local_6e0 != (undefined1 *)0x0)) {
    lVar25 = tpidr_el0;
    plVar27 = *(long **)(lVar25 + 0x20);
    if (*(long **)(lVar25 + 0x20) == (long *)0x0) {
      *(long **)(lVar25 + 0x20) = DAT_043f1798;
      plVar27 = plVar8;
    }
    uVar24 = (**(code **)(*plVar27 + 0xc0))(plVar27);
    if ((uVar24 & 1) != 0) {
      if (*(char *)(lVar25 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar25 + 0x38d488) = 1;
        *(undefined8 *)(lVar25 + 0x38d478) = 0;
        *(undefined8 *)(lVar25 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar25 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar25 + 0x38d480)) {
        FUN_02bcc824(plVar27,local_6e0,0,8);
        goto LAB_017ac7d0;
      }
    }
    (**(code **)(*plVar27 + 0x18))(plVar27,local_6e0,0,8);
  }
LAB_017ac7d0:
  memset(local_3b0,0,0x340);
  pcVar28 = *(char **)(lVar14 + 0x60);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar19 = lVar14 + 8;
  lVar25 = 0;
  uVar24 = 0;
  puVar29 = &LAB_017a51d0;
  if (uVar12 != 0) {
    puVar29 = &LAB_017a5198;
  }
  puVar1 = (ulong *)(lVar14 + 0x270);
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(undefined1 **)(lVar14 + 0x30) = puVar29;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar26 = 0;
            *(undefined1 **)(lVar14 + 0x228) = puVar29;
            goto LAB_017ac8fc;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar29;
      }
      uVar26 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ac8fc;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  uVar26 = 1;
  local_3b0[0] = pcVar28;
  local_3b0[1] = puVar29;
LAB_017ac8fc:
  pcVar28 = *(char **)(lVar14 + 0x68);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a53f4;
  if (uVar12 != 0) {
    pcVar2 = (code *)&LAB_017a5208;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 0x13) {
        *(code **)(lVar14 + 0x228) = pcVar2;
        goto LAB_017ac9e0;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ac9e0;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ac9e0:
  pcVar28 = *(char **)(lVar14 + 0x78);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a55b4;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a5448;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017acc80;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017acc80;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017acc80:
  pcVar28 = *(char **)(lVar14 + 0x90);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a5710;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a5644;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017acdc4;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017acdc4;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017acdc4:
  pcVar28 = *(char **)(lVar14 + 0xa8);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a5824;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a57dc;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017acf08;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017acf08;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017acf08:
  pcVar28 = *(char **)(lVar14 + 0xc0);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a58b4;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a586c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ad04c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ad04c;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ad04c:
  pcVar28 = *(char **)(lVar14 + 0xd8);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a59dc;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a58fc;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ad190;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ad190;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ad190:
  pcVar28 = *(char **)(lVar14 + 0xf0);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a5ab4;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a5a6c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ad2d4;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ad2d4;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ad2d4:
  pcVar28 = *(char **)(lVar14 + 0x108);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a63f8;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a5afc;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ad418;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ad418;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ad418:
  pcVar28 = *(char **)(lVar14 + 0x120);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a64d0;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a6488;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ad55c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ad55c;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ad55c:
  pcVar28 = *(char **)(lVar14 + 0x138);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a6670;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a6518;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ad6a0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ad6a0;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ad6a0:
  pcVar28 = *(char **)(lVar14 + 0x150);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a6748;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a6700;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ad7e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ad7e4;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ad7e4:
  pcVar28 = *(char **)(lVar14 + 0x168);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a67d8;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a6790;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ad928;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ad928;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ad928:
  pcVar28 = *(char **)(lVar14 + 0x180);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017a9090;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a6820;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ada6c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ada6c;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ada6c:
  pcVar28 = *(char **)(lVar14 + 0x198);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017aba50;
  if (uVar12 != 0) {
    pcVar2 = FUN_017a9120;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017adbb0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017adbb0;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017adbb0:
  pcVar28 = *(char **)(lVar14 + 0x1b0);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017abbf4;
  if (uVar12 != 0) {
    pcVar2 = FUN_017abae0;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017adcf4;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017adcf4;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017adcf4:
  pcVar28 = *(char **)(lVar14 + 0x1c8);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017abccc;
  if (uVar12 != 0) {
    pcVar2 = FUN_017abc84;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ade38;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ade38;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ade38:
  pcVar28 = *(char **)(lVar14 + 0x1e0);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017abd5c;
  if (uVar12 != 0) {
    pcVar2 = FUN_017abd14;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017adf7c;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017adf7c;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017adf7c:
  pcVar28 = *(char **)(lVar14 + 0x1f8);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017ac198;
  if (uVar12 != 0) {
    pcVar2 = FUN_017abda4;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            goto LAB_017ae0c0;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      goto LAB_017ae0c0;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar26 = (ulong)((int)uVar26 + 1);
LAB_017ae0c0:
  pcVar28 = *(char **)(lVar14 + 0x210);
  sVar15 = strlen(pcVar28);
  sVar3 = 10;
  if (sVar15 < 0xb) {
    sVar3 = sVar15;
  }
  if (sVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar28,sVar3);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar25 = 0;
  uVar24 = 0;
  pcVar2 = FUN_017ac3d4;
  if (uVar12 != 0) {
    pcVar2 = FUN_017ac228;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar25);
    sVar15 = strlen(pcVar28);
    sVar3 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar3 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar3) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
       iVar10 == 0)) {
      iVar10 = (int)uVar24;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar2;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x228) = pcVar2;
            uVar12 = (uint)*puVar1;
            goto joined_r0x017ae1b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar24 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x270) = *(ulong *)(lVar14 + 0x270) | 1L << (uVar24 & 0x3f);
      uVar12 = (uint)*puVar1;
      goto joined_r0x017ae1b8;
    }
    uVar24 = uVar24 + 1;
    lVar25 = lVar25 + 0x18;
  } while (uVar24 != 0x20);
  local_3b0[uVar26 * 2] = pcVar28;
  local_3b0[uVar26 * 2 + 1] = (char *)pcVar2;
  uVar12 = (uint)*puVar1;
  uVar26 = (ulong)((int)uVar26 + 1);
joined_r0x017ae1b8:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*puVar1;
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*puVar1;
  }
  uVar24 = uVar26;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar25 = FUN_008cca50();
    pcVar28 = (char *)(lVar25 + 0x181);
    if ((*(byte *)(lVar25 + 0x180) & 1) != 0) {
      pcVar28 = *(char **)(lVar25 + 400);
    }
    uVar24 = (ulong)((int)uVar26 + 1);
    local_3b0[uVar26 * 2] = pcVar28;
    local_3b0[uVar26 * 2 + 1] = PTR_LAB_043813a0;
    uVar12 = (uint)*puVar1;
  }
  uVar26 = uVar24;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar25 = FUN_008cca50();
    pcVar28 = (char *)(lVar25 + 0x289);
    if ((*(byte *)(lVar25 + 0x288) & 1) != 0) {
      pcVar28 = *(char **)(lVar25 + 0x298);
    }
    uVar26 = (ulong)((int)uVar24 + 1);
    local_3b0[uVar24 * 2] = pcVar28;
    local_3b0[uVar24 * 2 + 1] = PTR_LAB_043813a8;
  }
  uVar24 = uVar26;
  if (*(long *)(lVar14 + 0x228) != 0) {
    lVar25 = FUN_008cca50();
    pcVar28 = (char *)(lVar25 + 0x1c9);
    if ((*(byte *)(lVar25 + 0x1c8) & 1) != 0) {
      pcVar28 = *(char **)(lVar25 + 0x1d8);
    }
    pcVar22 = *(char **)(lVar14 + 0x228);
    uVar24 = (ulong)((int)uVar26 + 1);
    local_3b0[uVar26 * 2] = pcVar28;
    local_3b0[uVar26 * 2 + 1] = pcVar22;
  }
  local_3b0[uVar24 * 2] = (char *)0x0;
  local_3b0[uVar24 * 2 + 1] = (char *)0x0;
  memcpy(&local_6f0,local_3b0,0x340);
  memcpy(asStack_a30,local_3b0,0x340);
  lVar25 = FUN_008cca50();
  lVar16 = uVar24 - 1;
  pcVar28 = local_3b0[lVar16 * 2];
  sVar15 = strlen(pcVar28);
  sVar3 = (ulong)(*(byte *)(lVar25 + 0x1c8) >> 1);
  if ((*(byte *)(lVar25 + 0x1c8) & 1) != 0) {
    sVar3 = *(size_t *)(lVar25 + 0x1d0);
  }
  if ((sVar15 == sVar3) &&
     (iVar10 = std::string::compare(lVar25 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar28),
     iVar10 == 0)) {
    auStack_700[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_6ef + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_a30 + lVar16 * 0x10) = local_3b0[lVar16 * 2];
  *(code **)(asStack_a30 + (lVar16 * 2 + 1) * 8) = FUN_017af020;
  FUN_00151fe0(param_1,0,2);
  local_a38[0] = FUN_0014feb0(param_1,0xffffffff);
  local_a40 = param_1;
  if ((*PTR_DAT_04381140 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04381140);
    puVar4 = PTR_DAT_04381148;
    if (iVar10 != 0) {
      FUN_017a4b70(PTR_DAT_04381148);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04381140);
    }
  }
  uVar11 = local_a38[0];
  uVar24 = *(ulong *)(PTR_DAT_04381148 + 8);
  puVar4 = *(undefined **)(PTR_DAT_04381148 + 0x10);
  if ((*PTR_DAT_04381148 & 1) == 0) {
    puVar4 = PTR_DAT_04381148 + 1;
    uVar24 = (ulong)((byte)*PTR_DAT_04381148 >> 1);
  }
  FUN_001514f0(param_1,puVar4,uVar24);
  FUN_00152550(param_1,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_1,FUN_017af070,0);
  FUN_00152550(param_1,uVar11,&DAT_0397bfcb);
  lVar25 = 0;
  do {
    if (lVar25 == 1) {
      psVar18 = asStack_a30;
      pbVar17 = (byte *)FUN_017a2f60();
    }
    else if (lVar25 == 0) {
      psVar18 = &local_6f0;
      pbVar17 = (byte *)FUN_017a2d6c();
    }
    else {
      psVar18 = (string *)local_3b0;
      pbVar17 = (byte *)FUN_017a3154();
    }
    pbVar23 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar23 = pbVar17 + 1;
    }
    FUN_00154450(param_1,pbVar23);
    local_a48 = FUN_0014feb0(param_1,0xffffffff);
    local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
    local_a50 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_a80,&local_a40,local_a48);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar14);
    FUN_00155a20(param_1,psVar18,2);
    uVar11 = local_a48;
    if (*(long *)(lVar14 + 600) == 0) {
      lVar16 = *(long *)(lVar14 + 0x260);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0x260);
      uVar11 = local_a48;
    }
    local_a48 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar11,"class_cast");
    }
    uVar11 = local_a48;
    uVar21 = *(undefined8 *)(lVar14 + 0x238);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar14);
    FUN_00151810(param_1,lVar19);
    FUN_001516f0(param_1,uVar21,3);
    FUN_00152550(param_1,uVar11,&DAT_03955ac7);
    uVar11 = local_a48;
    uVar21 = *(undefined8 *)(lVar14 + 0x240);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar14);
    FUN_00151810(param_1,lVar19);
    FUN_001516f0(param_1,uVar21,3);
    FUN_00152550(param_1,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_a80,&local_a50,local_a48);
    }
    else {
      local_a80 = &LAB_017af160;
      uStack_a78 = 0;
      local_a70 = lVar14;
      lStack_a68 = lVar19;
      FUN_017af0c0(param_1,1,&local_a80,local_a48);
      local_a80 = &LAB_017af164;
      uStack_a78 = 0;
      local_a70 = lVar14;
      lStack_a68 = lVar19;
      FUN_017af0c0(param_1,2,&local_a80,local_a48);
    }
    FUN_00151fe0(param_1,0,3);
    uVar11 = FUN_0014feb0(param_1,0xffffffff);
    local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_a80,&local_a40,uVar11);
    if (*(undefined1 **)(lVar14 + 0x230) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0x268) != '\0') goto LAB_017ae86c;
LAB_017ae5b8:
      if (param_1 == 0) goto LAB_017ae8c0;
LAB_017ae5c0:
      uVar13 = local_a48;
      FUN_00150260(param_1,uVar11);
    }
    else {
      uStack_a78 = 0;
      local_a80 = *(undefined1 **)(lVar14 + 0x230);
      local_a70 = lVar14;
      lStack_a68 = lVar19;
      FUN_017af0c0(param_1,4,&local_a80,uVar11);
      if (*(char *)(lVar14 + 0x268) == '\0') goto LAB_017ae5b8;
LAB_017ae86c:
      local_a80 = &LAB_017af160;
      uStack_a78 = 0;
      local_a70 = lVar14;
      lStack_a68 = lVar19;
      FUN_017af0c0(param_1,1,&local_a80,uVar11);
      local_a80 = &LAB_017af164;
      uStack_a78 = 0;
      local_a70 = lVar14;
      lStack_a68 = lVar19;
      FUN_017af0c0(param_1,2,&local_a80,uVar11);
      if (param_1 != 0) goto LAB_017ae5c0;
LAB_017ae8c0:
      uVar13 = local_a48;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar13);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_a50,0xfffffffe);
    lVar25 = lVar25 + 1;
    if (lVar25 == 3) {
      FUN_017a33a4();
      puVar4 = DAT_043cff68;
      if ((DAT_043cff58 & 1) == 0) {
        puVar4 = &DAT_043cff59;
      }
      FUN_00154450(param_1,puVar4);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_a80._0_4_ = 0x1e;
      FUN_008fe304(&local_a50,param_1,&local_a80,&local_a40,uVar11);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar14);
      FUN_00155a20(param_1,local_3b0,2);
      FUN_00151fe0(param_1,0,3);
      uVar13 = FUN_0014feb0(param_1,0xffffffff);
      local_a80 = (undefined1 *)CONCAT44(local_a80._4_4_,0x1e);
      FUN_008fe304(&local_a50,param_1,&local_a80,&local_a40,uVar13);
      local_a80 = *(undefined1 **)(lVar14 + 0x230);
      if (local_a80 != (undefined1 *)0x0) {
        uStack_a78 = 0;
        local_a70 = lVar14;
        lStack_a68 = lVar19;
        FUN_017af0c0(param_1,4,&local_a80,uVar13);
      }
      local_a80 = &LAB_017af228;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a7c5a0;
      local_a70 = lVar14;
      lStack_a68 = lVar19;
      FUN_017af170(param_1,1,&local_a80,uVar13);
      local_a80 = &LAB_017af22c;
      uStack_a78 = 0;
      local_a60 = 0;
      puStack_a58 = &DAT_03a7c5a0;
      local_a70 = lVar14;
      lStack_a68 = lVar19;
      FUN_017af170(param_1,2,&local_a80,uVar13);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar13);
      }
      FUN_00152ae0(param_1,uVar11);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_a38[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


