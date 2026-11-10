/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f73080; name: FUN_00f73080
 */


undefined8 FUN_00f73080(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  size_t sVar13;
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
  undefined1 *local_990;
  undefined8 uStack_988;
  long local_980;
  long lStack_978;
  undefined8 local_970;
  undefined *puStack_968;
  long local_960;
  undefined4 local_958;
  long local_950;
  undefined4 local_948 [2];
  string asStack_940 [736];
  undefined8 auStack_660 [2];
  string local_650;
  undefined1 auStack_64f [7];
  size_t local_648;
  undefined1 *local_640;
  char *apcStack_370 [2];
  char *local_360;
  code *local_358;
  long local_350;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b5e40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043b5e40), iVar6 != 0)) {
    local_350 = 0;
    local_358 = (code *)0x0;
    local_360 = (char *)0x2e6c6f7308;
    if (((DAT_043b5da8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043b5da8), iVar6 != 0)) {
      FUN_00f77da0();
      FUN_00100250(PTR__string_04379718,&DAT_043b5d90,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b5da8);
    }
    puVar15 = DAT_043b5da0;
    if ((DAT_043b5d90 & 1) == 0) {
      puVar15 = &DAT_043b5d91;
    }
    pcVar24 = (char *)std::string::append((char *)&local_360,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043b5e28,psVar14);
    lVar10 = local_350;
    plVar4 = DAT_043f1798;
    if ((((ulong)local_360 & 1) != 0) && (local_350 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar4;
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
          FUN_02bcc824(plVar23,lVar10,0,8);
          goto LAB_00f75038;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar10,0,8);
    }
LAB_00f75038:
    FUN_00100250(PTR__string_04379718,&DAT_043b5e28,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b5e40);
  }
  std::string::string(&local_650,(string *)&DAT_043b5e28);
  iVar6 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b5e20);
  if (((byte)local_650 & 1) == 0) {
    uVar20 = (ulong)((byte)local_650 >> 1);
  }
  else {
    uVar20 = local_648;
  }
  std::string::append((ulong)&local_650,(char)iVar6);
  if (((byte)local_650 & 1) == 0) {
    puVar25 = auStack_64f;
    local_648 = (size_t)((byte)local_650 >> 1);
  }
  else {
    puVar25 = local_640;
  }
  snprintf(puVar25 + (uVar20 - 1),local_648,"%d",(ulong)DAT_043b5e20);
  DAT_043b5e20 = DAT_043b5e20 + 1;
  if (((DAT_043b5e60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043b5e60), iVar6 != 0)) {
    local_350 = 0;
    local_358 = (code *)0x0;
    local_360 = (char *)0x2e6c6f7308;
    if (((DAT_043b5da8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043b5da8), iVar6 != 0)) {
      FUN_00f77da0();
      FUN_00100250(PTR__string_04379718,&DAT_043b5d90,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b5da8);
    }
    puVar15 = DAT_043b5da0;
    if ((DAT_043b5d90 & 1) == 0) {
      puVar15 = &DAT_043b5d91;
    }
    pcVar24 = (char *)std::string::append((char *)&local_360,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043b5e48,psVar14);
    lVar10 = local_350;
    plVar4 = DAT_043f1798;
    if ((((ulong)local_360 & 1) != 0) && (local_350 != 0)) {
      lVar21 = tpidr_el0;
      plVar23 = *(long **)(lVar21 + 0x20);
      if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
        *(long **)(lVar21 + 0x20) = DAT_043f1798;
        plVar23 = plVar4;
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
          FUN_02bcc824(plVar23,lVar10,0,8);
          goto LAB_00f7519c;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar10,0,8);
    }
