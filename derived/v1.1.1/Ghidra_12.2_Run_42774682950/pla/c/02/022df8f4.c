/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022df8f4; name: FUN_022df8f4
 */


undefined8 FUN_022df8f4(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  
  puVar5 = PTR_DAT_04384298;
  if (((DAT_043e14b8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e14b8), iVar9 != 0)) {
    local_318 = 0;
    local_320 = (code *)0x0;
    local_328 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04384298);
      puVar2 = PTR_DAT_043842a0;
      if (iVar9 != 0) {
        FUN_0206a330(PTR_DAT_043842a0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04384298);
      }
    }
    pcVar26 = (char *)FUN_022e302c(&local_328,PTR_DAT_043842a0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e14a0,psVar17);
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
          goto LAB_022e14d4;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_022e14d4:
    FUN_00100250(PTR__string_04379718,&DAT_043e14a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e14b8);
  }
  std::string::string(&local_5e8,(string *)&DAT_043e14a0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e1498);
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
  snprintf(puVar27 + (sVar1 - 1),local_5e0,"%d",(ulong)DAT_043e1498);
  DAT_043e1498 = DAT_043e1498 + 1;
  if (((DAT_043e14d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e14d8), iVar9 != 0)) {
    local_318 = 0;
    local_320 = (code *)0x0;
    local_328 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04384298);
      puVar2 = PTR_DAT_043842a0;
      if (iVar9 != 0) {
        FUN_0206a330(PTR_DAT_043842a0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04384298);
      }
    }
    pcVar26 = (char *)FUN_022e302c(&local_328,PTR_DAT_043842a0);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e14c0,psVar17);
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
          goto LAB_022e1620;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_022e1620:
    FUN_00100250(PTR__string_04379718,&DAT_043e14c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e14d8);
  }
  puVar2 = DAT_043e14d0;
  if ((DAT_043e14c0 & 1) == 0) {
    puVar2 = &DAT_043e14c1;
  }
  if (((byte)local_5e8 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_5e8 | 1);
  }
  else {
    puVar27 = local_5d8;
  }
  if (((DAT_043e14e8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e14e8), iVar9 != 0)) {
    DAT_043e14e0 = 0x1b0;
    __cxa_guard_release(&DAT_043e14e8);
  }
  if (((DAT_043e14f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e14f8), iVar9 != 0)) {
    DAT_043e14f0 = 0x1b7;
    __cxa_guard_release(&DAT_043e14f8);
  }
  uVar22 = DAT_043e14e0;
  lVar13 = FUN_00153520(param_2,DAT_043e14e0);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1b0)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e14f0;
    lVar13 = FUN_00153520(param_2,DAT_043e14f0);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x1b0)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_022e56d0();
      puVar3 = DAT_043e1510;
      if ((DAT_043e1500 & 1) == 0) {
        puVar3 = &DAT_043e1501;
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
  *puVar18 = &PTR_FUN_0425bb00;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x150);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_022e5690,0);
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
        goto LAB_022dfc68;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_5d8,0,8);
  }
