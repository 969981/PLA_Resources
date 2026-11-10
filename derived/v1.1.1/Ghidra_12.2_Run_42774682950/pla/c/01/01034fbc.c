/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01034fbc; name: FUN_01034fbc
 */


undefined8 FUN_01034fbc(long param_1,long param_2)

{
  code *pcVar1;
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
  size_t sVar16;
  byte *pbVar17;
  string *psVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  char *pcVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  char *pcVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined1 *local_930;
  undefined8 uStack_928;
  long local_920;
  long lStack_918;
  undefined8 local_910;
  undefined *puStack_908;
  long local_900;
  undefined4 local_8f8;
  long local_8f0;
  undefined4 local_8e8 [2];
  string asStack_8e0 [704];
  undefined8 auStack_620 [2];
  string local_610;
  undefined1 auStack_60f [7];
  size_t local_608;
  undefined1 *local_600;
  char *apcStack_350 [2];
  char *local_340 [2];
  long local_330;
  undefined1 auStack_70 [16];
  
  puVar4 = PTR_DAT_0437d580;
  if (((DAT_043b8db8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b8db8), iVar9 != 0)) {
    local_330 = 0;
    local_340[1] = (undefined1 *)0x0;
    local_340[0] = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437d578 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437d578), puVar2 = PTR_DAT_0437d580, iVar9 != 0)) {
      FUN_00f2dc20(PTR_DAT_0437d580);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d578);
    }
    puVar2 = *(undefined **)(puVar4 + 0x10);
    if ((*puVar4 & 1) == 0) {
      puVar2 = puVar4 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)local_340,(ulong)puVar2);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b8da0,psVar18);
    lVar13 = local_330;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_340[0] & 1) != 0) && (local_330 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_01036cc0;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_01036cc0:
    FUN_00100250(PTR__string_04379718,&DAT_043b8da0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8db8);
  }
  std::string::string(&local_610,(string *)&DAT_043b8da0);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b8d98);
  if (((byte)local_610 & 1) == 0) {
    uVar23 = (ulong)((byte)local_610 >> 1);
  }
  else {
    uVar23 = local_608;
  }
  std::string::append((ulong)&local_610,(char)iVar9);
  if (((byte)local_610 & 1) == 0) {
    puVar28 = auStack_60f;
    local_608 = (size_t)((byte)local_610 >> 1);
  }
  else {
    puVar28 = local_600;
  }
  snprintf(puVar28 + (uVar23 - 1),local_608,"%d",(ulong)DAT_043b8d98);
  DAT_043b8d98 = DAT_043b8d98 + 1;
  if (((DAT_043b8dd8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b8dd8), iVar9 != 0)) {
    local_330 = 0;
    local_340[1] = (undefined1 *)0x0;
    local_340[0] = (char *)0x2e6c6f7308;
    if (((*PTR_DAT_0437d578 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437d578), puVar2 = PTR_DAT_0437d580, iVar9 != 0)) {
      FUN_00f2dc20(PTR_DAT_0437d580);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437d578);
    }
    puVar2 = *(undefined **)(puVar4 + 0x10);
    if ((*puVar4 & 1) == 0) {
      puVar2 = puVar4 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)local_340,(ulong)puVar2);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b8dc0,psVar18);
    lVar13 = local_330;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_340[0] & 1) != 0) && (local_330 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar7;
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
          FUN_02bcc824(plVar26,lVar13,0,8);
          goto LAB_01036e24;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,0,8);
    }
