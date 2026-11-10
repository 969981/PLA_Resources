/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023835d4; name: FUN_023835d4
 */


undefined8 FUN_023835d4(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char cVar5;
  ulong uVar6;
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
  undefined8 *puVar18;
  undefined8 uVar19;
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_d80;
  undefined8 uStack_d78;
  long local_d70;
  long lStack_d68;
  undefined8 local_d60;
  undefined *puStack_d58;
  undefined4 local_d50 [2];
  long local_d48;
  undefined4 local_d40;
  long local_d38;
  undefined4 local_d30 [2];
  string asStack_d28 [1072];
  undefined8 auStack_8f8 [2];
  string local_8e8;
  undefined1 auStack_8e7 [7];
  size_t local_8e0;
  undefined1 *local_8d8;
  char *apcStack_4b8 [2];
  char *local_4a8;
  code *local_4a0;
  long local_498;
  
  if (((DAT_043e2900 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2900), iVar9 != 0)) {
    local_498 = 0;
    local_4a0 = (code *)0x0;
    local_4a8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386860 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04386860);
      puVar2 = PTR_DAT_04386868;
      if (iVar9 != 0) {
        FUN_023725a0(PTR_DAT_04386868);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386860);
      }
    }
    pcVar26 = (char *)FUN_0238623c(&local_4a8,PTR_DAT_04386868);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e28e8,psVar17);
    lVar13 = local_498;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_4a8 & 1) != 0) && (local_498 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar7;
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
          FUN_02bcc824(plVar25,lVar13,0,8);
          goto LAB_02384790;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_02384790:
    FUN_00100250(PTR__string_04379718,&DAT_043e28e8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2900);
  }
  std::string::string(&local_8e8,(string *)&DAT_043e28e8);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e28e0);
  sVar1 = (ulong)((byte)local_8e8 >> 1);
  if (((byte)local_8e8 & 1) != 0) {
    sVar1 = local_8e0;
  }
  std::string::append((ulong)&local_8e8,(char)iVar9);
  if (((byte)local_8e8 & 1) == 0) {
    puVar27 = auStack_8e7;
    local_8e0 = (size_t)((byte)local_8e8 >> 1);
  }
  else {
    puVar27 = local_8d8;
  }
  snprintf(puVar27 + (sVar1 - 1),local_8e0,"%d",(ulong)DAT_043e28e0);
  DAT_043e28e0 = DAT_043e28e0 + 1;
  if (((DAT_043e2920 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2920), iVar9 != 0)) {
    local_498 = 0;
    local_4a0 = (code *)0x0;
    local_4a8 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386860 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04386860);
      puVar2 = PTR_DAT_04386868;
      if (iVar9 != 0) {
        FUN_023725a0(PTR_DAT_04386868);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386860);
      }
    }
    pcVar26 = (char *)FUN_0238623c(&local_4a8,PTR_DAT_04386868);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e2908,psVar17);
    lVar13 = local_498;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_4a8 & 1) != 0) && (local_498 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar7;
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
          FUN_02bcc824(plVar25,lVar13,0,8);
          goto LAB_023848e4;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_023848e4:
    FUN_00100250(PTR__string_04379718,&DAT_043e2908,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e2920);
  }
  puVar2 = DAT_043e2918;
  if ((DAT_043e2908 & 1) == 0) {
    puVar2 = &DAT_043e2909;
  }
  if (((byte)local_8e8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_8e8 | 1);
  }
  else {
    puVar27 = local_8d8;
  }
  if (((DAT_043e2930 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2930), iVar9 != 0)) {
    DAT_043e2928 = 0x2f0;
    __cxa_guard_release(&DAT_043e2930);
  }
  if (((DAT_043e2940 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e2940), iVar9 != 0)) {
    DAT_043e2938 = 0x2f7;
    __cxa_guard_release(&DAT_043e2940);
  }
  uVar22 = DAT_043e2928;
  lVar13 = FUN_00153520(param_2,DAT_043e2928);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2f0)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e2938;
    lVar13 = FUN_00153520(param_2,DAT_043e2938);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x2f0)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_02387670();
      puVar3 = DAT_043e2958;
      if ((DAT_043e2948 & 1) == 0) {
        puVar3 = &DAT_043e2949;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar13;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar13 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar6 = 0;
      if (uVar24 != 0) {
        uVar6 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar6 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar4;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425bd58;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x290);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_02387630,0);
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
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar13 = FUN_001511d0(param_2,0xffffffff);
  lVar13 = lVar13 + ((ulong)(uint)-(int)lVar13 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar7 = DAT_043f1798;
  if ((((byte)local_8e8 & 1) != 0) && (local_8d8 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar7;
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
        FUN_02bcc824(plVar25,local_8d8,0,8);
        goto LAB_02383940;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_8d8,0,8);
  }
LAB_02383940:
  memset(&local_4a8,0,0x440);
  pcVar26 = *(char **)(lVar13 + 0x260);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
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
  lVar23 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02386774;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02386638;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar13 + 0x2a0) = pcVar20;
            goto LAB_02383b58;
          }
          *(ulong *)(lVar13 + 0x2e8) = *(ulong *)(lVar13 + 0x2e8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2e8) = *(ulong *)(lVar13 + 0x2e8) | 1L << (uVar22 & 0x3f);
      goto LAB_02383b58;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_4a8 = pcVar26;
  local_4a0 = pcVar20;
