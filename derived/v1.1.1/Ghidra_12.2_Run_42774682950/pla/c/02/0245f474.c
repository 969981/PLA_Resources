/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0245f474; name: FUN_0245f474
 */


undefined8 FUN_0245f474(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  string *psVar18;
  code *__maxlen;
  undefined8 *puVar19;
  byte *pbVar20;
  undefined8 uVar21;
  code *pcVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  undefined1 *local_750;
  undefined8 uStack_748;
  long local_740;
  long lStack_738;
  undefined8 local_730;
  undefined *puStack_728;
  undefined4 local_720 [2];
  long local_718;
  undefined4 local_710;
  long local_708;
  undefined4 local_700 [2];
  long alStack_6f8 [68];
  long alStack_4d8 [70];
  long alStack_2a8 [2];
  undefined8 local_298;
  code *local_290;
  ulong local_288;
  
  if (((DAT_043e5fc0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5fc0), iVar10 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386b50 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04386b50);
      puVar5 = PTR_DAT_04386b58;
      if (iVar10 != 0) {
        FUN_023bd1b0(PTR_DAT_04386b58);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386b50);
      }
    }
    pcVar27 = (char *)FUN_02462054(&local_298,PTR_DAT_04386b58);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043e5fa8,psVar18);
    uVar29 = local_288;
    plVar30 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
      lVar15 = tpidr_el0;
      plVar26 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar26 = plVar30;
      }
      uVar23 = (**(code **)(*plVar26 + 0xc0))(plVar26);
      if ((uVar23 & 1) != 0) {
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar26,uVar29,0,8);
          goto LAB_02460438;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,uVar29,0,8);
    }
