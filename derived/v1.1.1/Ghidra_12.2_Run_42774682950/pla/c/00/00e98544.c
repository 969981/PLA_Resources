/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e98544; name: FUN_00e98544
 */


undefined8 FUN_00e98544(long param_1,long param_2)

{
  ulong *puVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  string *psVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  long lVar27;
  undefined1 *local_9c0;
  undefined8 uStack_9b8;
  long local_9b0;
  long lStack_9a8;
  undefined8 local_9a0;
  undefined *puStack_998;
  long local_990;
  undefined4 local_988;
  long local_980;
  undefined4 local_978 [2];
  string asStack_970 [752];
  undefined8 auStack_680 [2];
  string local_670;
  undefined1 auStack_66f [7];
  size_t local_668;
  undefined1 *local_660;
  char *apcStack_380 [2];
  char *local_370;
  code *local_368;
  long local_360;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b18d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b18d0), iVar7 != 0)) {
    local_360 = 0;
    local_368 = (code *)0x0;
    local_370 = (char *)0x2e6c6f7308;
    if (((DAT_043b1588 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b1588), iVar7 != 0)) {
      FUN_00e9d7f0();
      FUN_00100250(PTR__string_04379718,&DAT_043b1570,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b1588);
    }
    puVar15 = DAT_043b1580;
    if ((DAT_043b1570 & 1) == 0) {
      puVar15 = &DAT_043b1571;
    }
    pcVar26 = (char *)std::string::append((char *)&local_370,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b18b8,psVar14);
    lVar11 = local_360;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_370 & 1) != 0) && (local_360 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar5;
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
          FUN_02bcc824(plVar25,lVar11,0,8);
          goto LAB_00e9a64c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar11,0,8);
    }
LAB_00e9a64c:
    FUN_00100250(PTR__string_04379718,&DAT_043b18b8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b18d0);
  }
  std::string::string(&local_670,(string *)&DAT_043b18b8);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b18b0);
  sVar2 = (ulong)((byte)local_670 >> 1);
  if (((byte)local_670 & 1) != 0) {
    sVar2 = local_668;
  }
  std::string::append((ulong)&local_670,(char)iVar7);
  bVar6 = ((byte)local_670 & 1) == 0;
  puVar15 = local_660;
  if (bVar6) {
    puVar15 = auStack_66f;
  }
  sVar12 = (ulong)((byte)local_670 >> 1);
  if (!bVar6) {
    sVar12 = local_668;
  }
  snprintf(puVar15 + (sVar2 - 1),sVar12,"%d",(ulong)DAT_043b18b0);
  DAT_043b18b0 = DAT_043b18b0 + 1;
  if (((DAT_043b18f0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b18f0), iVar7 != 0)) {
    local_360 = 0;
    local_368 = (code *)0x0;
    local_370 = (char *)0x2e6c6f7308;
    if (((DAT_043b1588 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b1588), iVar7 != 0)) {
      FUN_00e9d7f0();
      FUN_00100250(PTR__string_04379718,&DAT_043b1570,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b1588);
    }
    if ((DAT_043b1570 & 1) == 0) {
      puVar15 = &DAT_043b1571;
    }
    else {
      puVar15 = DAT_043b1580;
    }
    pcVar26 = (char *)std::string::append((char *)&local_370,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043b18d8,psVar14);
    lVar11 = local_360;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_370 & 1) != 0) && (local_360 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar5;
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
          FUN_02bcc824(plVar25,lVar11,0,8);
          goto LAB_00e9a7b8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar11,0,8);
    }
