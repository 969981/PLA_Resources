/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0100ef0c; name: FUN_0100ef0c
 */


void FUN_0100ef0c(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
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
  size_t sVar15;
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
  undefined1 *local_ae0;
  undefined8 uStack_ad8;
  long local_ad0;
  long lStack_ac8;
  undefined8 local_ac0;
  undefined *puStack_ab8;
  long local_ab0;
  undefined4 local_aa8;
  long local_aa0;
  undefined4 local_a98 [2];
  string asStack_a90 [848];
  undefined8 auStack_740 [2];
  string local_730;
  undefined1 auStack_72f [7];
  size_t local_728;
  undefined1 *local_720;
  char *apcStack_3e0 [2];
  char *local_3d0;
  code *local_3c8;
  long local_3c0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b8708 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8708), iVar8 != 0)) {
    local_3c0 = 0;
    local_3c8 = (code *)0x0;
    local_3d0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437c8a8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437c8a8);
      puVar2 = PTR_DAT_0437c8b0;
      if (iVar8 != 0) {
        FUN_00ebdb80(PTR_DAT_0437c8b0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437c8a8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437c8b0 + 0x10);
    if ((*PTR_DAT_0437c8b0 & 1) == 0) {
      puVar2 = PTR_DAT_0437c8b0 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)&local_3d0,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b86f0,psVar17);
    lVar12 = local_3c0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3d0 & 1) != 0) && (local_3c0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
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
          FUN_02bcc824(plVar26,lVar12,0,8);
          goto LAB_010117bc;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_010117bc:
    FUN_00100250(PTR__string_04379718,&DAT_043b86f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8708);
  }
  std::string::string(&local_730,(string *)&DAT_043b86f0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b86e8);
  if (((byte)local_730 & 1) == 0) {
    uVar23 = (ulong)((byte)local_730 >> 1);
  }
  else {
    uVar23 = local_728;
  }
  std::string::append((ulong)&local_730,(char)iVar8);
  if (((byte)local_730 & 1) == 0) {
    puVar28 = auStack_72f;
    local_728 = (size_t)((byte)local_730 >> 1);
  }
  else {
    puVar28 = local_720;
  }
  snprintf(puVar28 + (uVar23 - 1),local_728,"%d",(ulong)DAT_043b86e8);
  DAT_043b86e8 = DAT_043b86e8 + 1;
  if (((DAT_043b8728 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8728), iVar8 != 0)) {
    local_3c0 = 0;
    local_3c8 = (code *)0x0;
    local_3d0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437c8a8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437c8a8);
      puVar2 = PTR_DAT_0437c8b0;
      if (iVar8 != 0) {
        FUN_00ebdb80(PTR_DAT_0437c8b0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437c8a8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437c8b0 + 0x10);
    if ((*PTR_DAT_0437c8b0 & 1) == 0) {
      puVar2 = PTR_DAT_0437c8b0 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)&local_3d0,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b8710,psVar17);
    lVar12 = local_3c0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3d0 & 1) != 0) && (local_3c0 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar6;
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
          FUN_02bcc824(plVar26,lVar12,0,8);
          goto LAB_0101192c;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_0101192c:
    FUN_00100250(PTR__string_04379718,&DAT_043b8710,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8728);
  }
  puVar2 = DAT_043b8720;
  if ((DAT_043b8710 & 1) == 0) {
    puVar2 = &DAT_043b8711;
  }
  if (((byte)local_730 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_730 | 1);
  }
  else {
    puVar28 = local_720;
  }
  if (((DAT_043b8738 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8738), iVar8 != 0)) {
    DAT_043b8730 = 0x230;
    __cxa_guard_release(&DAT_043b8738);
  }
  if (((DAT_043b8748 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8748), iVar8 != 0)) {
    DAT_043b8740 = 0x237;
    __cxa_guard_release(&DAT_043b8748);
  }
  uVar23 = DAT_043b8730;
  lVar12 = FUN_00153520(param_1,DAT_043b8730);
  if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x230)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043b8740;
    lVar12 = FUN_00153520(param_1,DAT_043b8740);
    if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x230)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_01011f90();
      puVar3 = DAT_043b8760;
      if ((DAT_043b8750 & 1) == 0) {
        puVar3 = &DAT_043b8751;
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar12 = *(long *)(param_2 + 0x18);
  puVar19[3] = lVar12;
  lVar24 = *(long *)(param_2 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_2 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar12 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar5 = 0;
      if (uVar25 != 0) {
        uVar5 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar5 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_2 + 0x40);
  puVar19[9] = *(undefined8 *)(param_2 + 0x48);
  puVar19[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *puVar19 = &PTR_FUN_041ef278;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x1d0);
  iVar8 = FUN_00154450(param_1,puVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_01011f50,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_1,0xfffffffe);
  uVar9 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar9);
  }
  FUN_001522a0(param_1,puVar2);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar2);
  lVar12 = FUN_001511d0(param_1,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_1,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_730 & 1) != 0) && (local_720 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar6;
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
        FUN_02bcc824(plVar26,local_720,0,8);
        goto LAB_0100f270;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_720,0,8);
  }
