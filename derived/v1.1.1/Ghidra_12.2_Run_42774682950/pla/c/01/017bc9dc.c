/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017bc9dc; name: FUN_017bc9dc
 */


undefined8 FUN_017bc9dc(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char cVar5;
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
  
  if (((DAT_043d1040 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043d1040), iVar9 != 0)) {
    local_320 = 0;
    local_328 = (code *)0x0;
    local_330 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043814d8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043814d8);
      puVar2 = PTR_DAT_043814e0;
      if (iVar9 != 0) {
        FUN_017c16b0(PTR_DAT_043814e0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043814d8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_043814e0 + 0x10);
    if ((*PTR_DAT_043814e0 & 1) == 0) {
      puVar2 = PTR_DAT_043814e0 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_330,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043d1028,psVar17);
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
          goto LAB_017be438;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_017be438:
    FUN_00100250(PTR__string_04379718,&DAT_043d1028,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d1040);
  }
  std::string::string(&local_5f0,(string *)&DAT_043d1028);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d1020);
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
  snprintf(puVar27 + (sVar1 - 1),local_5e8,"%d",(ulong)DAT_043d1020);
  DAT_043d1020 = DAT_043d1020 + 1;
  if (((DAT_043d1060 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043d1060), iVar9 != 0)) {
    local_320 = 0;
    local_328 = (code *)0x0;
    local_330 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_043814d8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_043814d8);
      puVar2 = PTR_DAT_043814e0;
      if (iVar9 != 0) {
        FUN_017c16b0(PTR_DAT_043814e0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043814d8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_043814e0 + 0x10);
    if ((*PTR_DAT_043814e0 & 1) == 0) {
      puVar2 = PTR_DAT_043814e0 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_330,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043d1048,psVar17);
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
          goto LAB_017be5a8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_017be5a8:
    FUN_00100250(PTR__string_04379718,&DAT_043d1048,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d1060);
  }
  puVar2 = DAT_043d1058;
  if ((DAT_043d1048 & 1) == 0) {
    puVar2 = &DAT_043d1049;
  }
  if (((byte)local_5f0 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_5f0 | 1);
  }
  else {
    puVar27 = local_5e0;
  }
  if (((DAT_043d1070 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043d1070), iVar9 != 0)) {
    DAT_043d1068 = 0x158;
    __cxa_guard_release(&DAT_043d1070);
  }
  if (((DAT_043d1080 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043d1080), iVar9 != 0)) {
    DAT_043d1078 = 0x15f;
    __cxa_guard_release(&DAT_043d1080);
  }
  uVar22 = DAT_043d1068;
  lVar13 = FUN_00153520(param_2,DAT_043d1068);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x158)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043d1078;
    lVar13 = FUN_00153520(param_2,DAT_043d1078);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x158)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_017cf700();
      puVar3 = DAT_043d1098;
      if ((DAT_043d1088 & 1) == 0) {
        puVar3 = &DAT_043d1089;
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
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar4;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_04225450;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xf8);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_017cf6c0,0);
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
        goto LAB_017bcd48;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_5e0,0,8);
  }
