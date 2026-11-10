/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015fda64; name: FUN_015fda64
 */


undefined8 FUN_015fda64(long param_1,long param_2)

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
  undefined1 *local_870;
  undefined8 uStack_868;
  long local_860;
  long lStack_858;
  undefined8 local_850;
  undefined *puStack_848;
  long local_840;
  undefined4 local_838;
  long local_830;
  undefined4 local_828 [2];
  string asStack_820 [640];
  undefined8 auStack_5a0 [2];
  string local_590;
  undefined1 auStack_58f [7];
  size_t local_588;
  undefined1 *local_580;
  char *apcStack_310 [2];
  char *local_300 [2];
  long local_2f0;
  undefined1 auStack_70 [16];
  
  puVar6 = PTR_DAT_043805a8;
  if (((DAT_043cc320 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cc320), iVar10 != 0)) {
    local_2f0 = 0;
    local_300[1] = (undefined1 *)0x0;
    local_300[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_043805a8);
      puVar3 = PTR_DAT_043805c0;
      if (iVar10 != 0) {
        FUN_01601f40(PTR_DAT_043805c0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043805a8);
      }
    }
    pcVar27 = (char *)FUN_0160134c(local_300,PTR_DAT_043805c0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043cc308,psVar18);
    lVar14 = local_2f0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_300[0] & 1) != 0) && (local_2f0 != 0)) {
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
          goto LAB_015ff24c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_015ff24c:
    FUN_00100250(PTR__string_04379718,&DAT_043cc308,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cc320);
  }
  std::string::string(&local_590,(string *)&DAT_043cc308);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cc300);
  sVar2 = (ulong)((byte)local_590 >> 1);
  if (((byte)local_590 & 1) != 0) {
    sVar2 = local_588;
  }
  std::string::append((ulong)&local_590,(char)iVar10);
  if (((byte)local_590 & 1) == 0) {
    puVar28 = auStack_58f;
    local_588 = (size_t)((byte)local_590 >> 1);
  }
  else {
    puVar28 = local_580;
  }
  snprintf(puVar28 + (sVar2 - 1),local_588,"%d",(ulong)DAT_043cc300);
  DAT_043cc300 = DAT_043cc300 + 1;
  if (((DAT_043cc340 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cc340), iVar10 != 0)) {
    local_2f0 = 0;
    local_300[1] = (undefined1 *)0x0;
    local_300[0] = (char *)0x2e6c6f7308;
    if ((*puVar6 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_043805a8);
      puVar3 = PTR_DAT_043805c0;
      if (iVar10 != 0) {
        FUN_01601f40(PTR_DAT_043805c0);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_043805a8);
      }
    }
    pcVar27 = (char *)FUN_0160134c(local_300,PTR_DAT_043805c0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043cc328,psVar18);
    lVar14 = local_2f0;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_300[0] & 1) != 0) && (local_2f0 != 0)) {
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
          goto LAB_015ff398;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_015ff398:
    FUN_00100250(PTR__string_04379718,&DAT_043cc328,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cc340);
  }
  puVar3 = DAT_043cc338;
  if ((DAT_043cc328 & 1) == 0) {
    puVar3 = &DAT_043cc329;
  }
  if (((byte)local_590 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_590 | 1);
  }
  else {
    puVar28 = local_580;
  }
  if (((DAT_043cc350 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cc350), iVar10 != 0)) {
    DAT_043cc348 = 0x170;
    __cxa_guard_release(&DAT_043cc350);
  }
  if (((DAT_043cc360 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cc360), iVar10 != 0)) {
    DAT_043cc358 = 0x177;
    __cxa_guard_release(&DAT_043cc360);
  }
  uVar23 = DAT_043cc348;
  lVar14 = FUN_00153520(param_2,DAT_043cc348);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x170)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043cc358;
    lVar14 = FUN_00153520(param_2,DAT_043cc358);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x170)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_01604290();
      puVar4 = DAT_043cc378;
      if ((DAT_043cc368 & 1) == 0) {
        puVar4 = &DAT_043cc369;
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
  *puVar19 = &PTR_FUN_0421e650;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0x110);
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_01604250,0);
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
  if ((((byte)local_590 & 1) != 0) && (local_580 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_580,0,8);
        goto LAB_015fddd8;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_580,0,8);
  }
LAB_015fddd8:
  memset(local_300,0,0x290);
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
  puVar28 = &LAB_01602368;
  if (uVar12 != 0) {
    puVar28 = &LAB_01602330;
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
            *(undefined1 **)(lVar14 + 0x120) = puVar28;
            goto LAB_015fdefc;
          }
          *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
      goto LAB_015fdefc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_300[0] = pcVar27;
  local_300[1] = puVar28;
