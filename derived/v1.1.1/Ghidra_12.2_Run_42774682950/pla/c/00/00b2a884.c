/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b2a884; name: FUN_00b2a884
 */


undefined8 FUN_00b2a884(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  undefined1 *local_900;
  undefined8 uStack_8f8;
  long local_8f0;
  long lStack_8e8;
  undefined8 local_8e0;
  undefined *puStack_8d8;
  undefined4 local_8d0 [2];
  long local_8c8;
  undefined4 local_8c0;
  long local_8b8;
  undefined4 local_8b0 [2];
  string asStack_8a8 [688];
  undefined8 auStack_5f8 [2];
  string local_5e8;
  undefined1 auStack_5e7 [7];
  size_t local_5e0;
  undefined1 *local_5d8;
  char *apcStack_338 [2];
  char *local_328;
  code *local_320;
  long local_318;
  
  puVar4 = PTR_DAT_0437a8e0;
  if (((DAT_043aa5e0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aa5e0), iVar9 != 0)) {
    local_318 = 0;
    local_320 = (code *)0x0;
    local_328 = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437a8f8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a8f8), puVar2 = PTR_DAT_0437a8e0, iVar9 != 0)) {
      FUN_00b2f5b0(PTR_DAT_0437a8e0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a8f8);
    }
    puVar2 = *(undefined **)(puVar4 + 0x10);
    if ((*puVar4 & 1) == 0) {
      puVar2 = puVar4 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_328,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043aa5c8,psVar17);
    lVar13 = local_318;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_328 & 1) != 0) && (local_318 != 0)) {
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
          goto LAB_00b2c47c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00b2c47c:
    FUN_00100250(PTR__string_04379718,&DAT_043aa5c8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aa5e0);
  }
  std::string::string(&local_5e8,(string *)&DAT_043aa5c8);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043aa5c0);
  sVar1 = (ulong)((byte)local_5e8 >> 1);
  if (((byte)local_5e8 & 1) != 0) {
    sVar1 = local_5e0;
  }
  std::string::append((ulong)&local_5e8,(char)iVar9);
  if (((byte)local_5e8 & 1) == 0) {
    puVar27 = auStack_5e7;
    local_5e0 = (size_t)((byte)local_5e8 >> 1);
  }
  else {
    puVar27 = local_5d8;
  }
  snprintf(puVar27 + (sVar1 - 1),local_5e0,"%d",(ulong)DAT_043aa5c0);
  DAT_043aa5c0 = DAT_043aa5c0 + 1;
  if (((DAT_043aa600 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aa600), iVar9 != 0)) {
    local_318 = 0;
    local_320 = (code *)0x0;
    local_328 = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437a8f8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a8f8), puVar2 = PTR_DAT_0437a8e0, iVar9 != 0)) {
      FUN_00b2f5b0(PTR_DAT_0437a8e0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a8f8);
    }
    puVar2 = *(undefined **)(puVar4 + 0x10);
    if ((*puVar4 & 1) == 0) {
      puVar2 = puVar4 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_328,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043aa5e8,psVar17);
    lVar13 = local_318;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_328 & 1) != 0) && (local_318 != 0)) {
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
          goto LAB_00b2c5e0;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_00b2c5e0:
    FUN_00100250(PTR__string_04379718,&DAT_043aa5e8,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043aa600);
  }
  puVar2 = DAT_043aa5f8;
  if ((DAT_043aa5e8 & 1) == 0) {
    puVar2 = &DAT_043aa5e9;
  }
  if (((byte)local_5e8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_5e8 | 1);
  }
  else {
    puVar27 = local_5d8;
  }
  if (((DAT_043aa610 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aa610), iVar9 != 0)) {
    DAT_043aa608 = 0x1c0;
    __cxa_guard_release(&DAT_043aa610);
  }
  if (((DAT_043aa620 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043aa620), iVar9 != 0)) {
    DAT_043aa618 = 0x1c7;
    __cxa_guard_release(&DAT_043aa620);
  }
  uVar22 = DAT_043aa608;
  lVar13 = FUN_00153520(param_2,DAT_043aa608);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1c0)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043aa618;
    lVar13 = FUN_00153520(param_2,DAT_043aa618);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1c0)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00b33cd0();
      puVar3 = DAT_043aa638;
      if ((DAT_043aa628 & 1) == 0) {
        puVar3 = &DAT_043aa629;
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
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar18[10] = 0;
  puVar18[8] = 0;
  puVar18[9] = 0;
  puVar18[6] = uVar19;
  puVar18[7] = uVar5;
  puVar18[8] = *(undefined8 *)(param_1 + 0x40);
  puVar18[9] = *(undefined8 *)(param_1 + 0x48);
  puVar18[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar18 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar18 = &PTR_FUN_041d5218;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x160);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_00b33c90,0);
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
  if ((((byte)local_5e8 & 1) != 0) && (local_5d8 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_5d8,0,8);
        goto LAB_00b2abf8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_5d8,0,8);
  }
