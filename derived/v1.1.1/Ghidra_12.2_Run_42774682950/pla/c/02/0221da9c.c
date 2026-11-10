/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0221da9c; name: FUN_0221da9c
 */


void FUN_0221da9c(long param_1,long param_2)

{
  ulong *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  size_t sVar14;
  long lVar15;
  size_t sVar16;
  byte *pbVar17;
  string *psVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  undefined8 uVar23;
  char *pcVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  long *plVar30;
  char *pcVar31;
  undefined1 *puVar32;
  undefined1 *local_b70;
  undefined8 uStack_b68;
  long local_b60;
  long lStack_b58;
  undefined8 local_b50;
  undefined *puStack_b48;
  long local_b40;
  undefined4 local_b38;
  long local_b30;
  undefined4 local_b28 [2];
  string asStack_b20 [896];
  undefined8 auStack_7a0 [2];
  string local_790;
  undefined1 auStack_78f [7];
  size_t local_788;
  undefined1 *local_780;
  char *apcStack_410 [2];
  char *local_400 [2];
  long local_3f0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043de928 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de928), iVar9 != 0)) {
    local_3f0 = 0;
    local_400[1] = (undefined1 *)0x0;
    local_400[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383998 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04383998);
      puVar19 = PTR_DAT_043839a0;
      if (iVar9 != 0) {
        FUN_02020fd0(PTR_DAT_043839a0);
        FUN_00100250(PTR__string_04379718,puVar19,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383998);
      }
    }
    pcVar31 = (char *)FUN_022197e4(local_400,PTR_DAT_043839a0);
    psVar18 = (string *)std::string::append(pcVar31);
    std::string::string((string *)&DAT_043de910,psVar18);
    lVar13 = local_3f0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_400[0] & 1) != 0) && (local_3f0 != 0)) {
      lVar26 = tpidr_el0;
      plVar30 = *(long **)(lVar26 + 0x20);
      if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
        *(long **)(lVar26 + 0x20) = DAT_043f1798;
        plVar30 = plVar7;
      }
      uVar25 = (**(code **)(*plVar30 + 0xc0))(plVar30);
      if ((uVar25 & 1) != 0) {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar26 + 0x38d480)) {
          FUN_02bcc824(plVar30,lVar13,0,8);
          goto LAB_02220758;
        }
      }
      (**(code **)(*plVar30 + 0x18))(plVar30,lVar13,0,8);
    }
LAB_02220758:
    FUN_00100250(PTR__string_04379718,&DAT_043de910,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043de928);
  }
  std::string::string(&local_790,(string *)&DAT_043de910);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043de908);
  if (((byte)local_790 & 1) == 0) {
    sVar16 = (size_t)((byte)local_790 >> 1);
  }
  else {
    sVar16 = local_788;
  }
  std::string::append((ulong)&local_790,(char)iVar9);
  if (((byte)local_790 & 1) == 0) {
    puVar32 = auStack_78f;
    local_788 = (size_t)((byte)local_790 >> 1);
  }
  else {
    puVar32 = local_780;
  }
  snprintf(puVar32 + (sVar16 - 1),local_788,"%d",(ulong)DAT_043de908);
  DAT_043de908 = DAT_043de908 + 1;
  if (((DAT_043de948 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de948), iVar9 != 0)) {
    local_3f0 = 0;
    local_400[1] = (undefined1 *)0x0;
    local_400[0] = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383998 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04383998);
      puVar19 = PTR_DAT_043839a0;
      if (iVar9 != 0) {
        FUN_02020fd0(PTR_DAT_043839a0);
        FUN_00100250(PTR__string_04379718,puVar19,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383998);
      }
    }
    pcVar31 = (char *)FUN_022197e4(local_400,PTR_DAT_043839a0);
    psVar18 = (string *)std::string::append(pcVar31);
    std::string::string((string *)&DAT_043de930,psVar18);
    lVar13 = local_3f0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_400[0] & 1) != 0) && (local_3f0 != 0)) {
      lVar26 = tpidr_el0;
      plVar30 = *(long **)(lVar26 + 0x20);
      if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
        *(long **)(lVar26 + 0x20) = DAT_043f1798;
        plVar30 = plVar7;
      }
      uVar25 = (**(code **)(*plVar30 + 0xc0))(plVar30);
      if ((uVar25 & 1) != 0) {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar26 + 0x38d480)) {
          FUN_02bcc824(plVar30,lVar13,0,8);
          goto LAB_022208b0;
        }
      }
      (**(code **)(*plVar30 + 0x18))(plVar30,lVar13,0,8);
    }
