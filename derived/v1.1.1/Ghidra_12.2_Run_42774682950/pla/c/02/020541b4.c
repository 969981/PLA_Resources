/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020541b4; name: FUN_020541b4
 */


undefined8 FUN_020541b4(long param_1,long param_2)

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
  byte *pbVar14;
  string *psVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  code *pcVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long lVar27;
  undefined8 uVar28;
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
  
  if (((DAT_043d88c8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d88c8), iVar7 != 0)) {
    local_360 = 0;
    local_368 = (code *)0x0;
    local_370 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437cb18 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_0437cb18);
      puVar16 = PTR_DAT_0437cb20;
      if (iVar7 != 0) {
        FUN_00ee6630(PTR_DAT_0437cb20);
        FUN_00100250(PTR__string_04379718,puVar16,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437cb18);
      }
    }
    puVar16 = *(undefined **)(PTR_DAT_0437cb20 + 0x10);
    if ((*PTR_DAT_0437cb20 & 1) == 0) {
      puVar16 = PTR_DAT_0437cb20 + 1;
    }
    pcVar25 = (char *)std::string::append((char *)&local_370,(ulong)puVar16);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043d88b0,psVar15);
    lVar11 = local_360;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_370 & 1) != 0) && (local_360 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar5;
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
          FUN_02bcc824(plVar24,lVar11,0,8);
          goto LAB_0205628c;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar11,0,8);
    }
LAB_0205628c:
    FUN_00100250(PTR__string_04379718,&DAT_043d88b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d88c8);
  }
  std::string::string(&local_670,(string *)&DAT_043d88b0);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d88a8);
  sVar2 = (ulong)((byte)local_670 >> 1);
  if (((byte)local_670 & 1) != 0) {
    sVar2 = local_668;
  }
  std::string::append((ulong)&local_670,(char)iVar7);
  if (((byte)local_670 & 1) == 0) {
    puVar26 = auStack_66f;
    local_668 = (size_t)((byte)local_670 >> 1);
  }
  else {
    puVar26 = local_660;
  }
  snprintf(puVar26 + (sVar2 - 1),local_668,"%d",(ulong)DAT_043d88a8);
  DAT_043d88a8 = DAT_043d88a8 + 1;
  if (((DAT_043d88e8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d88e8), iVar7 != 0)) {
    local_360 = 0;
    local_368 = (code *)0x0;
    local_370 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437cb18 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_0437cb18);
      puVar16 = PTR_DAT_0437cb20;
      if (iVar7 != 0) {
        FUN_00ee6630(PTR_DAT_0437cb20);
        FUN_00100250(PTR__string_04379718,puVar16,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437cb18);
      }
    }
    if ((*PTR_DAT_0437cb20 & 1) == 0) {
      puVar16 = PTR_DAT_0437cb20 + 1;
    }
    else {
      puVar16 = *(undefined **)(PTR_DAT_0437cb20 + 0x10);
    }
    pcVar25 = (char *)std::string::append((char *)&local_370,(ulong)puVar16);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043d88d0,psVar15);
    lVar11 = local_360;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_370 & 1) != 0) && (local_360 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar5;
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
          FUN_02bcc824(plVar24,lVar11,0,8);
          goto LAB_020563f4;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar11,0,8);
    }
