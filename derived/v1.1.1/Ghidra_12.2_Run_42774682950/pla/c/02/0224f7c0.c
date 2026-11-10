/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0224f7c0; name: FUN_0224f7c0
 */


void FUN_0224f7c0(long param_1,long param_2)

{
  ulong *puVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
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
  ulong uVar29;
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
  char *local_400;
  code *local_3f8;
  long local_3f0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043df370 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043df370), iVar9 != 0)) {
    local_3f0 = 0;
    local_3f8 = (code *)0x0;
    local_400 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04381820 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04381820);
      puVar3 = PTR_DAT_04381828;
      if (iVar9 != 0) {
        FUN_017ca840(PTR_DAT_04381828);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04381820);
      }
    }
    pcVar27 = (char *)FUN_0224c574(&local_400,PTR_DAT_04381828);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043df358,psVar17);
    lVar13 = local_3f0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_400 & 1) != 0) && (local_3f0 != 0)) {
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_02252318;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_02252318:
    FUN_00100250(PTR__string_04379718,&DAT_043df358,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043df370);
  }
  std::string::string(&local_790,(string *)&DAT_043df358);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043df350);
  sVar2 = (ulong)((byte)local_790 >> 1);
  if (((byte)local_790 & 1) != 0) {
    sVar2 = local_788;
  }
  std::string::append((ulong)&local_790,(char)iVar9);
  if (((byte)local_790 & 1) == 0) {
    puVar28 = auStack_78f;
    local_788 = (size_t)((byte)local_790 >> 1);
  }
  else {
    puVar28 = local_780;
  }
  snprintf(puVar28 + (sVar2 - 1),local_788,"%d",(ulong)DAT_043df350);
  DAT_043df350 = DAT_043df350 + 1;
  if (((DAT_043df390 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043df390), iVar9 != 0)) {
    local_3f0 = 0;
    local_3f8 = (code *)0x0;
    local_400 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04381820 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04381820);
      puVar3 = PTR_DAT_04381828;
      if (iVar9 != 0) {
        FUN_017ca840(PTR_DAT_04381828);
        FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04381820);
      }
    }
    pcVar27 = (char *)FUN_0224c574(&local_400,PTR_DAT_04381828);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043df378,psVar17);
    lVar13 = local_3f0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_400 & 1) != 0) && (local_3f0 != 0)) {
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_0225246c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_0225246c:
    FUN_00100250(PTR__string_04379718,&DAT_043df378,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043df390);
  }
  puVar3 = DAT_043df388;
  if ((DAT_043df378 & 1) == 0) {
    puVar3 = &DAT_043df379;
  }
  if (((byte)local_790 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_790 | 1);
  }
  else {
    puVar28 = local_780;
  }
  if (((DAT_043df3a0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043df3a0), iVar9 != 0)) {
    DAT_043df398 = 0x2c0;
    __cxa_guard_release(&DAT_043df3a0);
  }
  if (((DAT_043df3b0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043df3b0), iVar9 != 0)) {
    DAT_043df3a8 = 0x2c7;
    __cxa_guard_release(&DAT_043df3b0);
  }
  uVar23 = DAT_043df398;
  lVar13 = FUN_00153520(param_1,DAT_043df398);
  if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2c0)) ||
     (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043df3a8;
    lVar13 = FUN_00153520(param_1,DAT_043df3a8);
    if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2c0)) ||
       (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_02252e50();
      puVar4 = DAT_043df3c8;
      if ((DAT_043df3b8 & 1) == 0) {
        puVar4 = &DAT_043df3b9;
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
  lVar13 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar13;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar13 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar29 = 0;
      if (uVar25 != 0) {
        uVar29 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar29 * uVar25;
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
  *puVar19 = &PTR_FUN_0425b880;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x260);
  iVar9 = FUN_00154450(param_1,puVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_1,&LAB_02252e10,0);
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
  lVar13 = FUN_001511d0(param_1,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_790 & 1) != 0) && (local_780 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_780,0,8);
        goto LAB_0224fb2c;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_780,0,8);
  }