LAB_022208b0:
    FUN_00100250(PTR__string_04379718,&DAT_043de930,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043de948);
  }
  if ((DAT_043de930 & 1) == 0) {
    uVar29 = 0x43de931;
    if (((byte)local_790 & 1) != 0) goto LAB_0221db88;
LAB_022204d8:
    puVar32 = (undefined1 *)((ulong)&local_790 | 1);
  }
  else {
    uVar29 = DAT_043de940;
    if (((byte)local_790 & 1) == 0) goto LAB_022204d8;
LAB_0221db88:
    puVar32 = local_780;
  }
  if (((DAT_043de958 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de958), iVar9 != 0)) {
    DAT_043de950 = 0x2c0;
    __cxa_guard_release(&DAT_043de958);
  }
  if (((DAT_043de968 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043de968), iVar9 != 0)) {
    DAT_043de960 = 0x2c7;
    __cxa_guard_release(&DAT_043de968);
  }
  uVar25 = DAT_043de950;
  lVar13 = FUN_00153520(param_1,DAT_043de950);
  if ((uVar25 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2c0)) ||
     (puVar21 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar21 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar25 = DAT_043de960;
    lVar13 = FUN_00153520(param_1,DAT_043de960);
    if ((uVar25 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2c0)) ||
       (puVar21 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar21 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_02221300();
      if ((DAT_043de970 & 1) == 0) {
        puVar20 = &DAT_043de971;
      }
      else {
        puVar20 = DAT_043de980;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar20);
      puVar21 = (undefined8 *)0x0;
    }
  }
  uVar23 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar21[1] = uVar23;
  puVar21[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar13 = *(long *)(param_2 + 0x18);
  puVar21[3] = lVar13;
  lVar26 = *(long *)(param_2 + 0x20);
  puVar21[4] = lVar26;
  *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar26 != 0) {
    uVar27 = puVar21[2];
    uVar25 = *(ulong *)(lVar13 + 8);
    if ((uVar27 & uVar27 - 1) == 0) {
      uVar25 = uVar27 - 1 & uVar25;
    }
    else if (uVar27 <= uVar25) {
      uVar4 = 0;
      if (uVar27 != 0) {
        uVar4 = uVar25 / uVar27;
      }
      uVar25 = uVar25 - uVar4 * uVar27;
    }
    *(undefined8 **)(puVar21[1] + uVar25 * 8) = puVar21 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar23 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  puVar21[10] = 0;
  puVar21[8] = 0;
  puVar21[9] = 0;
  puVar21[6] = uVar23;
  puVar21[7] = uVar3;
  puVar21[8] = *(undefined8 *)(param_2 + 0x40);
  puVar21[9] = *(undefined8 *)(param_2 + 0x48);
  puVar21[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar21 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar21 = &PTR_FUN_0425b7b8;
  memcpy(puVar21 + 0xc,(void *)(param_2 + 0x60),0x260);
  iVar9 = FUN_00154450(param_1,puVar32);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_022212c0,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar10 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar10);
  }
  FUN_001522a0(param_1,uVar29);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,uVar29);
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_790 & 1) != 0) && (local_780 != (undefined1 *)0x0)) {
    lVar26 = tpidr_el0;
    plVar30 = *(long **)(lVar26 + 0x20);
    if (*(long **)(lVar26 + 0x20) == (long *)0x0) {
      *(long **)(lVar26 + 0x20) = DAT_043f1798;
      plVar30 = plVar7;
    }
    uVar25 = (**(code **)(*plVar30 + 0xc0))(plVar30);
    if ((uVar25 & 1) != 0) {
      if (*(char *)(lVar26 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar26 + 0x38d488) = 1;
        *(undefined8 *)(lVar26 + 0x38d478) = 0;
        *(undefined8 *)(lVar26 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar26 + 0x38d480)) {
        FUN_02bcc824(plVar30,local_780,0,8);
        goto LAB_0221ddfc;
      }
    }
    (**(code **)(*plVar30 + 0x18))(plVar30,local_780,0,8);
  }