LAB_015fdefc:
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
  pcVar1 = FUN_01602518;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_016023a0;
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
        *(code **)(lVar14 + 0x120) = pcVar1;
        goto LAB_015fdfdc;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
      goto LAB_015fdfdc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_300[uVar25 * 2] = pcVar27;
  local_300[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015fdfdc:
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
  pcVar1 = FUN_016026e8;
  if (uVar12 != 0) {
    pcVar1 = FUN_016025d8;
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
            *(code **)(lVar14 + 0x120) = pcVar1;
            goto LAB_015fe274;
          }
          *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
      goto LAB_015fe274;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_300[uVar25 * 2] = pcVar27;
  local_300[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015fe274:
  pcVar27 = *(char **)(lVar14 + 0x90);
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
  pcVar1 = FUN_01602950;
  if (uVar12 != 0) {
    pcVar1 = FUN_016027f8;
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
            *(code **)(lVar14 + 0x120) = pcVar1;
            goto LAB_015fe3b4;
          }
          *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
      goto LAB_015fe3b4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_300[uVar25 * 2] = pcVar27;
  local_300[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015fe3b4:
  pcVar27 = *(char **)(lVar14 + 0xa8);
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
  pcVar1 = FUN_0160323c;
  if (uVar12 != 0) {
    pcVar1 = FUN_01602a3c;
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
            *(code **)(lVar14 + 0x120) = pcVar1;
            goto LAB_015fe4f4;
          }
          *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
      goto LAB_015fe4f4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_300[uVar25 * 2] = pcVar27;
  local_300[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015fe4f4:
  pcVar27 = *(char **)(lVar14 + 0xc0);
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
  pcVar1 = FUN_01603b68;
  if (uVar12 != 0) {
    pcVar1 = FUN_01603328;
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
            *(code **)(lVar14 + 0x120) = pcVar1;
            goto LAB_015fe634;
          }
          *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
      goto LAB_015fe634;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_300[uVar25 * 2] = pcVar27;
  local_300[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015fe634:
  pcVar27 = *(char **)(lVar14 + 0xd8);
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
  pcVar1 = FUN_01603e44;
  if (uVar12 != 0) {
    pcVar1 = FUN_01603c54;
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
            *(code **)(lVar14 + 0x120) = pcVar1;
            goto LAB_015fe774;
          }
          *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
      goto LAB_015fe774;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_300[uVar25 * 2] = pcVar27;
  local_300[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015fe774:
  pcVar27 = *(char **)(lVar14 + 0xf0);
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
  pcVar21 = &LAB_01603f68;
  if (uVar12 != 0) {
    pcVar21 = &LAB_01603f30;
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
            *(char **)(lVar14 + 0x120) = pcVar21;
            goto LAB_015fe8b4;
          }
          *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
      goto LAB_015fe8b4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_300[uVar25 * 2] = pcVar27;
  local_300[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015fe8b4:
  pcVar27 = *(char **)(lVar14 + 0x108);
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
  pcVar1 = FUN_01603ff8;
  if (uVar12 != 0) {
    pcVar1 = FUN_01603fb0;
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
            *(code **)(lVar14 + 0x120) = pcVar1;
            uVar12 = (uint)*(undefined8 *)(lVar14 + 0x168);
            goto joined_r0x015fe9a8;
          }
          *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x168) = *(ulong *)(lVar14 + 0x168) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0x168);
      goto joined_r0x015fe9a8;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_300[uVar25 * 2] = pcVar27;
  local_300[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0x168);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x015fe9a8:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x168);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x168);
  }
  uVar23 = uVar25;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    local_300[uVar25 * 2] = pcVar27;
    local_300[uVar25 * 2 + 1] = PTR_LAB_043805b0;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x168);
  }
  uVar25 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    local_300[uVar23 * 2] = pcVar27;
    local_300[uVar23 * 2 + 1] = PTR_LAB_043805b8;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar14 + 0x120) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar14 + 0x120);
    uVar23 = (ulong)((int)uVar25 + 1);
    local_300[uVar25 * 2] = pcVar27;
    local_300[uVar25 * 2 + 1] = pcVar21;
  }
  local_300[uVar23 * 2] = (char *)0x0;
  local_300[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_590,local_300,0x290);
  memcpy(asStack_820,local_300,0x290);
  lVar29 = FUN_008cca50();
  lVar16 = uVar23 - 1;
  pcVar27 = local_300[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    auStack_5a0[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_58f + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_820 + lVar16 * 0x10) = local_300[lVar16 * 2];
  *(code **)(asStack_820 + (lVar16 * 2 + 1) * 8) = FUN_01604040;
  FUN_00151fe0(param_2,0,2);
  local_828[0] = FUN_0014feb0(param_2,0xffffffff);
  local_830 = param_2;
  if ((*puVar6 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_043805a8);
    puVar6 = PTR_DAT_043805c0;
    if (iVar10 != 0) {
      FUN_01601f40(PTR_DAT_043805c0);
      FUN_00100250(PTR__string_04379718,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043805a8);
    }
  }
  uVar11 = local_828[0];
  uVar23 = *(ulong *)(PTR_DAT_043805c0 + 8);
  puVar6 = *(undefined **)(PTR_DAT_043805c0 + 0x10);
  if ((*PTR_DAT_043805c0 & 1) == 0) {
    puVar6 = PTR_DAT_043805c0 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_043805c0 >> 1);
  }
  FUN_001514f0(param_2,puVar6,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,FUN_01604090,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_820;
      pbVar17 = (byte *)FUN_016006fc();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_590;
      pbVar17 = (byte *)FUN_0160051c();
    }
    else {
      psVar18 = (string *)local_300;
      pbVar17 = (byte *)FUN_016008dc();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_838 = FUN_0014feb0(param_2,0xffffffff);
    local_870 = (undefined1 *)CONCAT44(local_870._4_4_,0x1e);
    local_840 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_870,&local_830,local_838);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_838;
    if (*(long *)(lVar14 + 0x150) == 0) {
      lVar16 = *(long *)(lVar14 + 0x158);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0x158);
      uVar11 = local_838;
    }
    local_838 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_838;
    uVar20 = *(undefined8 *)(lVar14 + 0x130);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_838;
    uVar20 = *(undefined8 *)(lVar14 + 0x138);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_870 = (undefined1 *)CONCAT44(local_870._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_870,&local_840,local_838);
    }
    else {
      local_870 = &LAB_01604180;
      uStack_868 = 0;
      local_860 = lVar14;
      lStack_858 = lVar24;
      FUN_016040e0(param_2,1,&local_870,local_838);
      local_870 = &LAB_01604184;
      uStack_868 = 0;
      local_860 = lVar14;
      lStack_858 = lVar24;
      FUN_016040e0(param_2,2,&local_870,local_838);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_870 = (undefined1 *)CONCAT44(local_870._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_870,&local_830,uVar11);
    if (*(undefined1 **)(lVar14 + 0x128) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0x160) != '\0') goto LAB_015ff054;
