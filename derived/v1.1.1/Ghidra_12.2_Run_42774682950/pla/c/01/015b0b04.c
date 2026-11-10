/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015b0b04; name: FUN_015b0b04
 */


undefined8 FUN_015b0b04(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined1 *local_8a0;
  undefined8 uStack_898;
  long local_890;
  long lStack_888;
  undefined8 local_880;
  undefined *puStack_878;
  long local_870;
  undefined4 local_868;
  long local_860;
  undefined4 local_858 [2];
  string asStack_850 [656];
  undefined8 auStack_5c0 [2];
  string local_5b0;
  undefined1 auStack_5af [7];
  size_t local_5a8;
  undefined1 *local_5a0;
  char *apcStack_320 [2];
  char *local_310 [2];
  long local_300;
  undefined1 auStack_70 [16];
  
  puVar5 = PTR_DAT_0437faa0;
  if (((DAT_043cb610 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cb610), iVar10 != 0)) {
    local_300 = 0;
    local_310[1] = (undefined1 *)0x0;
    local_310[0] = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437fab8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437fab8), puVar3 = PTR_DAT_0437faa0, iVar10 != 0)) {
      FUN_015b5680(PTR_DAT_0437faa0);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437fab8);
    }
    puVar3 = *(undefined **)(puVar5 + 0x10);
    if ((*puVar5 & 1) == 0) {
      puVar3 = puVar5 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)local_310,(ulong)puVar3);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043cb5f8,psVar18);
    lVar14 = local_300;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_310[0] & 1) != 0) && (local_300 != 0)) {
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
          goto LAB_015b2444;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_015b2444:
    FUN_00100250(PTR__string_04379718,&DAT_043cb5f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cb610);
  }
  std::string::string(&local_5b0,(string *)&DAT_043cb5f8);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cb5f0);
  sVar2 = (ulong)((byte)local_5b0 >> 1);
  if (((byte)local_5b0 & 1) != 0) {
    sVar2 = local_5a8;
  }
  std::string::append((ulong)&local_5b0,(char)iVar10);
  if (((byte)local_5b0 & 1) == 0) {
    puVar28 = auStack_5af;
    local_5a8 = (size_t)((byte)local_5b0 >> 1);
  }
  else {
    puVar28 = local_5a0;
  }
  snprintf(puVar28 + (sVar2 - 1),local_5a8,"%d",(ulong)DAT_043cb5f0);
  DAT_043cb5f0 = DAT_043cb5f0 + 1;
  if (((DAT_043cb630 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cb630), iVar10 != 0)) {
    local_300 = 0;
    local_310[1] = (undefined1 *)0x0;
    local_310[0] = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437fab8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437fab8), puVar3 = PTR_DAT_0437faa0, iVar10 != 0)) {
      FUN_015b5680(PTR_DAT_0437faa0);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437fab8);
    }
    puVar3 = *(undefined **)(puVar5 + 0x10);
    if ((*puVar5 & 1) == 0) {
      puVar3 = puVar5 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)local_310,(ulong)puVar3);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043cb618,psVar18);
    lVar14 = local_300;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_310[0] & 1) != 0) && (local_300 != 0)) {
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
          goto LAB_015b25a8;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_015b25a8:
    FUN_00100250(PTR__string_04379718,&DAT_043cb618,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cb630);
  }
  puVar3 = DAT_043cb628;
  if ((DAT_043cb618 & 1) == 0) {
    puVar3 = &DAT_043cb619;
  }
  if (((byte)local_5b0 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_5b0 | 1);
  }
  else {
    puVar28 = local_5a0;
  }
  if (((DAT_043cb640 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cb640), iVar10 != 0)) {
    DAT_043cb638 = 0x108;
    __cxa_guard_release(&DAT_043cb640);
  }
  if (((DAT_043cb650 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cb650), iVar10 != 0)) {
    DAT_043cb648 = 0x10f;
    __cxa_guard_release(&DAT_043cb650);
  }
  uVar23 = DAT_043cb638;
  lVar14 = FUN_00153520(param_2,DAT_043cb638);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x108)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043cb648;
    lVar14 = FUN_00153520(param_2,DAT_043cb648);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x108)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_015d1c30();
      puVar4 = DAT_043cb668;
      if ((DAT_043cb658 & 1) == 0) {
        puVar4 = &DAT_043cb659;
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
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar6;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_0421e520;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xa8);
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_015d1bf0,0);
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
  if ((((byte)local_5b0 & 1) != 0) && (local_5a0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_5a0,0,8);
        goto LAB_015b0e78;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_5a0,0,8);
  }
