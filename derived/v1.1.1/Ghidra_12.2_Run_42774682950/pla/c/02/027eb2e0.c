/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027eb2e0; name: FUN_027eb2e0
 */


undefined8 FUN_027eb2e0(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
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
  string *psVar15;
  undefined *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long lVar27;
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
  
  if (((DAT_043eb038 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043eb038), iVar8 != 0)) {
    local_310 = 0;
    local_320[1] = (undefined1 *)0x0;
    local_320[0] = (char *)0x2e6c6f7308;
    if (((DAT_043eaea8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043eaea8), iVar8 != 0)) {
      FUN_027ef680();
      FUN_00100250(PTR__string_04379718,&DAT_043eae90,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043eaea8);
    }
    puVar26 = DAT_043eaea0;
    if ((DAT_043eae90 & 1) == 0) {
      puVar26 = &DAT_043eae91;
    }
    pcVar25 = (char *)std::string::append((char *)local_320,(ulong)puVar26);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043eb020,psVar15);
    lVar12 = local_310;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_320[0] & 1) != 0) && (local_310 != 0)) {
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
          goto LAB_027ecd94;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_027ecd94:
    FUN_00100250(PTR__string_04379718,&DAT_043eb020,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043eb038);
  }
  std::string::string(&local_5d0,(string *)&DAT_043eb020);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043eb018);
  sVar2 = (ulong)((byte)local_5d0 >> 1);
  if (((byte)local_5d0 & 1) != 0) {
    sVar2 = local_5c8;
  }
  std::string::append((ulong)&local_5d0,(char)iVar8);
  if (((byte)local_5d0 & 1) == 0) {
    puVar26 = auStack_5cf;
    local_5c8 = (size_t)((byte)local_5d0 >> 1);
  }
  else {
    puVar26 = local_5c0;
  }
  snprintf(puVar26 + (sVar2 - 1),local_5c8,"%d",(ulong)DAT_043eb018);
  DAT_043eb018 = DAT_043eb018 + 1;
  if (((DAT_043eb058 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043eb058), iVar8 != 0)) {
    local_310 = 0;
    local_320[1] = (undefined1 *)0x0;
    local_320[0] = (char *)0x2e6c6f7308;
    if (((DAT_043eaea8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043eaea8), iVar8 != 0)) {
      FUN_027ef680();
      FUN_00100250(PTR__string_04379718,&DAT_043eae90,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043eaea8);
    }
    puVar26 = DAT_043eaea0;
    if ((DAT_043eae90 & 1) == 0) {
      puVar26 = &DAT_043eae91;
    }
    pcVar25 = (char *)std::string::append((char *)local_320,(ulong)puVar26);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043eb040,psVar15);
    lVar12 = local_310;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_320[0] & 1) != 0) && (local_310 != 0)) {
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
          goto LAB_027ecef8;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_027ecef8:
    FUN_00100250(PTR__string_04379718,&DAT_043eb040,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043eb058);
  }
  puVar16 = DAT_043eb050;
  if ((DAT_043eb040 & 1) == 0) {
    puVar16 = &DAT_043eb041;
  }
  if (((byte)local_5d0 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_5d0 | 1);
  }
  else {
    puVar26 = local_5c0;
  }
  if (((DAT_043eb068 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043eb068), iVar8 != 0)) {
    DAT_043eb060 = 0x178;
    __cxa_guard_release(&DAT_043eb068);
  }
  if (((DAT_043eb078 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043eb078), iVar8 != 0)) {
    DAT_043eb070 = 0x17f;
    __cxa_guard_release(&DAT_043eb078);
  }
  uVar21 = DAT_043eb060;
  lVar12 = FUN_00153520(param_2,DAT_043eb060);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x178)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043eb070;
    lVar12 = FUN_00153520(param_2,DAT_043eb070);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x178)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_027f3470();
      puVar3 = DAT_043eb090;
      if ((DAT_043eb080 & 1) == 0) {
        puVar3 = &DAT_043eb081;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar17 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar17;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar12;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar22;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar19[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar5 = 0;
      if (uVar23 != 0) {
        uVar5 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar5 * uVar23;
    }
    *(undefined8 **)(puVar19[1] + uVar21 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar17;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_0426cb18;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0x118);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_027f3430,0);
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
  FUN_001522a0(param_2,puVar16);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar16);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_5d0 & 1) != 0) && (local_5c0 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar24,local_5c0,0,8);
        goto LAB_027eb654;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_5c0,0,8);
  }