LAB_02460438:
    FUN_00100250(PTR__string_04379718,&DAT_043e5fa8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e5fc0);
  }
  std::string::string((string *)&local_298,(string *)&DAT_043e5fa8);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e5fa0);
  pcVar22 = (code *)((ulong)local_298 >> 1 & 0x7f);
  if (((ulong)local_298 & 1) != 0) {
    pcVar22 = local_290;
  }
  std::string::append((ulong)&local_298,(char)iVar10);
  if (((ulong)local_298 & 1) == 0) {
    uVar29 = (long)&local_298 + 1;
    __maxlen = (code *)((ulong)local_298 >> 1 & 0x7f);
  }
  else {
    __maxlen = local_290;
    uVar29 = local_288;
  }
  iVar10 = snprintf((char *)(pcVar22 + (uVar29 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043e5fa0);
  DAT_043e5fa0 = DAT_043e5fa0 + 1;
  pbVar14 = (byte *)FUN_023bd7d8(iVar10);
  pbVar20 = *(byte **)(pbVar14 + 0x10);
  if ((*pbVar14 & 1) == 0) {
    pbVar20 = pbVar14 + 1;
  }
  if (((ulong)local_298 & 1) == 0) {
    uVar29 = (ulong)&local_298 | 1;
  }
  else {
    uVar29 = local_288;
  }
  if (((DAT_043e5fd0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5fd0), iVar10 != 0)) {
    DAT_043e5fc8 = 0xd0;
    __cxa_guard_release(&DAT_043e5fd0);
  }
  if (((DAT_043e5fe0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043e5fe0), iVar10 != 0)) {
    DAT_043e5fd8 = 0xd7;
    __cxa_guard_release(&DAT_043e5fe0);
  }
  uVar23 = DAT_043e5fc8;
  lVar15 = FUN_00153520(param_2,DAT_043e5fc8);
  if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0xd0)) ||
     (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043e5fd8;
    lVar15 = FUN_00153520(param_2,DAT_043e5fd8);
    if ((uVar23 < ((ulong)(uint)-(int)lVar15 & 7 | 0xd0)) ||
       (puVar19 = (undefined8 *)(lVar15 + ((ulong)(uint)-(int)lVar15 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_024630c0();
      puVar2 = DAT_043e5ff8;
      if ((DAT_043e5fe8 & 1) == 0) {
        puVar2 = &DAT_043e5fe9;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar21 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar21;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar15 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar15;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar15 + 8);
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
  uVar21 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar21;
  puVar19[7] = uVar3;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_0425c110;
  *(undefined1 *)(puVar19 + 0xb) = uVar6;
  uVar21 = *(undefined8 *)(param_1 + 0x68);
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar19[0xd] = uVar21;
  uVar21 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  puVar19[0x10] = *(undefined8 *)(param_1 + 0x80);
  puVar19[0x11] = uVar4;
  puVar19[0xe] = uVar21;
  puVar19[0xf] = uVar3;
  uVar21 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  puVar19[0x14] = *(undefined8 *)(param_1 + 0xa0);
  puVar19[0x15] = uVar4;
  puVar19[0x12] = uVar21;
  puVar19[0x13] = uVar3;
  uVar21 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar4 = *(undefined8 *)(param_1 + 200);
  puVar19[0x18] = *(undefined8 *)(param_1 + 0xc0);
  puVar19[0x19] = uVar4;
  puVar19[0x16] = uVar21;
  puVar19[0x17] = uVar3;
  iVar10 = FUN_00154450(param_2,uVar29);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_02463080,0);
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
  FUN_001522a0(param_2,pbVar20);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,pbVar20);
  lVar15 = FUN_001511d0(param_2,0xffffffff);
  lVar15 = lVar15 + ((ulong)(uint)-(int)lVar15 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  uVar29 = local_288;
  plVar30 = DAT_043f1798;
  if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar30;
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
        FUN_02bcc824(plVar26,uVar29,0,8);
        goto LAB_0245f7e4;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,uVar29,0,8);
  }
LAB_0245f7e4:
  memset(&local_298,0,0x230);
  puVar8 = PTR_DAT_043816f8;
  *(undefined1 *)(lVar15 + 0x58) = 1;
  puVar5 = PTR_DAT_0437dcc8;
  *puVar8 = 1;
  *puVar5 = 1;
  pcVar27 = *(char **)(lVar15 + 0x60);
  *(undefined1 **)(lVar15 + 0xb0) = &LAB_024634fc;
  *(undefined1 **)(lVar15 + 0xb8) = &LAB_024635b8;
  *(undefined1 **)(lVar15 + 0xa0) = &LAB_02463610;
  *(undefined1 **)(lVar15 + 0xa8) = &LAB_02463820;
  sVar16 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar16 < 0xb) {
    sVar1 = sVar16;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar24 = lVar15 + 8;
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar28 = 0;
  uVar29 = 0;
  pcVar22 = FUN_02462e3c;
  if (uVar12 != 0) {
    pcVar22 = FUN_02462c98;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar20 = (byte *)(lVar17 + lVar28);
    sVar16 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar16 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar29;
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar23 = 0;
            *(code **)(lVar15 + 0x80) = pcVar22;
            goto LAB_0245fa4c;
          }
          *(ulong *)(lVar15 + 200) = *(ulong *)(lVar15 + 200) | 1L << (uVar29 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 200) = *(ulong *)(lVar15 + 200) | 1L << (uVar29 & 0x3f);
      goto LAB_0245fa4c;
    }
    uVar29 = uVar29 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar29 != 0x20);
  uVar23 = 1;
  local_298 = pcVar27;
  local_290 = pcVar22;
LAB_0245fa4c:
  pcVar27 = *(char **)(lVar15 + 0x78);
  sVar16 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar16 < 0xb) {
    sVar1 = sVar16;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar16 < 0xb && bVar9) {
    uVar12 = (uint)(sVar16 < 10);
  }
  lVar28 = 0;
  uVar29 = 0;
  pcVar22 = FUN_02462f64;
  if (uVar12 != 0) {
    pcVar22 = FUN_02462f04;
  }
  do {
    lVar17 = FUN_008cca50();
    pbVar20 = (byte *)(lVar17 + lVar28);
    sVar16 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar16 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar29;
      uVar25 = uVar23;
      if (iVar10 == 0x13) {
        *(code **)(lVar15 + 0x80) = pcVar22;
        uVar12 = (uint)*(undefined8 *)(lVar15 + 200);
        goto joined_r0x024602b0;
      }
      if (iVar10 == 1) {
        *(code **)(lVar15 + 0x30) = pcVar22;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar15 + 200) = *(ulong *)(lVar15 + 200) | 1L << (uVar29 & 0x3f);
          break;
        }
        *(code **)(lVar15 + 0x38) = pcVar22;
      }
      *(undefined1 *)(lVar15 + 0x58) = 1;
      *(ulong *)(lVar15 + 200) = *(ulong *)(lVar15 + 200) | 1L << (uVar29 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar15 + 200);
      goto joined_r0x024602b0;
    }
    uVar29 = uVar29 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar29 != 0x20);
  uVar25 = (ulong)((int)uVar23 + 1);
  alStack_2a8[uVar23 * 2 + 2] = (long)pcVar27;
  (&local_290)[uVar23 * 2] = pcVar22;
  uVar12 = (uint)*(undefined8 *)(lVar15 + 200);
