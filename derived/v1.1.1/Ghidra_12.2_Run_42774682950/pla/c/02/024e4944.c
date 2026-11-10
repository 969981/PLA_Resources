/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024e4944; name: FUN_024e4944
 */


undefined8 FUN_024e4944(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
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
  size_t sVar15;
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
  undefined1 *local_8a0;
  undefined8 uStack_898;
  long local_890;
  long lStack_888;
  undefined8 local_880;
  undefined *puStack_878;
  undefined4 local_870 [2];
  long local_868;
  undefined4 local_860;
  long local_858;
  undefined4 local_850 [2];
  string asStack_848 [656];
  undefined8 auStack_5b8 [2];
  string local_5a8;
  undefined1 auStack_5a7 [7];
  size_t local_5a0;
  undefined1 *local_598;
  char *apcStack_318 [2];
  char *local_308;
  code *local_300;
  long local_2f8;
  
  puVar4 = PTR_DAT_04386cf8;
  if (((DAT_043e82f8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e82f8), iVar8 != 0)) {
    local_2f8 = 0;
    local_300 = (code *)0x0;
    local_308 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04386cf8);
      puVar1 = PTR_DAT_04386d00;
      if (iVar8 != 0) {
        FUN_023c9cf0(PTR_DAT_04386d00);
        FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386cf8);
      }
    }
    pcVar26 = (char *)FUN_024e7dd4(&local_308,PTR_DAT_04386d00);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e82e0,psVar17);
    lVar12 = local_2f8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_308 & 1) != 0) && (local_2f8 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_024e62ac;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_024e62ac:
    FUN_00100250(PTR__string_04379718,&DAT_043e82e0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e82f8);
  }
  std::string::string(&local_5a8,(string *)&DAT_043e82e0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e82d8);
  if (((byte)local_5a8 & 1) == 0) {
    uVar22 = (ulong)((byte)local_5a8 >> 1);
  }
  else {
    uVar22 = local_5a0;
  }
  std::string::append((ulong)&local_5a8,(char)iVar8);
  if (((byte)local_5a8 & 1) == 0) {
    puVar27 = auStack_5a7;
    local_5a0 = (size_t)((byte)local_5a8 >> 1);
  }
  else {
    puVar27 = local_598;
  }
  snprintf(puVar27 + (uVar22 - 1),local_5a0,"%d",(ulong)DAT_043e82d8);
  DAT_043e82d8 = DAT_043e82d8 + 1;
  if (((DAT_043e8318 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e8318), iVar8 != 0)) {
    local_2f8 = 0;
    local_300 = (code *)0x0;
    local_308 = (char *)0x2e6c6f7308;
    if ((*puVar4 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_04386cf8);
      puVar1 = PTR_DAT_04386d00;
      if (iVar8 != 0) {
        FUN_023c9cf0(PTR_DAT_04386d00);
        FUN_00100250(PTR__string_04379718,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386cf8);
      }
    }
    pcVar26 = (char *)FUN_024e7dd4(&local_308,PTR_DAT_04386d00);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e8300,psVar17);
    lVar12 = local_2f8;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_308 & 1) != 0) && (local_2f8 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
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
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_024e63f8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_024e63f8:
    FUN_00100250(PTR__string_04379718,&DAT_043e8300,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e8318);
  }
  puVar1 = DAT_043e8310;
  if ((DAT_043e8300 & 1) == 0) {
    puVar1 = &DAT_043e8301;
  }
  if (((byte)local_5a8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_5a8 | 1);
  }
  else {
    puVar27 = local_598;
  }
  if (((DAT_043e8328 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e8328), iVar8 != 0)) {
    DAT_043e8320 = 0x180;
    __cxa_guard_release(&DAT_043e8328);
  }
  if (((DAT_043e8338 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043e8338), iVar8 != 0)) {
    DAT_043e8330 = 0x187;
    __cxa_guard_release(&DAT_043e8338);
  }
  uVar22 = DAT_043e8320;
  lVar12 = FUN_00153520(param_2,DAT_043e8320);
  if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x180)) ||
     (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e8330;
    lVar12 = FUN_00153520(param_2,DAT_043e8330);
    if ((uVar22 < ((ulong)(uint)-(int)lVar12 & 7 | 0x180)) ||
       (puVar18 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_024e9d10();
      puVar2 = DAT_043e8350;
      if ((DAT_043e8340 & 1) == 0) {
        puVar2 = &DAT_043e8341;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar19 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar19;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar12;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar23;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar18[2];
    uVar22 = *(ulong *)(lVar12 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar22 = uVar24 - 1 & uVar22;
    }
    else if (uVar24 <= uVar22) {
      uVar5 = 0;
      if (uVar24 != 0) {
        uVar5 = uVar22 / uVar24;
      }
      uVar22 = uVar22 - uVar5 * uVar24;
    }
    *(undefined8 **)(puVar18[1] + uVar22 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425c2f0;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x120);
  iVar8 = FUN_00154450(param_2,puVar27);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_024e9cd0,0);
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
  FUN_001522a0(param_2,puVar1);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar1);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_5a8 & 1) != 0) && (local_598 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar6;
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
        FUN_02bcc824(plVar25,local_598,0,8);
        goto LAB_024e4cb0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_598,0,8);
  }