LAB_020563f4:
    FUN_00100250(PTR__string_04379718,&DAT_043d88d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d88e8);
  }
  if ((DAT_043d88d0 & 1) == 0) {
    uVar28 = 0x43d88d1;
    if (((byte)local_670 & 1) != 0) goto LAB_020542a4;
LAB_0205465c:
    puVar26 = (undefined1 *)((ulong)&local_670 | 1);
  }
  else {
    uVar28 = DAT_043d88e0;
    if (((byte)local_670 & 1) == 0) goto LAB_0205465c;
LAB_020542a4:
    puVar26 = local_660;
  }
  if (((DAT_043d88f8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d88f8), iVar7 != 0)) {
    DAT_043d88f0 = 0x160;
    __cxa_guard_release(&DAT_043d88f8);
  }
  if (((DAT_043d8908 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043d8908), iVar7 != 0)) {
    DAT_043d8900 = 0x167;
    __cxa_guard_release(&DAT_043d8908);
  }
  uVar21 = DAT_043d88f0;
  lVar11 = FUN_00153520(param_2,DAT_043d88f0);
  if ((uVar21 < ((ulong)(uint)-(int)lVar11 & 7 | 0x160)) ||
     (puVar17 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar17 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043d8900;
    lVar11 = FUN_00153520(param_2,DAT_043d8900);
    if ((uVar21 < ((ulong)(uint)-(int)lVar11 & 7 | 0x160)) ||
       (puVar17 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar17 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02070000();
      if ((DAT_043d8910 & 1) == 0) {
        puVar16 = &DAT_043d8911;
      }
      else {
        puVar16 = DAT_043d8920;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar16);
      puVar17 = (undefined8 *)0x0;
    }
  }
  uVar18 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar17[1] = uVar18;
  puVar17[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  puVar17[3] = lVar11;
  lVar22 = *(long *)(param_1 + 0x20);
  puVar17[4] = lVar22;
  *(undefined4 *)(puVar17 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar17[2];
    uVar21 = *(ulong *)(lVar11 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar4 = 0;
      if (uVar23 != 0) {
        uVar4 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar4 * uVar23;
    }
    *(undefined8 **)(puVar17[1] + uVar21 * 8) = puVar17 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar17[10] = 0;
  puVar17[8] = 0;
  puVar17[9] = 0;
  puVar17[6] = uVar18;
  puVar17[7] = uVar3;
  puVar17[8] = *(undefined8 *)(param_1 + 0x40);
  puVar17[9] = *(undefined8 *)(param_1 + 0x48);
  puVar17[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar17 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar17 = &PTR_FUN_0425b308;
  memcpy(puVar17 + 0xc,(void *)(param_1 + 0x60),0x100);
  iVar7 = FUN_00154450(param_2,puVar26);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_0206ffc0,0);
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
  FUN_001522a0(param_2,uVar28);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,uVar28);
  lVar11 = FUN_001511d0(param_2,0xffffffff);
  lVar11 = lVar11 + ((ulong)(uint)-(int)lVar11 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar5 = DAT_043f1798;
  if ((((byte)local_670 & 1) != 0) && (local_660 != (undefined1 *)0x0)) {
    lVar22 = tpidr_el0;
    plVar24 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar24 = plVar5;
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
        FUN_02bcc824(plVar24,local_660,0,8);
        goto LAB_0205451c;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_660,0,8);
  }
LAB_0205451c:
  memset(&local_370,0,0x300);
  pcVar25 = *(char **)(lVar11 + 0x60);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  lVar22 = lVar11 + 8;
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_0205822c;
  if (uVar9 != 0) {
    pcVar19 = FUN_02057ed0;
  }
  puVar1 = (ulong *)(lVar11 + 0x158);
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            uVar23 = 0;
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02054734;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02054734;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_370 = pcVar25;
  local_368 = pcVar19;
LAB_02054734:
  pcVar25 = *(char **)(lVar11 + 0x68);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02058ab0;
  if (uVar9 != 0) {
    pcVar19 = FUN_02058284;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02054874;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02054874;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02054874:
  pcVar25 = *(char **)(lVar11 + 0x70);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_0205c4bc;
  if (uVar9 != 0) {
    pcVar19 = FUN_02058b08;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_020549b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_020549b4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020549b4:
  pcVar25 = *(char **)(lVar11 + 0x78);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_0205c87c;
  if (uVar9 != 0) {
    pcVar19 = FUN_0205c514;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02054af4;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02054af4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02054af4:
  pcVar25 = *(char **)(lVar11 + 0x80);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = (code *)&LAB_02060310;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_0205c8d4;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02054c34;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02054c34;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02054c34:
  pcVar25 = *(char **)(lVar11 + 0x88);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = (code *)&LAB_020605ec;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_02060354;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02054d74;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02054d74;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02054d74:
  pcVar25 = *(char **)(lVar11 + 0x90);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02060da0;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_02060630;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02054eb4;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02054eb4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02054eb4:
  pcVar25 = *(char **)(lVar11 + 0x98);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02060f2c;
  if (uVar9 != 0) {
    pcVar19 = FUN_02060df8;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02054ff4;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02054ff4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02054ff4:
  pcVar25 = *(char **)(lVar11 + 0xb0);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_020610a8;
  if (uVar9 != 0) {
    pcVar19 = FUN_02061060;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02055134;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02055134;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02055134:
  pcVar25 = *(char **)(lVar11 + 200);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02064afc;
  if (uVar9 != 0) {
    pcVar19 = FUN_020610f0;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02055274;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02055274;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02055274:
  pcVar25 = *(char **)(lVar11 + 0xd0);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02064df4;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_02064b54;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_020553b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_020553b4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020553b4:
  pcVar25 = *(char **)(lVar11 + 0xd8);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_02064f9c;
  if (uVar9 != 0) {
    pcVar19 = FUN_02064e4c;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_020554f4;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_020554f4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020554f4:
  pcVar25 = *(char **)(lVar11 + 0xf0);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_0206897c;
  if (uVar9 != 0) {
    pcVar19 = FUN_02065094;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02055634;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02055634;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02055634:
  pcVar25 = *(char **)(lVar11 + 0xf8);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_0206c23c;
  if (uVar9 != 0) {
    pcVar19 = (code *)&LAB_020689d4;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_02055774;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_02055774;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_02055774:
  pcVar25 = *(char **)(lVar11 + 0x100);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_0206fc8c;
  if (uVar9 != 0) {
    pcVar19 = FUN_0206c294;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0x110) = pcVar19;
            goto LAB_020558b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      goto LAB_020558b4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_020558b4:
  pcVar25 = *(char **)(lVar11 + 0x108);
  sVar12 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar12 < 0xb) {
    sVar2 = sVar12;
  }
  if (sVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar19 = FUN_0206fd44;
  if (uVar9 != 0) {
    pcVar19 = FUN_0206fce4;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar14 = (byte *)(lVar13 + lVar27);
    sVar12 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar14 + 8);
    }
    if ((sVar12 == sVar2) &&
       (iVar7 = std::string::compare((ulong)pbVar14,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar7 == 0)) {
      iVar7 = (int)uVar21;
      if (iVar7 == 0x13) {
        *(code **)(lVar11 + 0x110) = pcVar19;
        uVar9 = (uint)*puVar1;
        goto joined_r0x02055998;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar19;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar19;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x158) = *(ulong *)(lVar11 + 0x158) | 1L << (uVar21 & 0x3f);
      uVar9 = (uint)*puVar1;
      goto joined_r0x02055998;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  (&local_370)[uVar23 * 2] = pcVar25;
  (&local_368)[uVar23 * 2] = pcVar19;
  uVar9 = (uint)*puVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x02055998:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*puVar1;
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*puVar1;
  }
  uVar21 = uVar23;
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    if ((*(byte *)(lVar27 + 0x180) & 1) == 0) {
      pcVar25 = (char *)(lVar27 + 0x181);
    }
    else {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_370)[uVar23 * 2] = pcVar25;
    (&local_368)[uVar23 * 2] = (code *)PTR_LAB_0437caf0;
    uVar9 = (uint)*puVar1;
  }
  uVar23 = uVar21;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    if ((*(byte *)(lVar27 + 0x288) & 1) == 0) {
      pcVar25 = (char *)(lVar27 + 0x289);
    }
    else {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    uVar23 = (ulong)((int)uVar21 + 1);
    (&local_370)[uVar21 * 2] = pcVar25;
    (&local_368)[uVar21 * 2] = (code *)PTR_LAB_0437caf8;
  }
  uVar21 = uVar23;
  if (*(long *)(lVar11 + 0x110) != 0) {
    lVar27 = FUN_008cca50();
    if ((*(byte *)(lVar27 + 0x1c8) & 1) == 0) {
      pcVar25 = (char *)(lVar27 + 0x1c9);
    }
    else {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar19 = *(code **)(lVar11 + 0x110);
    uVar21 = (ulong)((int)uVar23 + 1);
    (&local_370)[uVar23 * 2] = pcVar25;
    (&local_368)[uVar23 * 2] = pcVar19;
  }
  (&local_370)[uVar21 * 2] = (char *)0x0;
  (&local_368)[uVar21 * 2] = (code *)0x0;
  memcpy(&local_670,&local_370,0x300);
  memcpy(asStack_970,&local_370,0x300);
  lVar27 = FUN_008cca50();
  lVar13 = uVar21 - 1;
  pcVar25 = (&local_370)[lVar13 * 2];
  sVar12 = strlen(pcVar25);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar12 == sVar2) &&
     (iVar7 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar7 == 0)) {
    auStack_680[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_66f + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_970 + lVar13 * 0x10) = (&local_370)[lVar13 * 2];
  *(undefined1 **)(asStack_970 + (lVar13 * 2 + 1) * 8) = &LAB_0206fdb0;
  FUN_00151fe0(param_2,0,2);
  local_978[0] = FUN_0014feb0(param_2,0xffffffff);
  local_980 = param_2;
  if ((*PTR_DAT_0437cb18 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_0437cb18);
    puVar16 = PTR_DAT_0437cb20;
    if (iVar7 != 0) {
      FUN_00ee6630(PTR_DAT_0437cb20);
      FUN_00100250(PTR__string_04379718,puVar16,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437cb18);
    }
  }
  uVar8 = local_978[0];
  uVar21 = *(ulong *)(PTR_DAT_0437cb20 + 8);
  puVar16 = *(undefined **)(PTR_DAT_0437cb20 + 0x10);
  if ((*PTR_DAT_0437cb20 & 1) == 0) {
    puVar16 = PTR_DAT_0437cb20 + 1;
    uVar21 = (ulong)((byte)*PTR_DAT_0437cb20 >> 1);
  }
  FUN_001514f0(param_2,puVar16,uVar21);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0206fe00,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar15 = asStack_970;
      pbVar14 = (byte *)FUN_00ee6e3c();
    }
    else if (lVar27 == 0) {
      psVar15 = &local_670;
      pbVar14 = (byte *)FUN_00ee4f7c();
    }
    else {
      psVar15 = (string *)&local_370;
      pbVar14 = (byte *)FUN_00ee63d4();
    }
    pbVar20 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar20 = pbVar14 + 1;
    }
    FUN_00154450(param_2,pbVar20);
    local_988 = FUN_0014feb0(param_2,0xffffffff);
    local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
    local_990 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_9c0,&local_980,local_988);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar15,2);
    uVar8 = local_988;
    if (*(long *)(lVar11 + 0x140) == 0) {
      lVar13 = *(long *)(lVar11 + 0x148);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar13 = *(long *)(lVar11 + 0x148);
      uVar8 = local_988;
    }
    local_988 = uVar8;
    if (lVar13 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_988;
    uVar28 = *(undefined8 *)(lVar11 + 0x120);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar28,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_988;
    uVar28 = *(undefined8 *)(lVar11 + 0x128);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar28,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_9c0,&local_990,local_988);
    }
    else {
      local_9c0 = &LAB_0206fef0;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar22;
      FUN_0206fe50(param_2,1,&local_9c0,local_988);
      local_9c0 = &LAB_0206fef4;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar22;
      FUN_0206fe50(param_2,2,&local_9c0,local_988);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_9c0 = (undefined1 *)CONCAT44(local_9c0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_9c0,&local_980,uVar8);
    if (*(undefined1 **)(lVar11 + 0x118) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0x150) != '\0') goto LAB_02056010;
LAB_02055d1c:
      if (param_2 == 0) goto LAB_02056064;
LAB_02055d24:
      uVar10 = local_988;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_9b8 = 0;
      local_9c0 = *(undefined1 **)(lVar11 + 0x118);
      local_9b0 = lVar11;
      lStack_9a8 = lVar22;
      FUN_0206fe50(param_2,4,&local_9c0,uVar8);
      if (*(char *)(lVar11 + 0x150) == '\0') goto LAB_02055d1c;
LAB_02056010:
      local_9c0 = &LAB_0206fef0;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar22;
      FUN_0206fe50(param_2,1,&local_9c0,uVar8);
      local_9c0 = &LAB_0206fef4;
      uStack_9b8 = 0;
      local_9b0 = lVar11;
      lStack_9a8 = lVar22;
      FUN_0206fe50(param_2,2,&local_9c0,uVar8);
      if (param_2 != 0) goto LAB_02055d24;
LAB_02056064:
      uVar10 = local_988;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_990,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_0205763c();
      if ((DAT_043d7bb8 & 1) == 0) {
        puVar16 = &DAT_043d7bb9;
      }
      else {
        puVar16 = DAT_043d7bc8;
      }
      FUN_00154450(param_2,puVar16);
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
      local_9c0 = *(undefined1 **)(lVar11 + 0x118);
      if (local_9c0 != (undefined1 *)0x0) {
        uStack_9b8 = 0;
        local_9b0 = lVar11;
        lStack_9a8 = lVar22;
        FUN_0206fe50(param_2,4,&local_9c0,uVar10);
      }
      local_9c0 = &LAB_0206ffb8;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a7d2e8;
      local_9b0 = lVar11;
      lStack_9a8 = lVar22;
      FUN_0206ff00(param_2,1,&local_9c0,uVar10);
      local_9c0 = &LAB_0206ffbc;
      uStack_9b8 = 0;
      local_9a0 = 0;
      puStack_998 = &DAT_03a7d2e8;
      local_9b0 = lVar11;
      lStack_9a8 = lVar22;
      FUN_0206ff00(param_2,2,&local_9c0,uVar10);
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


