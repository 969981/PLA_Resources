/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02260034; name: FUN_02260034
 */


undefined8 FUN_02260034(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
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
  
  if (((DAT_043dfd90 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043dfd90), iVar7 != 0)) {
    local_318 = 0;
    local_320 = (code *)0x0;
    local_328 = (char *)0x2e6c6f7308;
    if (((DAT_043df830 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df830), iVar7 != 0)) {
      FUN_02264f40();
      FUN_00100250(PTR__string_04379718,&DAT_043df818,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043df830);
    }
    puVar15 = DAT_043df828;
    if ((DAT_043df818 & 1) == 0) {
      puVar15 = &DAT_043df819;
    }
    pcVar24 = (char *)std::string::append((char *)&local_328,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043dfd78,psVar14);
    lVar11 = local_318;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_328 & 1) != 0) && (local_318 != 0)) {
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
          goto LAB_02261c68;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_02261c68:
    FUN_00100250(PTR__string_04379718,&DAT_043dfd78,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dfd90);
  }
  std::string::string(&local_5e8,(string *)&DAT_043dfd78);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043dfd70);
  sVar1 = (ulong)((byte)local_5e8 >> 1);
  if (((byte)local_5e8 & 1) != 0) {
    sVar1 = local_5e0;
  }
  std::string::append((ulong)&local_5e8,(char)iVar7);
  if (((byte)local_5e8 & 1) == 0) {
    puVar25 = auStack_5e7;
    local_5e0 = (size_t)((byte)local_5e8 >> 1);
  }
  else {
    puVar25 = local_5d8;
  }
  snprintf(puVar25 + (sVar1 - 1),local_5e0,"%d",(ulong)DAT_043dfd70);
  DAT_043dfd70 = DAT_043dfd70 + 1;
  if (((DAT_043dfdb0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043dfdb0), iVar7 != 0)) {
    local_318 = 0;
    local_320 = (code *)0x0;
    local_328 = (char *)0x2e6c6f7308;
    if (((DAT_043df830 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df830), iVar7 != 0)) {
      FUN_02264f40();
      FUN_00100250(PTR__string_04379718,&DAT_043df818,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043df830);
    }
    puVar15 = DAT_043df828;
    if ((DAT_043df818 & 1) == 0) {
      puVar15 = &DAT_043df819;
    }
    pcVar24 = (char *)std::string::append((char *)&local_328,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043dfd98,psVar14);
    lVar11 = local_318;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_328 & 1) != 0) && (local_318 != 0)) {
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
          goto LAB_02261dcc;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_02261dcc:
    FUN_00100250(PTR__string_04379718,&DAT_043dfd98,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043dfdb0);
  }
  puVar15 = DAT_043dfda8;
  if ((DAT_043dfd98 & 1) == 0) {
    puVar15 = &DAT_043dfd99;
  }
  if (((byte)local_5e8 & 1) == 0) {
    puVar25 = (undefined1 *)((ulong)&local_5e8 | 1);
  }
  else {
    puVar25 = local_5d8;
  }
  if (((DAT_043dfdc0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043dfdc0), iVar7 != 0)) {
    DAT_043dfdb8 = 0x1b0;
    __cxa_guard_release(&DAT_043dfdc0);
  }
  if (((DAT_043dfdd0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043dfdd0), iVar7 != 0)) {
    DAT_043dfdc8 = 0x1b7;
    __cxa_guard_release(&DAT_043dfdd0);
  }
  uVar20 = DAT_043dfdb8;
  lVar11 = FUN_00153520(param_2,DAT_043dfdb8);
  if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0x1b0)) ||
     (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043dfdc8;
    lVar11 = FUN_00153520(param_2,DAT_043dfdc8);
    if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0x1b0)) ||
       (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0226f5c0();
      puVar2 = DAT_043dfde8;
      if ((DAT_043dfdd8 & 1) == 0) {
        puVar2 = &DAT_043dfdd9;
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
      uVar4 = 0;
      if (uVar22 != 0) {
        uVar4 = uVar20 / uVar22;
      }
      uVar20 = uVar20 - uVar4 * uVar22;
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
  *puVar18 = &PTR_FUN_0425b8d0;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x150);
  iVar7 = FUN_00154450(param_2,puVar25);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_0226f580,0);
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
  if ((((byte)local_5e8 & 1) != 0) && (local_5d8 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar23,local_5d8,0,8);
        goto LAB_022603a8;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_5d8,0,8);
  }