LAB_0100f270:
  memset(&local_3d0,0,0x360);
  pcVar27 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar18 = lVar12 + 8;
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100ce38;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0100cd1c;
  }
  puVar1 = (ulong *)(lVar12 + 0x228);
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100f480;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100f480;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_3d0 = pcVar27;
  local_3c8 = pcVar21;
LAB_0100f480:
  pcVar27 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0100cf9c;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0100cf64;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100f5c8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100f5c8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0100f5c8:
  pcVar27 = *(char **)(lVar12 + 0x90);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100d170;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100cfe4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100f70c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100f70c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0100f70c:
  pcVar27 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100d2b0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100d268;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100f850;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100f850;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0100f850:
  pcVar27 = *(char **)(lVar12 + 0xc0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100d504;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100d2f8;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100f994;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100f994;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0100f994:
  pcVar27 = *(char **)(lVar12 + 0xd8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100d74c;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100d5fc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100fad8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100fad8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0100fad8:
  pcVar27 = *(char **)(lVar12 + 0xf0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100da80;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100d844;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100fc1c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100fc1c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0100fc1c:
  pcVar27 = *(char **)(lVar12 + 0x108);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100dbc0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100db78;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100fd60;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100fd60;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0100fd60:
  pcVar27 = *(char **)(lVar12 + 0x120);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100dc50;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100dc08;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100fea4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100fea4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0100fea4:
  pcVar27 = *(char **)(lVar12 + 0x138);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0100dcd0;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0100dc98;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0100ffe8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0100ffe8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0100ffe8:
  pcVar27 = *(char **)(lVar12 + 0x150);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100de7c;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100dd18;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0101012c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0101012c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0101012c:
  pcVar27 = *(char **)(lVar12 + 0x160);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100e0b4;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100dec4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_01010270;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_01010270;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01010270:
  pcVar27 = *(char **)(lVar12 + 0x170);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100e144;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100e0fc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_010103b4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_010103b4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010103b4:
  pcVar27 = *(char **)(lVar12 + 0x180);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100e384;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100e18c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_010104f8;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_010104f8;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010104f8:
  pcVar27 = *(char **)(lVar12 + 400);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100e414;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100e3cc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_0101063c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_0101063c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0101063c:
  pcVar27 = *(char **)(lVar12 + 0x1a0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100e6f4;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100e45c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_01010780;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_01010780;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01010780:
  pcVar27 = *(char **)(lVar12 + 0x1b0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100e7bc;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100e73c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_010108c4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_010108c4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010108c4:
  pcVar27 = *(char **)(lVar12 + 0x1b8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100e8c0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100e83c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_01010a08;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_01010a08;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01010a08:
  pcVar27 = *(char **)(lVar12 + 0x1c0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100e9c8;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100e944;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_01010b4c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_01010b4c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01010b4c:
  pcVar27 = *(char **)(lVar12 + 0x1c8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = FUN_0100ead0;
  if (uVar10 != 0) {
    pcVar21 = FUN_0100ea4c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_01010c90;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_01010c90;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01010c90:
  pcVar27 = *(char **)(lVar12 + 0x1d0);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0100ecf0;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0100eb54;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x1e0) = pcVar21;
            goto LAB_01010da4;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      goto LAB_01010da4;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01010da4:
  pcVar27 = *(char **)(lVar12 + 0x1d8);
  sVar13 = strlen(pcVar27);
  sVar15 = 10;
  if (sVar13 < 0xb) {
    sVar15 = sVar13;
  }
  if (sVar15 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar27,sVar15);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar24 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_0100eec4;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0100ee8c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar16 = (byte *)(lVar14 + lVar24);
    sVar13 = strlen(pcVar27);
    sVar15 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar15 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar13 == sVar15) &&
       (iVar8 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar8 == 0)) {
      iVar8 = (int)uVar23;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x1e0) = pcVar21;
        uVar10 = (uint)*puVar1;
        goto joined_r0x01010e8c;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar21;
      }
      else {
        if (iVar8 != 2) {
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x228) = *(ulong *)(lVar12 + 0x228) | 1L << (uVar23 & 0x3f);
      uVar10 = (uint)*puVar1;
      goto joined_r0x01010e8c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3d0)[uVar25 * 2] = pcVar27;
  (&local_3c8)[uVar25 * 2] = pcVar21;
  uVar10 = (uint)*puVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x01010e8c:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*puVar1;
  }
  uVar23 = uVar25;
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x181);
    if ((*(byte *)(lVar24 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_3d0)[uVar25 * 2] = pcVar27;
    (&local_3c8)[uVar25 * 2] = (code *)PTR_LAB_0437c8f8;
    uVar10 = (uint)*puVar1;
  }
  uVar25 = uVar23;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x289);
    if ((*(byte *)(lVar24 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    (&local_3d0)[uVar23 * 2] = pcVar27;
    (&local_3c8)[uVar23 * 2] = (code *)PTR_LAB_0437c900;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar12 + 0x1e0) != 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x1c9);
    if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar12 + 0x1e0);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_3d0)[uVar25 * 2] = pcVar27;
    (&local_3c8)[uVar25 * 2] = pcVar21;
  }
  (&local_3d0)[uVar23 * 2] = (char *)0x0;
  (&local_3c8)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_730,&local_3d0,0x360);
  memcpy(asStack_a90,&local_3d0,0x360);
  lVar24 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar27 = (&local_3d0)[lVar14 * 2];
  sVar15 = strlen(pcVar27);
  if ((*(byte *)(lVar24 + 0x1c8) & 1) == 0) {
    sVar13 = (size_t)(*(byte *)(lVar24 + 0x1c8) >> 1);
  }
  else {
    sVar13 = *(size_t *)(lVar24 + 0x1d0);
  }
  if ((sVar15 == sVar13) &&
     (iVar8 = std::string::compare(lVar24 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar8 == 0)) {
    auStack_740[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_72f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_a90 + lVar14 * 0x10) = (&local_3d0)[lVar14 * 2];
  *(undefined1 **)(asStack_a90 + (lVar14 * 2 + 1) * 8) = &LAB_01011d90;
  FUN_00151fe0(param_1,0,2);
  local_a98[0] = FUN_0014feb0(param_1,0xffffffff);
  local_aa0 = param_1;
  if ((*PTR_DAT_0437c8a8 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_0437c8a8);
    puVar2 = PTR_DAT_0437c8b0;
    if (iVar8 != 0) {
      FUN_00ebdb80(PTR_DAT_0437c8b0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437c8a8);
    }
  }
  uVar9 = local_a98[0];
  uVar23 = *(ulong *)(PTR_DAT_0437c8b0 + 8);
  puVar2 = *(undefined **)(PTR_DAT_0437c8b0 + 0x10);
  if ((*PTR_DAT_0437c8b0 & 1) == 0) {
    puVar2 = PTR_DAT_0437c8b0 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437c8b0 >> 1);
  }
  FUN_001514f0(param_1,puVar2,uVar23);
  FUN_00152550(param_1,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_1,PTR_LAB_0437c8e0,0);
  FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      psVar17 = asStack_a90;
      pbVar16 = (byte *)FUN_00ebf230();
    }
    else if (lVar24 == 0) {
      psVar17 = &local_730;
      pbVar16 = (byte *)FUN_00ebe954();
    }
    else {
      psVar17 = (string *)&local_3d0;
      pbVar16 = (byte *)FUN_00ebd554();
    }
    pbVar22 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar22 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_aa8 = FUN_0014feb0(param_1,0xffffffff);
    local_ae0 = (undefined1 *)CONCAT44(local_ae0._4_4_,0x1e);
    local_ab0 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_ae0,&local_aa0,local_aa8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00155a20(param_1,psVar17,2);
    uVar9 = local_aa8;
    if (*(long *)(lVar12 + 0x210) == 0) {
      lVar14 = *(long *)(lVar12 + 0x218);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x218);
      uVar9 = local_aa8;
    }
    local_aa8 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_cast");
    }
    uVar9 = local_aa8;
    uVar20 = *(undefined8 *)(lVar12 + 0x1f0);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_03955ac7);
    uVar9 = local_aa8;
    uVar20 = *(undefined8 *)(lVar12 + 0x1f8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_ae0 = (undefined1 *)CONCAT44(local_ae0._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_ae0,&local_ab0,local_aa8);
    }
    else {
      local_ae0 = &LAB_01011e80;
      uStack_ad8 = 0;
      local_ad0 = lVar12;
      lStack_ac8 = lVar18;
      FUN_01011de0(param_1,1,&local_ae0,local_aa8);
      local_ae0 = &LAB_01011e84;
      uStack_ad8 = 0;
      local_ad0 = lVar12;
      lStack_ac8 = lVar18;
      FUN_01011de0(param_1,2,&local_ae0,local_aa8);
    }
    FUN_00151fe0(param_1,0,3);
    uVar9 = FUN_0014feb0(param_1,0xffffffff);
    local_ae0 = (undefined1 *)CONCAT44(local_ae0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_ae0,&local_aa0,uVar9);
    if (*(undefined1 **)(lVar12 + 0x1e8) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x220) != '\0') goto LAB_01011524;