LAB_00f7519c:
    FUN_00100250(PTR__string_04379718,&DAT_043b5e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b5e60);
  }
  puVar15 = DAT_043b5e58;
  if ((DAT_043b5e48 & 1) == 0) {
    puVar15 = &DAT_043b5e49;
  }
  if (((byte)local_650 & 1) == 0) {
    puVar25 = (undefined1 *)((ulong)&local_650 | 1);
  }
  else {
    puVar25 = local_640;
  }
  if (((DAT_043b5e70 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043b5e70), iVar6 != 0)) {
    DAT_043b5e68 = 0x128;
    __cxa_guard_release(&DAT_043b5e70);
  }
  if (((DAT_043b5e80 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043b5e80), iVar6 != 0)) {
    DAT_043b5e78 = 0x12f;
    __cxa_guard_release(&DAT_043b5e80);
  }
  uVar20 = DAT_043b5e68;
  lVar10 = FUN_00153520(param_2,DAT_043b5e68);
  if ((uVar20 < ((ulong)(uint)-(int)lVar10 & 7 | 0x128)) ||
     (puVar18 = (undefined8 *)(lVar10 + ((ulong)(uint)-(int)lVar10 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043b5e78;
    lVar10 = FUN_00153520(param_2,DAT_043b5e78);
    if ((uVar20 < ((ulong)(uint)-(int)lVar10 & 7 | 0x128)) ||
       (puVar18 = (undefined8 *)(lVar10 + ((ulong)(uint)-(int)lVar10 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00f79c10();
      puVar1 = DAT_043b5e98;
      if ((DAT_043b5e88 & 1) == 0) {
        puVar1 = &DAT_043b5e89;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar1);
      puVar18 = (undefined8 *)0x0;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar18[1] = uVar16;
  puVar18[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar10 = *(long *)(param_1 + 0x18);
  puVar18[3] = lVar10;
  lVar21 = *(long *)(param_1 + 0x20);
  puVar18[4] = lVar21;
  *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar21 != 0) {
    uVar22 = puVar18[2];
    uVar20 = *(ulong *)(lVar10 + 8);
    if ((uVar22 & uVar22 - 1) == 0) {
      uVar20 = uVar22 - 1 & uVar20;
    }
    else if (uVar22 <= uVar20) {
      uVar3 = 0;
      if (uVar22 != 0) {
        uVar3 = uVar20 / uVar22;
      }
      uVar20 = uVar20 - uVar3 * uVar22;
    }
    *(undefined8 **)(puVar18[1] + uVar20 * 8) = puVar18 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar16;
  puVar18[7] = uVar2;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_041eecc8;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),200);
  iVar6 = FUN_00154450(param_2,puVar25);
  if (iVar6 != 0) {
    FUN_001516f0(param_2,&LAB_00f79bd0,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar7 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar7);
  }
  FUN_001522a0(param_2,puVar15);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar15);
  lVar10 = FUN_001511d0(param_2,0xffffffff);
  lVar10 = lVar10 + ((ulong)(uint)-(int)lVar10 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar4 = DAT_043f1798;
  if ((((byte)local_650 & 1) != 0) && (local_640 != (undefined1 *)0x0)) {
    lVar21 = tpidr_el0;
    plVar23 = *(long **)(lVar21 + 0x20);
    if (*(long **)(lVar21 + 0x20) == (long *)0x0) {
      *(long **)(lVar21 + 0x20) = DAT_043f1798;
      plVar23 = plVar4;
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
        FUN_02bcc824(plVar23,local_640,0,8);
        goto LAB_00f733ec;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_640,0,8);
  }
LAB_00f733ec:
  memset(&local_360,0,0x2f0);
  pcVar24 = *(char **)(lVar10 + 0x60);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  lVar21 = lVar10 + 8;
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f78814;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f785c8;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            uVar22 = 0;
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f735f4;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f735f4;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  uVar22 = 1;
  local_360 = pcVar24;
  local_358 = pcVar17;
LAB_00f735f4:
  pcVar24 = *(char **)(lVar10 + 0x68);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f788e8;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f7886c;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f73734;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f73734;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f73734:
  pcVar24 = *(char **)(lVar10 + 0x70);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f78a58;
  if (uVar8 != 0) {
    pcVar17 = (code *)&LAB_00f78940;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f73874;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f73874;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f73874:
  pcVar24 = *(char **)(lVar10 + 0x78);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f78cc8;
  if (uVar8 != 0) {
    pcVar17 = (code *)&LAB_00f78b44;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f739b4;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f739b4;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f739b4:
  pcVar24 = *(char **)(lVar10 + 0x80);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f78eb8;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f78d60;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f73af4;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f73af4;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f73af4:
  pcVar24 = *(char **)(lVar10 + 0x88);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f78f90;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f78f10;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f73c34;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f73c34;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f73c34:
  pcVar24 = *(char **)(lVar10 + 0x90);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f79138;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f78fe8;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f73d74;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f73d74;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f73d74:
  pcVar24 = *(char **)(lVar10 + 0x98);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = (code *)&LAB_00f791f8;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f79190;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f73eb4;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f73eb4;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f73eb4:
  pcVar24 = *(char **)(lVar10 + 0xa0);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f79328;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f79250;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f73ff4;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f73ff4;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f73ff4:
  pcVar24 = *(char **)(lVar10 + 0xa8);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = (code *)&LAB_00f793e8;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f79380;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f74134;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f74134;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f74134:
  pcVar24 = *(char **)(lVar10 + 0xb0);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = (code *)&LAB_00f79594;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f794d4;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f74274;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f74274;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f74274:
  pcVar24 = *(char **)(lVar10 + 0xb8);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = FUN_00f7965c;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f795ec;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f743b4;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f743b4;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f743b4:
  pcVar24 = *(char **)(lVar10 + 0xc0);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = (code *)&LAB_00f79784;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f796b4;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f744f4;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f744f4;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f744f4:
  pcVar24 = *(char **)(lVar10 + 200);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = (code *)&LAB_00f798b8;
  if (uVar8 != 0) {
    pcVar17 = FUN_00f797dc;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 == 0x13) {
            *(code **)(lVar10 + 0xd8) = pcVar17;
            goto LAB_00f74634;
          }
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      goto LAB_00f74634;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_00f74634:
  pcVar24 = *(char **)(lVar10 + 0xd0);
  sVar11 = strlen(pcVar24);
  sVar13 = 10;
  if (sVar11 < 0xb) {
    sVar13 = sVar11;
  }
  if (sVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = memcmp("__newindex",pcVar24,sVar13);
  }
  bVar5 = uVar8 == 0;
  if (uVar8 == 0) {
    uVar8 = 0xffffffff;
  }
  if (sVar11 < 0xb && bVar5) {
    uVar8 = (uint)(sVar11 < 10);
  }
  lVar26 = 0;
  uVar20 = 0;
  pcVar17 = (code *)&LAB_00f7996c;
  if (uVar8 != 0) {
    pcVar17 = (code *)&LAB_00f79910;
  }
  do {
    lVar12 = FUN_008cca50();
    pbVar19 = (byte *)(lVar12 + lVar26);
    sVar11 = strlen(pcVar24);
    sVar13 = (ulong)(*pbVar19 >> 1);
    if ((*pbVar19 & 1) != 0) {
      sVar13 = *(size_t *)(pbVar19 + 8);
    }
    if ((sVar11 == sVar13) &&
       (iVar6 = std::string::compare((ulong)pbVar19,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
       iVar6 == 0)) {
      iVar6 = (int)uVar20;
      if (iVar6 == 0x13) {
        *(code **)(lVar10 + 0xd8) = pcVar17;
        uVar8 = (uint)*(undefined8 *)(lVar10 + 0x120);
        goto joined_r0x00f74718;
      }
      if (iVar6 == 1) {
        *(code **)(lVar10 + 0x30) = pcVar17;
      }
      else {
        if (iVar6 != 2) {
          *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar10 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(ulong *)(lVar10 + 0x120) = *(ulong *)(lVar10 + 0x120) | 1L << (uVar20 & 0x3f);
      uVar8 = (uint)*(undefined8 *)(lVar10 + 0x120);
      goto joined_r0x00f74718;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_360)[uVar22 * 2] = pcVar24;
  (&local_358)[uVar22 * 2] = pcVar17;
  uVar8 = (uint)*(undefined8 *)(lVar10 + 0x120);
  uVar22 = (ulong)((int)uVar22 + 1);
joined_r0x00f74718:
  if ((uVar8 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar8 = (uint)*(undefined8 *)(lVar10 + 0x120);
  }
  if ((uVar8 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar8 = (uint)*(undefined8 *)(lVar10 + 0x120);
  }
  if ((uVar8 >> 0x10 & 1) == 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x181);
    if ((*(byte *)(lVar26 + 0x180) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 400);
    }
    (&local_360)[uVar22 * 2] = pcVar24;
    (&local_358)[uVar22 * 2] = (code *)&LAB_00f7a470;
    uVar8 = (uint)*(undefined8 *)(lVar10 + 0x120);
    uVar22 = (ulong)((int)uVar22 + 1);
  }
  uVar20 = uVar22;
  if ((uVar8 >> 0x1b & 1) == 0) {
    lVar26 = FUN_008cca50();
    uVar20 = (ulong)((int)uVar22 + 1);
    pcVar24 = (char *)(lVar26 + 0x289);
    if ((*(byte *)(lVar26 + 0x288) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x298);
    }
    (&local_360)[uVar22 * 2] = pcVar24;
    (&local_358)[uVar22 * 2] = (code *)&LAB_00f7a460;
  }
  uVar22 = uVar20;
  if (*(long *)(lVar10 + 0xd8) != 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x1c9);
    if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x1d8);
    }
    pcVar17 = *(code **)(lVar10 + 0xd8);
    uVar22 = (ulong)((int)uVar20 + 1);
    (&local_360)[uVar20 * 2] = pcVar24;
    (&local_358)[uVar20 * 2] = pcVar17;
  }
  (&local_360)[uVar22 * 2] = (char *)0x0;
  (&local_358)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_650,&local_360,0x2f0);
  memcpy(asStack_940,&local_360,0x2f0);
  lVar26 = FUN_008cca50();
  lVar12 = uVar22 - 1;
  pcVar24 = (&local_360)[lVar12 * 2];
  sVar13 = strlen(pcVar24);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) == 0) {
    sVar11 = (size_t)(*(byte *)(lVar26 + 0x1c8) >> 1);
  }
  else {
    sVar11 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar13 == sVar11) &&
     (iVar6 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar6 == 0)) {
    auStack_660[lVar12 * 2 + 2] = 0;
    *(undefined8 *)(auStack_64f + lVar12 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_940 + lVar12 * 0x10) = (&local_360)[lVar12 * 2];
  *(undefined1 **)(asStack_940 + (lVar12 * 2 + 1) * 8) = &LAB_00f799c0;
  FUN_00151fe0(param_2,0,2);
  local_948[0] = FUN_0014feb0(param_2,0xffffffff);
  local_950 = param_2;
  if (((DAT_043b5da8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043b5da8), iVar6 != 0)) {
    FUN_00f77da0();
    FUN_00100250(PTR__string_04379718,&DAT_043b5d90,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b5da8);
  }
  uVar7 = local_948[0];
  uVar20 = (ulong)(DAT_043b5d90 >> 1);
  if ((DAT_043b5d90 & 1) == 0) {
    puVar15 = &DAT_043b5d91;
  }
  else {
    puVar15 = DAT_043b5da0;
    uVar20 = DAT_043b5d98;
  }
  FUN_001514f0(param_2,puVar15,uVar20);
  FUN_00152550(param_2,uVar7,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00f79a10,0);
  FUN_00152550(param_2,uVar7,&DAT_0397bfcb);
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      psVar14 = asStack_940;
      FUN_00f7658c();
      pbVar19 = &DAT_043b5cf8;
      puVar15 = &DAT_043b5cf9;
      puVar18 = &DAT_043b5d08;
    }
    else if (lVar26 == 0) {
      psVar14 = &local_650;
      FUN_00f76398();
      puVar15 = &DAT_043b5c81;
      puVar18 = &DAT_043b5c90;
      pbVar19 = &DAT_043b5c80;
    }
    else {
      psVar14 = (string *)&local_360;
      FUN_00f76780();
      puVar15 = &DAT_043b5d71;
      puVar18 = &DAT_043b5d80;
      pbVar19 = &DAT_043b5d70;
    }
    if ((*pbVar19 & 1) != 0) {
      puVar15 = (undefined *)*puVar18;
    }
    FUN_00154450(param_2,puVar15);
    local_958 = FUN_0014feb0(param_2,0xffffffff);
    local_990 = (undefined1 *)CONCAT44(local_990._4_4_,0x1e);
    local_960 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_990,&local_950,local_958);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar10);
    FUN_00155a20(param_2,psVar14,2);
    uVar7 = local_958;
    if (*(long *)(lVar10 + 0x108) == 0) {
      lVar12 = *(long *)(lVar10 + 0x110);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar7,"class_check");
      lVar12 = *(long *)(lVar10 + 0x110);
      uVar7 = local_958;
    }
    local_958 = uVar7;
    if (lVar12 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar7,"class_cast");
    }
    uVar7 = local_958;
    uVar16 = *(undefined8 *)(lVar10 + 0xe8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar10);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar7,&DAT_03955ac7);
    uVar7 = local_958;
    uVar16 = *(undefined8 *)(lVar10 + 0xf0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar10);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar7,&DAT_0397c077);
    if (*(char *)(lVar10 + 0x58) == '\0') {
      local_990 = (undefined1 *)CONCAT44(local_990._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_990,&local_960,local_958);
    }
    else {
      local_990 = &LAB_00f79b00;
      uStack_988 = 0;
      local_980 = lVar10;
      lStack_978 = lVar21;
      FUN_00f79a60(param_2,1,&local_990,local_958);
      local_990 = &LAB_00f79b04;
      uStack_988 = 0;
      local_980 = lVar10;
      lStack_978 = lVar21;
      FUN_00f79a60(param_2,2,&local_990,local_958);
    }
    FUN_00151fe0(param_2,0,3);
    uVar7 = FUN_0014feb0(param_2,0xffffffff);
    local_990 = (undefined1 *)CONCAT44(local_990._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_990,&local_950,uVar7);
    if (*(undefined1 **)(lVar10 + 0xe0) == (undefined1 *)0x0) {
      if (*(char *)(lVar10 + 0x118) == '\0') goto LAB_00f74adc;
LAB_00f74ddc:
      local_990 = &LAB_00f79b00;
      uStack_988 = 0;
      local_980 = lVar10;
      lStack_978 = lVar21;
      FUN_00f79a60(param_2,1,&local_990,uVar7);
      local_990 = &LAB_00f79b04;
      uStack_988 = 0;
      local_980 = lVar10;
      lStack_978 = lVar21;
      FUN_00f79a60(param_2,2,&local_990,uVar7);
      if (param_2 == 0) goto LAB_00f74e30;
LAB_00f74ae4:
      uVar9 = local_958;
      FUN_00150260(param_2,uVar7);
    }
    else {
      uStack_988 = 0;
      local_990 = *(undefined1 **)(lVar10 + 0xe0);
      local_980 = lVar10;
      lStack_978 = lVar21;
      FUN_00f79a60(param_2,4,&local_990,uVar7);
      if (*(char *)(lVar10 + 0x118) != '\0') goto LAB_00f74ddc;
LAB_00f74adc:
      if (param_2 != 0) goto LAB_00f74ae4;
LAB_00f74e30:
      uVar9 = local_958;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar9);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_960,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_00f769c0();
      puVar15 = DAT_043b5df8;
      if ((DAT_043b5de8 & 1) == 0) {
        puVar15 = &DAT_043b5de9;
      }
      FUN_00154450(param_2,puVar15);
      uVar7 = FUN_0014feb0(param_2,0xffffffff);
      local_990._0_4_ = 0x1e;
      FUN_008fe304(&local_960,param_2,&local_990,&local_950,uVar7);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar10);
      FUN_00155a20(param_2,&local_360,2);
      FUN_00151fe0(param_2,0,3);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_990 = (undefined1 *)CONCAT44(local_990._4_4_,0x1e);
      FUN_008fe304(&local_960,param_2,&local_990,&local_950,uVar9);
      local_990 = *(undefined1 **)(lVar10 + 0xe0);
      if (local_990 != (undefined1 *)0x0) {
        uStack_988 = 0;
        local_980 = lVar10;
        lStack_978 = lVar21;
        FUN_00f79a60(param_2,4,&local_990,uVar9);
      }
      local_990 = &LAB_00f79bc8;
      uStack_988 = 0;
      local_970 = 0;
      puStack_968 = &DAT_03a788c0;
      local_980 = lVar10;
      lStack_978 = lVar21;
      FUN_00f79b10(param_2,1,&local_990,uVar9);
      local_990 = &LAB_00f79bcc;
      uStack_988 = 0;
      local_970 = 0;
      puStack_968 = &DAT_03a788c0;
      local_980 = lVar10;
      lStack_978 = lVar21;
      FUN_00f79b10(param_2,2,&local_990,uVar9);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar9);
      }
      FUN_00152ae0(param_2,uVar7);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_948[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


