/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02005a54; name: FUN_02005a54
 */


void FUN_02005a54(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
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
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  undefined1 *local_b40;
  undefined8 uStack_b38;
  long local_b30;
  long lStack_b28;
  undefined8 local_b20;
  undefined *puStack_b18;
  long local_b10;
  undefined4 local_b08;
  long local_b00;
  undefined4 local_af8 [2];
  string asStack_af0 [880];
  undefined8 auStack_780 [2];
  string local_770;
  undefined1 auStack_76f [7];
  size_t local_768;
  undefined1 *local_760;
  char *apcStack_400 [2];
  char *local_3f0;
  code *local_3e8;
  long local_3e0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043d6300 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d6300), iVar8 != 0)) {
    local_3e0 = 0;
    local_3e8 = (code *)0x0;
    local_3f0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04381600 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04381600);
      puVar2 = PTR_DAT_04381608;
      if (iVar8 != 0) {
        FUN_017c39d0(PTR_DAT_04381608);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04381600);
      }
    }
    pcVar27 = (char *)FUN_02002c90(&local_3f0,PTR_DAT_04381608);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043d62e8,psVar17);
    lVar12 = local_3e0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3f0 & 1) != 0) && (local_3e0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
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
          FUN_02bcc824(plVar26,lVar12,0,8);
          goto LAB_0200856c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_0200856c:
    FUN_00100250(PTR__string_04379718,&DAT_043d62e8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d6300);
  }
  std::string::string(&local_770,(string *)&DAT_043d62e8);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d62e0);
  if (((byte)local_770 & 1) == 0) {
    uVar23 = (ulong)((byte)local_770 >> 1);
  }
  else {
    uVar23 = local_768;
  }
  std::string::append((ulong)&local_770,(char)iVar8);
  if (((byte)local_770 & 1) == 0) {
    puVar28 = auStack_76f;
    local_768 = (size_t)((byte)local_770 >> 1);
  }
  else {
    puVar28 = local_760;
  }
  snprintf(puVar28 + (uVar23 - 1),local_768,"%d",(ulong)DAT_043d62e0);
  DAT_043d62e0 = DAT_043d62e0 + 1;
  if (((DAT_043d6320 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d6320), iVar8 != 0)) {
    local_3e0 = 0;
    local_3e8 = (code *)0x0;
    local_3f0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04381600 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04381600);
      puVar2 = PTR_DAT_04381608;
      if (iVar8 != 0) {
        FUN_017c39d0(PTR_DAT_04381608);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04381600);
      }
    }
    pcVar27 = (char *)FUN_02002c90(&local_3f0,PTR_DAT_04381608);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043d6308,psVar17);
    lVar12 = local_3e0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3f0 & 1) != 0) && (local_3e0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
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
          FUN_02bcc824(plVar26,lVar12,0,8);
          goto LAB_020086c0;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_020086c0:
    FUN_00100250(PTR__string_04379718,&DAT_043d6308,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d6320);
  }
  puVar2 = DAT_043d6318;
  if ((DAT_043d6308 & 1) == 0) {
    puVar2 = &DAT_043d6309;
  }
  if (((byte)local_770 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_770 | 1);
  }
  else {
    puVar28 = local_760;
  }
  if (((DAT_043d6330 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d6330), iVar8 != 0)) {
    DAT_043d6328 = 0x2c0;
    __cxa_guard_release(&DAT_043d6330);
  }
  if (((DAT_043d6340 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d6340), iVar8 != 0)) {
    DAT_043d6338 = 0x2c7;
    __cxa_guard_release(&DAT_043d6340);
  }
  uVar23 = DAT_043d6328;
  lVar12 = FUN_00153520(param_1,DAT_043d6328);
  if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x2c0)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043d6338;
    lVar12 = FUN_00153520(param_1,DAT_043d6338);
    if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x2c0)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_02008da0();
      puVar3 = DAT_043d6358;
      if ((DAT_043d6348 & 1) == 0) {
        puVar3 = &DAT_043d6349;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar12 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar12;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar12 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar5 = 0;
      if (uVar25 != 0) {
        uVar5 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar5 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_FUN_0425b1f0;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x260);
  iVar8 = FUN_00154450(param_1,puVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_02008d60,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar9 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar9);
  }
  FUN_001522a0(param_1,puVar2);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar2);
  lVar12 = FUN_001511d0(param_1,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_770 & 1) != 0) && (local_760 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar6;
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
        FUN_02bcc824(plVar26,local_760,0,8);
        goto LAB_02005db8;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_760,0,8);
  }
