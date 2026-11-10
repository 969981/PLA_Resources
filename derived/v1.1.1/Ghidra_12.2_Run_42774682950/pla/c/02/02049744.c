/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02049744; name: FUN_02049744
 */


undefined8 FUN_02049744(long param_1,long param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
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
  string *psVar15;
  undefined *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 *local_7b0;
  undefined8 uStack_7a8;
  long local_7a0;
  long lStack_798;
  undefined8 local_790;
  undefined *puStack_788;
  long local_780;
  undefined4 local_778;
  long local_770;
  undefined4 local_768 [2];
  string asStack_760 [576];
  undefined8 auStack_520 [2];
  string local_510;
  undefined1 auStack_50f [7];
  size_t local_508;
  undefined1 *local_500;
  char *apcStack_2d0 [2];
  char *local_2c0;
  code *local_2b8;
  long local_2b0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043d7a88 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7a88), iVar8 != 0)) {
    local_2b0 = 0;
    local_2b8 = (code *)0x0;
    local_2c0 = (char *)0x2e6c6f7308;
    if (((DAT_043d7a08 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7a08), iVar8 != 0)) {
      FUN_0204d6f0();
      FUN_00100250(PTR__string_04379718,&DAT_043d79f0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043d7a08);
    }
    pcVar26 = (char *)FUN_0204cae4(&local_2c0,&DAT_043d79f0);
    psVar15 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043d7a70,psVar15);
    lVar12 = local_2b0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2c0 & 1) != 0) && (local_2b0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
      }
      uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_0204aa7c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_0204aa7c:
    FUN_00100250(PTR__string_04379718,&DAT_043d7a70,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d7a88);
  }
  std::string::string(&local_510,(string *)&DAT_043d7a70);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043d7a68);
  sVar1 = (ulong)((byte)local_510 >> 1);
  if (((byte)local_510 & 1) != 0) {
    sVar1 = local_508;
  }
  std::string::append((ulong)&local_510,(char)iVar8);
  if (((byte)local_510 & 1) == 0) {
    puVar27 = auStack_50f;
    local_508 = (size_t)((byte)local_510 >> 1);
  }
  else {
    puVar27 = local_500;
  }
  snprintf(puVar27 + (sVar1 - 1),local_508,"%d",(ulong)DAT_043d7a68);
  DAT_043d7a68 = DAT_043d7a68 + 1;
  if (((DAT_043d7aa8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7aa8), iVar8 != 0)) {
    local_2b0 = 0;
    local_2b8 = (code *)0x0;
    local_2c0 = (char *)0x2e6c6f7308;
    if (((DAT_043d7a08 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7a08), iVar8 != 0)) {
      FUN_0204d6f0();
      FUN_00100250(PTR__string_04379718,&DAT_043d79f0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043d7a08);
    }
    pcVar26 = (char *)FUN_0204cae4(&local_2c0,&DAT_043d79f0);
    psVar15 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043d7a90,psVar15);
    lVar12 = local_2b0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2c0 & 1) != 0) && (local_2b0 != 0)) {
      lVar23 = tpidr_el0;
      plVar25 = *(long **)(lVar23 + 0x20);
      if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
        *(long **)(lVar23 + 0x20) = DAT_043f1798;
        plVar25 = plVar6;
      }
      uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar25,lVar12,0,8);
          goto LAB_0204abd0;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar12,0,8);
    }