LAB_01036e24:
    FUN_00100250(PTR__string_04379718,&DAT_043b8dc0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b8dd8);
  }
  puVar2 = DAT_043b8dd0;
  if ((DAT_043b8dc0 & 1) == 0) {
    puVar2 = &DAT_043b8dc1;
  }
  if (((byte)local_610 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_610 | 1);
  }
  else {
    puVar28 = local_600;
  }
  if (((DAT_043b8de8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b8de8), iVar9 != 0)) {
    DAT_043b8de0 = 0x150;
    __cxa_guard_release(&DAT_043b8de8);
  }
  if (((DAT_043b8df8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043b8df8), iVar9 != 0)) {
    DAT_043b8df0 = 0x157;
    __cxa_guard_release(&DAT_043b8df8);
  }
  uVar23 = DAT_043b8de0;
  lVar13 = FUN_00153520(param_2,DAT_043b8de0);
  if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x150)) ||
     (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043b8df0;
    lVar13 = FUN_00153520(param_2,DAT_043b8df0);
    if ((uVar23 < ((ulong)(uint)-(int)lVar13 & 7 | 0x150)) ||
       (puVar19 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0103bf10();
      puVar3 = DAT_043b8e10;
      if ((DAT_043b8e00 & 1) == 0) {
        puVar3 = &DAT_043b8e01;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
      puVar19 = (undefined8 *)0x0;
    }
  }
  uVar20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  puVar19[1] = uVar20;
  puVar19[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar13;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar13 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar6 = 0;
      if (uVar25 != 0) {
        uVar6 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar6 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar5;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_041ef318;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xf0);
  iVar9 = FUN_00154450(param_2,puVar28);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_0103bed0,0);
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
  if ((((byte)local_610 & 1) != 0) && (local_600 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar7;
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
        FUN_02bcc824(plVar26,local_600,0,8);
        goto LAB_01035328;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_600,0,8);
  }
LAB_01035328:
  memset(local_340,0,0x2d0);
  pcVar27 = *(char **)(lVar13 + 0x60);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  lVar24 = lVar13 + 8;
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  puVar28 = &LAB_01039adc;
  if (uVar11 != 0) {
    puVar28 = &LAB_01039aa4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(undefined1 **)(lVar13 + 0x30) = puVar28;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            uVar25 = 0;
            *(undefined1 **)(lVar13 + 0x100) = puVar28;
            goto LAB_0103544c;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar13 + 0x38) = puVar28;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_0103544c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_340[0] = pcVar27;
  local_340[1] = puVar28;
LAB_0103544c:
  pcVar27 = *(char **)(lVar13 + 0x68);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_01039bd4;
  if (uVar11 != 0) {
    pcVar1 = (code *)&LAB_01039b14;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 0x13) {
        *(code **)(lVar13 + 0x100) = pcVar1;
        goto LAB_0103552c;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_0103552c;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0103552c:
  pcVar27 = *(char **)(lVar13 + 0x78);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_01039f30;
  if (uVar11 != 0) {
    pcVar1 = FUN_01039c94;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            goto LAB_010357b0;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_010357b0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010357b0:
  pcVar27 = *(char **)(lVar13 + 0x80);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0103a208;
  if (uVar11 != 0) {
    pcVar1 = FUN_01039f88;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            goto LAB_010358f0;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_010358f0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010358f0:
  pcVar27 = *(char **)(lVar13 + 0x88);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0103a3ac;
  if (uVar11 != 0) {
    pcVar1 = FUN_0103a284;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            goto LAB_01035a30;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_01035a30;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01035a30:
  pcVar27 = *(char **)(lVar13 + 0xa0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0103a708;
  if (uVar11 != 0) {
    pcVar1 = FUN_0103a4d4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            goto LAB_01035b70;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_01035b70;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01035b70:
  pcVar27 = *(char **)(lVar13 + 0xa8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0103aa1c;
  if (uVar11 != 0) {
    pcVar1 = FUN_0103a760;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            goto LAB_01035cb0;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_01035cb0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01035cb0:
  pcVar27 = *(char **)(lVar13 + 0xb0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0103ae8c;
  if (uVar11 != 0) {
    pcVar1 = FUN_0103aa74;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            goto LAB_01035df0;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_01035df0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01035df0:
  pcVar27 = *(char **)(lVar13 + 0xb8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0103b334;
  if (uVar11 != 0) {
    pcVar1 = FUN_0103aee4;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            goto LAB_01035f30;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_01035f30;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01035f30:
  pcVar27 = *(char **)(lVar13 + 0xc0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0103b528;
  if (uVar11 != 0) {
    pcVar1 = FUN_0103b38c;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            goto LAB_01036070;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_01036070;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_01036070:
  pcVar27 = *(char **)(lVar13 + 0xd8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0103b79c;
  if (uVar11 != 0) {
    pcVar1 = FUN_0103b614;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            goto LAB_010361b0;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_010361b0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010361b0:
  pcVar27 = *(char **)(lVar13 + 0xe0);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = "\x01";
  if (uVar11 != 0) {
    pcVar21 = "\x01";
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(char **)(lVar13 + 0x30) = pcVar21;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(char **)(lVar13 + 0x100) = pcVar21;
            goto LAB_010362f0;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(char **)(lVar13 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      goto LAB_010362f0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_010362f0:
  pcVar27 = *(char **)(lVar13 + 0xf8);
  sVar14 = strlen(pcVar27);
  sVar16 = 10;
  if (sVar14 < 0xb) {
    sVar16 = sVar14;
  }
  if (sVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = memcmp("__newindex",pcVar27,sVar16);
  }
  bVar8 = uVar11 == 0;
  if (uVar11 == 0) {
    uVar11 = 0xffffffff;
  }
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar1 = FUN_0103bc5c;
  if (uVar11 != 0) {
    pcVar1 = (code *)&LAB_0103b9f8;
  }
  do {
    lVar15 = FUN_008cca50();
    pbVar17 = (byte *)(lVar15 + lVar29);
    sVar14 = strlen(pcVar27);
    sVar16 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar16 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar14 == sVar16) &&
       (iVar9 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar9 == 0)) {
      iVar9 = (int)uVar23;
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 0x13) {
            *(code **)(lVar13 + 0x100) = pcVar1;
            uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
            goto joined_r0x010363e4;
          }
          *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x148) = *(ulong *)(lVar13 + 0x148) | 1L << (uVar23 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
      goto joined_r0x010363e4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  local_340[uVar25 * 2] = pcVar27;
  local_340[uVar25 * 2 + 1] = (char *)pcVar1;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x010363e4:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
  }
  uVar23 = uVar25;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    local_340[uVar25 * 2] = pcVar27;
    local_340[uVar25 * 2 + 1] = PTR_LAB_0437e188;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x148);
  }
  uVar25 = uVar23;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    local_340[uVar23 * 2] = pcVar27;
    local_340[uVar23 * 2 + 1] = PTR_LAB_0437e190;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar13 + 0x100) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(char **)(lVar13 + 0x100);
    uVar23 = (ulong)((int)uVar25 + 1);
    local_340[uVar25 * 2] = pcVar27;
    local_340[uVar25 * 2 + 1] = pcVar21;
  }
  local_340[uVar23 * 2] = (char *)0x0;
  local_340[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_610,local_340,0x2d0);
  memcpy(asStack_8e0,local_340,0x2d0);
  lVar29 = FUN_008cca50();
  lVar15 = uVar23 - 1;
  pcVar27 = local_340[lVar15 * 2];
  sVar16 = strlen(pcVar27);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) == 0) {
    sVar14 = (size_t)(*(byte *)(lVar29 + 0x1c8) >> 1);
  }
  else {
    sVar14 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar16 == sVar14) &&
     (iVar9 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar9 == 0)) {
    auStack_620[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_60f + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_8e0 + lVar15 * 0x10) = local_340[lVar15 * 2];
  *(undefined1 **)(asStack_8e0 + (lVar15 * 2 + 1) * 8) = &LAB_0103bcc0;
  FUN_00151fe0(param_2,0,2);
  local_8e8[0] = FUN_0014feb0(param_2,0xffffffff);
  local_8f0 = param_2;
  if (((*PTR_DAT_0437d578 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_0437d578), puVar2 = PTR_DAT_0437d580, iVar9 != 0)) {
    FUN_00f2dc20(PTR_DAT_0437d580);
    FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437d578);
  }
  uVar10 = local_8e8[0];
  uVar23 = (ulong)((byte)*puVar4 >> 1);
  puVar2 = *(undefined **)(puVar4 + 0x10);
  if ((*puVar4 & 1) == 0) {
    puVar2 = puVar4 + 1;
  }
  else {
    uVar23 = *(ulong *)(puVar4 + 8);
  }
  FUN_001514f0(param_2,puVar2,uVar23);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0103bd10,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_8e0;
      pbVar17 = (byte *)FUN_010381fc();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_610;
      pbVar17 = (byte *)FUN_01038008();
    }
    else {
      psVar18 = (string *)local_340;
      pbVar17 = (byte *)FUN_010383f0();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_8f8 = FUN_0014feb0(param_2,0xffffffff);
    local_930 = (undefined1 *)CONCAT44(local_930._4_4_,0x1e);
    local_900 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_930,&local_8f0,local_8f8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar18,2);
    uVar10 = local_8f8;
    if (*(long *)(lVar13 + 0x130) == 0) {
      lVar15 = *(long *)(lVar13 + 0x138);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x138);
      uVar10 = local_8f8;
    }
    local_8f8 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_8f8;
    uVar20 = *(undefined8 *)(lVar13 + 0x110);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_8f8;
    uVar20 = *(undefined8 *)(lVar13 + 0x118);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_930 = (undefined1 *)CONCAT44(local_930._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_930,&local_900,local_8f8);
    }
    else {
      local_930 = &LAB_0103be00;
      uStack_928 = 0;
      local_920 = lVar13;
      lStack_918 = lVar24;
      FUN_0103bd60(param_2,1,&local_930,local_8f8);
      local_930 = &LAB_0103be04;
      uStack_928 = 0;
      local_920 = lVar13;
      lStack_918 = lVar24;
      FUN_0103bd60(param_2,2,&local_930,local_8f8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_930 = (undefined1 *)CONCAT44(local_930._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_930,&local_8f0,uVar10);
    if (*(undefined1 **)(lVar13 + 0x108) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x140) == '\0') goto LAB_010367d4;
LAB_01036a94:
      local_930 = &LAB_0103be00;
      uStack_928 = 0;
      local_920 = lVar13;
      lStack_918 = lVar24;
      FUN_0103bd60(param_2,1,&local_930,uVar10);
      local_930 = &LAB_0103be04;
      uStack_928 = 0;
      local_920 = lVar13;
      lStack_918 = lVar24;
      FUN_0103bd60(param_2,2,&local_930,uVar10);
      if (param_2 == 0) goto LAB_01036ae8;
LAB_010367dc:
      uVar12 = local_8f8;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_928 = 0;
      local_930 = *(undefined1 **)(lVar13 + 0x108);
      local_920 = lVar13;
      lStack_918 = lVar24;
      FUN_0103bd60(param_2,4,&local_930,uVar10);
      if (*(char *)(lVar13 + 0x140) != '\0') goto LAB_01036a94;
LAB_010367d4:
      if (param_2 != 0) goto LAB_010367dc;
LAB_01036ae8:
      uVar12 = local_8f8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_900,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_01038640();
      puVar4 = DAT_043b8d88;
      if ((DAT_043b8d78 & 1) == 0) {
        puVar4 = &DAT_043b8d79;
      }
      FUN_00154450(param_2,puVar4);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_930._0_4_ = 0x1e;
      FUN_008fe304(&local_900,param_2,&local_930,&local_8f0,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,local_340,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_930 = (undefined1 *)CONCAT44(local_930._4_4_,0x1e);
      FUN_008fe304(&local_900,param_2,&local_930,&local_8f0,uVar12);
      local_930 = *(undefined1 **)(lVar13 + 0x108);
      if (local_930 != (undefined1 *)0x0) {
        uStack_928 = 0;
        local_920 = lVar13;
        lStack_918 = lVar24;
        FUN_0103bd60(param_2,4,&local_930,uVar12);
      }
      local_930 = &LAB_0103bec8;
      uStack_928 = 0;
      local_910 = 0;
      puStack_908 = &DAT_03a78940;
      local_920 = lVar13;
      lStack_918 = lVar24;
      FUN_0103be10(param_2,1,&local_930,uVar12);
      local_930 = &LAB_0103becc;
      uStack_928 = 0;
      local_910 = 0;
      puStack_908 = &DAT_03a78940;
      local_920 = lVar13;
      lStack_918 = lVar24;
      FUN_0103be10(param_2,2,&local_930,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_8e8[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