LAB_022603a8:
  memset(&local_328,0,0x2c0);
  pcVar24 = *(char **)(lVar11 + 0x60);
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
  pcVar17 = FUN_02266500;
  if (uVar9 != 0) {
    pcVar17 = FUN_0226573c;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_022605a8;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_022605a8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  uVar22 = 1;
  local_328 = pcVar24;
  local_320 = pcVar17;
LAB_022605a8:
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
  pcVar17 = FUN_022667e4;
  if (uVar9 != 0) {
    pcVar17 = FUN_0226658c;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_022606e8;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_022606e8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_022606e8:
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
  pcVar17 = FUN_02269774;
  if (uVar9 != 0) {
    pcVar17 = FUN_02266870;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_02260828;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_02260828;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_02260828:
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
  pcVar17 = FUN_022698f0;
  if (uVar9 != 0) {
    pcVar17 = FUN_02269800;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_02260968;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_02260968;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_02260968:
  pcVar24 = *(char **)(lVar11 + 0xc0);
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
  pcVar17 = FUN_02269a5c;
  if (uVar9 != 0) {
    pcVar17 = FUN_0226997c;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_02260aa8;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_02260aa8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_02260aa8:
  pcVar24 = *(char **)(lVar11 + 0xd8);
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
  pcVar17 = FUN_0226a72c;
  if (uVar9 != 0) {
    pcVar17 = FUN_02269ae8;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_02260be8;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_02260be8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_02260be8:
  pcVar24 = *(char **)(lVar11 + 0xf0);
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
  pcVar17 = FUN_0226a800;
  if (uVar9 != 0) {
    pcVar17 = FUN_0226a7b8;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_02260d28;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_02260d28;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_02260d28:
  pcVar24 = *(char **)(lVar11 + 0x108);
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
  pcVar17 = FUN_0226d714;
  if (uVar9 != 0) {
    pcVar17 = FUN_0226a848;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_02260e68;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_02260e68;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_02260e68:
  pcVar24 = *(char **)(lVar11 + 0x120);
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
  pcVar17 = FUN_0226d890;
  if (uVar9 != 0) {
    pcVar17 = FUN_0226d7a0;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_02260fa8;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_02260fa8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_02260fa8:
  pcVar24 = *(char **)(lVar11 + 0x138);
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
  pcVar17 = FUN_0226d964;
  if (uVar9 != 0) {
    pcVar17 = FUN_0226d91c;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_022610e8;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_022610e8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_022610e8:
  pcVar24 = *(char **)(lVar11 + 0x150);
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
  pcVar17 = (code *)&LAB_0226f2ac;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_0226d9ac;
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
            *(code **)(lVar11 + 0x160) = pcVar17;
            goto LAB_022611f8;
          }
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      goto LAB_022611f8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_022611f8:
  pcVar24 = *(char **)(lVar11 + 0x158);
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
  pcVar17 = FUN_0226f4b4;
  if (uVar9 != 0) {
    pcVar17 = FUN_0226f454;
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
      if (iVar7 == 0x13) {
        *(code **)(lVar11 + 0x160) = pcVar17;
        uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1a8);
        goto joined_r0x022612dc;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0x1a8) = *(ulong *)(lVar11 + 0x1a8) | 1L << (uVar20 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1a8);
      goto joined_r0x022612dc;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_328)[uVar22 * 2] = pcVar24;
  (&local_320)[uVar22 * 2] = pcVar17;
  uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1a8);
  uVar22 = (ulong)((int)uVar22 + 1);
joined_r0x022612dc:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1a8);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1a8);
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x181);
    if ((*(byte *)(lVar26 + 0x180) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 400);
    }
    (&local_328)[uVar22 * 2] = pcVar24;
    (&local_320)[uVar22 * 2] = (code *)&LAB_0226e080;
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0x1a8);
    uVar22 = (ulong)((int)uVar22 + 1);
  }
  uVar20 = uVar22;
  if ((uVar9 >> 0x1b & 1) == 0) {
    lVar26 = FUN_008cca50();
    uVar20 = (ulong)((int)uVar22 + 1);
    pcVar24 = (char *)(lVar26 + 0x289);
    if ((*(byte *)(lVar26 + 0x288) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x298);
    }
    (&local_328)[uVar22 * 2] = pcVar24;
    (&local_320)[uVar22 * 2] = (code *)&LAB_0226e078;
  }
  uVar22 = uVar20;
  if (*(long *)(lVar11 + 0x160) != 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x1c9);
    if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x1d8);
    }
    pcVar17 = *(code **)(lVar11 + 0x160);
    uVar22 = (ulong)((int)uVar20 + 1);
    (&local_328)[uVar20 * 2] = pcVar24;
    (&local_320)[uVar20 * 2] = pcVar17;
  }
  (&local_328)[uVar22 * 2] = (char *)0x0;
  (&local_320)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_5e8,&local_328,0x2c0);
  memcpy(asStack_8a8,&local_328,0x2c0);
  lVar26 = FUN_008cca50();
  lVar13 = uVar22 - 1;
  pcVar24 = (&local_328)[lVar13 * 2];
  sVar12 = strlen(pcVar24);
  sVar1 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar12 == sVar1) &&
     (iVar7 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar7 == 0)) {
    auStack_5f8[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_5e7 + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_8a8 + lVar13 * 0x10) = (&local_328)[lVar13 * 2];
  *(undefined1 **)(asStack_8a8 + (lVar13 * 2 + 1) * 8) = &LAB_0226f520;
  FUN_00151fe0(param_2,0,2);
  local_8b0[0] = FUN_0014feb0(param_2,0xffffffff);
  local_8b8 = param_2;
  if (((DAT_043df830 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043df830), iVar7 != 0)) {
    FUN_02264f40();
    FUN_00100250(PTR__string_04379718,&DAT_043df818,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043df830);
  }
  uVar8 = local_8b0[0];
  uVar20 = (ulong)(DAT_043df818 >> 1);
  if ((DAT_043df818 & 1) == 0) {
    puVar15 = &DAT_043df819;
  }
  else {
    puVar15 = DAT_043df828;
    uVar20 = DAT_043df820;
  }
  FUN_001514f0(param_2,puVar15,uVar20);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0226df90,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      psVar14 = asStack_8a8;
      FUN_02263174();
      pbVar19 = &DAT_043df780;
      puVar15 = &DAT_043df781;
      puVar18 = &DAT_043df790;
    }
    else if (lVar26 == 0) {
      psVar14 = &local_5e8;
      FUN_02262f80();
      puVar15 = &DAT_043df709;
      puVar18 = &DAT_043df718;
      pbVar19 = &DAT_043df708;
    }
    else {
      psVar14 = (string *)&local_328;
      FUN_02263368();
      puVar15 = &DAT_043df7f9;
      puVar18 = &DAT_043df808;
      pbVar19 = &DAT_043df7f8;
    }
    if ((*pbVar19 & 1) != 0) {
      puVar15 = (undefined *)*puVar18;
    }
    FUN_00154450(param_2,puVar15);
    local_8c0 = FUN_0014feb0(param_2,0xffffffff);
    local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
    local_8c8 = param_2;
    FUN_008fe304(local_8d0,param_2,&local_900,&local_8b8,local_8c0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar14,2);
    uVar8 = local_8c0;
    if (*(long *)(lVar11 + 400) == 0) {
      lVar13 = *(long *)(lVar11 + 0x198);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar13 = *(long *)(lVar11 + 0x198);
      uVar8 = local_8c0;
    }
    local_8c0 = uVar8;
    if (lVar13 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_8c0;
    uVar16 = *(undefined8 *)(lVar11 + 0x170);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_8c0;
    uVar16 = *(undefined8 *)(lVar11 + 0x178);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_900 = (undefined1 *)CONCAT44(local_900._4_4_,1);
      FUN_008fe304(local_8d0,param_2,&local_900,&local_8c8,local_8c0);
    }
    else {
      local_8d0[0] = 1;
      local_900 = &LAB_0226f570;
      uStack_8f8 = 0;
      local_8f0 = lVar11;
      lStack_8e8 = lVar21;
      FUN_0226fde8(param_2,local_8d0,&local_900,local_8c0);
      local_8d0[0] = 2;
      local_900 = &LAB_0226f574;
      uStack_8f8 = 0;
      local_8f0 = lVar11;
      lStack_8e8 = lVar21;
      FUN_0226fde8(param_2,local_8d0,&local_900,local_8c0);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
    FUN_008fe304(local_8d0,param_2,&local_900,&local_8b8,uVar8);
    if (*(undefined1 **)(lVar11 + 0x168) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0x1a0) == '\0') goto LAB_022616a4;