LAB_0204abd0:
    FUN_00100250(PTR__string_04379718,&DAT_043d7a90,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d7aa8);
  }
  puVar16 = DAT_043d7aa0;
  if ((DAT_043d7a90 & 1) == 0) {
    puVar16 = &DAT_043d7a91;
  }
  if (((byte)local_510 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_510 | 1);
  }
  else {
    puVar27 = local_500;
  }
  if (((DAT_043d7ab8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7ab8), iVar8 != 0)) {
    DAT_043d7ab0 = 0xd8;
    __cxa_guard_release(&DAT_043d7ab8);
  }
  if (((DAT_043d7ac8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7ac8), iVar8 != 0)) {
    DAT_043d7ac0 = 0xdf;
    __cxa_guard_release(&DAT_043d7ac8);
  }
  uVar21 = DAT_043d7ab0;
  lVar12 = FUN_00153520(param_2,DAT_043d7ab0);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xd8)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043d7ac0;
    lVar12 = FUN_00153520(param_2,DAT_043d7ac0);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0xd8)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0204ec40();
      puVar2 = DAT_043d7ae0;
      if ((DAT_043d7ad0 & 1) == 0) {
        puVar2 = &DAT_043d7ad1;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar2);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar17 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar17;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar12 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar12;
  lVar23 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar23;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar23 != 0) {
    uVar24 = puVar19[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar24 & uVar24 - 1) == 0) {
      uVar21 = uVar24 - 1 & uVar21;
    }
    else if (uVar24 <= uVar21) {
      uVar5 = 0;
      if (uVar24 != 0) {
        uVar5 = uVar21 / uVar24;
      }
      uVar21 = uVar21 - uVar5 * uVar24;
    }
    *(undefined8 **)(puVar19[1] + uVar21 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar17;
  puVar19[7] = uVar22;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_0425b2e0;
  *(undefined1 *)(puVar19 + 0xb) = uVar4;
  uVar22 = *(undefined8 *)(param_1 + 0x70);
  uVar17 = *(undefined8 *)(param_1 + 0x68);
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar19[0xd] = uVar17;
  puVar19[0xe] = uVar22;
  uVar17 = *(undefined8 *)(param_1 + 0x78);
  uVar22 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  puVar19[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar19[0x12] = uVar3;
  puVar19[0xf] = uVar17;
  puVar19[0x10] = uVar22;
  uVar17 = *(undefined8 *)(param_1 + 0x98);
  uVar22 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  puVar19[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar19[0x16] = uVar3;
  puVar19[0x13] = uVar17;
  puVar19[0x14] = uVar22;
  uVar17 = *(undefined8 *)(param_1 + 0xb8);
  uVar22 = *(undefined8 *)(param_1 + 0xc0);
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  puVar19[0x19] = *(undefined8 *)(param_1 + 200);
  puVar19[0x1a] = uVar3;
  puVar19[0x17] = uVar17;
  puVar19[0x18] = uVar22;
  iVar8 = FUN_00154450(param_2,puVar27);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_0204ec00,0);
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
  FUN_001522a0(param_2,puVar16);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar16);
  lVar12 = FUN_001511d0(param_2,0xffffffff);
  lVar12 = lVar12 + ((ulong)(uint)-(int)lVar12 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar6 = DAT_043f1798;
  if ((((byte)local_510 & 1) != 0) && (local_500 != (undefined1 *)0x0)) {
    lVar23 = tpidr_el0;
    plVar25 = *(long **)(lVar23 + 0x20);
    if (*(long **)(lVar23 + 0x20) == (long *)0x0) {
      *(long **)(lVar23 + 0x20) = DAT_043f1798;
      plVar25 = plVar6;
    }
    uVar21 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar25,local_500,0,8);
        goto LAB_02049ae0;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_500,0,8);
  }
LAB_02049ae0:
  memset(&local_2c0,0,0x250);
  pcVar26 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
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
  uVar21 = 0;
  pcVar18 = FUN_0204dda4;
  if (uVar10 != 0) {
    pcVar18 = FUN_0204db08;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar24 = 0;
            *(code **)(lVar12 + 0x88) = pcVar18;
            goto LAB_02049cf8;
          }
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      goto LAB_02049cf8;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  uVar24 = 1;
  local_2c0 = pcVar26;
  local_2b8 = pcVar18;
