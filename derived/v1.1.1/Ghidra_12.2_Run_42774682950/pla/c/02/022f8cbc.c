/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022f8cbc; name: FUN_022f8cbc
 */


void FUN_022f8cbc(long param_1,long param_2)

{
  ulong *puVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  byte *pbVar17;
  string *psVar18;
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
  long lVar29;
  undefined1 *local_15f0;
  undefined8 uStack_15e8;
  long local_15e0;
  long lStack_15d8;
  undefined8 local_15d0;
  undefined *puStack_15c8;
  undefined4 local_15c0 [2];
  long local_15b8;
  undefined4 local_15b0;
  long local_15a8;
  undefined4 local_15a0 [2];
  string asStack_1598 [1792];
  undefined8 auStack_e98 [2];
  string local_e88;
  undefined1 auStack_e87 [7];
  size_t local_e80;
  undefined1 *local_e78;
  char *apcStack_788 [2];
  char *local_778;
  code *local_770;
  long local_768;
  
  if (((DAT_043e15b8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e15b8), iVar9 != 0)) {
    local_768 = 0;
    local_770 = (code *)0x0;
    local_778 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383158 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04383158);
      puVar3 = PTR_DAT_04383160;
      if (iVar9 != 0) {
        FUN_01f4c7a0(PTR_DAT_04383160);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383158);
      }
    }
    pcVar27 = (char *)FUN_022f31d0(&local_778,PTR_DAT_04383160);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e15a0,psVar18);
    lVar14 = local_768;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_778 & 1) != 0) && (local_768 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
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
          goto LAB_022ffef0;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_022ffef0:
    FUN_00100250(PTR__string_04379718,&DAT_043e15a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e15b8);
  }
  std::string::string(&local_e88,(string *)&DAT_043e15a0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e1598);
  sVar2 = (ulong)((byte)local_e88 >> 1);
  if (((byte)local_e88 & 1) != 0) {
    sVar2 = local_e80;
  }
  std::string::append((ulong)&local_e88,(char)iVar9);
  if (((byte)local_e88 & 1) == 0) {
    puVar28 = auStack_e87;
    local_e80 = (size_t)((byte)local_e88 >> 1);
  }
  else {
    puVar28 = local_e78;
  }
  snprintf(puVar28 + (sVar2 - 1),local_e80,"%d",(ulong)DAT_043e1598);
  DAT_043e1598 = DAT_043e1598 + 1;
  if (((DAT_043e15d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e15d8), iVar9 != 0)) {
    local_768 = 0;
    local_770 = (code *)0x0;
    local_778 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04383158 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04383158);
      puVar3 = PTR_DAT_04383160;
      if (iVar9 != 0) {
        FUN_01f4c7a0(PTR_DAT_04383160);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04383158);
      }
    }
    pcVar27 = (char *)FUN_022f31d0(&local_778,PTR_DAT_04383160);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e15c0,psVar18);
    lVar14 = local_768;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_778 & 1) != 0) && (local_768 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
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
          goto LAB_02300044;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_02300044:
    FUN_00100250(PTR__string_04379718,&DAT_043e15c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e15d8);
  }
  puVar3 = DAT_043e15d0;
  if ((DAT_043e15c0 & 1) == 0) {
    puVar3 = &DAT_043e15c1;
  }
  if (((byte)local_e88 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_e88 | 1);
  }
  else {
    puVar28 = local_e78;
  }
  if (((DAT_043e15e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e15e8), iVar9 != 0)) {
    DAT_043e15e0 = 0x808;
    __cxa_guard_release(&DAT_043e15e8);
  }
  if (((DAT_043e15f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e15f8), iVar9 != 0)) {
    DAT_043e15f0 = 0x80f;
    __cxa_guard_release(&DAT_043e15f8);
  }
  uVar23 = DAT_043e15e0;
  lVar14 = FUN_00153520(param_1,DAT_043e15e0);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x808)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043e15f0;
    lVar14 = FUN_00153520(param_1,DAT_043e15f0);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 0x808)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_02300ad0();
      puVar4 = DAT_043e1610;
      if ((DAT_043e1600 & 1) == 0) {
        puVar4 = &DAT_043e1601;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar4);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar14 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar14;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar14 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar6 = 0;
      if (uVar25 != 0) {
        uVar6 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar6 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar5;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_LAB_0425bb28;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x7a8);
  iVar9 = FUN_00154450(param_1,puVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_02300a90,0);
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
  FUN_001522a0(param_1,puVar3);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar3);
  lVar14 = FUN_001511d0(param_1,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_e88 & 1) != 0) && (local_e78 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar7;
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
        FUN_02bcc824(plVar26,local_e78,0,8);
        goto LAB_022f902c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_e78,0,8);
  }