LAB_00e9a7b8:
    FUN_00100250(PTR__string_04379718,&DAT_043b18d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b18f0);
  }
  if ((DAT_043b18d8 & 1) == 0) {
    puVar17 = &DAT_043b18d9;
  }
  else {
    puVar17 = DAT_043b18e8;
  }
  puVar15 = (undefined1 *)((ulong)&local_670 | 1);
  if (((byte)local_670 & 1) != 0) {
    puVar15 = local_660;
  }
  if (((DAT_043b1900 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b1900), iVar7 != 0)) {
    DAT_043b18f8 = 0x130;
    __cxa_guard_release(&DAT_043b1900);
  }
  if (((DAT_043b1910 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b1910), iVar7 != 0)) {
    DAT_043b1908 = 0x137;
    __cxa_guard_release(&DAT_043b1910);
  }
  uVar22 = DAT_043b18f8;
  lVar11 = FUN_00153520(param_2,DAT_043b18f8);
  if ((uVar22 < ((ulong)(uint)-(int)lVar11 & 7 | 0x130)) ||
     (puVar20 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar20 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043b1908;
    lVar11 = FUN_00153520(param_2,DAT_043b1908);
    if ((uVar22 < ((ulong)(uint)-(int)lVar11 & 7 | 0x130)) ||
       (puVar20 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar20 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00ea8400();
      if ((DAT_043b1918 & 1) == 0) {
        puVar16 = &DAT_043b1919;
      }
      else {
        puVar16 = DAT_043b1928;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar16);
      puVar20 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar20[1] = uVar18;
  puVar20[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  puVar20[3] = lVar11;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar20[4] = lVar23;
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar20[2];
    uVar22 = *(ulong *)(lVar11 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar4 = 0;
      if (uVar24 != 0) {
        uVar4 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar4 * uVar24;
    }
    *(undefined8 **)(puVar20[1] + uVar22 * 8) = puVar20 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar20[10] = 0;
  puVar20[8] = 0;
  puVar20[9] = 0;
  puVar20[6] = uVar18;
  puVar20[7] = uVar3;
  puVar20[8] = *(undefined8 *)(param_1 + 0x40);
  puVar20[9] = *(undefined8 *)(param_1 + 0x48);
  puVar20[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar20 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar20 = &PTR_FUN_041ee9f8;
  memcpy(puVar20 + 0xc,(void *)(param_1 + 0x60),0xd0);
  iVar7 = FUN_00154450(param_2,puVar15);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_00ea83c0,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar8 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar8);
  }
  FUN_001522a0(param_2,puVar17);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar17);
  lVar11 = FUN_001511d0(param_2,0xffffffff);
  lVar11 = lVar11 + ((ulong)(uint)-(int)lVar11 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar5 = DAT_043f1798;
  if ((((byte)local_670 & 1) != 0) && (local_660 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar5;
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
        FUN_02bcc824(plVar25,local_660,0,8);
        goto LAB_00e988c8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_660,0,8);
  }
LAB_00e988c8:
  memset(&local_370,0,0x300);
  pcVar26 = *(char **)(lVar11 + 0x60);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  lVar23 = lVar11 + 8;
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00e9e810;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_00e9de18;
  }
  puVar1 = (ulong *)(lVar11 + 0x128);
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e98ac8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e98ac8;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_370 = pcVar26;
  local_368 = pcVar19;
LAB_00e98ac8:
  pcVar26 = *(char **)(lVar11 + 0x68);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00e9edcc;
  if (uVar9 != 0) {
    pcVar19 = FUN_00e9e8dc;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e98c08;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e98c08;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e98c08:
  pcVar26 = *(char **)(lVar11 + 0x70);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = (code *)&LAB_00e9f78c;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_00e9f2d0;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e98d48;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e98d48;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e98d48:
  pcVar26 = *(char **)(lVar11 + 0x78);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea2fb4;
  if (uVar9 != 0) {
    pcVar19 = FUN_00e9fc5c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e98e88;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e98e88;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e98e88:
  pcVar26 = *(char **)(lVar11 + 0x80);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea364c;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea300c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e98fc8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e98fc8;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e98fc8:
  pcVar26 = *(char **)(lVar11 + 0x88);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea3a3c;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea36a4;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e99108;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e99108;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e99108:
  pcVar26 = *(char **)(lVar11 + 0x90);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea427c;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea3a94;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e99248;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e99248;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e99248:
  pcVar26 = *(char **)(lVar11 + 0x98);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea4948;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea44d0;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e99388;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e99388;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e99388:
  pcVar26 = *(char **)(lVar11 + 0xa0);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea4f10;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea49a0;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e994c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e994c8;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e994c8:
  pcVar26 = *(char **)(lVar11 + 0xa8);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea53e0;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea4f68;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e99608;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e99608;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e99608:
  pcVar26 = *(char **)(lVar11 + 0xb0);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea58b0;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea5438;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e99748;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e99748;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e99748:
  pcVar26 = *(char **)(lVar11 + 0xb8);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea5d80;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea5908;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e99888;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e99888;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e99888:
  pcVar26 = *(char **)(lVar11 + 0xc0);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea6250;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea5dd8;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e999c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e999c8;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e999c8:
  pcVar26 = *(char **)(lVar11 + 200);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea6720;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea62a8;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e99b08;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e99b08;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e99b08:
  pcVar26 = *(char **)(lVar11 + 0xd0);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = (code *)&LAB_00ea7fac;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_00ea6778;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xe0) = pcVar19;
            goto LAB_00e99c18;
          }
          *puVar1 = *puVar1 | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      goto LAB_00e99c18;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00e99c18:
  pcVar26 = *(char **)(lVar11 + 0xd8);
  sVar12 = strlen(pcVar26);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar26,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar22 = 0;
  pcVar19 = FUN_00ea81ac;
  if (uVar9 != 0) {
    pcVar19 = FUN_00ea8164;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar21 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar26);
    sVar2 = (ulong)(*pbVar21 >> 1);
    if ((*pbVar21 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar21 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar21,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar7 == 0)) {
      iVar7 = (int)uVar22;
      if (iVar7 == 0x13) {
        *(code **)(lVar11 + 0xe0) = pcVar19;
        uVar9 = (uint)*puVar1;
        goto joined_r0x00e99cfc;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x128) = *(ulong *)(lVar11 + 0x128) | 1L << (uVar22 & 0x3f);
      uVar9 = (uint)*puVar1;
      goto joined_r0x00e99cfc;
    }
    uVar22 = uVar22 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar22 != 0x20);
  (&local_370)[uVar24 * 2] = pcVar26;
  (&local_368)[uVar24 * 2] = pcVar19;
  uVar9 = (uint)*puVar1;
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x00e99cfc:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*puVar1;
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*puVar1;
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    if ((*(byte *)(lVar27 + 0x180) & 1) == 0) {
      pcVar26 = (char *)(lVar27 + 0x181);
    }
    else {
      pcVar26 = *(char **)(lVar27 + 400);
    }
    (&local_370)[uVar24 * 2] = pcVar26;
    (&local_368)[uVar24 * 2] = (code *)&LAB_00ea6df0;
    uVar9 = (uint)*puVar1;
    uVar24 = (ulong)((int)uVar24 + 1);
  }
  uVar22 = uVar24;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    if ((*(byte *)(lVar27 + 0x288) & 1) == 0) {
      pcVar26 = (char *)(lVar27 + 0x289);
    }
    else {
      pcVar26 = *(char **)(lVar27 + 0x298);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_370)[uVar24 * 2] = pcVar26;
    (&local_368)[uVar24 * 2] = (code *)&LAB_00ea6de8;
  }
  uVar24 = uVar22;
  if (*(long *)(lVar11 + 0xe0) != 0) {
    lVar27 = FUN_008cca50();
    if ((*(byte *)(lVar27 + 0x1c8) & 1) == 0) {
      pcVar26 = (char *)(lVar27 + 0x1c9);
    }
    else {
      pcVar26 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar11 + 0xe0);
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_370)[uVar22 * 2] = pcVar26;
    (&local_368)[uVar22 * 2] = pcVar19;
  }
  (&local_370)[uVar24 * 2] = (char *)0x0;
  (&local_368)[uVar24 * 2] = (code *)0x0;
  memcpy(&local_670,&local_370,0x300);
  memcpy(asStack_970,&local_370,0x300);
  lVar27 = FUN_008cca50();
  lVar13 = uVar24 - 1;
  pcVar26 = (&local_370)[lVar13 * 2];
  sVar12 = strlen(pcVar26);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar12 == sVar2) &&
     (iVar7 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar7 == 0)) {
    auStack_680[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_66f + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_970 + lVar13 * 0x10) = (&local_370)[lVar13 * 2];
  *(undefined1 **)(asStack_970 + (lVar13 * 2 + 1) * 8) = &LAB_00ea8200;
  FUN_00151fe0(param_2,0,2);
  local_978[0] = FUN_0014feb0(param_2,0xffffffff);
  local_980 = param_2;
  if (((DAT_043b1588 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b1588), iVar7 != 0)) {
    FUN_00e9d7f0();
    FUN_00100250(PTR__string_04379718,&DAT_043b1570,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b1588);
  }
  uVar8 = local_978[0];
  if ((DAT_043b1570 & 1) == 0) {
    uVar22 = (ulong)(DAT_043b1570 >> 1);
    puVar15 = &DAT_043b1571;
  }
  else {
    uVar22 = DAT_043b1578;
    puVar15 = DAT_043b1580;
  }
  FUN_001514f0(param_2,puVar15,uVar22);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00ea6d00,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar14 = asStack_970;
      FUN_00e9bbd8();
      pbVar21 = &DAT_043b14d8;
      puVar17 = &DAT_043b14d9;
      puVar20 = &DAT_043b14e8;
    }
    else if (lVar27 == 0) {
      psVar14 = &local_670;
      FUN_00e9b9e4();
      puVar17 = &DAT_043b1461;
      puVar20 = &DAT_043b1470;
      pbVar21 = &DAT_043b1460;
    }
    else {
      psVar14 = (string *)&local_370;
      FUN_00e9bdcc();
      puVar17 = &DAT_043b1551;
      puVar20 = &DAT_043b1560;
      pbVar21 = &DAT_043b1550;
    }
    if ((*pbVar21 & 1) != 0) {
      puVar17 = (undefined *)*puVar20;
    }
    FUN_00154450(param_2,puVar17);
    local_988 = FUN_0014feb0(param_2,0xffffffff);
    local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
    local_990 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_9c0,&local_980,local_988);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar14,2);
    uVar8 = local_988;
    if (*(long *)(lVar11 + 0x110) == 0) {
      lVar13 = *(long *)(lVar11 + 0x118);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar13 = *(long *)(lVar11 + 0x118);
      uVar8 = local_988;
    }
    local_988 = uVar8;
    if (lVar13 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_988;
    uVar18 = *(undefined8 *)(lVar11 + 0xf0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_988;
    uVar18 = *(undefined8 *)(lVar11 + 0xf8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar18,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_9c0,&local_990,local_988);
    }
    else {
      local_9c0 = &LAB_00ea82f0;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_00ea8250(param_2,1,&local_9c0,local_988);
      local_9c0 = &LAB_00ea82f4;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_00ea8250(param_2,2,&local_9c0,local_988);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_9c0,&local_980,uVar8);
    if (*(undefined1 **)(lVar11 + 0xe8) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0x120) == '\0') goto LAB_00e9a0b4;