LAB_02383b58:
  pcVar26 = *(char **)(lVar13 + 0x278);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02386908;
  if (uVar11 != 0) {
    pcVar20 = FUN_023868c0;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a0) = pcVar20;
            goto LAB_02383c98;
          }
          *(ulong *)(lVar13 + 0x2e8) = *(ulong *)(lVar13 + 0x2e8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2e8) = *(ulong *)(lVar13 + 0x2e8) | 1L << (uVar22 & 0x3f);
      goto LAB_02383c98;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_4a8)[uVar24 * 2] = pcVar26;
  (&local_4a0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02383c98:
  pcVar26 = *(char **)(lVar13 + 0x290);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_02387058;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_02386950;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) {
      iVar9 = (int)uVar22;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x2a0) = pcVar20;
            goto LAB_02383da8;
          }
          *(ulong *)(lVar13 + 0x2e8) = *(ulong *)(lVar13 + 0x2e8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x2e8) = *(ulong *)(lVar13 + 0x2e8) | 1L << (uVar22 & 0x3f);
      goto LAB_02383da8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_4a8)[uVar24 * 2] = pcVar26;
  (&local_4a0)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02383da8:
  pcVar26 = *(char **)(lVar13 + 0x298);
  sVar14 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar14 < 0xb) {
    sVar1 = sVar14;
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_02387270;
  if (uVar11 != 0) {
    pcVar20 = FUN_02387228;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar22 == 0x20) {
LAB_023844c8:
      (&local_4a8)[uVar24 * 2] = pcVar26;
      (&local_4a0)[uVar24 * 2] = pcVar20;
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x2e8);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x02383e8c:
      if ((uVar11 >> 0x11 & 1) == 0) {
LAB_02383e90:
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x2e8);
      }