joined_r0x024602b0:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar15 + 200);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar15 + 200);
  }
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar17 = FUN_008cca50();
    lVar28 = lVar17 + 0x181;
    if ((*(byte *)(lVar17 + 0x180) & 1) != 0) {
      lVar28 = *(long *)(lVar17 + 400);
    }
    alStack_2a8[uVar25 * 2 + 2] = lVar28;
    (&local_290)[uVar25 * 2] = (code *)&LAB_02463e90;
    uVar12 = (uint)*(undefined8 *)(lVar15 + 200);
    uVar25 = (ulong)((int)uVar25 + 1);
  }
  uVar29 = uVar25;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar17 = FUN_008cca50();
    uVar29 = (ulong)((int)uVar25 + 1);
    lVar28 = lVar17 + 0x289;
    if ((*(byte *)(lVar17 + 0x288) & 1) != 0) {
      lVar28 = *(long *)(lVar17 + 0x298);
    }
    alStack_2a8[uVar25 * 2 + 2] = lVar28;
    (&local_290)[uVar25 * 2] = (code *)&LAB_02463e88;
  }
  uVar23 = uVar29;
  if (*(long *)(lVar15 + 0x80) != 0) {
    lVar17 = FUN_008cca50();
    lVar28 = lVar17 + 0x1c9;
    if ((*(byte *)(lVar17 + 0x1c8) & 1) != 0) {
      lVar28 = *(long *)(lVar17 + 0x1d8);
    }
    pcVar22 = *(code **)(lVar15 + 0x80);
    uVar23 = (ulong)((int)uVar29 + 1);
    alStack_2a8[uVar29 * 2 + 2] = lVar28;
    (&local_290)[uVar29 * 2] = pcVar22;
  }
  alStack_2a8[uVar23 * 2 + 2] = 0;
  (&local_290)[uVar23 * 2] = (code *)0x0;
  memcpy(alStack_4d8 + 2,&local_298,0x230);
  memcpy(alStack_6f8,&local_298,0x230);
  lVar28 = FUN_008cca50();
  lVar17 = uVar23 - 1;
  pcVar27 = (char *)alStack_2a8[lVar17 * 2 + 2];
  sVar16 = strlen(pcVar27);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar16 == sVar1) &&
     (iVar10 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    alStack_4d8[lVar17 * 2 + 2] = 0;
    alStack_4d8[lVar17 * 2 + 3] = 0;
  }
  alStack_6f8[lVar17 * 2] = alStack_2a8[lVar17 * 2 + 2];
  alStack_6f8[lVar17 * 2 + 1] = (long)&LAB_02462fd0;
  FUN_00151fe0(param_2,0,2);
  local_700[0] = FUN_0014feb0(param_2,0xffffffff);
  local_708 = param_2;
  if ((*PTR_DAT_04386b50 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04386b50);
    puVar5 = PTR_DAT_04386b58;
    if (iVar10 != 0) {
      FUN_023bd1b0(PTR_DAT_04386b58);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04386b50);
    }
  }
  uVar11 = local_700[0];
  uVar29 = *(ulong *)(PTR_DAT_04386b58 + 8);
  puVar5 = *(undefined **)(PTR_DAT_04386b58 + 0x10);
  if ((*PTR_DAT_04386b58 & 1) == 0) {
    puVar5 = PTR_DAT_04386b58 + 1;
    uVar29 = (ulong)((byte)*PTR_DAT_04386b58 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar29);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_02463020,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      plVar30 = alStack_6f8;
      FUN_0246163c();
      pbVar20 = &DAT_043e5f08;
LAB_0245fd94:
      pbVar14 = *(byte **)(pbVar20 + 0x10);
      if ((*pbVar20 & 1) == 0) {
        pbVar14 = pbVar20 + 1;
      }
    }
    else {
      if (lVar28 == 0) {
        plVar30 = alStack_4d8 + 2;
        FUN_02461460();
        pbVar20 = &DAT_043e5e90;
        goto LAB_0245fd94;
      }
      plVar30 = &local_298;
      pbVar20 = (byte *)FUN_023bd5a0();
      pbVar14 = *(byte **)(pbVar20 + 0x10);
      if ((*pbVar20 & 1) == 0) {
        pbVar14 = pbVar20 + 1;
      }
    }
    FUN_00154450(param_2,pbVar14);
    local_710 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_718 = param_2;
    FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar15);
    FUN_00155a20(param_2,plVar30,2);
    uVar11 = local_710;
    if (*(long *)(lVar15 + 0xb0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
    }
    uVar11 = local_710;
    if (*(long *)(lVar15 + 0xb8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_710;
    uVar21 = *(undefined8 *)(lVar15 + 0x90);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar15);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar21,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_710;
    uVar21 = *(undefined8 *)(lVar15 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar15);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar21,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar15 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
    }
    else {
      local_720[0] = 1;
      local_750 = &LAB_02463070;
      uStack_748 = 0;
      local_740 = lVar15;
      lStack_738 = lVar24;
      FUN_02464c20(param_2,local_720,&local_750,local_710);
      local_720[0] = 2;
      local_750 = &LAB_02463074;
      uStack_748 = 0;
      local_740 = lVar15;
      lStack_738 = lVar24;
      FUN_02464c20(param_2,local_720,&local_750,local_710);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar11);
    if (*(undefined1 **)(lVar15 + 0x88) == (undefined1 *)0x0) {
      if (*(char *)(lVar15 + 0xc0) == '\0') goto LAB_0245ff90;
LAB_024601f4:
      local_720[0] = 1;
      local_750 = &LAB_02463070;
      uStack_748 = 0;
      local_740 = lVar15;
      lStack_738 = lVar24;
      FUN_02464c20(param_2,local_720,&local_750,uVar11);
      local_720[0] = 2;
      local_750 = &LAB_02463074;
      uStack_748 = 0;
      local_740 = lVar15;
      lStack_738 = lVar24;
      FUN_02464c20(param_2,local_720,&local_750,uVar11);
      if (param_2 == 0) goto LAB_02460254;
LAB_0245ff98:
      uVar13 = local_710;
      FUN_00150260(param_2,uVar11);
    }
    else {
      local_720[0] = 4;
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar15 + 0x88);
      local_740 = lVar15;
      lStack_738 = lVar24;
      FUN_02464c20(param_2,local_720,&local_750,uVar11);
      if (*(char *)(lVar15 + 0xc0) != '\0') goto LAB_024601f4;
LAB_0245ff90:
      if (param_2 != 0) goto LAB_0245ff98;
LAB_02460254:
      uVar13 = local_710;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_718,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_02461818();
      puVar5 = DAT_043e5f90;
      if ((DAT_043e5f80 & 1) == 0) {
        puVar5 = &DAT_043e5f81;
      }
      FUN_00154450(param_2,puVar5);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar15);
      FUN_00155a20(param_2,&local_298,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar13);
      local_750 = *(undefined1 **)(lVar15 + 0x88);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar15;
        lStack_738 = lVar24;
        FUN_02464c20(param_2,&local_718,&local_750,uVar13);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_02463078;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7d588;
      local_740 = lVar15;
      lStack_738 = lVar24;
      FUN_024652d4(param_2,&local_718,&local_750,uVar13);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_0246307c;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7d588;
      local_740 = lVar15;
      lStack_738 = lVar24;
      FUN_024652d4(param_2,&local_718,&local_750,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_700[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