LAB_027eb654:
  memset(local_320,0,0x2b0);
  pcVar25 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  puVar26 = &LAB_027efcf4;
  if (uVar10 != 0) {
    puVar26 = &LAB_027efcbc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(undefined1 **)(lVar12 + 0x30) = puVar26;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar23 = 0;
            *(undefined1 **)(lVar12 + 0x128) = puVar26;
            goto LAB_027eb778;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar26;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027eb778;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_320[0] = pcVar25;
  local_320[1] = puVar26;
LAB_027eb778:
  pcVar25 = *(char **)(lVar12 + 0x68);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027efea4;
  if (uVar10 != 0) {
    pcVar1 = (code *)&LAB_027efd2c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x128) = pcVar1;
        goto LAB_027eb858;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027eb858;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_027eb858:
  pcVar25 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027f04b0;
  if (uVar10 != 0) {
    pcVar1 = (code *)&LAB_027eff60;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x128) = pcVar1;
            goto LAB_027ebad4;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027ebad4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_027ebad4:
  pcVar25 = *(char **)(lVar12 + 0x80);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027f0af0;
  if (uVar10 != 0) {
    pcVar1 = FUN_027f0508;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x128) = pcVar1;
            goto LAB_027ebc14;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027ebc14;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_027ebc14:
  pcVar25 = *(char **)(lVar12 + 0x88);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027f0c8c;
  if (uVar10 != 0) {
    pcVar1 = FUN_027f0b48;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x128) = pcVar1;
            goto LAB_027ebd54;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027ebd54;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_027ebd54:
  pcVar25 = *(char **)(lVar12 + 0xa0);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027f0eac;
  if (uVar10 != 0) {
    pcVar1 = FUN_027f0d74;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x128) = pcVar1;
            goto LAB_027ebe94;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027ebe94;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_027ebe94:
  pcVar25 = *(char **)(lVar12 + 0xb8);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027f1520;
  if (uVar10 != 0) {
    pcVar1 = FUN_027f0f94;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x128) = pcVar1;
            goto LAB_027ebfd4;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027ebfd4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_027ebfd4:
  pcVar25 = *(char **)(lVar12 + 0xd0);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027f172c;
  if (uVar10 != 0) {
    pcVar1 = FUN_027f1608;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x128) = pcVar1;
            goto LAB_027ec114;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027ec114;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_027ec114:
  pcVar25 = *(char **)(lVar12 + 0xe8);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027f198c;
  if (uVar10 != 0) {
    pcVar1 = FUN_027f1850;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x128) = pcVar1;
            goto LAB_027ec254;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027ec254;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_027ec254:
  pcVar25 = *(char **)(lVar12 + 0x100);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027f1c18;
  if (uVar10 != 0) {
    pcVar1 = FUN_027f1a74;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x128) = pcVar1;
            goto LAB_027ec394;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      goto LAB_027ec394;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_027ec394:
  pcVar25 = *(char **)(lVar12 + 0x118);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
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
  pcVar1 = FUN_027f3174;
  if (uVar10 != 0) {
    pcVar1 = (code *)&LAB_027f1d0c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x128) = pcVar1;
            uVar10 = (uint)*(undefined8 *)(lVar12 + 0x170);
            goto joined_r0x027ec488;
          }
          *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x170) = *(ulong *)(lVar12 + 0x170) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x170);
      goto joined_r0x027ec488;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_320[uVar23 * 2] = pcVar25;
  local_320[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x170);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x027ec488:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x170);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x170);
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    local_320[uVar23 * 2] = pcVar25;
    local_320[uVar23 * 2 + 1] = &LAB_027f2100;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x170);
    uVar23 = (ulong)((int)uVar23 + 1);
  }
  uVar21 = uVar23;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    uVar21 = (ulong)((int)uVar23 + 1);
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    local_320[uVar23 * 2] = pcVar25;
    local_320[uVar23 * 2 + 1] = &LAB_027f20f8;
  }
  uVar23 = uVar21;
  if (*(long *)(lVar12 + 0x128) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar18 = *(char **)(lVar12 + 0x128);
    uVar23 = (ulong)((int)uVar21 + 1);
    local_320[uVar21 * 2] = pcVar25;
    local_320[uVar21 * 2 + 1] = pcVar18;
  }
  local_320[uVar23 * 2] = (char *)0x0;
  local_320[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_5d0,local_320,0x2b0);
  memcpy(asStack_880,local_320,0x2b0);
  lVar27 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar25 = local_320[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar2) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_5e0[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5cf + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_880 + lVar14 * 0x10) = local_320[lVar14 * 2];
  *(undefined1 **)(asStack_880 + (lVar14 * 2 + 1) * 8) = &LAB_027f3220;
  FUN_00151fe0(param_2,0,2);
  local_888[0] = FUN_0014feb0(param_2,0xffffffff);
  local_890 = param_2;
  if (((DAT_043eaea8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043eaea8), iVar8 != 0)) {
    FUN_027ef680();
    FUN_00100250(PTR__string_04379718,&DAT_043eae90,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043eaea8);
  }
  uVar9 = local_888[0];
  uVar21 = (ulong)(DAT_043eae90 >> 1);
  if ((DAT_043eae90 & 1) == 0) {
    puVar26 = &DAT_043eae91;
  }
  else {
    puVar26 = DAT_043eaea0;
    uVar21 = DAT_043eae98;
  }
  FUN_001514f0(param_2,puVar26,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_027f3270,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar15 = asStack_880;
      FUN_027ee288();
      pbVar20 = &DAT_043eadf8;
      puVar16 = &DAT_043eadf9;
      puVar19 = &DAT_043eae08;
    }
    else if (lVar27 == 0) {
      psVar15 = &local_5d0;
      FUN_027ee094();
      puVar16 = &DAT_043ead81;
      puVar19 = &DAT_043ead90;
      pbVar20 = &DAT_043ead80;
    }
    else {
      psVar15 = (string *)local_320;
      FUN_027ee47c();
      puVar16 = &DAT_043eae71;
      puVar19 = &DAT_043eae80;
      pbVar20 = &DAT_043eae70;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_898 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    local_8a0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_8d0,&local_890,local_898);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar15,2);
    uVar9 = local_898;
    if (*(long *)(lVar12 + 0x158) == 0) {
      lVar14 = *(long *)(lVar12 + 0x160);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x160);
      uVar9 = local_898;
    }
    local_898 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_898;
    uVar17 = *(undefined8 *)(lVar12 + 0x138);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_898;
    uVar17 = *(undefined8 *)(lVar12 + 0x140);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_8d0,&local_8a0,local_898);
    }
    else {
      local_8d0 = &LAB_027f3360;
      uStack_8c8 = 0;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_027f32c0(param_2,1,&local_8d0,local_898);
      local_8d0 = &LAB_027f3364;
      uStack_8c8 = 0;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_027f32c0(param_2,2,&local_8d0,local_898);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_8d0,&local_890,uVar9);
    if (*(undefined1 **)(lVar12 + 0x130) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x168) == '\0') goto LAB_027ec8b0;