LAB_02383e98:
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x2e8);
      }
      uVar22 = uVar24;
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x181);
        if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 400);
        }
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_4a8)[uVar24 * 2] = pcVar26;
        (&local_4a0)[uVar24 * 2] = (code *)PTR_LAB_04386838;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x2e8);
      }
      uVar24 = uVar22;
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x289);
        if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x298);
        }
        uVar24 = (ulong)((int)uVar22 + 1);
        (&local_4a8)[uVar22 * 2] = pcVar26;
        (&local_4a0)[uVar22 * 2] = (code *)PTR_LAB_04386840;
      }
      uVar22 = uVar24;
      if (*(long *)(lVar13 + 0x2a0) != 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x1c9);
        if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(code **)(lVar13 + 0x2a0);
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_4a8)[uVar24 * 2] = pcVar26;
        (&local_4a0)[uVar24 * 2] = pcVar20;
      }
      (&local_4a8)[uVar22 * 2] = (char *)0x0;
      (&local_4a0)[uVar22 * 2] = (code *)0x0;
      memcpy(&local_8e8,&local_4a8,0x440);
      memcpy(asStack_d28,&local_4a8,0x440);
      lVar28 = FUN_008cca50();
      lVar15 = uVar22 - 1;
      pcVar26 = (&local_4a8)[lVar15 * 2];
      sVar14 = strlen(pcVar26);
      sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar14 == sVar1) &&
         (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
         iVar9 == 0)) {
        auStack_8f8[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_8e7 + lVar15 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_d28 + lVar15 * 0x10) = (&local_4a8)[lVar15 * 2];
      *(undefined1 **)(asStack_d28 + (lVar15 * 2 + 1) * 8) = &LAB_023872c0;
      FUN_00151fe0(param_2,0,2);
      local_d30[0] = FUN_0014feb0(param_2,0xffffffff);
      local_d38 = param_2;
      if ((*PTR_DAT_04386860 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04386860);
        puVar2 = PTR_DAT_04386868;
        if (iVar9 != 0) {
          FUN_023725a0(PTR_DAT_04386868);
          FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04386860);
        }
      }
      uVar10 = local_d30[0];
      uVar22 = *(ulong *)(PTR_DAT_04386868 + 8);
      puVar2 = *(undefined **)(PTR_DAT_04386868 + 0x10);
      if ((*PTR_DAT_04386868 & 1) == 0) {
        puVar2 = PTR_DAT_04386868 + 1;
        uVar22 = (ulong)((byte)*PTR_DAT_04386868 >> 1);
      }
      FUN_001514f0(param_2,puVar2,uVar22);
      FUN_00152550(param_2,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_02386f00,0);
      FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar17 = asStack_d28;
          pbVar16 = (byte *)FUN_02372984();
        }
        else if (lVar28 == 0) {
          psVar17 = &local_8e8;
          pbVar16 = (byte *)FUN_02371338();
        }
        else {
          psVar17 = (string *)&local_4a8;
          pbVar16 = (byte *)FUN_02372364();
        }
        pbVar21 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar21 = pbVar16 + 1;
        }
        FUN_00154450(param_2,pbVar21);
        local_d40 = FUN_0014feb0(param_2,0xffffffff);
        local_d80 = (undefined1 *)CONCAT44(local_d80._4_4_,0x1e);
        local_d48 = param_2;
        FUN_008fe304(local_d50,param_2,&local_d80,&local_d38,local_d40);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00155a20(param_2,psVar17,2);
        uVar10 = local_d40;
        if (*(long *)(lVar13 + 0x2d0) == 0) {
          lVar15 = *(long *)(lVar13 + 0x2d8);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_check");
          lVar15 = *(long *)(lVar13 + 0x2d8);
          uVar10 = local_d40;
        }
        local_d40 = uVar10;
        if (lVar15 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_cast");
        }
        uVar10 = local_d40;
        uVar19 = *(undefined8 *)(lVar13 + 0x2b0);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_03955ac7);
        uVar10 = local_d40;
        uVar19 = *(undefined8 *)(lVar13 + 0x2b8);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_d80 = (undefined1 *)CONCAT44(local_d80._4_4_,1);
          FUN_008fe304(local_d50,param_2,&local_d80,&local_d48,local_d40);
        }
        else {
          local_d50[0] = 1;
          local_d80 = &LAB_02387310;
          uStack_d78 = 0;
          local_d70 = lVar13;
          lStack_d68 = lVar23;
          FUN_02387aac(param_2,local_d50,&local_d80,local_d40);
          local_d50[0] = 2;
          local_d80 = &LAB_0238761c;
          uStack_d78 = 0;
          local_d70 = lVar13;
          lStack_d68 = lVar23;
          FUN_02387aac(param_2,local_d50,&local_d80,local_d40);
        }
        FUN_00151fe0(param_2,0,3);
        uVar10 = FUN_0014feb0(param_2,0xffffffff);
        local_d80 = (undefined1 *)CONCAT44(local_d80._4_4_,0x1e);
        FUN_008fe304(local_d50,param_2,&local_d80,&local_d38,uVar10);
        if (*(undefined1 **)(lVar13 + 0x2a8) == (undefined1 *)0x0) {
          cVar5 = *(char *)(lVar13 + 0x2e0);
        }
        else {
          local_d50[0] = 4;
          uStack_d78 = 0;
          local_d80 = *(undefined1 **)(lVar13 + 0x2a8);
          local_d70 = lVar13;
          lStack_d68 = lVar23;
          FUN_02387aac(param_2,local_d50,&local_d80,uVar10);
          cVar5 = *(char *)(lVar13 + 0x2e0);
        }
        if (cVar5 != '\0') {
          local_d50[0] = 1;
          local_d80 = &LAB_02387310;
          uStack_d78 = 0;
          local_d70 = lVar13;
          lStack_d68 = lVar23;
          FUN_02387aac(param_2,local_d50,&local_d80,uVar10);
          local_d50[0] = 2;
          local_d80 = &LAB_0238761c;
          uStack_d78 = 0;
          local_d70 = lVar13;
          lStack_d68 = lVar23;
          FUN_02387aac(param_2,local_d50,&local_d80,uVar10);
        }
        uVar12 = local_d40;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar10);
        }
        FUN_00152ae0(param_2,uVar12);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_d48,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_023859f0();
      puVar2 = DAT_043e28b0;
      if ((DAT_043e28a0 & 1) == 0) {
        puVar2 = &DAT_043e28a1;
      }
      FUN_00154450(param_2,puVar2);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_d80._0_4_ = 0x1e;
      FUN_008fe304(&local_d48,param_2,&local_d80,&local_d38,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_4a8,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_d80 = (undefined1 *)CONCAT44(local_d80._4_4_,0x1e);
      FUN_008fe304(&local_d48,param_2,&local_d80,&local_d38,uVar12);
      local_d80 = *(undefined1 **)(lVar13 + 0x2a8);
      if (local_d80 != (undefined1 *)0x0) {
        local_d48 = CONCAT44(local_d48._4_4_,4);
        uStack_d78 = 0;
        local_d70 = lVar13;
        lStack_d68 = lVar23;
        FUN_02387aac(param_2,&local_d48,&local_d80,uVar12);
      }
      local_d48._0_4_ = 1;
      local_d80 = &LAB_02387620;
      uStack_d78 = 0;
      local_d60 = 0;
      puStack_d58 = &DAT_03a7d4f0;
      local_d70 = lVar13;
      lStack_d68 = lVar23;
      FUN_02387e54(param_2,&local_d48,&local_d80,uVar12);
      local_d48 = CONCAT44(local_d48._4_4_,2);
      local_d80 = &LAB_02387624;
      uStack_d78 = 0;
      local_d60 = 0;
      puStack_d58 = &DAT_03a7d4f0;
      local_d70 = lVar13;
      lStack_d68 = lVar23;
      FUN_02387e54(param_2,&local_d48,&local_d80,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_d30[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar9 = (int)uVar22;
  if (iVar9 == 0x13) {
    *(code **)(lVar13 + 0x2a0) = pcVar20;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x2e8);
    goto joined_r0x02383e8c;
  }
  if (iVar9 == 1) {
    *(code **)(lVar13 + 0x30) = pcVar20;
  }
  else {
    if (iVar9 != 2) {
      *(ulong *)(lVar13 + 0x2e8) = *(ulong *)(lVar13 + 0x2e8) | 1L << (uVar22 & 0x3f);
      goto LAB_023844c8;
    }
    *(code **)(lVar13 + 0x38) = pcVar20;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0x2e8) = *(ulong *)(lVar13 + 0x2e8) | 1L << (uVar22 & 0x3f);
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x2e8);
  if ((uVar11 >> 0x11 & 1) == 0) goto LAB_02383e90;
  goto LAB_02383e98;
}