LAB_024e4cb0:
  memset(&local_308,0,0x2a0);
  pcVar26 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar23 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_024e81ec;
  if (uVar10 != 0) {
    pcVar20 = FUN_024e810c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar12 + 0x130) = pcVar20;
            goto LAB_024e4ed4;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024e4ed4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_308 = pcVar26;
  local_300 = pcVar20;
LAB_024e4ed4:
  pcVar26 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_024e83d4;
  if (uVar10 != 0) {
    pcVar20 = FUN_024e827c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar20;
            goto LAB_024e5014;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024e5014;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024e5014:
  pcVar26 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_024e84ac;
  if (uVar10 != 0) {
    pcVar20 = FUN_024e8464;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar20;
            goto LAB_024e5154;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024e5154;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024e5154:
  pcVar26 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_024e866c;
  if (uVar10 != 0) {
    pcVar20 = FUN_024e84f4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar20;
            goto LAB_024e5294;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024e5294;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024e5294:
  pcVar26 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_024e8744;
  if (uVar10 != 0) {
    pcVar20 = FUN_024e86fc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar20;
            goto LAB_024e53d4;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024e53d4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024e53d4:
  pcVar26 = *(char **)(lVar12 + 0xd8);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_024e886c;
  if (uVar10 != 0) {
    pcVar20 = FUN_024e878c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar20;
            goto LAB_024e5514;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024e5514;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024e5514:
  pcVar26 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_024e89dc;
  if (uVar10 != 0) {
    pcVar20 = FUN_024e88fc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar20;
            goto LAB_024e5654;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024e5654;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024e5654:
  pcVar26 = *(char **)(lVar12 + 0x108);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_024e8b54;
  if (uVar10 != 0) {
    pcVar20 = FUN_024e8a6c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar20;
            goto LAB_024e5794;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024e5794;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024e5794:
  pcVar26 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_024e9a58;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_024e8be4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x130) = pcVar20;
            goto LAB_024e58a4;
          }
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      goto LAB_024e58a4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_024e58a4:
  pcVar26 = *(char **)(lVar12 + 0x128);
  sVar13 = strlen(pcVar26);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = (code *)&LAB_024e9c30;
  if (uVar10 != 0) {
    pcVar20 = (code *)&LAB_024e9bfc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar22;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x130) = pcVar20;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
        goto joined_r0x024e5988;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar20;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x178) = *(ulong *)(lVar12 + 0x178) | 1L << (uVar22 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
      goto joined_r0x024e5988;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_308)[uVar24 * 2] = pcVar26;
  (&local_300)[uVar24 * 2] = pcVar20;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x024e5988:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
  }
  uVar22 = uVar24;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_308)[uVar24 * 2] = pcVar26;
    (&local_300)[uVar24 * 2] = (code *)PTR_LAB_04386cd0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x178);
  }
  uVar24 = uVar22;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_308)[uVar22 * 2] = pcVar26;
    (&local_300)[uVar22 * 2] = (code *)PTR_LAB_04386cd8;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar12 + 0x130) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar12 + 0x130);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_308)[uVar24 * 2] = pcVar26;
    (&local_300)[uVar24 * 2] = pcVar20;
  }
  (&local_308)[uVar22 * 2] = (char *)0x0;
  (&local_300)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_5a8,&local_308,0x2a0);
  memcpy(asStack_848,&local_308,0x2a0);
  lVar28 = FUN_008cca50();
  lVar14 = uVar22 - 1;
  pcVar26 = (&local_308)[lVar14 * 2];
  sVar15 = strlen(pcVar26);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) == 0) {
    sVar13 = (size_t)(*(byte *)(lVar28 + 0x1c8) >> 1);
  }
  else {
    sVar13 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar15 == sVar13) &&
     (iVar8 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar8 == 0)) {
    auStack_5b8[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5a7 + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_848 + lVar14 * 0x10) = (&local_308)[lVar14 * 2];
  *(undefined1 **)(asStack_848 + (lVar14 * 2 + 1) * 8) = &LAB_024e9c70;
  FUN_00151fe0(param_2,0,2);
  local_850[0] = FUN_0014feb0(param_2,0xffffffff);
  local_858 = param_2;
  if ((*puVar4 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04386cf8);
    puVar4 = PTR_DAT_04386d00;
    if (iVar8 != 0) {
      FUN_023c9cf0(PTR_DAT_04386d00);
      FUN_00100250(PTR__string_04379718,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04386cf8);
    }
  }
  uVar9 = local_850[0];
  uVar22 = *(ulong *)(PTR_DAT_04386d00 + 8);
  puVar4 = *(undefined **)(PTR_DAT_04386d00 + 0x10);
  if ((*PTR_DAT_04386d00 & 1) == 0) {
    puVar4 = PTR_DAT_04386d00 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_04386d00 >> 1);
  }
  FUN_001514f0(param_2,puVar4,uVar22);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_024e9820,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_848;
      pbVar16 = (byte *)FUN_023ca310();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_5a8;
      pbVar16 = (byte *)FUN_023c885c();
    }
    else {
      psVar17 = (string *)&local_308;
      pbVar16 = (byte *)FUN_023c9a94();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_860 = FUN_0014feb0(param_2,0xffffffff);
    local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
    local_868 = param_2;
    FUN_008fe304(local_870,param_2,&local_8a0,&local_858,local_860);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar17,2);
    uVar9 = local_860;
    if (*(long *)(lVar12 + 0x160) == 0) {
      lVar14 = *(long *)(lVar12 + 0x168);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x168);
      uVar9 = local_860;
    }
    local_860 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_860;
    uVar19 = *(undefined8 *)(lVar12 + 0x140);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_860;
    uVar19 = *(undefined8 *)(lVar12 + 0x148);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,1);
      FUN_008fe304(local_870,param_2,&local_8a0,&local_868,local_860);
    }
    else {
      local_870[0] = 1;
      local_8a0 = &LAB_024e9cc0;
      uStack_898 = 0;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_024ea178(param_2,local_870,&local_8a0,local_860);
      local_870[0] = 2;
      local_8a0 = &LAB_024e9cc4;
      uStack_898 = 0;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_024ea178(param_2,local_870,&local_8a0,local_860);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
    FUN_008fe304(local_870,param_2,&local_8a0,&local_858,uVar9);
    if (*(undefined1 **)(lVar12 + 0x138) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x170) != '\0') goto LAB_024e6040;