LAB_00b2abf8:
  memset(&local_328,0,0x2c0);
  pcVar26 = *(char **)(lVar13 + 0x60);
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
  pcVar20 = FUN_00b30618;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b2fbd0;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2adf8;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2adf8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_328 = pcVar26;
  local_320 = pcVar20;
LAB_00b2adf8:
  pcVar26 = *(char **)(lVar13 + 0x78);
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
  pcVar20 = FUN_00b306fc;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b306b4;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2af38;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2af38;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2af38:
  pcVar26 = *(char **)(lVar13 + 0x90);
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
  pcVar20 = FUN_00b30898;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b30744;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2b078;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2b078;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2b078:
  pcVar26 = *(char **)(lVar13 + 0xa8);
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
  pcVar20 = FUN_00b30ad4;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b30928;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2b1b8;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2b1b8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2b1b8:
  pcVar26 = *(char **)(lVar13 + 0xc0);
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
  pcVar20 = FUN_00b30c30;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b30b64;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2b2f8;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2b2f8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2b2f8:
  pcVar26 = *(char **)(lVar13 + 0xd8);
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
  pcVar20 = FUN_00b30ddc;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b30cfc;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2b438;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2b438;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2b438:
  pcVar26 = *(char **)(lVar13 + 0xf0);
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
  pcVar20 = FUN_00b30eb4;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b30e6c;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2b578;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2b578;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2b578:
  pcVar26 = *(char **)(lVar13 + 0x108);
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
  pcVar20 = FUN_00b30f44;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b30efc;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2b6b8;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2b6b8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2b6b8:
  pcVar26 = *(char **)(lVar13 + 0x120);
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
  pcVar20 = FUN_00b30fd4;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b30f8c;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2b7f8;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2b7f8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2b7f8:
  pcVar26 = *(char **)(lVar13 + 0x138);
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
  pcVar20 = FUN_00b31064;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b3101c;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2b938;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2b938;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2b938:
  pcVar26 = *(char **)(lVar13 + 0x150);
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
  pcVar20 = FUN_00b33a84;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b310ac;
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
            *(code **)(lVar13 + 0x170) = pcVar20;
            goto LAB_00b2ba78;
          }
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      goto LAB_00b2ba78;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_00b2ba78:
  pcVar26 = *(char **)(lVar13 + 0x168);
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
  pcVar20 = FUN_00b33b74;
  if (uVar11 != 0) {
    pcVar20 = FUN_00b33b14;
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
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x170) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1b8);
        goto joined_r0x00b2bb5c;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1b8) = *(ulong *)(lVar13 + 0x1b8) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1b8);
      goto joined_r0x00b2bb5c;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1b8);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x00b2bb5c:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1b8);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1b8);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_328)[uVar24 * 2] = pcVar26;
    (&local_320)[uVar24 * 2] = (code *)PTR_LAB_0437a8e8;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1b8);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_328)[uVar22 * 2] = pcVar26;
    (&local_320)[uVar22 * 2] = (code *)PTR_LAB_0437a8f0;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x170) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x170);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_328)[uVar24 * 2] = pcVar26;
    (&local_320)[uVar24 * 2] = pcVar20;
  }
  (&local_328)[uVar22 * 2] = (char *)0x0;
  (&local_320)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_5e8,&local_328,0x2c0);
  memcpy(asStack_8a8,&local_328,0x2c0);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_328)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_5f8[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5e7 + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_8a8 + lVar15 * 0x10) = (&local_328)[lVar15 * 2];
  *(undefined1 **)(asStack_8a8 + (lVar15 * 2 + 1) * 8) = &LAB_00b33be0;
  FUN_00151fe0(param_2,0,2);
  local_8b0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_8b8 = param_2;
  if (((*PTR_DAT_0437a8f8 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a8f8), puVar2 = PTR_DAT_0437a8e0, iVar9 != 0)) {
    FUN_00b2f5b0(PTR_DAT_0437a8e0);
    FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a8f8);
  }
  uVar10 = local_8b0[0];
  uVar22 = (ulong)((byte)*puVar4 >> 1);
  puVar2 = *(undefined **)(puVar4 + 0x10);
  if ((*puVar4 & 1) == 0) {
    puVar2 = puVar4 + 1;
  }
  else {
    uVar22 = *(ulong *)(puVar4 + 8);
  }
  FUN_001514f0(param_2,puVar2,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00b33c30,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_8a8;
      pbVar16 = (byte *)FUN_00b2d9a0();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_5e8;
      pbVar16 = (byte *)FUN_00b2d7ac();
    }
    else {
      psVar17 = (string *)&local_328;
      pbVar16 = (byte *)FUN_00b2db94();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_8c0 = FUN_0014feb0(param_2,0xffffffff);
    local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
    local_8c8 = param_2;
    FUN_008fe304(local_8d0,param_2,&local_900,&local_8b8,local_8c0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_8c0;
    if (*(long *)(lVar13 + 0x1a0) == 0) {
      lVar15 = *(long *)(lVar13 + 0x1a8);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x1a8);
      uVar10 = local_8c0;
    }
    local_8c0 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_8c0;
    uVar19 = *(undefined8 *)(lVar13 + 0x180);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_8c0;
    uVar19 = *(undefined8 *)(lVar13 + 0x188);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_900 = (undefined1 *)CONCAT44(local_900._4_4_,1);
      FUN_008fe304(local_8d0,param_2,&local_900,&local_8c8,local_8c0);
    }
    else {
      local_8d0[0] = 1;
      local_900 = &LAB_00b33c80;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_00b35304(param_2,local_8d0,&local_900,local_8c0);
      local_8d0[0] = 2;
      local_900 = &LAB_00b33c84;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_00b35304(param_2,local_8d0,&local_900,local_8c0);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
    FUN_008fe304(local_8d0,param_2,&local_900,&local_8b8,uVar10);
    if (*(undefined1 **)(lVar13 + 0x178) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x1b0) == '\0') goto LAB_00b2bef0;