LAB_0221ddfc:
  memset(local_400,0,0x390);
  puVar6 = PTR_DAT_043816f8;
  puVar19 = PTR_DAT_0437dcc8;
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *puVar6 = 1;
  *puVar19 = 1;
  pcVar31 = *(char **)(lVar13 + 0x60);
  *(undefined1 **)(lVar13 + 0x2a0) = &LAB_02221748;
  *(undefined1 **)(lVar13 + 0x2a8) = &LAB_022218a8;
  *(undefined1 **)(lVar13 + 0x290) = &LAB_02221b40;
  *(undefined1 **)(lVar13 + 0x298) = &LAB_02221d60;
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  lVar28 = lVar13 + 8;
  puVar32 = &LAB_02219bec;
  if (uVar11 != 0) {
    puVar32 = &LAB_02219b60;
  }
  puVar1 = (ulong *)(lVar13 + 0x2b8);
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar32;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar27 = 0;
            *(undefined1 **)(lVar13 + 0x270) = puVar32;
            goto LAB_0221e06c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar32;
      }
      uVar27 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221e06c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  uVar27 = 1;
  local_400[0] = pcVar31;
  local_400[1] = puVar32;
LAB_0221e06c:
  pcVar31 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02219dec;
  if (uVar11 != 0) {
    pcVar2 = FUN_02219cac;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221e1b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221e1b4;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221e1b4:
  pcVar31 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_02219efc;
  if (uVar11 != 0) {
    pcVar2 = FUN_02219e7c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221e2f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221e2f8;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221e2f8:
  pcVar31 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221a034;
  if (uVar11 != 0) {
    pcVar2 = FUN_02219fb0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221e43c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221e43c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221e43c:
  pcVar31 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221a2b4;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221a100;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221e580;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221e580;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221e580:
  pcVar31 = *(char **)(lVar13 + 0xd8);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221a3a0;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221a344;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221e6c4;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221e6c4;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221e6c4:
  pcVar31 = *(char **)(lVar13 + 0xf0);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar24 = &LAB_0221a468;
  if (uVar11 != 0) {
    pcVar24 = &LAB_0221a3e8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar24;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x270) = pcVar24;
            goto LAB_0221e808;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar24;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221e808;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = pcVar24;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221e808:
  pcVar31 = *(char **)(lVar13 + 0x108);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar24 = &LAB_0221a538;
  if (uVar11 != 0) {
    pcVar24 = &LAB_0221a4b0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar24;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x270) = pcVar24;
            goto LAB_0221e94c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar24;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221e94c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = pcVar24;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221e94c:
  pcVar31 = *(char **)(lVar13 + 0x120);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221a694;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221a5f4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221ea90;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221ea90;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221ea90:
  pcVar31 = *(char **)(lVar13 + 0x138);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221a770;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221a6dc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221ebd4;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221ebd4;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221ebd4:
  pcVar31 = *(char **)(lVar13 + 0x150);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221a84c;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221a7b8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221ed18;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221ed18;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221ed18:
  pcVar31 = *(char **)(lVar13 + 0x168);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar24 = &LAB_0221aa2c;
  if (uVar11 != 0) {
    pcVar24 = &LAB_0221a894;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar24;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x270) = pcVar24;
            goto LAB_0221ee5c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar24;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221ee5c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = pcVar24;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221ee5c:
  pcVar31 = *(char **)(lVar13 + 0x170);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221d0e0;
  if (uVar11 != 0) {
    pcVar2 = (code *)&LAB_0221ab14;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221efa0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221efa0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221efa0:
  pcVar31 = *(char **)(lVar13 + 0x178);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221d260;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221d1cc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221f0e4;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221f0e4;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221f0e4:
  pcVar31 = *(char **)(lVar13 + 400);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar24 = &LAB_0221d318;
  if (uVar11 != 0) {
    pcVar24 = &LAB_0221d2a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar24;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x270) = pcVar24;
            goto LAB_0221f228;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar24;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221f228;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = pcVar24;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221f228:
  pcVar31 = *(char **)(lVar13 + 0x1a8);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar24 = &LAB_0221d3d0;
  if (uVar11 != 0) {
    pcVar24 = &LAB_0221d360;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar24;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x270) = pcVar24;
            goto LAB_0221f36c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar24;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221f36c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = pcVar24;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221f36c:
  pcVar31 = *(char **)(lVar13 + 0x1c0);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar24 = &LAB_0221d488;
  if (uVar11 != 0) {
    pcVar24 = &LAB_0221d418;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar24;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x270) = pcVar24;
            goto LAB_0221f4b0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar24;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221f4b0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = pcVar24;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221f4b0:
  pcVar31 = *(char **)(lVar13 + 0x1d8);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar24 = &LAB_0221d540;
  if (uVar11 != 0) {
    pcVar24 = &LAB_0221d4d0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar24;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x270) = pcVar24;
            goto LAB_0221f5f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar24;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221f5f4;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = pcVar24;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221f5f4:
  pcVar31 = *(char **)(lVar13 + 0x1f0);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar24 = &LAB_0221d614;
  if (uVar11 != 0) {
    pcVar24 = &LAB_0221d588;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar24;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x270) = pcVar24;
            goto LAB_0221f738;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar24;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221f738;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = pcVar24;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221f738:
  pcVar31 = *(char **)(lVar13 + 0x208);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221d6f4;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221d65c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221f87c;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221f87c;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221f87c:
  pcVar31 = *(char **)(lVar13 + 0x220);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221d7d4;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221d73c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221f9c0;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221f9c0;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221f9c0:
  pcVar31 = *(char **)(lVar13 + 0x238);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221d8b4;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221d81c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221fb04;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221fb04;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221fb04:
  pcVar31 = *(char **)(lVar13 + 0x250);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221d994;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221d8fc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar2;
            goto LAB_0221fc48;
          }
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      goto LAB_0221fc48;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar27 = (ulong)((int)uVar27 + 1);
LAB_0221fc48:
  pcVar31 = *(char **)(lVar13 + 0x268);
  sVar14 = strlen(pcVar31);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar31,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar26 = 0;
  uVar25 = 0;
  pcVar2 = FUN_0221da3c;
  if (uVar11 != 0) {
    pcVar2 = FUN_0221d9dc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar22 = (byte *)(lVar15 + lVar26);
    sVar14 = strlen(pcVar31);
    sVar16 = (ulong)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar22 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar22,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
       iVar9 == 0)) {
      iVar9 = (int)uVar25;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x270) = pcVar2;
        uVar11 = (uint)*puVar1;
        goto joined_r0x0221fd30;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar2;
      }
      else {
        if (iVar9 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar25 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar2;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar25 & 0x3f);
      uVar11 = (uint)*puVar1;
      goto joined_r0x0221fd30;
    }
    uVar25 = uVar25 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar25 != 0x20);
  local_400[uVar27 * 2] = pcVar31;
  local_400[uVar27 * 2 + 1] = (char *)pcVar2;
  uVar11 = (uint)*puVar1;
  uVar27 = (ulong)((int)uVar27 + 1);