LAB_015b0e78:
  memset(local_310,0,0x2a0);
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
  puVar28 = &LAB_015b5e8c;
  if (uVar12 != 0) {
    puVar28 = &LAB_015b5e54;
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
            *(undefined1 **)(lVar14 + 0xb8) = puVar28;
            goto LAB_015b0f9c;
          }
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar14 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      goto LAB_015b0f9c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_310[0] = pcVar27;
  local_310[1] = puVar28;
LAB_015b0f9c:
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
  pcVar1 = FUN_015b603c;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_015b5ec4;
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
        *(code **)(lVar14 + 0xb8) = pcVar1;
        goto LAB_015b107c;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar1;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      goto LAB_015b107c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_310[uVar25 * 2] = pcVar27;
  local_310[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015b107c:
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
  pcVar1 = FUN_015b96fc;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_015b60fc;
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
            *(code **)(lVar14 + 0xb8) = pcVar1;
            goto LAB_015b12f8;
          }
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      goto LAB_015b12f8;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_310[uVar25 * 2] = pcVar27;
  local_310[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015b12f8:
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
  pcVar1 = FUN_015bce3c;
  if (uVar12 != 0) {
    pcVar1 = FUN_015b9754;
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
            *(code **)(lVar14 + 0xb8) = pcVar1;
            goto LAB_015b1438;
          }
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      goto LAB_015b1438;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_310[uVar25 * 2] = pcVar27;
  local_310[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015b1438:
  pcVar27 = *(char **)(lVar14 + 0x88);
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
  pcVar1 = FUN_015c04fc;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_015bce94;
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
            *(code **)(lVar14 + 0xb8) = pcVar1;
            goto LAB_015b1578;
          }
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      goto LAB_015b1578;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_310[uVar25 * 2] = pcVar27;
  local_310[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015b1578:
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
  pcVar1 = FUN_015c3c4c;
  if (uVar12 != 0) {
    pcVar1 = FUN_015c0554;
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
            *(code **)(lVar14 + 0xb8) = pcVar1;
            goto LAB_015b16b8;
          }
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      goto LAB_015b16b8;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_310[uVar25 * 2] = pcVar27;
  local_310[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015b16b8:
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
  pcVar1 = FUN_015c73bc;
  if (uVar12 != 0) {
    pcVar1 = FUN_015c3ca4;
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
            *(code **)(lVar14 + 0xb8) = pcVar1;
            goto LAB_015b17f8;
          }
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      goto LAB_015b17f8;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_310[uVar25 * 2] = pcVar27;
  local_310[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015b17f8:
  pcVar27 = *(char **)(lVar14 + 0xa0);
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
  pcVar1 = FUN_015cab2c;
  if (uVar12 != 0) {
    pcVar1 = FUN_015c7414;
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
            *(code **)(lVar14 + 0xb8) = pcVar1;
            goto LAB_015b1938;
          }
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      goto LAB_015b1938;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_310[uVar25 * 2] = pcVar27;
  local_310[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015b1938:
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
  pcVar1 = FUN_015ce2fc;
  if (uVar12 != 0) {
    pcVar1 = FUN_015cab84;
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
            *(code **)(lVar14 + 0xb8) = pcVar1;
            goto LAB_015b1a78;
          }
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      goto LAB_015b1a78;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_310[uVar25 * 2] = pcVar27;
  local_310[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_015b1a78:
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
  pcVar1 = FUN_015d197c;
  if (uVar12 != 0) {
    pcVar1 = (code *)&LAB_015ce354;
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
            *(code **)(lVar14 + 0xb8) = pcVar1;
            uVar12 = (uint)*(undefined8 *)(lVar14 + 0x100);
            goto joined_r0x015b1b6c;
          }
          *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x100) = *(ulong *)(lVar14 + 0x100) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0x100);
      goto joined_r0x015b1b6c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_310[uVar25 * 2] = pcVar27;
  local_310[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0x100);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x015b1b6c:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x100);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x100);
  }
  uVar23 = uVar25;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    local_310[uVar25 * 2] = pcVar27;
    local_310[uVar25 * 2 + 1] = PTR_LAB_0437faa8;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0x100);
  }
  uVar25 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    local_310[uVar23 * 2] = pcVar27;
    local_310[uVar23 * 2 + 1] = PTR_LAB_0437fab0;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar14 + 0xb8) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar14 + 0xb8);
    uVar23 = (ulong)((int)uVar25 + 1);
    local_310[uVar25 * 2] = pcVar27;
    local_310[uVar25 * 2 + 1] = pcVar21;
  }
  local_310[uVar23 * 2] = (char *)0x0;
  local_310[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_5b0,local_310,0x2a0);
  memcpy(asStack_850,local_310,0x2a0);
  lVar29 = FUN_008cca50();
  lVar16 = uVar23 - 1;
  pcVar27 = local_310[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    auStack_5c0[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5af + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_850 + lVar16 * 0x10) = local_310[lVar16 * 2];
  *(undefined1 **)(asStack_850 + (lVar16 * 2 + 1) * 8) = &LAB_015d19e0;
  FUN_00151fe0(param_2,0,2);
  local_858[0] = FUN_0014feb0(param_2,0xffffffff);
  local_860 = param_2;
  if (((*PTR_DAT_0437fab8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437fab8), puVar3 = PTR_DAT_0437faa0, iVar10 != 0)) {
    FUN_015b5680(PTR_DAT_0437faa0);
    FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437fab8);
  }
  uVar11 = local_858[0];
  uVar23 = (ulong)((byte)*puVar5 >> 1);
  puVar3 = *(undefined **)(puVar5 + 0x10);
  if ((*puVar5 & 1) == 0) {
    puVar3 = puVar5 + 1;
  }
  else {
    uVar23 = *(ulong *)(puVar5 + 8);
  }
  FUN_001514f0(param_2,puVar3,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_015d1a30,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_850;
      pbVar17 = (byte *)FUN_015b3938();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_5b0;
      pbVar17 = (byte *)FUN_015b3744();
    }
    else {
      psVar18 = (string *)local_310;
      pbVar17 = (byte *)FUN_015b3b2c();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_868 = FUN_0014feb0(param_2,0xffffffff);
    local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
    local_870 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_8a0,&local_860,local_868);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_868;
    if (*(long *)(lVar14 + 0xe8) == 0) {
      lVar16 = *(long *)(lVar14 + 0xf0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0xf0);
      uVar11 = local_868;
    }
    local_868 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_868;
    uVar20 = *(undefined8 *)(lVar14 + 200);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_868;
    uVar20 = *(undefined8 *)(lVar14 + 0xd0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_8a0,&local_870,local_868);
    }
    else {
      local_8a0 = &LAB_015d1b20;
      uStack_898 = 0;
      local_890 = lVar14;
      lStack_888 = lVar24;
      FUN_015d1a80(param_2,1,&local_8a0,local_868);
      local_8a0 = &LAB_015d1b24;
      uStack_898 = 0;
      local_890 = lVar14;
      lStack_888 = lVar24;
      FUN_015d1a80(param_2,2,&local_8a0,local_868);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_8a0,&local_860,uVar11);
    if (*(undefined1 **)(lVar14 + 0xc0) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0xf8) == '\0') goto LAB_015b1f60;