LAB_0224fb2c:
  memset(&local_400,0,0x390);
  puVar6 = PTR_DAT_043816f8;
  puVar3 = PTR_DAT_0437dcc8;
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *puVar6 = 1;
  *puVar3 = 1;
  pcVar27 = *(char **)(lVar13 + 0x60);
  *(undefined1 **)(lVar13 + 0x2a0) = &LAB_02253280;
  *(undefined1 **)(lVar13 + 0x2a8) = &LAB_0225333c;
  *(undefined1 **)(lVar13 + 0x290) = &LAB_022535c0;
  *(undefined1 **)(lVar13 + 0x298) = &LAB_022537d0;
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar18 = lVar13 + 8;
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224ca50;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224c8ec;
  }
  puVar1 = (ulong *)(lVar13 + 0x2b8);
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_0224fda8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_0224fda8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_400 = pcVar27;
  local_3f8 = pcVar21;
LAB_0224fda8:
  pcVar27 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224cc64;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224cb48;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_0224feec;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_0224feec;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0224feec:
  pcVar27 = *(char **)(lVar13 + 0x90);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224d004;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224cd80;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02250030;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02250030;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02250030:
  pcVar27 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224d25c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224d0fc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02250174;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02250174;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02250174:
  pcVar27 = *(char **)(lVar13 + 0xb8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224d394;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224d2a4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_022502b8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_022502b8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022502b8:
  pcVar27 = *(char **)(lVar13 + 200);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224d600;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224d3dc;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_022503fc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_022503fc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022503fc:
  pcVar27 = *(char **)(lVar13 + 0xe0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224d888;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224d6f8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02250540;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02250540;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02250540:
  pcVar27 = *(char **)(lVar13 + 0xf8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0224d9b8;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_0224d980;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02250684;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02250684;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02250684:
  pcVar27 = *(char **)(lVar13 + 0x110);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0224da38;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_0224da00;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_022507c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_022507c8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022507c8:
  pcVar27 = *(char **)(lVar13 + 0x128);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224dbcc;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224da80;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_0225090c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_0225090c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0225090c:
  pcVar27 = *(char **)(lVar13 + 0x140);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224e4b0;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224dcc4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02250a50;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02250a50;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02250a50:
  pcVar27 = *(char **)(lVar13 + 0x158);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224e5f0;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224e5a8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02250b94;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02250b94;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02250b94:
  pcVar27 = *(char **)(lVar13 + 0x170);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224e76c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224e638;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02250cd8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02250cd8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02250cd8:
  pcVar27 = *(char **)(lVar13 + 0x188);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224ea50;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_0224e8a0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02250e1c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02250e1c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02250e1c:
  pcVar27 = *(char **)(lVar13 + 400);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224eaf0;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224eaa8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02250f60;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02250f60;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02250f60:
  pcVar27 = *(char **)(lVar13 + 0x1a8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224eb80;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224eb38;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_022510a4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_022510a4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022510a4:
  pcVar27 = *(char **)(lVar13 + 0x1c0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224ec10;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224ebc8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_022511e8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_022511e8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022511e8:
  pcVar27 = *(char **)(lVar13 + 0x1d8);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224eca0;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224ec58;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_0225132c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_0225132c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0225132c:
  pcVar27 = *(char **)(lVar13 + 0x1f0);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224ed30;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224ece8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02251470;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02251470;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02251470:
  pcVar27 = *(char **)(lVar13 + 0x208);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224f00c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224ed78;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_022515b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_022515b4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022515b4:
  pcVar27 = *(char **)(lVar13 + 0x220);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224f27c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224f104;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_022516f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_022516f8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_022516f8:
  pcVar27 = *(char **)(lVar13 + 0x238);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224f3bc;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224f374;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_0225183c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_0225183c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0225183c:
  pcVar27 = *(char **)(lVar13 + 0x250);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0224f44c;
  if (uVar11 != 0) {
    pcVar21 = FUN_0224f404;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x270) = pcVar21;
            goto LAB_02251980;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      goto LAB_02251980;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_02251980:
  pcVar27 = *(char **)(lVar13 + 0x268);
  sVar14 = strlen(pcVar27);
  sVar2 = 10;
  if (sVar14 < 0xb) {
    sVar2 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0224f78c;
  if (uVar11 != 0) {
    pcVar21 = (code *)&LAB_0224f494;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar24);
    sVar14 = strlen(pcVar27);
    sVar2 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar2) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      uVar29 = uVar25;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x270) = pcVar21;
        uVar11 = (uint)*puVar1;
        goto joined_r0x02252194;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2b8) = *(ulong *)(lVar13 + 0x2b8) | 1L << (uVar23 & 0x3f);
      uVar11 = (uint)*puVar1;
      goto joined_r0x02252194;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar29 = (ulong)((int)uVar25 + 1);
  (&local_400)[uVar25 * 2] = pcVar27;
  (&local_3f8)[uVar25 * 2] = pcVar21;
  uVar11 = (uint)*puVar1;
joined_r0x02252194:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*puVar1;
  }
  uVar23 = uVar29;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x181);
    if ((*(byte *)(lVar24 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 400);
    }
    uVar23 = (ulong)((int)uVar29 + 1);
    (&local_400)[uVar29 * 2] = pcVar27;
    (&local_3f8)[uVar29 * 2] = (code *)PTR_LAB_043817f8;
    uVar11 = (uint)*puVar1;
  }
  uVar25 = uVar23;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x289);
    if ((*(byte *)(lVar24 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    (&local_400)[uVar23 * 2] = pcVar27;
    (&local_3f8)[uVar23 * 2] = (code *)PTR_LAB_04381800;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar13 + 0x270) != 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x1c9);
    if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar13 + 0x270);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_400)[uVar25 * 2] = pcVar27;
    (&local_3f8)[uVar25 * 2] = pcVar21;
  }
  (&local_400)[uVar23 * 2] = (char *)0x0;
  (&local_3f8)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_790,&local_400,0x390);
  memcpy(asStack_b20,&local_400,0x390);
  lVar24 = FUN_008cca50();
  lVar15 = uVar23 - 1;
  pcVar27 = (&local_400)[lVar15 * 2];
  sVar14 = strlen(pcVar27);
  sVar2 = (ulong)(*(byte *)(lVar24 + 0x1c8) >> 1);
  if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar24 + 0x1d0);
  }
  if ((sVar14 == sVar2) &&
     (iVar9 = std::string::compare(lVar24 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    auStack_7a0[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_78f + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_b20 + lVar15 * 0x10) = (&local_400)[lVar15 * 2];
  *(undefined1 **)(asStack_b20 + (lVar15 * 2 + 1) * 8) = &LAB_02252900;
  FUN_00151fe0(param_1,0,2);
  local_b28[0] = FUN_0014feb0(param_1,0xffffffff);
  local_b30 = param_1;
  if ((*PTR_DAT_04381820 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04381820);
    puVar3 = PTR_DAT_04381828;
    if (iVar9 != 0) {
      FUN_017ca840(PTR_DAT_04381828);
      FUN_00100250(PTR__string_04379718,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04381820);
    }
  }
  uVar10 = local_b28[0];
  uVar23 = *(ulong *)(PTR_DAT_04381828 + 8);
  puVar3 = *(undefined **)(PTR_DAT_04381828 + 0x10);
  if ((*PTR_DAT_04381828 & 1) == 0) {
    puVar3 = PTR_DAT_04381828 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_04381828 >> 1);
  }
  FUN_001514f0(param_1,puVar3,uVar23);
  FUN_00152550(param_1,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_02252950,0);
  FUN_00152550(param_1,uVar10,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      psVar17 = asStack_b20;
      pbVar16 = (byte *)FUN_017cb014();
    }
    else if (lVar24 == 0) {
      psVar17 = &local_790;
      pbVar16 = (byte *)FUN_017c91b8();
    }
    else {
      psVar17 = (string *)&local_400;
      pbVar16 = (byte *)FUN_017ca5e4();
    }
    pbVar22 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar22 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_b38 = FUN_0014feb0(param_1,0xffffffff);
    local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
    local_b40 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_b70,&local_b30,local_b38);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00155a20(param_1,psVar17,2);
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
    uVar20 = *(undefined8 *)(lVar13 + 0x280);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_03955ac7);
    uVar10 = local_b38;
    uVar20 = *(undefined8 *)(lVar13 + 0x288);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar13);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_b70,&local_b40,local_b38);
    }
    else {
      local_b70 = &LAB_02252a40;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar18;
      FUN_022529a0(param_1,1,&local_b70,local_b38);
      local_b70 = &LAB_02252d4c;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar18;
      FUN_022529a0(param_1,2,&local_b70,local_b38);
    }
    FUN_00151fe0(param_1,0,3);
    uVar10 = FUN_0014feb0(param_1,0xffffffff);
    local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_b70,&local_b30,uVar10);
    if (*(undefined1 **)(lVar13 + 0x278) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x2b0) == '\0') goto LAB_02251e70;