LAB_027ecb68:
      local_8d0 = &LAB_027f3360;
      uStack_8c8 = 0;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_027f32c0(param_2,1,&local_8d0,uVar9);
      local_8d0 = &LAB_027f3364;
      uStack_8c8 = 0;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_027f32c0(param_2,2,&local_8d0,uVar9);
      if (param_2 == 0) goto LAB_027ecbbc;
LAB_027ec8b8:
      uVar11 = local_898;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_8c8 = 0;
      local_8d0 = *(undefined1 **)(lVar12 + 0x130);
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_027f32c0(param_2,4,&local_8d0,uVar9);
      if (*(char *)(lVar12 + 0x168) != '\0') goto LAB_027ecb68;
LAB_027ec8b0:
      if (param_2 != 0) goto LAB_027ec8b8;
LAB_027ecbbc:
      uVar11 = local_898;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_8a0,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_027ee6bc();
      puVar16 = DAT_043eaef8;
      if ((DAT_043eaee8 & 1) == 0) {
        puVar16 = &DAT_043eaee9;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0._0_4_ = 0x1e;
      FUN_008fe304(&local_8a0,param_2,&local_8d0,&local_890,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_320,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_8d0 = (undefined1 *)CONCAT44(local_8d0._4_4_,0x1e);
      FUN_008fe304(&local_8a0,param_2,&local_8d0,&local_890,uVar11);
      local_8d0 = *(undefined1 **)(lVar12 + 0x130);
      if (local_8d0 != (undefined1 *)0x0) {
        uStack_8c8 = 0;
        local_8c0 = lVar12;
        lStack_8b8 = lVar22;
        FUN_027f32c0(param_2,4,&local_8d0,uVar11);
      }
      local_8d0 = &LAB_027f3428;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a7e3a8;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_027f3370(param_2,1,&local_8d0,uVar11);
      local_8d0 = &LAB_027f342c;
      uStack_8c8 = 0;
      local_8b0 = 0;
      puStack_8a8 = &DAT_03a7e3a8;
      local_8c0 = lVar12;
      lStack_8b8 = lVar22;
      FUN_027f3370(param_2,2,&local_8d0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_888[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