LAB_022dfc68:
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
  pcVar20 = FUN_022e3844;
  if (uVar11 != 0) {
    pcVar20 = FUN_022e336c;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022dfe84;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022dfe84;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_328 = pcVar26;
  local_320 = pcVar20;
LAB_022dfe84:
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
  pcVar20 = FUN_022e3aa4;
  if (uVar11 != 0) {
    pcVar20 = FUN_022e3930;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022dffc4;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022dffc4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022dffc4:
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
  pcVar20 = FUN_022e3d74;
  if (uVar11 != 0) {
    pcVar20 = FUN_022e3b90;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022e0104;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022e0104;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022e0104:
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
  pcVar20 = FUN_022e3ea8;
  if (uVar11 != 0) {
    pcVar20 = FUN_022e3e60;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022e0244;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022e0244;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022e0244:
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
  pcVar20 = FUN_022e3fe0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022e3ef0;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022e0384;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022e0384;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022e0384:
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
  pcVar20 = FUN_022e4150;
  if (uVar11 != 0) {
    pcVar20 = FUN_022e4108;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022e04c4;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022e04c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022e04c4:
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
  pcVar20 = FUN_022e48cc;
  if (uVar11 != 0) {
    pcVar20 = FUN_022e4198;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022e0604;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022e0604;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022e0604:
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
  pcVar20 = FUN_022e4a0c;
  if (uVar11 != 0) {
    pcVar20 = FUN_022e49c4;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022e0744;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022e0744;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022e0744:
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
  pcVar20 = FUN_022e4a9c;
  if (uVar11 != 0) {
    pcVar20 = FUN_022e4a54;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022e0884;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022e0884;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022e0884:
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
  pcVar20 = FUN_022e4bc4;
  if (uVar11 != 0) {
    pcVar20 = FUN_022e4ae4;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022e09c4;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022e09c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022e09c4:
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
  pcVar20 = (code *)&LAB_022e5418;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022e4cd4;
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
            *(code **)(lVar13 + 0x160) = pcVar20;
            goto LAB_022e0ad4;
          }
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      goto LAB_022e0ad4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_022e0ad4:
  pcVar26 = *(char **)(lVar13 + 0x158);
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
  pcVar20 = (code *)&LAB_022e55f0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_022e55bc;
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
        *(code **)(lVar13 + 0x160) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1a8);
        goto joined_r0x022e0bb8;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x1a8) = *(ulong *)(lVar13 + 0x1a8) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1a8);
      goto joined_r0x022e0bb8;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_328)[uVar24 * 2] = pcVar26;
  (&local_320)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1a8);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x022e0bb8:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1a8);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1a8);
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
    (&local_320)[uVar24 * 2] = (code *)PTR_LAB_04384270;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x1a8);
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
    (&local_320)[uVar22 * 2] = (code *)PTR_LAB_04384278;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0x160) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0x160);
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
  *(undefined1 **)(asStack_8a8 + (lVar15 * 2 + 1) * 8) = &LAB_022e5630;
  FUN_00151fe0(param_2,0,2);
  local_8b0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_8b8 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04384298);
    puVar5 = PTR_DAT_043842a0;
    if (iVar9 != 0) {
      FUN_0206a330(PTR_DAT_043842a0);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04384298);
    }
  }
  uVar10 = local_8b0[0];
  uVar22 = *(ulong *)(PTR_DAT_043842a0 + 8);
  puVar5 = *(undefined **)(PTR_DAT_043842a0 + 0x10);
  if ((*PTR_DAT_043842a0 & 1) == 0) {
    puVar5 = PTR_DAT_043842a0 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_043842a0 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_022e52b0,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_8a8;
      pbVar16 = (byte *)FUN_0206ab38();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_5e8;
      pbVar16 = (byte *)FUN_02068ef0();
    }
    else {
      psVar17 = (string *)&local_328;
      pbVar16 = (byte *)FUN_0206a0d4();
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
    if (*(long *)(lVar13 + 400) == 0) {
      lVar15 = *(long *)(lVar13 + 0x198);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x198);
      uVar10 = local_8c0;
    }
    local_8c0 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_8c0;
    uVar19 = *(undefined8 *)(lVar13 + 0x170);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_8c0;
    uVar19 = *(undefined8 *)(lVar13 + 0x178);
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
      local_900 = &LAB_022e5680;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_022e5b0c(param_2,local_8d0,&local_900,local_8c0);
      local_8d0[0] = 2;
      local_900 = &LAB_022e5684;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_022e5b0c(param_2,local_8d0,&local_900,local_8c0);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
    FUN_008fe304(local_8d0,param_2,&local_900,&local_8b8,uVar10);
    if (*(undefined1 **)(lVar13 + 0x168) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x1a0) != '\0') goto LAB_022e1268;
LAB_022e0f4c:
      if (param_2 == 0) goto LAB_022e12c8;
LAB_022e0f54:
      uVar12 = local_8c0;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_8f8 = 0;
      local_8d0[0] = 4;
      local_900 = *(undefined1 **)(lVar13 + 0x168);
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_022e5b0c(param_2,local_8d0,&local_900,uVar10);
      if (*(char *)(lVar13 + 0x1a0) == '\0') goto LAB_022e0f4c;
LAB_022e1268:
      local_8d0[0] = 1;
      local_900 = &LAB_022e5680;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_022e5b0c(param_2,local_8d0,&local_900,uVar10);
      local_8d0[0] = 2;
      local_900 = &LAB_022e5684;
      uStack_8f8 = 0;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_022e5b0c(param_2,local_8d0,&local_900,uVar10);
      if (param_2 != 0) goto LAB_022e0f54;
LAB_022e12c8:
      uVar12 = local_8c0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_8c8,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_022e27ec();
      puVar5 = DAT_043e13f8;
      if ((DAT_043e13e8 & 1) == 0) {
        puVar5 = &DAT_043e13e9;
      }
      FUN_00154450(param_2,puVar5);
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
      local_900 = *(undefined1 **)(lVar13 + 0x168);
      if (local_900 != (undefined1 *)0x0) {
        uStack_8f8 = 0;
        local_8c8 = CONCAT44(local_8c8._4_4_,4);
        local_8f0 = lVar13;
        lStack_8e8 = lVar23;
        FUN_022e5b0c(param_2,&local_8c8,&local_900,uVar12);
      }
      local_8c8._0_4_ = 1;
      local_900 = &LAB_022e5688;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7d470;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_022e61c0(param_2,&local_8c8,&local_900,uVar12);
      local_8c8 = CONCAT44(local_8c8._4_4_,2);
      local_900 = &LAB_022e568c;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7d470;
      local_8f0 = lVar13;
      lStack_8e8 = lVar23;
      FUN_022e61c0(param_2,&local_8c8,&local_900,uVar12);
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