joined_r0x0221fd30:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  uVar25 = uVar27;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar26 = FUN_008cca50();
    if ((*(byte *)(lVar26 + 0x180) & 1) == 0) {
      pcVar31 = (char *)(lVar26 + 0x181);
    }
    else {
      pcVar31 = *(char **)(lVar26 + 400);
    }
    uVar25 = (ulong)((int)uVar27 + 1);
    local_400[uVar27 * 2] = pcVar31;
    local_400[uVar27 * 2 + 1] = PTR_LAB_04383970;
    uVar11 = (uint)*puVar1;
  }
  uVar27 = uVar25;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar26 = FUN_008cca50();
    if ((*(byte *)(lVar26 + 0x288) & 1) == 0) {
      pcVar31 = (char *)(lVar26 + 0x289);
    }
    else {
      pcVar31 = *(char **)(lVar26 + 0x298);
    }
    uVar27 = (ulong)((int)uVar25 + 1);
    local_400[uVar25 * 2] = pcVar31;
    local_400[uVar25 * 2 + 1] = PTR_LAB_04383978;
  }
  uVar25 = uVar27;
  if (*(long *)(lVar13 + 0x270) != 0) {
    lVar26 = FUN_008cca50();
    if ((*(byte *)(lVar26 + 0x1c8) & 1) == 0) {
      pcVar31 = (char *)(lVar26 + 0x1c9);
    }
    else {
      pcVar31 = *(char **)(lVar26 + 0x1d8);
    }
    pcVar24 = *(char **)(lVar13 + 0x270);
    uVar25 = (ulong)((int)uVar27 + 1);
    local_400[uVar27 * 2] = pcVar31;
    local_400[uVar27 * 2 + 1] = pcVar24;
  }
  local_400[uVar25 * 2] = (char *)0x0;
  local_400[uVar25 * 2 + 1] = (char *)0x0;
  memcpy(&local_790,local_400,0x390);
  memcpy(asStack_b20,local_400,0x390);
  lVar26 = FUN_008cca50();
  lVar15 = uVar25 - 1;
  pcVar31 = local_400[lVar15 * 2];
  sVar16 = strlen(pcVar31);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) == 0) {
    sVar14 = (size_t)(*(byte *)(lVar26 + 0x1c8) >> 1);
  }
  else {
    sVar14 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar16 == sVar14) &&
     (iVar9 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar31),
     iVar9 == 0)) {
    auStack_7a0[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_78f + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_b20 + lVar15 * 0x10) = local_400[lVar15 * 2];
  *(code **)(asStack_b20 + (lVar15 * 2 + 1) * 8) = FUN_02220db0;
  FUN_00151fe0(param_1,0,2);
  local_b28[0] = FUN_0014feb0(param_1,0xffffffff);
  local_b30 = param_1;
  if ((*PTR_DAT_04383998 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04383998);
    puVar19 = PTR_DAT_043839a0;
    if (iVar9 != 0) {
      FUN_02020fd0(PTR_DAT_043839a0);
      FUN_00100250(PTR__string_04379718,puVar19,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04383998);
    }
  }
  uVar10 = local_b28[0];
  uVar25 = *(ulong *)(PTR_DAT_043839a0 + 8);
  puVar19 = *(undefined **)(PTR_DAT_043839a0 + 0x10);
  if ((*PTR_DAT_043839a0 & 1) == 0) {
    puVar19 = PTR_DAT_043839a0 + 1;
    uVar25 = (ulong)((byte)*PTR_DAT_043839a0 >> 1);
  }
  FUN_001514f0(param_1,puVar19,uVar25);
  FUN_00152550(param_1,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_1,FUN_02220e00,0);
  FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
  puVar19 = PTR_DAT_04383920;
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      pbVar17 = (byte *)FUN_020213bc();
      pbVar22 = *(byte **)(pbVar17 + 0x10);
      if ((*pbVar17 & 1) == 0) {
        pbVar22 = pbVar17 + 1;
      }
      psVar18 = asStack_b20;
    }
    else if (lVar26 == 0) {
      if (((*PTR_DAT_04383918 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04383918), iVar9 != 0)) {
        uStack_b68 = 0;
        local_b60 = 0;
        local_b70 = (undefined1 *)0x2e6c6f7308;
        uVar29 = FUN_02020070();
        psVar18 = (string *)FUN_022197e4(&local_b70,uVar29);
        std::string::string((string *)puVar19,psVar18);
        lVar15 = local_b60;
        plVar7 = DAT_043f1798;
        if ((((ulong)local_b70 & 1) != 0) && (local_b60 != 0)) {
          lVar5 = tpidr_el0;
          plVar30 = *(long **)(lVar5 + 0x20);
          if (*(long **)(lVar5 + 0x20) == (long *)0x0) {
            *(long **)(lVar5 + 0x20) = DAT_043f1798;
            plVar30 = plVar7;
          }
          uVar25 = (**(code **)(*plVar30 + 0xc0))(plVar30);
          if ((uVar25 & 1) != 0) {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar30,lVar15,0,8);
              goto LAB_02220608;
            }
          }
          (**(code **)(*plVar30 + 0x18))(plVar30,lVar15,0,8);
        }