LAB_022f902c:
  memset(&local_778,0,0x710);
  pcVar27 = *(char **)(lVar14 + 0x60);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar24 = lVar14 + 8;
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f35d4;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f350c;
  }
  puVar1 = (ulong *)(lVar14 + 0x800);
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f924c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f924c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_778 = pcVar27;
  local_770 = pcVar21;
LAB_022f924c:
  pcVar27 = *(char **)(lVar14 + 0x70);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f366c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f361c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f938c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f938c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f938c:
  pcVar27 = *(char **)(lVar14 + 0x80);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f3704;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f36bc;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f94cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f94cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f94cc:
  pcVar27 = *(char **)(lVar14 + 0x90);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f379c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f374c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f960c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f960c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f960c:
  pcVar27 = *(char **)(lVar14 + 0xa0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f3908;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f37ec;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f974c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f974c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f974c:
  pcVar27 = *(char **)(lVar14 + 0xb8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f3a6c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f3a24;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f988c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f988c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f988c:
  pcVar27 = *(char **)(lVar14 + 0xd0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f3ba0;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f3ab4;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f99cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f99cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f99cc:
  pcVar27 = *(char **)(lVar14 + 0xe8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f3cf4;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f3cbc;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f9b0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f9b0c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f9b0c:
  pcVar27 = *(char **)(lVar14 + 0x100);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f3d84;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f3d3c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f9c4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f9c4c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f9c4c:
  pcVar27 = *(char **)(lVar14 + 0x118);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f3e14;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f3dcc;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f9d8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f9d8c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f9d8c:
  pcVar27 = *(char **)(lVar14 + 0x130);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f3f68;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f3e5c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022f9ecc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022f9ecc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022f9ecc:
  pcVar27 = *(char **)(lVar14 + 0x148);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f40e4;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f409c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fa00c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fa00c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fa00c:
  pcVar27 = *(char **)(lVar14 + 0x160);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4174;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f412c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fa14c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fa14c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fa14c:
  pcVar27 = *(char **)(lVar14 + 0x178);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4204;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f41bc;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fa28c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fa28c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fa28c:
  pcVar27 = *(char **)(lVar14 + 400);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4294;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f424c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fa3cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fa3cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fa3cc:
  pcVar27 = *(char **)(lVar14 + 0x1a8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f4314;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f42dc;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fa50c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fa50c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fa50c:
  pcVar27 = *(char **)(lVar14 + 0x1c0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4524;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f435c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fa64c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fa64c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fa64c:
  pcVar27 = *(char **)(lVar14 + 0x1d8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4664;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f461c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fa78c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fa78c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fa78c:
  pcVar27 = *(char **)(lVar14 + 0x1f0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f46f4;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f46ac;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fa8cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fa8cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fa8cc:
  pcVar27 = *(char **)(lVar14 + 0x208);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4858;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f473c;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022faa0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022faa0c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022faa0c:
  pcVar27 = *(char **)(lVar14 + 0x220);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f49bc;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f4974;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fab4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fab4c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fab4c:
  pcVar27 = *(char **)(lVar14 + 0x238);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4a4c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f4a04;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fac8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fac8c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fac8c:
  pcVar27 = *(char **)(lVar14 + 0x250);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4c00;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f4a94;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fadcc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fadcc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fadcc:
  pcVar27 = *(char **)(lVar14 + 0x268);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4d40;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f4cf8;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022faf0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022faf0c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022faf0c:
  pcVar27 = *(char **)(lVar14 + 0x280);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4dd0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f4d88;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fb04c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fb04c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fb04c:
  pcVar27 = *(char **)(lVar14 + 0x298);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f4f1c;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f4e18;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fb18c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fb18c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fb18c:
  pcVar27 = *(char **)(lVar14 + 0x2b0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f514c;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f5030;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fb2cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fb2cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fb2cc:
  pcVar27 = *(char **)(lVar14 + 0x2c8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f52c0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5278;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fb40c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fb40c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fb40c:
  pcVar27 = *(char **)(lVar14 + 0x2e0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f5350;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5308;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fb54c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fb54c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fb54c:
  pcVar27 = *(char **)(lVar14 + 0x2f8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f53e0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5398;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fb68c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fb68c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fb68c:
  pcVar27 = *(char **)(lVar14 + 0x310);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f565c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5428;
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
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fb7cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fb7cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022fb7cc:
  iVar9 = (int)uVar25;
  pcVar27 = *(char **)(lVar14 + 0x328);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f579c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5754;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fb90c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fb90c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  iVar9 = iVar9 + 1;
  (&local_778)[uVar25 * 2] = pcVar27;
  (&local_770)[uVar25 * 2] = pcVar21;
LAB_022fb90c:
  pcVar27 = *(char **)(lVar14 + 0x340);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f582c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f57e4;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fba4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fba4c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fba4c:
  pcVar27 = *(char **)(lVar14 + 0x358);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f58bc;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5874;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fbb8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fbb8c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fbb8c:
  pcVar27 = *(char **)(lVar14 + 0x370);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f594c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5904;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fbccc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fbccc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fbccc:
  pcVar27 = *(char **)(lVar14 + 0x388);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f59dc;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5994;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fbe0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fbe0c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fbe0c:
  pcVar27 = *(char **)(lVar14 + 0x3a0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f5a6c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5a24;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fbf4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fbf4c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fbf4c:
  pcVar27 = *(char **)(lVar14 + 0x3b8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f5aec;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f5ab4;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fc08c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fc08c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fc08c:
  pcVar27 = *(char **)(lVar14 + 0x3d0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f5b6c;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f5b34;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fc1cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fc1cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fc1cc:
  pcVar27 = *(char **)(lVar14 + 1000);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f5bec;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f5bb4;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fc30c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fc30c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fc30c:
  pcVar27 = *(char **)(lVar14 + 0x400);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f5c7c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5c34;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fc44c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fc44c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fc44c:
  pcVar27 = *(char **)(lVar14 + 0x418);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f5d0c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5cc4;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fc58c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fc58c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fc58c:
  pcVar27 = *(char **)(lVar14 + 0x430);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f5d8c;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f5d54;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fc6cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fc6cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fc6cc:
  pcVar27 = *(char **)(lVar14 + 0x448);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f5f30;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f5dd4;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fc80c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fc80c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fc80c:
  pcVar27 = *(char **)(lVar14 + 0x460);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f6060;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f6028;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fc94c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fc94c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fc94c:
  pcVar27 = *(char **)(lVar14 + 0x478);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f61ec;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f60a8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fca8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fca8c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fca8c:
  pcVar27 = *(char **)(lVar14 + 0x490);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f632c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f62e4;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fcbcc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fcbcc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fcbcc:
  pcVar27 = *(char **)(lVar14 + 0x4a8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f63ac;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f6374;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fcd0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fcd0c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fcd0c:
  pcVar27 = *(char **)(lVar14 + 0x4c0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f643c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f63f4;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fce4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fce4c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fce4c:
  pcVar27 = *(char **)(lVar14 + 0x4d8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f64cc;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f6484;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fcf8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fcf8c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fcf8c:
  pcVar27 = *(char **)(lVar14 + 0x4f0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f6834;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f6514;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fd0cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fd0cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fd0cc:
  pcVar27 = *(char **)(lVar14 + 0x508);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f6c20;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f692c;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fd20c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fd20c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fd20c:
  pcVar27 = *(char **)(lVar14 + 0x520);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f6d60;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f6d18;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fd34c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fd34c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fd34c:
  pcVar27 = *(char **)(lVar14 + 0x538);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f6df0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f6da8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fd48c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fd48c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fd48c:
  pcVar27 = *(char **)(lVar14 + 0x550);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f6e80;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f6e38;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fd5cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fd5cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fd5cc:
  pcVar27 = *(char **)(lVar14 + 0x568);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f6f10;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f6ec8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fd70c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fd70c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fd70c:
  pcVar27 = *(char **)(lVar14 + 0x580);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f6fa0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f6f58;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fd84c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fd84c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fd84c:
  pcVar27 = *(char **)(lVar14 + 0x598);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f7020;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f6fe8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fd98c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fd98c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fd98c:
  pcVar27 = *(char **)(lVar14 + 0x5b0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f70b0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7068;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fdacc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fdacc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fdacc:
  pcVar27 = *(char **)(lVar14 + 0x5c8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7140;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f70f8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fdc0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fdc0c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fdc0c:
  pcVar27 = *(char **)(lVar14 + 0x5e0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f71d0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7188;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fdd4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fdd4c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fdd4c:
  pcVar27 = *(char **)(lVar14 + 0x5f8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7260;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7218;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fde8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fde8c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fde8c:
  pcVar27 = *(char **)(lVar14 + 0x610);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f72f0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f72a8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fdfcc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fdfcc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fdfcc:
  pcVar27 = *(char **)(lVar14 + 0x628);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7380;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7338;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fe10c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fe10c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fe10c:
  pcVar27 = *(char **)(lVar14 + 0x640);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7410;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f73c8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fe24c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fe24c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fe24c:
  pcVar27 = *(char **)(lVar14 + 0x658);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f74a0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7458;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fe38c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fe38c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fe38c:
  pcVar27 = *(char **)(lVar14 + 0x670);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f7520;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f74e8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fe4cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fe4cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fe4cc:
  pcVar27 = *(char **)(lVar14 + 0x688);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f75b0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7568;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fe60c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fe60c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fe60c:
  pcVar27 = *(char **)(lVar14 + 0x6a0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f77b4;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f75f8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fe74c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fe74c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fe74c:
  pcVar27 = *(char **)(lVar14 + 0x6b8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f78f4;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f78ac;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fe88c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fe88c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fe88c:
  pcVar27 = *(char **)(lVar14 + 0x6d0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7984;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f793c;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fe9cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fe9cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fe9cc:
  pcVar27 = *(char **)(lVar14 + 0x6e8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7c40;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f79cc;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022feb0c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022feb0c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022feb0c:
  pcVar27 = *(char **)(lVar14 + 0x700);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7d80;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7d38;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fec4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fec4c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fec4c:
  pcVar27 = *(char **)(lVar14 + 0x718);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7e10;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7dc8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022fed8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022fed8c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022fed8c:
  pcVar27 = *(char **)(lVar14 + 0x730);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7ea0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7e58;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022feecc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022feecc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022feecc:
  pcVar27 = *(char **)(lVar14 + 0x748);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7f30;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7ee8;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022ff00c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022ff00c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022ff00c:
  pcVar27 = *(char **)(lVar14 + 0x760);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f7fc0;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f7f78;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022ff14c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022ff14c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022ff14c:
  pcVar27 = *(char **)(lVar14 + 0x778);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f8050;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f8008;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022ff28c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022ff28c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022ff28c:
  pcVar27 = *(char **)(lVar14 + 0x790);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f8214;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f8098;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022ff3cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022ff3cc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022ff3cc:
  pcVar27 = *(char **)(lVar14 + 0x7a8);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_022f8a58;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_022f830c;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          if (iVar12 == 0x13) {
            *(code **)(lVar14 + 0x7b8) = pcVar21;
            goto LAB_022ff4dc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      goto LAB_022ff4dc;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
LAB_022ff4dc:
  pcVar27 = *(char **)(lVar14 + 0x7b0);
  sVar15 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar15 < 0xb) {
    sVar2 = sVar15;
  }
  if (sVar2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar2);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_022f8c5c;
  if (uVar11 != 0) {
    pcVar21 = FUN_022f8bfc;
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
       (iVar12 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar12 == 0)) {
      iVar12 = (int)uVar23;
      if (iVar12 == 0x13) {
        *(code **)(lVar14 + 0x7b8) = pcVar21;
        uVar11 = (uint)*puVar1;
        goto joined_r0x022ff5c0;
      }
      if (iVar12 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar12 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0x800) = *(ulong *)(lVar14 + 0x800) | 1L << (uVar23 & 0x3f);
      uVar11 = (uint)*puVar1;
      goto joined_r0x022ff5c0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  lVar29 = (long)iVar9;
  iVar9 = iVar9 + 1;
  (&local_778)[lVar29 * 2] = pcVar27;
  (&local_770)[lVar29 * 2] = pcVar21;
  uVar11 = (uint)*puVar1;
joined_r0x022ff5c0:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    lVar29 = (long)iVar9;
    iVar9 = iVar9 + 1;
    (&local_778)[lVar29 * 2] = pcVar27;
    (&local_770)[lVar29 * 2] = (code *)PTR_LAB_04383130;
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    lVar29 = (long)iVar9;
    iVar9 = iVar9 + 1;
    (&local_778)[lVar29 * 2] = pcVar27;
    (&local_770)[lVar29 * 2] = (code *)PTR_LAB_04383138;
  }
  if (*(long *)(lVar14 + 0x7b8) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar14 + 0x7b8);
    lVar29 = (long)iVar9;
    iVar9 = iVar9 + 1;
    (&local_778)[lVar29 * 2] = pcVar27;
    (&local_770)[lVar29 * 2] = pcVar21;
  }
  (&local_778)[(long)iVar9 * 2] = (char *)0x0;
  (&local_770)[(long)iVar9 * 2] = (code *)0x0;
  memcpy(&local_e88,&local_778,0x710);
  memcpy(asStack_1598,&local_778,0x710);
  lVar29 = FUN_008cca50();
  lVar16 = (long)iVar9 + -1;
  pcVar27 = (&local_778)[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar2) &&
     (iVar9 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    auStack_e98[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_e87 + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_1598 + lVar16 * 0x10) = (&local_778)[lVar16 * 2];
  *(undefined1 **)(asStack_1598 + (lVar16 * 2 + 1) * 8) = &LAB_02300a30;
  FUN_00151fe0(param_1,0,2);
  local_15a0[0] = FUN_0014feb0(param_1,0xffffffff);
  local_15a8 = param_1;
  if ((*PTR_DAT_04383158 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04383158);
    puVar3 = PTR_DAT_04383160;
    if (iVar9 != 0) {
      FUN_01f4c7a0(PTR_DAT_04383160);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04383158);
    }
  }
  uVar10 = local_15a0[0];
  uVar23 = *(ulong *)(PTR_DAT_04383160 + 8);
  puVar3 = *(undefined **)(PTR_DAT_04383160 + 0x10);
  if ((*PTR_DAT_04383160 & 1) == 0) {
    puVar3 = PTR_DAT_04383160 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_04383160 >> 1);
  }
  FUN_001514f0(param_1,puVar3,uVar23);
  FUN_00152550(param_1,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_022f88e0,0);
  FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_1598;
      pbVar17 = (byte *)FUN_01f4cb3c();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_e88;
      pbVar17 = (byte *)FUN_01f4b244();
    }
    else {
      psVar18 = (string *)&local_778;
      pbVar17 = (byte *)FUN_01f4c544();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_15b0 = FUN_0014feb0(param_1,0xffffffff);
    local_15f0 = (undefined1 *)CONCAT44(local_15f0._4_4_,0x1e);
    local_15b8 = param_1;
    FUN_008fe304(local_15c0,param_1,&local_15f0,&local_15a8,local_15b0);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar14);
    FUN_00155a20(param_1,psVar18,2);
    uVar10 = local_15b0;
    if (*(long *)(lVar14 + 0x7e8) == 0) {
      lVar16 = *(long *)(lVar14 + 0x7f0);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_check");
      lVar16 = *(long *)(lVar14 + 0x7f0);
      uVar10 = local_15b0;
    }
    local_15b0 = uVar10;
    if (lVar16 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar10,"class_cast");
    }
    uVar10 = local_15b0;
    uVar20 = *(undefined8 *)(lVar14 + 0x7c8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar14);
    FUN_00151810(param_1,lVar24);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_03955ac7);
    uVar10 = local_15b0;
    uVar20 = *(undefined8 *)(lVar14 + 2000);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar14);
    FUN_00151810(param_1,lVar24);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_15f0 = (undefined1 *)CONCAT44(local_15f0._4_4_,1);
      FUN_008fe304(local_15c0,param_1,&local_15f0,&local_15b8,local_15b0);
    }
    else {
      local_15c0[0] = 1;
      local_15f0 = &LAB_02300a80;
      uStack_15e8 = 0;
      local_15e0 = lVar14;
      lStack_15d8 = lVar24;
      FUN_02300f10(param_1,local_15c0,&local_15f0,local_15b0);
      local_15c0[0] = 2;
      local_15f0 = &LAB_02300a84;
      uStack_15e8 = 0;
      local_15e0 = lVar14;
      lStack_15d8 = lVar24;
      FUN_02300f10(param_1,local_15c0,&local_15f0,local_15b0);
    }
    FUN_00151fe0(param_1,0,3);
    uVar10 = FUN_0014feb0(param_1,0xffffffff);
    local_15f0 = (undefined1 *)CONCAT44(local_15f0._4_4_,0x1e);
    FUN_008fe304(local_15c0,param_1,&local_15f0,&local_15a8,uVar10);
    if (*(undefined1 **)(lVar14 + 0x7c0) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0x7f8) != '\0') goto LAB_022ffc7c;
LAB_022ff960:
      if (param_1 == 0) goto LAB_022ffcdc;
LAB_022ff968:
      uVar13 = local_15b0;
      FUN_00150260(param_1,uVar10);
    }
    else {
      uStack_15e8 = 0;
      local_15c0[0] = 4;
      local_15f0 = *(undefined1 **)(lVar14 + 0x7c0);
      local_15e0 = lVar14;
      lStack_15d8 = lVar24;
      FUN_02300f10(param_1,local_15c0,&local_15f0,uVar10);
      if (*(char *)(lVar14 + 0x7f8) == '\0') goto LAB_022ff960;
LAB_022ffc7c:
      local_15c0[0] = 1;
      local_15f0 = &LAB_02300a80;
      uStack_15e8 = 0;
      local_15e0 = lVar14;
      lStack_15d8 = lVar24;
      FUN_02300f10(param_1,local_15c0,&local_15f0,uVar10);
      local_15c0[0] = 2;
      local_15f0 = &LAB_02300a84;
      uStack_15e8 = 0;
      local_15e0 = lVar14;
      lStack_15d8 = lVar24;
      FUN_02300f10(param_1,local_15c0,&local_15f0,uVar10);
      if (param_1 != 0) goto LAB_022ff968;
LAB_022ffcdc:
      uVar13 = local_15b0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar13);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_15b8,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_022f298c();
      puVar3 = DAT_043e1568;
      if ((DAT_043e1558 & 1) == 0) {
        puVar3 = &DAT_043e1559;
      }
      FUN_00154450(param_1,puVar3);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_15f0._0_4_ = 0x1e;
      FUN_008fe304(&local_15b8,param_1,&local_15f0,&local_15a8,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar14);
      FUN_00155a20(param_1,&local_778,2);
      FUN_00151fe0(param_1,0,3);
      uVar13 = FUN_0014feb0(param_1,0xffffffff);
      local_15f0 = (undefined1 *)CONCAT44(local_15f0._4_4_,0x1e);
      FUN_008fe304(&local_15b8,param_1,&local_15f0,&local_15a8,uVar13);
      local_15f0 = *(undefined1 **)(lVar14 + 0x7c0);
      if (local_15f0 != (undefined1 *)0x0) {
        uStack_15e8 = 0;
        local_15b8 = CONCAT44(local_15b8._4_4_,4);
        local_15e0 = lVar14;
        lStack_15d8 = lVar24;
        FUN_02300f10(param_1,&local_15b8,&local_15f0,uVar13);
      }
      local_15b8._0_4_ = 1;
      local_15f0 = &LAB_02300a88;
      uStack_15e8 = 0;
      local_15d0 = 0;
      puStack_15c8 = &DAT_03a7d478;
      local_15e0 = lVar14;
      lStack_15d8 = lVar24;
      FUN_023015c4(param_1,&local_15b8,&local_15f0,uVar13);
      local_15b8 = CONCAT44(local_15b8._4_4_,2);
      local_15f0 = &LAB_02300a8c;
      uStack_15e8 = 0;
      local_15d0 = 0;
      puStack_15c8 = &DAT_03a7d478;
      local_15e0 = lVar14;
      lStack_15d8 = lVar24;
      FUN_023015c4(param_1,&local_15b8,&local_15f0,uVar13);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar13);
      }
      FUN_00152ae0(param_1,uVar10);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_15a0[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