LAB_015b2218:
      local_8a0 = &LAB_015d1b20;
      uStack_898 = 0;
      local_890 = lVar14;
      lStack_888 = lVar24;
      FUN_015d1a80(param_2,1,&local_8a0,uVar11);
      local_8a0 = &LAB_015d1b24;
      uStack_898 = 0;
      local_890 = lVar14;
      lStack_888 = lVar24;
      FUN_015d1a80(param_2,2,&local_8a0,uVar11);
      if (param_2 == 0) goto LAB_015b226c;
LAB_015b1f68:
      uVar13 = local_868;
      FUN_00150260(param_2,uVar11);
    }
    else {
      uStack_898 = 0;
      local_8a0 = *(undefined1 **)(lVar14 + 0xc0);
      local_890 = lVar14;
      lStack_888 = lVar24;
      FUN_015d1a80(param_2,4,&local_8a0,uVar11);
      if (*(char *)(lVar14 + 0xf8) != '\0') goto LAB_015b2218;
LAB_015b1f60:
      if (param_2 != 0) goto LAB_015b1f68;
LAB_015b226c:
      uVar13 = local_868;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_870,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_015b3d7c();
      puVar5 = DAT_043ca508;
      if ((DAT_043ca4f8 & 1) == 0) {
        puVar5 = &DAT_043ca4f9;
      }
      FUN_00154450(param_2,puVar5);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0._0_4_ = 0x1e;
      FUN_008fe304(&local_870,param_2,&local_8a0,&local_860,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,local_310,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
      FUN_008fe304(&local_870,param_2,&local_8a0,&local_860,uVar13);
      local_8a0 = *(undefined1 **)(lVar14 + 0xc0);
      if (local_8a0 != (undefined1 *)0x0) {
        uStack_898 = 0;
        local_890 = lVar14;
        lStack_888 = lVar24;
        FUN_015d1a80(param_2,4,&local_8a0,uVar13);
      }
      local_8a0 = &LAB_015d1be8;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7c410;
      local_890 = lVar14;
      lStack_888 = lVar24;
      FUN_015d1b30(param_2,1,&local_8a0,uVar13);
      local_8a0 = &LAB_015d1bec;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7c410;
      local_890 = lVar14;
      lStack_888 = lVar24;
      FUN_015d1b30(param_2,2,&local_8a0,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_858[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