LAB_00e9a3a8:
      local_9c0 = &LAB_00ea82f0;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_00ea8250(param_2,1,&local_9c0,uVar8);
      local_9c0 = &LAB_00ea82f4;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_00ea8250(param_2,2,&local_9c0,uVar8);
      if (param_2 == 0) goto LAB_00e9a3fc;
LAB_00e9a0bc:
      uVar10 = local_988;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_9b8 = 0;
      local_9c0 = *(undefined1 **)(lVar11 + 0xe8);
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_00ea8250(param_2,4,&local_9c0,uVar8);
      if (*(char *)(lVar11 + 0x120) != '\0') goto LAB_00e9a3a8;
LAB_00e9a0b4:
      if (param_2 != 0) goto LAB_00e9a0bc;
LAB_00e9a3fc:
      uVar10 = local_988;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_990,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_00e9c00c();
      if ((DAT_043b15c8 & 1) == 0) {
        puVar17 = &DAT_043b15c9;
      }
      else {
        puVar17 = DAT_043b15d8;
      }
      FUN_00154450(param_2,puVar17);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_9c0._0_4_ = 0x1e;
      FUN_008fe304(&local_990,param_2,&local_9c0,&local_980,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,&local_370,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
      FUN_008fe304(&local_990,param_2,&local_9c0,&local_980,uVar10);
      local_9c0 = *(undefined1 **)(lVar11 + 0xe8);
      if (local_9c0 != (undefined1 *)0x0) {
        uStack_9b8 = 0;
        local_9b0 = lVar11;
        lStack_9a8 = lVar23;
        FUN_00ea8250(param_2,4,&local_9c0,uVar10);
      }
      local_9c0 = &LAB_00ea83b8;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a78858;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_00ea8300(param_2,1,&local_9c0,uVar10);
      local_9c0 = &LAB_00ea83bc;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a78858;
      local_9b0 = lVar11;
      lStack_9a8 = lVar23;
      FUN_00ea8300(param_2,2,&local_9c0,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_978[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


