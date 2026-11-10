/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022af794; name: FUN_022af794
 */


undefined8 FUN_022af794(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
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
  undefined *puVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  char *pcVar24;
  undefined1 *puVar25;
  long lVar26;
  ulong uVar27;
  undefined1 *local_7b0;
  undefined8 uStack_7a8;
  long local_7a0;
  long lStack_798;
  undefined8 local_790;
  undefined *puStack_788;
  undefined4 local_780 [2];
  long local_778;
  undefined4 local_770;
  long local_768;
  undefined4 local_760 [2];
  string asStack_758 [576];
  undefined8 auStack_518 [2];
  string local_508;
  undefined1 auStack_507 [7];
  size_t local_500;
  undefined1 *local_4f8;
  char *apcStack_2c8 [2];
  char *local_2b8;
  code *local_2b0;
  long local_2a8;
  
  if (((DAT_043e0b60 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e0b60), iVar7 != 0)) {
    local_2a8 = 0;
    local_2b0 = (code *)0x0;
    local_2b8 = (char *)0x2e6c6f7308;
    if (((DAT_043e0ac8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e0ac8), iVar7 != 0)) {
      FUN_022b3640();
      FUN_00100250(PTR__string_04379718,&DAT_043e0ab0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e0ac8);
    }
    pcVar24 = (char *)FUN_022b2a34(&local_2b8,&DAT_043e0ab0);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043e0b48,psVar14);
    lVar11 = local_2a8;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2b8 & 1) != 0) && (local_2a8 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar5;
      }
      uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar20 & 1) != 0) {
        if (*(char *)(lVar21 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar21 + 0x38d488) = 1;
          *(undefined8 *)(lVar21 + 0x38d478) = 0;
          *(undefined8 *)(lVar21 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar21 + 0x38d480)) {
          FUN_02bcc824(plVar23,lVar11,0,8);
          goto LAB_022b09d8;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_022b09d8:
    FUN_00100250(PTR__string_04379718,&DAT_043e0b48,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e0b60);
  }
  std::string::string(&local_508,(string *)&DAT_043e0b48);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e0b40);
  sVar1 = (ulong)((byte)local_508 >> 1);
  if (((byte)local_508 & 1) != 0) {
    sVar1 = local_500;
  }
  std::string::append((ulong)&local_508,(char)iVar7);
  if (((byte)local_508 & 1) == 0) {
    puVar25 = auStack_507;
    local_500 = (size_t)((byte)local_508 >> 1);
  }
  else {
    puVar25 = local_4f8;
  }
  snprintf(puVar25 + (sVar1 - 1),local_500,"%d",(ulong)DAT_043e0b40);
  DAT_043e0b40 = DAT_043e0b40 + 1;
  if (((DAT_043e0b80 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e0b80), iVar7 != 0)) {
    local_2a8 = 0;
    local_2b0 = (code *)0x0;
    local_2b8 = (char *)0x2e6c6f7308;
    if (((DAT_043e0ac8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e0ac8), iVar7 != 0)) {
      FUN_022b3640();
      FUN_00100250(PTR__string_04379718,&DAT_043e0ab0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043e0ac8);
    }
    pcVar24 = (char *)FUN_022b2a34(&local_2b8,&DAT_043e0ab0);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043e0b68,psVar14);
    lVar11 = local_2a8;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2b8 & 1) != 0) && (local_2a8 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar5;
      }
      uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
      if ((uVar20 & 1) != 0) {
        if (*(char *)(lVar21 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar21 + 0x38d488) = 1;
          *(undefined8 *)(lVar21 + 0x38d478) = 0;
          *(undefined8 *)(lVar21 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar21 + 0x38d480)) {
          FUN_02bcc824(plVar23,lVar11,0,8);
          goto LAB_022b0b2c;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_022b0b2c:
    FUN_00100250(PTR__string_04379718,&DAT_043e0b68,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e0b80);
  }
  puVar15 = DAT_043e0b78;
  if ((DAT_043e0b68 & 1) == 0) {
    puVar15 = &DAT_043e0b69;
  }
  if (((byte)local_508 & 1) == 0) {
    puVar25 = (undefined1 *)((ulong)&local_508 | 1);
  }
  else {
    puVar25 = local_4f8;
  }
  if (((DAT_043e0b90 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e0b90), iVar7 != 0)) {
    DAT_043e0b88 = 0x100;
    __cxa_guard_release(&DAT_043e0b90);
  }
  if (((DAT_043e0ba0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e0ba0), iVar7 != 0)) {
    DAT_043e0b98 = 0x107;
    __cxa_guard_release(&DAT_043e0ba0);
  }
  uVar20 = DAT_043e0b88;
  lVar11 = FUN_00153520(param_2,DAT_043e0b88);
  if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0x100)) ||
     (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043e0b98;
    lVar11 = FUN_00153520(param_2,DAT_043e0b98);
    if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0x100)) ||
       (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_022b4180();
      puVar2 = DAT_043e0bb8;
      if ((DAT_043e0ba8 & 1) == 0) {
        puVar2 = &DAT_043e0ba9;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar16;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar11;
  lVar21 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar21;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar21 != 0) {
    uVar22 = puVar18[2];
    uVar20 = *(ulong *)(lVar11 + 8);
    if ((uVar22 & uVar22 - 1) == 0) {
      uVar20 = uVar22 - 1 & uVar20;
    }
    else if (uVar22 <= uVar20) {
      uVar27 = 0;
      if (uVar22 != 0) {
        uVar27 = uVar20 / uVar22;
      }
      uVar20 = uVar20 - uVar27 * uVar22;
    }
    *(undefined8 **)(puVar18[1] + uVar20 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar16;
  puVar18[7] = uVar3;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_0425ba38;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xa0);
  iVar7 = FUN_00154450(param_2,puVar25);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_022b4140,0);
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
  FUN_001522a0(param_2,puVar15);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar15);
  lVar11 = FUN_001511d0(param_2,0xffffffff);
  lVar11 = lVar11 + ((ulong)(uint)-(int)lVar11 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar5 = DAT_043f1798;
  if ((((byte)local_508 & 1) != 0) && (local_4f8 != (undefined1 *)0x0)) {
    lVar21 = tpidr_el0;
    plVar23 = *(long **)(lVar21 + 0x20);
    if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
      *(long **)(lVar21 + 0x20) = DAT_043f1798;
      plVar23 = plVar5;
    }
    uVar20 = (**(code **)(*plVar23 + 0xc0))(plVar23);
    if ((uVar20 & 1) != 0) {
      if (*(char *)(lVar21 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar21 + 0x38d488) = 1;
        *(undefined8 *)(lVar21 + 0x38d478) = 0;
        *(undefined8 *)(lVar21 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar21 + 0x38d480)) {
        FUN_02bcc824(plVar23,local_4f8,0,8);
        goto LAB_022afb00;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_4f8,0,8);
  }
LAB_022afb00:
  memset(&local_2b8,0,0x250);
  puVar4 = PTR_DAT_043845e0;
  *(undefined1 *)(lVar11 + 0x58) = 1;
  puVar15 = PTR_DAT_04380660;
  *puVar4 = 1;
  *puVar15 = 1;
  pcVar24 = *(char **)(lVar11 + 0x60);
  *(undefined1 **)(lVar11 + 0xe0) = &LAB_022b45bc;
  *(undefined1 **)(lVar11 + 0xe8) = &LAB_022b4678;
  *(undefined1 **)(lVar11 + 0xd0) = &LAB_022b46d0;
  *(undefined1 **)(lVar11 + 0xd8) = &LAB_022b4710;
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  lVar21 = lVar11 + 8;
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_022b3d00;
  if (uVar9 != 0) {
    pcVar17 = FUN_022b3aa4;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            uVar22 = 0;
            *(code **)(lVar11 + 0xb0) = pcVar17;
            goto LAB_022afd60;
          }
          *(ulong *)(lVar11 + 0xf8) = *(ulong *)(lVar11 + 0xf8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf8) = *(ulong *)(lVar11 + 0xf8) | 1L << (uVar20 & 0x3f);
      goto LAB_022afd60;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  uVar22 = 1;
  local_2b8 = pcVar24;
  local_2b0 = pcVar17;
LAB_022afd60:
  pcVar24 = *(char **)(lVar11 + 0x78);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_022b3eac;
  if (uVar9 != 0) {
    pcVar17 = FUN_022b3dc8;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xb0) = pcVar17;
            goto LAB_022afea0;
          }
          *(ulong *)(lVar11 + 0xf8) = *(ulong *)(lVar11 + 0xf8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf8) = *(ulong *)(lVar11 + 0xf8) | 1L << (uVar20 & 0x3f);
      goto LAB_022afea0;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2b8)[uVar22 * 2] = pcVar24;
  (&local_2b0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_022afea0:
  pcVar24 = *(char **)(lVar11 + 0x90);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_022b3f80;
  if (uVar9 != 0) {
    pcVar17 = FUN_022b3f38;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          if (iVar7 == 0x13) {
            *(code **)(lVar11 + 0xb0) = pcVar17;
            goto LAB_022affe0;
          }
          *(ulong *)(lVar11 + 0xf8) = *(ulong *)(lVar11 + 0xf8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf8) = *(ulong *)(lVar11 + 0xf8) | 1L << (uVar20 & 0x3f);
      goto LAB_022affe0;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2b8)[uVar22 * 2] = pcVar24;
  (&local_2b0)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_022affe0:
  pcVar24 = *(char **)(lVar11 + 0xa8);
  sVar12 = strlen(pcVar24);
  sVar1 = 10;
  if (sVar12 < 0xb) {
    sVar1 = sVar12;
  }
  if (sVar1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = memcmp("__newindex",pcVar24,sVar1);
  }
  bVar6 = uVar9 == 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
  }
  if (sVar12 < 0xb && bVar6) {
    uVar9 = (uint)(sVar12 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_022b4028;
  if (uVar9 != 0) {
    pcVar17 = FUN_022b3fc8;
  }
  do {
    lVar13 = FUN_008cca50();
    pbVar19 = (byte *)(lVar13 + lVar26);
    sVar12 = strlen(pcVar24);
    sVar1 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar12 == sVar1) &&
       (iVar7 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar7 == 0)) {
      iVar7 = (int)uVar20;
      uVar27 = uVar22;
      if (iVar7 == 0x13) {
        *(code **)(lVar11 + 0xb0) = pcVar17;
        uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf8);
        goto joined_r0x022b0854;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0xf8) = *(ulong *)(lVar11 + 0xf8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xf8) = *(ulong *)(lVar11 + 0xf8) | 1L << (uVar20 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf8);
      goto joined_r0x022b0854;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  uVar27 = (ulong)((int)uVar22 + 1);
  (&local_2b8)[uVar22 * 2] = pcVar24;
  (&local_2b0)[uVar22 * 2] = pcVar17;
  uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf8);