LAB_02049cf8:
  pcVar26 = *(char **)(lVar12 + 0x68);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar21 = 0;
  pcVar18 = (code *)&LAB_0204df7c;
  if (uVar10 != 0) {
    pcVar18 = FUN_0204ddfc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x88) = pcVar18;
            goto LAB_02049e38;
          }
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      goto LAB_02049e38;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2c0)[uVar24 * 2] = pcVar26;
  (&local_2b8)[uVar24 * 2] = pcVar18;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02049e38:
  pcVar26 = *(char **)(lVar12 + 0x70);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar21 = 0;
  pcVar18 = FUN_0204e3d4;
  if (uVar10 != 0) {
    pcVar18 = FUN_0204dfd4;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x88) = pcVar18;
            goto LAB_02049f78;
          }
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      goto LAB_02049f78;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2c0)[uVar24 * 2] = pcVar26;
  (&local_2b8)[uVar24 * 2] = pcVar18;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_02049f78:
  pcVar26 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar21 = 0;
  pcVar18 = FUN_0204e8d4;
  if (uVar10 != 0) {
    pcVar18 = FUN_0204e42c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0x88) = pcVar18;
            goto LAB_0204a0b8;
          }
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      goto LAB_0204a0b8;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2c0)[uVar24 * 2] = pcVar26;
  (&local_2b8)[uVar24 * 2] = pcVar18;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0204a0b8:
  pcVar26 = *(char **)(lVar12 + 0x80);
  sVar13 = strlen(pcVar26);
  sVar1 = 10;
  if (sVar13 < 0xb) {
    sVar1 = sVar13;
  }
  if (sVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar26,sVar1);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar28 = 0;
  uVar21 = 0;
  pcVar18 = FUN_0204e98c;
  if (uVar10 != 0) {
    pcVar18 = FUN_0204e92c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar28);
    sVar13 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar1) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0x88) = pcVar18;
        uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
        goto joined_r0x0204a19c;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar18;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar18;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0xd0) = *(ulong *)(lVar12 + 0xd0) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
      goto joined_r0x0204a19c;
    }
    uVar21 = uVar21 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar21 != 0x20);
  (&local_2c0)[uVar24 * 2] = pcVar26;
  (&local_2b8)[uVar24 * 2] = pcVar18;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0204a19c:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    (&local_2c0)[uVar24 * 2] = pcVar26;
    (&local_2b8)[uVar24 * 2] = (code *)&LAB_0204f080;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0xd0);
    uVar24 = (ulong)((int)uVar24 + 1);
  }
  uVar21 = uVar24;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    uVar21 = (ulong)((int)uVar24 + 1);
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    (&local_2c0)[uVar24 * 2] = pcVar26;
    (&local_2b8)[uVar24 * 2] = (code *)&LAB_0204f070;
  }
  uVar24 = uVar21;
  if (*(long *)(lVar12 + 0x88) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar18 = *(code **)(lVar12 + 0x88);
    uVar24 = (ulong)((int)uVar21 + 1);
    (&local_2c0)[uVar21 * 2] = pcVar26;
    (&local_2b8)[uVar21 * 2] = pcVar18;
  }
  (&local_2c0)[uVar24 * 2] = (char *)0x0;
  (&local_2b8)[uVar24 * 2] = (code *)0x0;
  memcpy(&local_510,&local_2c0,0x250);
  memcpy(asStack_760,&local_2c0,0x250);
  lVar28 = FUN_008cca50();
  lVar14 = uVar24 - 1;
  pcVar26 = (&local_2c0)[lVar14 * 2];
  sVar13 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar13 == sVar1) &&
     (iVar8 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar8 == 0)) {
    auStack_520[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_50f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_760 + lVar14 * 0x10) = (&local_2c0)[lVar14 * 2];
  *(undefined1 **)(asStack_760 + (lVar14 * 2 + 1) * 8) = &LAB_0204e9f0;
  FUN_00151fe0(param_2,0,2);
  local_768[0] = FUN_0014feb0(param_2,0xffffffff);
  local_770 = param_2;
  if (((DAT_043d7a08 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043d7a08), iVar8 != 0)) {
    FUN_0204d6f0();
    FUN_00100250(PTR__string_04379718,&DAT_043d79f0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043d7a08);
  }
  uVar9 = local_768[0];
  if ((DAT_043d79f0 & 1) == 0) {
    uVar21 = (ulong)(DAT_043d79f0 >> 1);
    puVar27 = &DAT_043d79f1;
  }
  else {
    uVar21 = DAT_043d79f8;
    puVar27 = DAT_043d7a00;
  }
  FUN_001514f0(param_2,puVar27,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0204ea40,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar15 = asStack_760;
      FUN_0204beb8();
      pbVar20 = &DAT_043d7958;
      puVar16 = &DAT_043d7959;
      puVar19 = &DAT_043d7968;
    }
    else if (lVar28 == 0) {
      psVar15 = &local_510;
      FUN_0204bcdc();
      puVar16 = &DAT_043d78e1;
      puVar19 = &DAT_043d78f0;
      pbVar20 = &DAT_043d78e0;
    }
    else {
      psVar15 = (string *)&local_2c0;
      FUN_0204c094();
      puVar16 = &DAT_043d79d1;
      puVar19 = &DAT_043d79e0;
      pbVar20 = &DAT_043d79d0;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_778 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    local_780 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,local_778);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar15,2);
    uVar9 = local_778;
    if (*(long *)(lVar12 + 0xb8) == 0) {
      lVar14 = *(long *)(lVar12 + 0xc0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xc0);
      uVar9 = local_778;
    }
    local_778 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_778;
    uVar17 = *(undefined8 *)(lVar12 + 0x98);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_778;
    uVar17 = *(undefined8 *)(lVar12 + 0xa0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_7b0,&local_780,local_778);
    }
    else {
      local_7b0 = &LAB_0204eb30;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar23;
      FUN_0204ea90(param_2,1,&local_7b0,local_778);
      local_7b0 = &LAB_0204eb34;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar23;
      FUN_0204ea90(param_2,2,&local_7b0,local_778);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,uVar9);
    if (*(undefined1 **)(lVar12 + 0x90) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 200) == '\0') goto LAB_0204a568;