LAB_024e5d1c:
      if (param_2 == 0) goto LAB_024e60a0;
LAB_024e5d24:
      uVar11 = local_860;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_898 = 0;
      local_870[0] = 4;
      local_8a0 = *(undefined1 **)(lVar12 + 0x138);
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_024ea178(param_2,local_870,&local_8a0,uVar9);
      if (*(char *)(lVar12 + 0x170) == '\0') goto LAB_024e5d1c;
LAB_024e6040:
      local_870[0] = 1;
      local_8a0 = &LAB_024e9cc0;
      uStack_898 = 0;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_024ea178(param_2,local_870,&local_8a0,uVar9);
      local_870[0] = 2;
      local_8a0 = &LAB_024e9cc4;
      uStack_898 = 0;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_024ea178(param_2,local_870,&local_8a0,uVar9);
      if (param_2 != 0) goto LAB_024e5d24;
LAB_024e60a0:
      uVar11 = local_860;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_868,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_024e7594();
      puVar4 = DAT_043e82a8;
      if ((DAT_043e8298 & 1) == 0) {
        puVar4 = &DAT_043e8299;
      }
      FUN_00154450(param_2,puVar4);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0._0_4_ = 0x1e;
      FUN_008fe304(&local_868,param_2,&local_8a0,&local_858,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_308,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_8a0 = (undefined1 *)CONCAT44(local_8a0._4_4_,0x1e);
      FUN_008fe304(&local_868,param_2,&local_8a0,&local_858,uVar11);
      local_8a0 = *(undefined1 **)(lVar12 + 0x138);
      if (local_8a0 != (undefined1 *)0x0) {
        uStack_898 = 0;
        local_868 = CONCAT44(local_868._4_4_,4);
        local_890 = lVar12;
        lStack_888 = lVar23;
        FUN_024ea178(param_2,&local_868,&local_8a0,uVar11);
      }
      local_868._0_4_ = 1;
      local_8a0 = &LAB_024e9cc8;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d5b8;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_024ea82c(param_2,&local_868,&local_8a0,uVar11);
      local_868 = CONCAT44(local_868._4_4_,2);
      local_8a0 = &LAB_024e9ccc;
      uStack_898 = 0;
      local_880 = 0;
      puStack_878 = &DAT_03a7d5b8;
      local_890 = lVar12;
      lStack_888 = lVar23;
      FUN_024ea82c(param_2,&local_868,&local_8a0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_850[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