LAB_01011228:
      if (param_1 == 0) goto LAB_01011578;
LAB_01011230:
      uVar11 = local_aa8;
      FUN_00150260(param_1,uVar9);
    }
    else {
      uStack_ad8 = 0;
      local_ae0 = *(undefined1 **)(lVar12 + 0x1e8);
      local_ad0 = lVar12;
      lStack_ac8 = lVar18;
      FUN_01011de0(param_1,4,&local_ae0,uVar9);
      if (*(char *)(lVar12 + 0x220) == '\0') goto LAB_01011228;
LAB_01011524:
      local_ae0 = &LAB_01011e80;
      uStack_ad8 = 0;
      local_ad0 = lVar12;
      lStack_ac8 = lVar18;
      FUN_01011de0(param_1,1,&local_ae0,uVar9);
      local_ae0 = &LAB_01011e84;
      uStack_ad8 = 0;
      local_ad0 = lVar12;
      lStack_ac8 = lVar18;
      FUN_01011de0(param_1,2,&local_ae0,uVar9);
      if (param_1 != 0) goto LAB_01011230;
LAB_01011578:
      uVar11 = local_aa8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar11);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_ab0,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_0100c19c();
      puVar2 = DAT_043b86d8;
      if ((DAT_043b86c8 & 1) == 0) {
        puVar2 = &DAT_043b86c9;
      }
      FUN_00154450(param_1,puVar2);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_ae0._0_4_ = 0x1e;
      FUN_008fe304(&local_ab0,param_1,&local_ae0,&local_aa0,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar12);
      FUN_00155a20(param_1,&local_3d0,2);
      FUN_00151fe0(param_1,0,3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_ae0 = (undefined1 *)CONCAT44(local_ae0._4_4_,0x1e);
      FUN_008fe304(&local_ab0,param_1,&local_ae0,&local_aa0,uVar11);
      local_ae0 = *(undefined1 **)(lVar12 + 0x1e8);
      if (local_ae0 != (undefined1 *)0x0) {
        uStack_ad8 = 0;
        local_ad0 = lVar12;
        lStack_ac8 = lVar18;
        FUN_01011de0(param_1,4,&local_ae0,uVar11);
      }
      local_ae0 = &LAB_01011f48;
      uStack_ad8 = 0;
      local_ac0 = 0;
      puStack_ab8 = &DAT_03a788e0;
      local_ad0 = lVar12;
      lStack_ac8 = lVar18;
      FUN_01011e90(param_1,1,&local_ae0,uVar11);
      local_ae0 = &LAB_01011f4c;
      uStack_ad8 = 0;
      local_ac0 = 0;
      puStack_ab8 = &DAT_03a788e0;
      local_ad0 = lVar12;
      lStack_ac8 = lVar18;
      FUN_01011e90(param_1,2,&local_ae0,uVar11);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar11);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_a98[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