LAB_015fed9c:
      if (param_2 == 0) goto LAB_015ff0a8;
LAB_015feda4:
      uVar13 = local_838;
      FUN_00150260(param_2,uVar11);
    }
    else {
      uStack_868 = 0;
      local_870 = *(undefined1 **)(lVar14 + 0x128);
      local_860 = lVar14;
      lStack_858 = lVar24;
      FUN_016040e0(param_2,4,&local_870,uVar11);
      if (*(char *)(lVar14 + 0x160) == '\0') goto LAB_015fed9c;
LAB_015ff054:
      local_870 = &LAB_01604180;
      uStack_868 = 0;
      local_860 = lVar14;
      lStack_858 = lVar24;
      FUN_016040e0(param_2,1,&local_870,uVar11);
      local_870 = &LAB_01604184;
      uStack_868 = 0;
      local_860 = lVar14;
      lStack_858 = lVar24;
      FUN_016040e0(param_2,2,&local_870,uVar11);
      if (param_2 != 0) goto LAB_015feda4;
LAB_015ff0a8:
      uVar13 = local_838;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_840,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_01600b14();
      puVar6 = DAT_043cc268;
      if ((DAT_043cc258 & 1) == 0) {
        puVar6 = &DAT_043cc259;
      }
      FUN_00154450(param_2,puVar6);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_870._0_4_ = 0x1e;
      FUN_008fe304(&local_840,param_2,&local_870,&local_830,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_300,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_870 = (undefined1 *)CONCAT44(local_870._4_4_,0x1e);
      FUN_008fe304(&local_840,param_2,&local_870,&local_830,uVar13);
      local_870 = *(undefined1 **)(lVar14 + 0x128);
      if (local_870 != (undefined1 *)0x0) {
        uStack_868 = 0;
        local_860 = lVar14;
        lStack_858 = lVar24;
        FUN_016040e0(param_2,4,&local_870,uVar13);
      }
      local_870 = &LAB_01604248;
      uStack_868 = 0;
      local_850 = 0;
      puStack_848 = &DAT_03a7c438;
      local_860 = lVar14;
      lStack_858 = lVar24;
      FUN_01604190(param_2,1,&local_870,uVar13);
      local_870 = &LAB_0160424c;
      uStack_868 = 0;
      local_850 = 0;
      puStack_848 = &DAT_03a7c438;
      local_860 = lVar14;
      lStack_858 = lVar24;
      FUN_01604190(param_2,2,&local_870,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_828[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