LAB_02220608:
        FUN_00100250(PTR__string_04379718,puVar19,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383918);
      }
      pbVar22 = *(byte **)(puVar19 + 0x10);
      if ((*puVar19 & 1) == 0) {
        pbVar22 = puVar19 + 1;
      }
      psVar18 = &local_790;
    }
    else {
      pbVar17 = (byte *)FUN_02020d8c();
      pbVar22 = *(byte **)(pbVar17 + 0x10);
      if ((*pbVar17 & 1) == 0) {
        pbVar22 = pbVar17 + 1;
      }
      psVar18 = (string *)local_400;
    }
    FUN_00154450(param_1,pbVar22);
    local_b38 = FUN_0014feb0(param_1,0xffffffff);
    local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
    local_b40 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_b70,&local_b30,local_b38);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,psVar18,2);
    uVar10 = local_b38;
    if (*(long *)(lVar13 + 0x2a0) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_check");
    }
    uVar10 = local_b38;
    if (*(long *)(lVar13 + 0x2a8) != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_cast");
    }
    uVar10 = local_b38;
    uVar29 = *(undefined8 *)(lVar13 + 0x280);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar28);
    FUN_001516f0(param_1,uVar29,3);
    FUN_00152550(param_1,uVar10,&DAT_03955ac7);
    uVar10 = local_b38;
    uVar29 = *(undefined8 *)(lVar13 + 0x288);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar28);
    FUN_001516f0(param_1,uVar29,3);
    FUN_00152550(param_1,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_b70,&local_b40,local_b38);
    }
    else {
      local_b70 = &LAB_02220ef0;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar28;
      FUN_02220e50(param_1,1,&local_b70,local_b38);
      local_b70 = &LAB_022211fc;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar28;
      FUN_02220e50(param_1,2,&local_b70,local_b38);
    }
    FUN_00151fe0(param_1,0,3);
    uVar10 = FUN_0014feb0(param_1,0xffffffff);
    local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_b70,&local_b30,uVar10);
    if (*(undefined1 **)(lVar13 + 0x278) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x2b0) != '\0') goto LAB_022203c8;