joined_r0x022b0854:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf8);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf8);
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x181);
    if ((*(byte *)(lVar26 + 0x180) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 400);
    }
    (&local_2b8)[uVar27 * 2] = pcVar24;
    (&local_2b0)[uVar27 * 2] = (code *)&LAB_022b4e90;
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xf8);
    uVar27 = (ulong)((int)uVar27 + 1);
  }
  uVar20 = uVar27;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar26 = FUN_008cca50();
    uVar20 = (ulong)((int)uVar27 + 1);
    pcVar24 = (char *)(lVar26 + 0x289);
    if ((*(byte *)(lVar26 + 0x288) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x298);
    }
    (&local_2b8)[uVar27 * 2] = pcVar24;
    (&local_2b0)[uVar27 * 2] = (code *)&LAB_022b4e88;
  }
  uVar22 = uVar20;
  if (*(long *)(lVar11 + 0xb0) != 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x1c9);
    if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x1d8);
    }
    pcVar17 = *(code **)(lVar11 + 0xb0);
    uVar22 = (ulong)((int)uVar20 + 1);
    (&local_2b8)[uVar20 * 2] = pcVar24;
    (&local_2b0)[uVar20 * 2] = pcVar17;
  }
  (&local_2b8)[uVar22 * 2] = (char *)0x0;
  (&local_2b0)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_508,&local_2b8,0x250);
  memcpy(asStack_758,&local_2b8,0x250);
  lVar26 = FUN_008cca50();
  lVar13 = uVar22 - 1;
  pcVar24 = (&local_2b8)[lVar13 * 2];
  sVar12 = strlen(pcVar24);
  sVar1 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar12 == sVar1) &&
     (iVar7 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar7 == 0)) {
    auStack_518[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_507 + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_758 + lVar13 * 0x10) = (&local_2b8)[lVar13 * 2];
  *(undefined1 **)(asStack_758 + (lVar13 * 2 + 1) * 8) = &LAB_022b4090;
  FUN_00151fe0(param_2,0,2);
  local_760[0] = FUN_0014feb0(param_2,0xffffffff);
  local_768 = param_2;
  if (((DAT_043e0ac8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043e0ac8), iVar7 != 0)) {
    FUN_022b3640();
    FUN_00100250(PTR__string_04379718,&DAT_043e0ab0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e0ac8);
  }
  uVar8 = local_760[0];
  if ((DAT_043e0ab0 & 1) == 0) {
    uVar20 = (ulong)(DAT_043e0ab0 >> 1);
    puVar25 = &DAT_043e0ab1;
  }
  else {
    uVar20 = DAT_043e0ab8;
    puVar25 = DAT_043e0ac0;
  }
  FUN_001514f0(param_2,puVar25,uVar20);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_022b40e0,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      psVar14 = asStack_758;
      FUN_022b1dfc();
      pbVar19 = &DAT_043e0a18;
      puVar15 = &DAT_043e0a19;
      puVar18 = &DAT_043e0a28;
    }
    else if (lVar26 == 0) {
      psVar14 = &local_508;
      FUN_022b1c20();
      puVar15 = &DAT_043e09a1;
      puVar18 = &DAT_043e09b0;
      pbVar19 = &DAT_043e09a0;
    }
    else {
      psVar14 = (string *)&local_2b8;
      FUN_022b1fd8();
      puVar15 = &DAT_043e0a91;
      puVar18 = &DAT_043e0aa0;
      pbVar19 = &DAT_043e0a90;
    }
    if ((*pbVar19 & 1) != 0) {
      puVar15 = (undefined *)*puVar18;
    }
    FUN_00154450(param_2,puVar15);
    local_770 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    local_778 = param_2;
    FUN_008fe304(local_780,param_2,&local_7b0,&local_768,local_770);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar14,2);
    uVar8 = local_770;
    if (*(long *)(lVar11 + 0xe0) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
    }
    uVar8 = local_770;
    if (*(long *)(lVar11 + 0xe8) != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_770;
    uVar16 = *(undefined8 *)(lVar11 + 0xc0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_770;
    uVar16 = *(undefined8 *)(lVar11 + 200);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
      FUN_008fe304(local_780,param_2,&local_7b0,&local_778,local_770);
    }
    else {
      local_780[0] = 1;
      local_7b0 = &LAB_022b4130;
      uStack_7a8 = 0;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_022b5c2c(param_2,local_780,&local_7b0,local_770);
      local_780[0] = 2;
      local_7b0 = &LAB_022b4134;
      uStack_7a8 = 0;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_022b5c2c(param_2,local_780,&local_7b0,local_770);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    FUN_008fe304(local_780,param_2,&local_7b0,&local_768,uVar8);
    if (*(undefined1 **)(lVar11 + 0xb8) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0xf0) != '\0') goto LAB_022b0798;
LAB_022b0508:
      if (param_2 == 0) goto LAB_022b07f8;
LAB_022b0510:
      uVar10 = local_770;
      FUN_00150260(param_2,uVar8);
    }
    else {
      local_780[0] = 4;
      uStack_7a8 = 0;
      local_7b0 = *(undefined1 **)(lVar11 + 0xb8);
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_022b5c2c(param_2,local_780,&local_7b0,uVar8);
      if (*(char *)(lVar11 + 0xf0) == '\0') goto LAB_022b0508;
LAB_022b0798:
      local_780[0] = 1;
      local_7b0 = &LAB_022b4130;
      uStack_7a8 = 0;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_022b5c2c(param_2,local_780,&local_7b0,uVar8);
      local_780[0] = 2;
      local_7b0 = &LAB_022b4134;
      uStack_7a8 = 0;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_022b5c2c(param_2,local_780,&local_7b0,uVar8);
      if (param_2 != 0) goto LAB_022b0510;
LAB_022b07f8:
      uVar10 = local_770;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_778,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_022b2200();
      puVar15 = DAT_043e0b18;
      if ((DAT_043e0b08 & 1) == 0) {
        puVar15 = &DAT_043e0b09;
      }
      FUN_00154450(param_2,puVar15);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,&local_2b8,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_778,param_2,&local_7b0,&local_768,uVar10);
      local_7b0 = *(undefined1 **)(lVar11 + 0xb8);
      if (local_7b0 != (undefined1 *)0x0) {
        local_778 = CONCAT44(local_778._4_4_,4);
        uStack_7a8 = 0;
        local_7a0 = lVar11;
        lStack_798 = lVar21;
        FUN_022b5c2c(param_2,&local_778,&local_7b0,uVar10);
      }
      local_778._0_4_ = 1;
      local_7b0 = &LAB_022b4138;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d448;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_022b62e0(param_2,&local_778,&local_7b0,uVar10);
      local_778 = CONCAT44(local_778._4_4_,2);
      local_7b0 = &LAB_022b413c;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d448;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_022b62e0(param_2,&local_778,&local_7b0,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_760[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