LAB_017bcd48:
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
  pcVar20 = FUN_017c207c;
  if (uVar11 != 0) {
    pcVar20 = FUN_017c1e80;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bcf44;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bcf44;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_330 = pcVar26;
  local_328 = pcVar20;
LAB_017bcf44:
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
  pcVar20 = FUN_017c5810;
  if (uVar11 != 0) {
    pcVar20 = FUN_017c2174;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bd084;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bd084;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017bd084:
  pcVar26 = *(char **)(lVar13 + 0x80);
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
  pcVar20 = FUN_017c9040;
  if (uVar11 != 0) {
    pcVar20 = FUN_017c5868;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bd1c4;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bd1c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017bd1c4:
  pcVar26 = *(char **)(lVar13 + 0x88);
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
  pcVar20 = FUN_017cc680;
  if (uVar11 != 0) {
    pcVar20 = FUN_017c9098;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bd304;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bd304;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017bd304:
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
  pcVar20 = FUN_017cc81c;
  if (uVar11 != 0) {
    pcVar20 = FUN_017cc7d4;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bd444;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bd444;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017bd444:
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
  pcVar20 = FUN_017cca20;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_017cc864;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bd584;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bd584;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017bd584:
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
  pcVar20 = FUN_017ccac0;
  if (uVar11 != 0) {
    pcVar20 = FUN_017cca78;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bd6c4;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bd6c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017bd6c4:
  pcVar26 = *(char **)(lVar13 + 0xd8);
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
  pcVar20 = FUN_017cccd0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_017ccb08;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bd804;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bd804;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017bd804:
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
  pcVar20 = (code *)&LAB_017cd334;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_017ccd28;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bd944;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bd944;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017bd944:
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
  pcVar20 = (code *)&LAB_017cefb4;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_017cd66c;
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
            *(code **)(lVar13 + 0x108) = pcVar20;
            goto LAB_017bda54;
          }
          *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017bda54;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_330)[uVar24 * 2] = pcVar26;
  (&local_328)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_017bda54:
  pcVar26 = *(char **)(lVar13 + 0x100);
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
  pcVar20 = (code *)&LAB_017cf1c4;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_017cf190;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar22 == 0x20) {
LAB_017be144:
      (&local_330)[uVar24 * 2] = pcVar26;
      (&local_328)[uVar24 * 2] = pcVar20;
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x150);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x017bdb38:
      if ((uVar11 >> 0x11 & 1) == 0) {
LAB_017bdb3c:
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x150);
      }
LAB_017bdb44:
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x150);
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
        (&local_328)[uVar24 * 2] = (code *)PTR_LAB_043814c8;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x150);
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
        (&local_328)[uVar22 * 2] = (code *)PTR_LAB_043814d0;
      }
      uVar22 = uVar24;
      if (*(long *)(lVar13 + 0x108) != 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x1c9);
        if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(code **)(lVar13 + 0x108);
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
      *(undefined1 **)(asStack_8b0 + (lVar15 * 2 + 1) * 8) = &LAB_017cf200;
      FUN_00151fe0(param_2,0,2);
      local_8b8[0] = FUN_0014feb0(param_2,0xffffffff);
      local_8c0 = param_2;
      if ((*PTR_DAT_043814d8 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_043814d8);
        puVar2 = PTR_DAT_043814e0;
        if (iVar9 != 0) {
          FUN_017c16b0(PTR_DAT_043814e0);
          FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_043814d8);
        }
      }
      uVar10 = local_8b8[0];
      uVar22 = *(ulong *)(PTR_DAT_043814e0 + 8);
      puVar2 = *(undefined **)(PTR_DAT_043814e0 + 0x10);
      if ((*PTR_DAT_043814e0 & 1) == 0) {
        puVar2 = PTR_DAT_043814e0 + 1;
        uVar22 = (ulong)((byte)*PTR_DAT_043814e0 >> 1);
      }
      FUN_001514f0(param_2,puVar2,uVar22);
      FUN_00152550(param_2,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_017cdc30,0);
      FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar17 = asStack_8b0;
          pbVar16 = (byte *)FUN_017bf950();
        }
        else if (lVar28 == 0) {
          psVar17 = &local_5f0;
          pbVar16 = (byte *)FUN_017bf75c();
        }
        else {
          psVar17 = (string *)&local_330;
          pbVar16 = (byte *)FUN_017bfb44();
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
        if (*(long *)(lVar13 + 0x138) == 0) {
          lVar15 = *(long *)(lVar13 + 0x140);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_check");
          lVar15 = *(long *)(lVar13 + 0x140);
          uVar10 = local_8c8;
        }
        local_8c8 = uVar10;
        if (lVar15 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_cast");
        }
        uVar10 = local_8c8;
        uVar19 = *(undefined8 *)(lVar13 + 0x118);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_03955ac7);
        uVar10 = local_8c8;
        uVar19 = *(undefined8 *)(lVar13 + 0x120);
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
          local_900 = &LAB_017cf2f0;
          uStack_8f8 = 0;
          local_8f0 = lVar13;
          lStack_8e8 = lVar23;
          FUN_017cf250(param_2,1,&local_900,local_8c8);
          local_900 = &LAB_017cf5fc;
          uStack_8f8 = 0;
          local_8f0 = lVar13;
          lStack_8e8 = lVar23;
          FUN_017cf250(param_2,2,&local_900,local_8c8);
        }
        FUN_00151fe0(param_2,0,3);
        uVar10 = FUN_0014feb0(param_2,0xffffffff);
        local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_2,&local_900,&local_8c0,uVar10);
        if (*(undefined1 **)(lVar13 + 0x110) == (undefined1 *)0x0) {
          cVar5 = *(char *)(lVar13 + 0x148);
        }
        else {
          uStack_8f8 = 0;
          local_900 = *(undefined1 **)(lVar13 + 0x110);
          local_8f0 = lVar13;
          lStack_8e8 = lVar23;
          FUN_017cf250(param_2,4,&local_900,uVar10);
          cVar5 = *(char *)(lVar13 + 0x148);
        }
        if (cVar5 != '\0') {
          local_900 = &LAB_017cf2f0;
          uStack_8f8 = 0;
          local_8f0 = lVar13;
          lStack_8e8 = lVar23;
          FUN_017cf250(param_2,1,&local_900,uVar10);
          local_900 = &LAB_017cf5fc;
          uStack_8f8 = 0;
          local_8f0 = lVar13;
          lStack_8e8 = lVar23;
          FUN_017cf250(param_2,2,&local_900,uVar10);
        }
        uVar12 = local_8c8;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar10);
        }
        FUN_00152ae0(param_2,uVar12);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_8d0,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_017bfd94();
      puVar2 = DAT_043d08f8;
      if ((DAT_043d08e8 & 1) == 0) {
        puVar2 = &DAT_043d08e9;
      }
      FUN_00154450(param_2,puVar2);
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
      local_900 = *(undefined1 **)(lVar13 + 0x110);
      if (local_900 != (undefined1 *)0x0) {
        uStack_8f8 = 0;
        local_8f0 = lVar13;
        lStack_8e8 = lVar23;
        FUN_017cf250(param_2,4,&local_900,uVar12);
      }
      local_900 = &LAB_017cf6b8;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7c5b0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_017cf600(param_2,1,&local_900,uVar12);
      local_900 = &LAB_017cf6bc;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7c5b0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_017cf600(param_2,2,&local_900,uVar12);
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
  }
  iVar9 = (int)uVar22;
  if (iVar9 == 0x13) {
    *(code **)(lVar13 + 0x108) = pcVar20;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x150);
    goto joined_r0x017bdb38;
  }
  if (iVar9 == 1) {
    *(code **)(lVar13 + 0x30) = pcVar20;
  }
  else {
    if (iVar9 != 2) {
      *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
      goto LAB_017be144;
    }
    *(code **)(lVar13 + 0x38) = pcVar20;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0x150) = *(ulong *)(lVar13 + 0x150) | 1L << (uVar22 & 0x3f);
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x150);
  if ((uVar11 >> 0x11 & 1) == 0) goto LAB_017bdb3c;
  goto LAB_017bdb44;
}