LAB_02005db8:
  memset(&local_3f0,0,0x380);
  pcVar27 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar18 = lVar12 + 8;
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_020030e8;
  if (uVar10 != 0) {
    pcVar21 = FUN_02002fcc;
  }
  puVar1 = (ulong *)(lVar12 + 0x2b8);
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02005fec;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02005fec;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_3f0 = pcVar27;
  local_3e8 = pcVar21;
LAB_02005fec:
  pcVar27 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0200331c;
  if (uVar10 != 0) {
    pcVar21 = FUN_02003204;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02006130;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02006130;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02006130:
  pcVar27 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02003668;
  if (uVar10 != 0) {
    pcVar21 = FUN_02003434;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02006274;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02006274;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02006274:
  pcVar27 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02003934;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_02003760;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_020063b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_020063b8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_020063b8:
  pcVar27 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02003b60;
  if (uVar10 != 0) {
    pcVar21 = FUN_02003a2c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_020064fc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_020064fc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_020064fc:
  pcVar27 = *(char **)(lVar12 + 0xd8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02003cdc;
  if (uVar10 != 0) {
    pcVar21 = FUN_02003c94;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02006640;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02006640;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02006640:
  pcVar27 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02003fbc;
  if (uVar10 != 0) {
    pcVar21 = FUN_02003d24;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02006784;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02006784;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02006784:
  pcVar27 = *(char **)(lVar12 + 0x108);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_020040fc;
  if (uVar10 != 0) {
    pcVar21 = FUN_020040b4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_020068c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_020068c8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_020068c8:
  pcVar27 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_020042bc;
  if (uVar10 != 0) {
    pcVar21 = FUN_02004144;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02006a0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02006a0c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02006a0c:
  pcVar27 = *(char **)(lVar12 + 0x138);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_020043ec;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_020043b4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02006b50;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02006b50;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02006b50:
  pcVar27 = *(char **)(lVar12 + 0x150);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0200447c;
  if (uVar10 != 0) {
    pcVar21 = FUN_02004434;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02006c94;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02006c94;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02006c94:
  pcVar27 = *(char **)(lVar12 + 0x168);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02004650;
  if (uVar10 != 0) {
    pcVar21 = FUN_020044c4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02006dd8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02006dd8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02006dd8:
  pcVar27 = *(char **)(lVar12 + 0x180);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0200482c;
  if (uVar10 != 0) {
    pcVar21 = FUN_02004748;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02006f1c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02006f1c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02006f1c:
  pcVar27 = *(char **)(lVar12 + 0x198);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02004988;
  if (uVar10 != 0) {
    pcVar21 = FUN_02004940;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02007060;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02007060;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02007060:
  pcVar27 = *(char **)(lVar12 + 0x1b0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02004a18;
  if (uVar10 != 0) {
    pcVar21 = FUN_020049d0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_020071a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_020071a4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_020071a4:
  pcVar27 = *(char **)(lVar12 + 0x1c8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02004aa8;
  if (uVar10 != 0) {
    pcVar21 = FUN_02004a60;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_020072e8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_020072e8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_020072e8:
  pcVar27 = *(char **)(lVar12 + 0x1e0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02004c44;
  if (uVar10 != 0) {
    pcVar21 = FUN_02004af0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_0200742c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_0200742c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0200742c:
  pcVar27 = *(char **)(lVar12 + 0x1f8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02004f0c;
  if (uVar10 != 0) {
    pcVar21 = FUN_02004d3c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02007570;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02007570;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02007570:
  pcVar27 = *(char **)(lVar12 + 0x200);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_02005540;
  if (uVar10 != 0) {
    pcVar21 = FUN_02004f64;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_020076b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_020076b4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_020076b4:
  pcVar27 = *(char **)(lVar12 + 0x208);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_020055e0;
  if (uVar10 != 0) {
    pcVar21 = FUN_02005598;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_020077f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_020077f8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_020077f8:
  pcVar27 = *(char **)(lVar12 + 0x220);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0200579c;
  if (uVar10 != 0) {
    pcVar21 = FUN_02005628;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_0200793c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_0200793c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0200793c:
  pcVar27 = *(char **)(lVar12 + 0x238);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_020058cc;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_02005894;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02007a80;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02007a80;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02007a80:
  pcVar27 = *(char **)(lVar12 + 0x250);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0200594c;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_02005914;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x270) = pcVar21;
            goto LAB_02007bc4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02007bc4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02007bc4:
  pcVar27 = *(char **)(lVar12 + 0x268);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_020059f4;
  if (uVar10 != 0) {
    pcVar21 = FUN_02005994;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x270) = pcVar21;
        uVar10 = (uint)*puVar1;
        goto joined_r0x02007cac;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x2b8) = *(ulong *)(lVar12 + 0x2b8) | 1L << (uVar23 & 0x3f);
      uVar10 = (uint)*puVar1;
      goto joined_r0x02007cac;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3f0)[uVar25 * 2] = pcVar27;
  (&local_3e8)[uVar25 * 2] = pcVar21;
  uVar10 = (uint)*puVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x02007cac:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  uVar23 = uVar25;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x181);
    if ((*(byte *)(lVar24 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_3f0)[uVar25 * 2] = pcVar27;
    (&local_3e8)[uVar25 * 2] = (code *)PTR_LAB_043815d8;
    uVar10 = (uint)*puVar1;
  }
  uVar25 = uVar23;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x289);
    if ((*(byte *)(lVar24 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    (&local_3f0)[uVar23 * 2] = pcVar27;
    (&local_3e8)[uVar23 * 2] = (code *)PTR_LAB_043815e0;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar12 + 0x270) != 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x1c9);
    if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar12 + 0x270);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_3f0)[uVar25 * 2] = pcVar27;
    (&local_3e8)[uVar25 * 2] = pcVar21;
  }
  (&local_3f0)[uVar23 * 2] = (char *)0x0;
  (&local_3e8)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_770,&local_3f0,0x380);
  memcpy(asStack_af0,&local_3f0,0x380);
  lVar24 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar27 = (&local_3f0)[lVar14 * 2];
  sVar15 = strlen(pcVar27);
  if ((*(byte *)(lVar24 + 0x1c8) & 1) == 0) {
    sVar13 = (size_t)(*(byte *)(lVar24 + 0x1c8) >> 1);
  }
  else {
    sVar13 = *(size_t *)(lVar24 + 0x1d0);
  }
  if ((sVar15 == sVar13) &&
     (iVar8 = std::string::compare(lVar24 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar8 == 0)) {
    auStack_780[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_76f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_af0 + lVar14 * 0x10) = (&local_3f0)[lVar14 * 2];
  *(undefined1 **)(asStack_af0 + (lVar14 * 2 + 1) * 8) = &LAB_02008b50;
  FUN_00151fe0(param_1,0,2);
  local_af8[0] = FUN_0014feb0(param_1,0xffffffff);
  local_b00 = param_1;
  if ((*PTR_DAT_04381600 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04381600);
    puVar2 = PTR_DAT_04381608;
    if (iVar8 != 0) {
      FUN_017c39d0(PTR_DAT_04381608);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04381600);
    }
  }
  uVar9 = local_af8[0];
  uVar23 = *(ulong *)(PTR_DAT_04381608 + 8);
  puVar2 = *(undefined **)(PTR_DAT_04381608 + 0x10);
  if ((*PTR_DAT_04381608 & 1) == 0) {
    puVar2 = PTR_DAT_04381608 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_04381608 >> 1);
  }
  FUN_001514f0(param_1,puVar2,uVar23);
  FUN_00152550(param_1,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_02008ba0,0);
  FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      psVar17 = asStack_af0;
      pbVar16 = (byte *)FUN_017c41a0();
    }
    else if (lVar24 == 0) {
      psVar17 = &local_770;
      pbVar16 = (byte *)FUN_017c234c();
    }
    else {
      psVar17 = (string *)&local_3f0;
      pbVar16 = (byte *)FUN_017c3774();
    }
    pbVar22 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar22 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_b08 = FUN_0014feb0(param_1,0xffffffff);
    local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
    local_b10 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_b40,&local_b00,local_b08);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00155a20(param_1,psVar17,2);
    uVar9 = local_b08;
    if (*(long *)(lVar12 + 0x2a0) == 0) {
      lVar14 = *(long *)(lVar12 + 0x2a8);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x2a8);
      uVar9 = local_b08;
    }
    local_b08 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_cast");
    }
    uVar9 = local_b08;
    uVar20 = *(undefined8 *)(lVar12 + 0x280);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_03955ac7);
    uVar9 = local_b08;
    uVar20 = *(undefined8 *)(lVar12 + 0x288);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_b40,&local_b10,local_b08);
    }
    else {
      local_b40 = &LAB_02008c90;
      uStack_b38 = 0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_02008bf0(param_1,1,&local_b40,local_b08);
      local_b40 = &LAB_02008c94;
      uStack_b38 = 0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_02008bf0(param_1,2,&local_b40,local_b08);
    }
    FUN_00151fe0(param_1,0,3);
    uVar9 = FUN_0014feb0(param_1,0xffffffff);
    local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_b40,&local_b00,uVar9);
    if (*(undefined1 **)(lVar12 + 0x278) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x2b0) != '\0') goto LAB_0200833c;
LAB_02008040:
      if (param_1 == 0) goto LAB_02008390;
LAB_02008048:
      uVar11 = local_b08;
      FUN_00150260(param_1,uVar9);
    }
    else {
      uStack_b38 = 0;
      local_b40 = *(undefined1 **)(lVar12 + 0x278);
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_02008bf0(param_1,4,&local_b40,uVar9);
      if (*(char *)(lVar12 + 0x2b0) == '\0') goto LAB_02008040;
LAB_0200833c:
      local_b40 = &LAB_02008c90;
      uStack_b38 = 0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_02008bf0(param_1,1,&local_b40,uVar9);
      local_b40 = &LAB_02008c94;
      uStack_b38 = 0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_02008bf0(param_1,2,&local_b40,uVar9);
      if (param_1 != 0) goto LAB_02008048;
LAB_02008390:
      uVar11 = local_b08;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar11);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_b10,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_0200244c();
      puVar2 = DAT_043d62b0;
      if ((DAT_043d62a0 & 1) == 0) {
        puVar2 = &DAT_043d62a1;
      }
      FUN_00154450(param_1,puVar2);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_b40._0_4_ = 0x1e;
      FUN_008fe304(&local_b10,param_1,&local_b40,&local_b00,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar12);
      FUN_00155a20(param_1,&local_3f0,2);
      FUN_00151fe0(param_1,0,3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_b40 = (undefined1 *)CONCAT44(local_b40._4_4_,0x1e);
      FUN_008fe304(&local_b10,param_1,&local_b40,&local_b00,uVar11);
      local_b40 = *(undefined1 **)(lVar12 + 0x278);
      if (local_b40 != (undefined1 *)0x0) {
        uStack_b38 = 0;
        local_b30 = lVar12;
        lStack_b28 = lVar18;
        FUN_02008bf0(param_1,4,&local_b40,uVar11);
      }
      local_b40 = &LAB_02008d58;
      uStack_b38 = 0;
      local_b20 = 0;
      puStack_b18 = &DAT_03a7d2b0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_02008ca0(param_1,1,&local_b40,uVar11);
      local_b40 = &LAB_02008d5c;
      uStack_b38 = 0;
      local_b20 = 0;
      puStack_b18 = &DAT_03a7d2b0;
      local_b30 = lVar12;
      lStack_b28 = lVar18;
      FUN_02008ca0(param_1,2,&local_b40,uVar11);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar11);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_af8[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


