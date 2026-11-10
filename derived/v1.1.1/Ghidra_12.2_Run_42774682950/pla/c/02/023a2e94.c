/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023a2e94; name: FUN_023a2e94
 */


undefined8 FUN_023a2e94(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *pbVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  string *psVar17;
  code *__maxlen;
  undefined8 *puVar18;
  byte *pbVar19;
  undefined8 uVar20;
  code *pcVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
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
  
  if (((DAT_043e2d20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2d20), iVar9 != 0)) {
    local_288 = 0;
    local_290 = (code *)0x0;
    local_298 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386940 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04386940);
      puVar5 = PTR_DAT_04386948;
      if (iVar9 != 0) {
        FUN_023a68c0(PTR_DAT_04386948);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386940);
      }
    }
    pcVar26 = (char *)FUN_023a5cac(&local_298,PTR_DAT_04386948);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e2d08,psVar17);
    uVar28 = local_288;
    plVar29 = DAT_043f1798;
    if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
      lVar14 = tpidr_el0;
      plVar25 = *(long **)(lVar14 + 0x20);
      if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
        *(long **)(lVar14 + 0x20) = DAT_043f1798;
        plVar25 = plVar29;
      }
      uVar22 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar22 & 1) != 0) {
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar25,uVar28,0,8);
          goto LAB_023a3e50;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,uVar28,0,8);
    }