LAB_0204a854:
      local_7b0 = &LAB_0204eb30;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar23;
      FUN_0204ea90(param_2,1,&local_7b0,uVar9);
      local_7b0 = &LAB_0204eb34;
      uStack_7a8 = 0;
      local_7a0 = lVar12;
      lStack_798 = lVar23;
      FUN_0204ea90(param_2,2,&local_7b0,uVar9);
      if (param_2 == 0) goto LAB_0204a8a4;
LAB_0204a570:
      uVar11 = local_778;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_7a8 = 0;
      local_7b0 = *(undefined1 **)(lVar12 + 0x90);
      local_7a0 = lVar12;
      lStack_798 = lVar23;
      FUN_0204ea90(param_2,4,&local_7b0,uVar9);
      if (*(char *)(lVar12 + 200) != '\0') goto LAB_0204a854;
LAB_0204a568:
      if (param_2 != 0) goto LAB_0204a570;
LAB_0204a8a4:
      uVar11 = local_778;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_780,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_0204c2bc();
      puVar16 = DAT_043d7a58;
      if ((DAT_043d7a48 & 1) == 0) {
        puVar16 = &DAT_043d7a49;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,&local_2c0,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar11);
      local_7b0 = *(undefined1 **)(lVar12 + 0x90);
      if (local_7b0 != (undefined1 *)0x0) {
        uStack_7a8 = 0;
        local_7a0 = lVar12;
        lStack_798 = lVar23;
        FUN_0204ea90(param_2,4,&local_7b0,uVar11);
      }
      local_7b0 = &LAB_0204ebf8;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d2e0;
      local_7a0 = lVar12;
      lStack_798 = lVar23;
      FUN_0204eb40(param_2,1,&local_7b0,uVar11);
      local_7b0 = &LAB_0204ebfc;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a7d2e0;
      local_7a0 = lVar12;
      lStack_798 = lVar23;
      FUN_0204eb40(param_2,2,&local_7b0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_768[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