LAB_0222014c:
      if (param_1 == 0) goto LAB_02220418;
LAB_02220154:
      uVar12 = local_b38;
      FUN_00150260(param_1,uVar10);
    }
    else {
      uStack_b68 = 0;
      local_b70 = *(undefined1 **)(lVar13 + 0x278);
      local_b60 = lVar13;
      lStack_b58 = lVar28;
      FUN_02220e50(param_1,4,&local_b70,uVar10);
      if (*(char *)(lVar13 + 0x2b0) == '\0') goto LAB_0222014c;
LAB_022203c8:
      local_b70 = &LAB_02220ef0;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar28;
      FUN_02220e50(param_1,1,&local_b70,uVar10);
      local_b70 = &LAB_022211fc;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar28;
      FUN_02220e50(param_1,2,&local_b70,uVar10);
      if (param_1 != 0) goto LAB_02220154;
LAB_02220418:
      uVar12 = local_b38;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_b40,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_02218fac();
      if ((DAT_043de6d0 & 1) == 0) {
        puVar19 = &DAT_043de6d1;
      }
      else {
        puVar19 = DAT_043de6e0;
      }
      FUN_00154450(param_1,puVar19);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_b70._0_4_ = 0x1e;
      FUN_008fe304(&local_b40,param_1,&local_b70,&local_b30,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,local_400,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
      FUN_008fe304(&local_b40,param_1,&local_b70,&local_b30,uVar12);
      local_b70 = *(undefined1 **)(lVar13 + 0x278);
      if (local_b70 != (undefined1 *)0x0) {
        uStack_b68 = 0;
        local_b60 = lVar13;
        lStack_b58 = lVar28;
        FUN_02220e50(param_1,4,&local_b70,uVar12);
      }
      local_b70 = &LAB_022212b8;
      uStack_b68 = 0;
      local_b50 = 0;
      puStack_b48 = &DAT_03a7d3c8;
      local_b60 = lVar13;
      lStack_b58 = lVar28;
      FUN_02221200(param_1,1,&local_b70,uVar12);
      local_b70 = &LAB_022212bc;
      uStack_b68 = 0;
      local_b50 = 0;
      puStack_b48 = &DAT_03a7d3c8;
      local_b60 = lVar13;
      lStack_b58 = lVar28;
      FUN_02221200(param_1,2,&local_b70,uVar12);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar12);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_b28[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