LAB_023a3e50:
    FUN_00100250(PTR__string_04379718,&DAT_043e2d08,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2d20);
  }
  std::string::string((string *)&local_298,(string *)&DAT_043e2d08);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e2d00);
  pcVar21 = (code *)((ulong)local_298 >> 1 & 0x7f);
  if (((ulong)local_298 & 1) != 0) {
    pcVar21 = local_290;
  }
  std::string::append((ulong)&local_298,(char)iVar9);
  if (((ulong)local_298 & 1) == 0) {
    uVar28 = (long)&local_298 + 1;
    __maxlen = (code *)((ulong)local_298 >> 1 & 0x7f);
  }
  else {
    __maxlen = local_290;
    uVar28 = local_288;
  }
  iVar9 = snprintf((char *)(pcVar21 + (uVar28 - 1)),(size_t)__maxlen,"%d",(ulong)DAT_043e2d00);
  DAT_043e2d00 = DAT_043e2d00 + 1;
  pbVar13 = (byte *)FUN_023a7180(iVar9);
  pbVar19 = *(byte **)(pbVar13 + 0x10);
  if ((*pbVar13 & 1) == 0) {
    pbVar19 = pbVar13 + 1;
  }
  if (((ulong)local_298 & 1) == 0) {
    uVar28 = (ulong)&local_298 | 1;
  }
  else {
    uVar28 = local_288;
  }
  if (((DAT_043e2d50 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2d50), iVar9 != 0)) {
    DAT_043e2d48 = 0xd0;
    __cxa_guard_release(&DAT_043e2d50);
  }
  if (((DAT_043e2d60 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2d60), iVar9 != 0)) {
    DAT_043e2d58 = 0xd7;
    __cxa_guard_release(&DAT_043e2d60);
  }
  uVar22 = DAT_043e2d48;
  lVar14 = FUN_00153520(param_2,DAT_043e2d48);
  if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0xd0)) ||
     (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e2d58;
    lVar14 = FUN_00153520(param_2,DAT_043e2d58);
    if ((uVar22 < ((ulong)(uint)-(int)lVar14 & 7 | 0xd0)) ||
       (puVar18 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_023a7410();
      puVar2 = DAT_043e2d78;
      if ((DAT_043e2d68 & 1) == 0) {
        puVar2 = &DAT_043e2d69;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar20;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar14 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar14;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar14 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar7 = 0;
      if (uVar24 != 0) {
        uVar7 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar7 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar20;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar18 = &PTR_FUN_0425bdd0;
  *(undefined1 *)(puVar18 + 0xb) = uVar6;
  uVar20 = *(undefined8 *)(param_1 + 0x68);
  puVar18[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar18[0xd] = uVar20;
  uVar20 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  puVar18[0x10] = *(undefined8 *)(param_1 + 0x80);
  puVar18[0x11] = uVar4;
  puVar18[0xe] = uVar20;
  puVar18[0xf] = uVar3;
  uVar20 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  puVar18[0x14] = *(undefined8 *)(param_1 + 0xa0);
  puVar18[0x15] = uVar4;
  puVar18[0x12] = uVar20;
  puVar18[0x13] = uVar3;
  uVar20 = *(undefined8 *)(param_1 + 0xb0);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  uVar4 = *(undefined8 *)(param_1 + 200);
  puVar18[0x18] = *(undefined8 *)(param_1 + 0xc0);
  puVar18[0x19] = uVar4;
  puVar18[0x16] = uVar20;
  puVar18[0x17] = uVar3;
  iVar9 = FUN_00154450(param_2,uVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_023a73d0,0);
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
  FUN_001522a0(param_2,pbVar19);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,pbVar19);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  uVar28 = local_288;
  plVar29 = DAT_043f1798;
  if ((((ulong)local_298 & 1) != 0) && (local_288 != 0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar29;
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
        FUN_02bcc824(plVar25,uVar28,0,8);
        goto LAB_023a3204;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,uVar28,0,8);
  }
LAB_023a3204:
  memset(&local_298,0,0x230);
  puVar5 = PTR_DAT_043847e0;
  *(undefined1 *)(lVar14 + 0x58) = 1;
  *puVar5 = 1;
  pcVar26 = *(char **)(lVar14 + 0x60);
  *(undefined1 **)(lVar14 + 0xb0) = &LAB_023a784c;
  *(undefined1 **)(lVar14 + 0xb8) = &LAB_023a7908;
  *(undefined1 **)(lVar14 + 0xa0) = &LAB_023a7960;
  *(undefined1 **)(lVar14 + 0xa8) = &LAB_023a7970;
  sVar15 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
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
  lVar23 = lVar14 + 8;
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar27 = 0;
  uVar28 = 0;
  pcVar21 = FUN_023a6f48;
  if (uVar11 != 0) {
    pcVar21 = FUN_023a6cec;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar19 = (byte *)(lVar16 + lVar27);
    sVar15 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar28;
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar22 = 0;
            *(code **)(lVar14 + 0x80) = pcVar21;
            goto LAB_023a3460;
          }
          *(ulong *)(lVar14 + 200) = *(ulong *)(lVar14 + 200) | 1L << (uVar28 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 200) = *(ulong *)(lVar14 + 200) | 1L << (uVar28 & 0x3f);
      goto LAB_023a3460;
    }
    uVar28 = uVar28 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar28 != 0x20);
  uVar22 = 1;
  local_298 = pcVar26;
  local_290 = pcVar21;
LAB_023a3460:
  pcVar26 = *(char **)(lVar14 + 0x78);
  sVar15 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
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
  if (sVar15 < 0xb && bVar8) {
    uVar11 = (uint)(sVar15 < 10);
  }
  lVar27 = 0;
  uVar28 = 0;
  pcVar21 = FUN_023a7070;
  if (uVar11 != 0) {
    pcVar21 = FUN_023a7010;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar19 = (byte *)(lVar16 + lVar27);
    sVar15 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar28;
      uVar24 = uVar22;
      if (iVar9 == 0x13) {
        *(code **)(lVar14 + 0x80) = pcVar21;
        uVar11 = (uint)*(undefined8 *)(lVar14 + 200);
        goto joined_r0x023a3cc8;
      }
      if (iVar9 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar14 + 200) = *(ulong *)(lVar14 + 200) | 1L << (uVar28 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 200) = *(ulong *)(lVar14 + 200) | 1L << (uVar28 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar14 + 200);
      goto joined_r0x023a3cc8;
    }
    uVar28 = uVar28 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar28 != 0x20);
  uVar24 = (ulong)((int)uVar22 + 1);
  alStack_2a8[uVar22 * 2 + 2] = (long)pcVar26;
  (&local_290)[uVar22 * 2] = pcVar21;
  uVar11 = (uint)*(undefined8 *)(lVar14 + 200);
joined_r0x023a3cc8:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar14 + 200);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar14 + 200);
  }
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar16 = FUN_008cca50();
    lVar27 = lVar16 + 0x181;
    if ((*(byte *)(lVar16 + 0x180) & 1) != 0) {
      lVar27 = *(long *)(lVar16 + 400);
    }
    alStack_2a8[uVar24 * 2 + 2] = lVar27;
    (&local_290)[uVar24 * 2] = (code *)&LAB_023a7d50;
    uVar11 = (uint)*(undefined8 *)(lVar14 + 200);
    uVar24 = (ulong)((int)uVar24 + 1);
  }
  uVar28 = uVar24;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar16 = FUN_008cca50();
    uVar28 = (ulong)((int)uVar24 + 1);
    lVar27 = lVar16 + 0x289;
    if ((*(byte *)(lVar16 + 0x288) & 1) != 0) {
      lVar27 = *(long *)(lVar16 + 0x298);
    }
    alStack_2a8[uVar24 * 2 + 2] = lVar27;
    (&local_290)[uVar24 * 2] = (code *)&LAB_023a7d48;
  }
  uVar22 = uVar28;
  if (*(long *)(lVar14 + 0x80) != 0) {
    lVar16 = FUN_008cca50();
    lVar27 = lVar16 + 0x1c9;
    if ((*(byte *)(lVar16 + 0x1c8) & 1) != 0) {
      lVar27 = *(long *)(lVar16 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar14 + 0x80);
    uVar22 = (ulong)((int)uVar28 + 1);
    alStack_2a8[uVar28 * 2 + 2] = lVar27;
    (&local_290)[uVar28 * 2] = pcVar21;
  }
  alStack_2a8[uVar22 * 2 + 2] = 0;
  (&local_290)[uVar22 * 2] = (code *)0x0;
  memcpy(alStack_4d8 + 2,&local_298,0x230);
  memcpy(alStack_6f8,&local_298,0x230);
  lVar27 = FUN_008cca50();
  lVar16 = uVar22 - 1;
  pcVar26 = (char *)alStack_2a8[lVar16 * 2 + 2];
  sVar15 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar15 == sVar1) &&
     (iVar9 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    alStack_4d8[lVar16 * 2 + 2] = 0;
    alStack_4d8[lVar16 * 2 + 3] = 0;
  }
  alStack_6f8[lVar16 * 2] = alStack_2a8[lVar16 * 2 + 2];
  alStack_6f8[lVar16 * 2 + 1] = (long)FUN_023a70d0;
  FUN_00151fe0(param_2,0,2);
  local_700[0] = FUN_0014feb0(param_2,0xffffffff);
  local_708 = param_2;
  if ((*PTR_DAT_04386940 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04386940);
    puVar5 = PTR_DAT_04386948;
    if (iVar9 != 0) {
      FUN_023a68c0(PTR_DAT_04386948);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04386940);
    }
  }
  uVar10 = local_700[0];
  uVar28 = *(ulong *)(PTR_DAT_04386948 + 8);
  puVar5 = *(undefined **)(PTR_DAT_04386948 + 0x10);
  if ((*PTR_DAT_04386948 & 1) == 0) {
    puVar5 = PTR_DAT_04386948 + 1;
    uVar28 = (ulong)((byte)*PTR_DAT_04386948 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar28);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,FUN_023a7120,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      plVar29 = alStack_6f8;
      FUN_023a5054();
      pbVar19 = &DAT_043e2bd8;
LAB_023a3780:
      pbVar13 = *(byte **)(pbVar19 + 0x10);
      if ((*pbVar19 & 1) == 0) {
        pbVar13 = pbVar19 + 1;
      }
    }
    else {
      if (lVar27 == 0) {
        plVar29 = alStack_4d8 + 2;
        FUN_023a4e78();
        pbVar19 = &DAT_043e2b60;
        goto LAB_023a3780;
      }
      plVar29 = &local_298;
      pbVar19 = (byte *)FUN_023a5230();
      pbVar13 = *(byte **)(pbVar19 + 0x10);
      if ((*pbVar19 & 1) == 0) {
        pbVar13 = pbVar19 + 1;
      }
    }
    FUN_00154450(param_2,pbVar13);
    local_710 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_718 = param_2;
    FUN_008fe304(local_720,param_2,&local_750,&local_708,local_710);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,plVar29,2);
    uVar10 = local_710;
    if (*(long *)(lVar14 + 0xb0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
    }
    uVar10 = local_710;
    if (*(long *)(lVar14 + 0xb8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_710;
    uVar20 = *(undefined8 *)(lVar14 + 0x90);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_710;
    uVar20 = *(undefined8 *)(lVar14 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(local_720,param_2,&local_750,&local_718,local_710);
    }
    else {
      local_720[0] = 1;
      local_750 = &LAB_023a7170;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_023a8ae0(param_2,local_720,&local_750,local_710);
      local_720[0] = 2;
      local_750 = &LAB_023a7174;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_023a8ae0(param_2,local_720,&local_750,local_710);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(local_720,param_2,&local_750,&local_708,uVar10);
    if (*(undefined1 **)(lVar14 + 0x88) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0xc0) == '\0') goto LAB_023a397c;
LAB_023a3c0c:
      local_720[0] = 1;
      local_750 = &LAB_023a7170;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_023a8ae0(param_2,local_720,&local_750,uVar10);
      local_720[0] = 2;
      local_750 = &LAB_023a7174;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_023a8ae0(param_2,local_720,&local_750,uVar10);
      if (param_2 == 0) goto LAB_023a3c6c;
LAB_023a3984:
      uVar12 = local_710;
      FUN_00150260(param_2,uVar10);
    }
    else {
      local_720[0] = 4;
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar14 + 0x88);
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_023a8ae0(param_2,local_720,&local_750,uVar10);
      if (*(char *)(lVar14 + 0xc0) != '\0') goto LAB_023a3c0c;
LAB_023a397c:
      if (param_2 != 0) goto LAB_023a3984;
LAB_023a3c6c:
      uVar12 = local_710;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_718,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_023a5468();
      puVar5 = DAT_043e2cd8;
      if ((DAT_043e2cc8 & 1) == 0) {
        puVar5 = &DAT_043e2cc9;
      }
      FUN_00154450(param_2,puVar5);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,&local_298,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_718,param_2,&local_750,&local_708,uVar12);
      local_750 = *(undefined1 **)(lVar14 + 0x88);
      if (local_750 != (undefined1 *)0x0) {
        local_718 = CONCAT44(local_718._4_4_,4);
        uStack_748 = 0;
        local_740 = lVar14;
        lStack_738 = lVar23;
        FUN_023a8ae0(param_2,&local_718,&local_750,uVar12);
      }
      local_718._0_4_ = 1;
      local_750 = &LAB_023a7178;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7d510;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_023a9194(param_2,&local_718,&local_750,uVar12);
      local_718 = CONCAT44(local_718._4_4_,2);
      local_750 = &LAB_023a717c;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7d510;
      local_740 = lVar14;
      lStack_738 = lVar23;
      FUN_023a9194(param_2,&local_718,&local_750,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_700[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