LAB_022520ec:
      local_b70 = &LAB_02252a40;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar18;
      FUN_022529a0(param_1,1,&local_b70,uVar10);
      local_b70 = &LAB_02252d4c;
      uStack_b68 = 0;
      local_b60 = lVar13;
      lStack_b58 = lVar18;
      FUN_022529a0(param_1,2,&local_b70,uVar10);
      if (param_1 == 0) goto LAB_02252140;
LAB_02251e78:
      uVar12 = local_b38;
      FUN_00150260(param_1,uVar10);
    }
    else {
      uStack_b68 = 0;
      local_b70 = *(undefined1 **)(lVar13 + 0x278);
      local_b60 = lVar13;
      lStack_b58 = lVar18;
      FUN_022529a0(param_1,4,&local_b70,uVar10);
      if (*(char *)(lVar13 + 0x2b0) != '\0') goto LAB_022520ec;
LAB_02251e70:
      if (param_1 != 0) goto LAB_02251e78;
LAB_02252140:
      uVar12 = local_b38;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_b40,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_0224bd3c();
      puVar3 = DAT_043df2d0;
      if ((DAT_043df2c0 & 1) == 0) {
        puVar3 = &DAT_043df2c1;
      }
      FUN_00154450(param_1,puVar3);
      uVar10 = FUN_0014feb0(param_1,0xffffffff);
      local_b70._0_4_ = 0x1e;
      FUN_008fe304(&local_b40,param_1,&local_b70,&local_b30,uVar10);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar13);
      FUN_00155a20(param_1,&local_400,2);
      FUN_00151fe0(param_1,0,3);
      uVar12 = FUN_0014feb0(param_1,0xffffffff);
      local_b70 = (undefined1 *)CONCAT44(local_b70._4_4_,0x1e);
      FUN_008fe304(&local_b40,param_1,&local_b70,&local_b30,uVar12);
      local_b70 = *(undefined1 **)(lVar13 + 0x278);
      if (local_b70 != (undefined1 *)0x0) {
        uStack_b68 = 0;
        local_b60 = lVar13;
        lStack_b58 = lVar18;
        FUN_022529a0(param_1,4,&local_b70,uVar12);
      }
      local_b70 = &LAB_02252e08;
      uStack_b68 = 0;
      local_b50 = 0;
      puStack_b48 = &DAT_03a7d3f0;
      local_b60 = lVar13;
      lStack_b58 = lVar18;
      FUN_02252d50(param_1,1,&local_b70,uVar12);
      local_b70 = &LAB_02252e0c;
      uStack_b68 = 0;
      local_b50 = 0;
      puStack_b48 = &DAT_03a7d3f0;
      local_b60 = lVar13;
      lStack_b58 = lVar18;
      FUN_02252d50(param_1,2,&local_b70,uVar12);
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