LAB_022619c4:
      local_8d0[0] = 1;
      local_900 = &LAB_0226f570;
      uStack_8f8 = 0;
      local_8f0 = lVar11;
      lStack_8e8 = lVar21;
      FUN_0226fde8(param_2,local_8d0,&local_900,uVar8);
      local_8d0[0] = 2;
      local_900 = &LAB_0226f574;
      uStack_8f8 = 0;
      local_8f0 = lVar11;
      lStack_8e8 = lVar21;
      FUN_0226fde8(param_2,local_8d0,&local_900,uVar8);
      if (param_2 == 0) goto LAB_02261a28;
LAB_022616ac:
      uVar10 = local_8c0;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_8f8 = 0;
      local_8d0[0] = 4;
      local_900 = *(undefined1 **)(lVar11 + 0x168);
      local_8f0 = lVar11;
      lStack_8e8 = lVar21;
      FUN_0226fde8(param_2,local_8d0,&local_900,uVar8);
      if (*(char *)(lVar11 + 0x1a0) != '\0') goto LAB_022619c4;
LAB_022616a4:
      if (param_2 != 0) goto LAB_022616ac;
LAB_02261a28:
      uVar10 = local_8c0;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_8c8,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_022635a8();
      puVar15 = DAT_043df880;
      if ((DAT_043df870 & 1) == 0) {
        puVar15 = &DAT_043df871;
      }
      FUN_00154450(param_2,puVar15);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_900._0_4_ = 0x1e;
      FUN_008fe304(&local_8c8,param_2,&local_900,&local_8b8,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,&local_328,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_900 = (undefined1 *)CONCAT44(local_900._4_4_,0x1e);
      FUN_008fe304(&local_8c8,param_2,&local_900,&local_8b8,uVar10);
      local_900 = *(undefined1 **)(lVar11 + 0x168);
      if (local_900 != (undefined1 *)0x0) {
        uStack_8f8 = 0;
        local_8c8 = CONCAT44(local_8c8._4_4_,4);
        local_8f0 = lVar11;
        lStack_8e8 = lVar21;
        FUN_0226fde8(param_2,&local_8c8,&local_900,uVar10);
      }
      local_8c8._0_4_ = 1;
      local_900 = &LAB_0226f578;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7d400;
      local_8f0 = lVar11;
      lStack_8e8 = lVar21;
      FUN_0227049c(param_2,&local_8c8,&local_900,uVar10);
      local_8c8 = CONCAT44(local_8c8._4_4_,2);
      local_900 = &LAB_0226f57c;
      uStack_8f8 = 0;
      local_8e0 = 0;
      puStack_8d8 = &DAT_03a7d400;
      local_8f0 = lVar11;
      lStack_8e8 = lVar21;
      FUN_0227049c(param_2,&local_8c8,&local_900,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_8b0[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