LAB_00b2c20c:
      local_8d0[0] = 1;
      local_900 = &LAB_00b33c80;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_00b35304(param_2,local_8d0,&local_900,uVar10);
      local_8d0[0] = 2;
      local_900 = &LAB_00b33c84;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_00b35304(param_2,local_8d0,&local_900,uVar10);
      if (param_2 == 0) goto LAB_00b2c26c;
LAB_00b2bef8:
      uVar12 = local_8c0;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_8f8 = 0;
      local_8d0[0] = 4;
      local_900 = *(undefined1 **)(lVar13 + 0x178);
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_00b35304(param_2,local_8d0,&local_900,uVar10);
      if (*(char *)(lVar13 + 0x1b0) != '\0') goto LAB_00b2c20c;
LAB_00b2bef0:
      if (param_2 != 0) goto LAB_00b2bef8;
LAB_00b2c26c:
      uVar12 = local_8c0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_8c8,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_00b2dde4();
      puVar4 = DAT_043aa380;
      if ((DAT_043aa370 & 1) == 0) {
        puVar4 = &DAT_043aa371;
      }
      FUN_00154450(param_2,puVar4);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_900._0_4_ = 0x1e;
      FUN_008fe304(&local_8c8,param_2,&local_900,&local_8b8,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_328,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
      FUN_008fe304(&local_8c8,param_2,&local_900,&local_8b8,uVar12);
      local_900 = *(undefined1 **)(lVar13 + 0x178);
      if (local_900 != (undefined1 *)0x0) {
        uStack_8f8 = 0;
        local_8c8 = CONCAT44(local_8c8._4_4_,4);
        local_8f0 = lVar13;
        lStack_8e8 = lVar23;
        FUN_00b35304(param_2,&local_8c8,&local_900,uVar12);
      }
      local_8c8._0_4_ = 1;
      local_900 = &LAB_00b33c88;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a77a68;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_00b359b8(param_2,&local_8c8,&local_900,uVar12);
      local_8c8 = CONCAT44(local_8c8._4_4_,2);
      local_900 = &LAB_00b33c8c;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a77a68;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_00b359b8(param_2,&local_8c8,&local_900,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_8b0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


