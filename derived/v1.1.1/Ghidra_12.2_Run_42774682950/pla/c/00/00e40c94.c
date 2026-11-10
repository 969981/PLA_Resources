/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e40c94; name: FUN_00e40c94
 */


undefined8 FUN_00e40c94(long param_1,long param_2)

{
  code *pcVar1;
  size_t sVar2;
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
  string *psVar15;
  undefined *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char *pcVar25;
  undefined1 *puVar26;
  long lVar27;
  undefined1 *local_7e0;
  undefined8 uStack_7d8;
  long local_7d0;
  long lStack_7c8;
  undefined8 local_7c0;
  undefined *puStack_7b8;
  long local_7b0;
  undefined4 local_7a8;
  long local_7a0;
  undefined4 local_798 [2];
  string asStack_790 [592];
  undefined8 auStack_540 [2];
  string local_530;
  undefined1 auStack_52f [7];
  size_t local_528;
  undefined1 *local_520;
  char *apcStack_2e0 [2];
  char *local_2d0 [2];
  long local_2c0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043afd70 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043afd70), iVar8 != 0)) {
    local_2c0 = 0;
    local_2d0[1] = (undefined1 *)0x0;
    local_2d0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043afcd8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043afcd8), iVar8 != 0)) {
      FUN_00e44dc0();
      FUN_00100250(PTR__string_04379718,&DAT_043afcc0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043afcd8);
    }
    pcVar25 = (char *)FUN_00e44174(local_2d0,&DAT_043afcc0);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043afd58,psVar15);
    lVar12 = local_2c0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2d0[0] & 1) != 0) && (local_2c0 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_00e420f0;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00e420f0:
    FUN_00100250(PTR__string_04379718,&DAT_043afd58,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043afd70);
  }
  std::string::string(&local_530,(string *)&DAT_043afd58);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043afd50);
  sVar2 = (ulong)((byte)local_530 >> 1);
  if (((byte)local_530 & 1) != 0) {
    sVar2 = local_528;
  }
  std::string::append((ulong)&local_530,(char)iVar8);
  if (((byte)local_530 & 1) == 0) {
    puVar26 = auStack_52f;
    local_528 = (size_t)((byte)local_530 >> 1);
  }
  else {
    puVar26 = local_520;
  }
  snprintf(puVar26 + (sVar2 - 1),local_528,"%d",(ulong)DAT_043afd50);
  DAT_043afd50 = DAT_043afd50 + 1;
  if (((DAT_043afd90 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043afd90), iVar8 != 0)) {
    local_2c0 = 0;
    local_2d0[1] = (undefined1 *)0x0;
    local_2d0[0] = (char *)0x2e6c6f7308;
    if (((DAT_043afcd8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043afcd8), iVar8 != 0)) {
      FUN_00e44dc0();
      FUN_00100250(PTR__string_04379718,&DAT_043afcc0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043afcd8);
    }
    pcVar25 = (char *)FUN_00e44174(local_2d0,&DAT_043afcc0);
    psVar15 = (string *)std::string::append(pcVar25);
    std::string::string((string *)&DAT_043afd78,psVar15);
    lVar12 = local_2c0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_2d0[0] & 1) != 0) && (local_2c0 != 0)) {
      lVar22 = tpidr_el0;
      plVar24 = *(long **)(lVar22 + 0x20);
      if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
        *(long **)(lVar22 + 0x20) = DAT_043f1798;
        plVar24 = plVar6;
      }
      uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar21 & 1) != 0) {
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar24,lVar12,0,8);
          goto LAB_00e4223c;
        }
      }
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar12,0,8);
    }
LAB_00e4223c:
    FUN_00100250(PTR__string_04379718,&DAT_043afd78,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043afd90);
  }
  puVar16 = DAT_043afd88;
  if ((DAT_043afd78 & 1) == 0) {
    puVar16 = &DAT_043afd79;
  }
  if (((byte)local_530 & 1) == 0) {
    puVar26 = (undefined1 *)((ulong)&local_530 | 1);
  }
  else {
    puVar26 = local_520;
  }
  if (((DAT_043afda0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043afda0), iVar8 != 0)) {
    DAT_043afd98 = 0x108;
    __cxa_guard_release(&DAT_043afda0);
  }
  if (((DAT_043afdb0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043afdb0), iVar8 != 0)) {
    DAT_043afda8 = 0x10f;
    __cxa_guard_release(&DAT_043afdb0);
  }
  uVar21 = DAT_043afd98;
  lVar12 = FUN_00153520(param_2,DAT_043afd98);
  if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x108)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar21 = DAT_043afda8;
    lVar12 = FUN_00153520(param_2,DAT_043afda8);
    if ((uVar21 < ((ulong)(uint)-(int)lVar12 & 7 | 0x108)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_00e45ba0();
      puVar3 = DAT_043afdc8;
      if ((DAT_043afdb8 & 1) == 0) {
        puVar3 = &DAT_043afdb9;
      }
      FUN_00154110(param_2,"cannot properly align memory for \'%s\'",puVar3);
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
  lVar22 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar22;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar22 != 0) {
    uVar23 = puVar19[2];
    uVar21 = *(ulong *)(lVar12 + 8);
    if ((uVar23 & uVar23 - 1) == 0) {
      uVar21 = uVar23 - 1 & uVar21;
    }
    else if (uVar23 <= uVar21) {
      uVar5 = 0;
      if (uVar23 != 0) {
        uVar5 = uVar21 / uVar23;
      }
      uVar21 = uVar21 - uVar5 * uVar23;
    }
    *(undefined8 **)(puVar19[1] + uVar21 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar17;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(puVar19 + 0xb) = *(undefined1 *)(param_1 + 0x58);
  *puVar19 = &PTR_FUN_041ee850;
  memcpy(puVar19 + 0xc,(void *)(param_1 + 0x60),0xa8);
  iVar8 = FUN_00154450(param_2,puVar26);
  if (iVar8 != 0) {
    FUN_001516f0(param_2,&LAB_00e45b60,0);
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
  if ((((byte)local_530 & 1) != 0) && (local_520 != (undefined1 *)0x0)) {
    lVar22 = tpidr_el0;
    plVar24 = *(long **)(lVar22 + 0x20);
    if (*(long **)(lVar22 + 0x20) == (long *)0x0) {
      *(long **)(lVar22 + 0x20) = DAT_043f1798;
      plVar24 = plVar6;
    }
    uVar21 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar21 & 1) != 0) {
      if (*(char *)(lVar22 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar22 + 0x38d488) = 1;
        *(undefined8 *)(lVar22 + 0x38d478) = 0;
        *(undefined8 *)(lVar22 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar22 + 0x38d480)) {
        FUN_02bcc824(plVar24,local_520,0,8);
        goto LAB_00e41008;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,local_520,0,8);
  }
LAB_00e41008:
  memset(local_2d0,0,0x260);
  pcVar25 = *(char **)(lVar12 + 0x60);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  lVar22 = lVar12 + 8;
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  puVar26 = &LAB_00e45208;
  if (uVar10 != 0) {
    puVar26 = &LAB_00e451d0;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(undefined1 **)(lVar12 + 0x30) = puVar26;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            uVar23 = 0;
            *(undefined1 **)(lVar12 + 0xb8) = puVar26;
            goto LAB_00e4112c;
          }
          *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(undefined1 **)(lVar12 + 0x38) = puVar26;
      }
      uVar23 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
      goto LAB_00e4112c;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  uVar23 = 1;
  local_2d0[0] = pcVar25;
  local_2d0[1] = puVar26;
LAB_00e4112c:
  pcVar25 = *(char **)(lVar12 + 0x68);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00e45428;
  if (uVar10 != 0) {
    pcVar1 = (code *)&LAB_00e45240;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 0x13) {
        *(code **)(lVar12 + 0xb8) = pcVar1;
        goto LAB_00e4120c;
      }
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
      goto LAB_00e4120c;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d0[uVar23 * 2] = pcVar25;
  local_2d0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00e4120c:
  pcVar25 = *(char **)(lVar12 + 0x78);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00e455e4;
  if (uVar10 != 0) {
    pcVar1 = FUN_00e4547c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xb8) = pcVar1;
            goto LAB_00e414a4;
          }
          *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
      goto LAB_00e414a4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d0[uVar23 * 2] = pcVar25;
  local_2d0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00e414a4:
  pcVar25 = *(char **)(lVar12 + 0x88);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00e45674;
  if (uVar10 != 0) {
    pcVar1 = FUN_00e4562c;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xb8) = pcVar1;
            goto LAB_00e415e4;
          }
          *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
      goto LAB_00e415e4;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d0[uVar23 * 2] = pcVar25;
  local_2d0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00e415e4:
  pcVar25 = *(char **)(lVar12 + 0x98);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00e457bc;
  if (uVar10 != 0) {
    pcVar1 = FUN_00e456bc;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xb8) = pcVar1;
            goto LAB_00e41724;
          }
          *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
      goto LAB_00e41724;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d0[uVar23 * 2] = pcVar25;
  local_2d0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar23 = (ulong)((int)uVar23 + 1);
LAB_00e41724:
  pcVar25 = *(char **)(lVar12 + 0xa8);
  sVar13 = strlen(pcVar25);
  sVar2 = 10;
  if (sVar13 < 0xb) {
    sVar2 = sVar13;
  }
  if (sVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = memcmp("__newindex",pcVar25,sVar2);
  }
  bVar7 = uVar10 == 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
  }
  if (sVar13 < 0xb && bVar7) {
    uVar10 = (uint)(sVar13 < 10);
  }
  lVar27 = 0;
  uVar21 = 0;
  pcVar1 = FUN_00e45900;
  if (uVar10 != 0) {
    pcVar1 = FUN_00e45804;
  }
  do {
    lVar14 = FUN_008cca50();
    pbVar20 = (byte *)(lVar14 + lVar27);
    sVar13 = strlen(pcVar25);
    sVar2 = (ulong)(*pbVar20 >> 1);
    if ((*pbVar20 & 1) != 0) {
      sVar2 = *(size_t *)(pbVar20 + 8);
    }
    if ((sVar13 == sVar2) &&
       (iVar8 = std::string::compare((ulong)pbVar20,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
       iVar8 == 0)) {
      iVar8 = (int)uVar21;
      if (iVar8 == 1) {
        *(code **)(lVar12 + 0x30) = pcVar1;
      }
      else {
        if (iVar8 != 2) {
          if (iVar8 == 0x13) {
            *(code **)(lVar12 + 0xb8) = pcVar1;
            uVar10 = (uint)*(undefined8 *)(lVar12 + 0x100);
            goto joined_r0x00e41818;
          }
          *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar1;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x100) = *(ulong *)(lVar12 + 0x100) | 1L << (uVar21 & 0x3f);
      uVar10 = (uint)*(undefined8 *)(lVar12 + 0x100);
      goto joined_r0x00e41818;
    }
    uVar21 = uVar21 + 1;
    lVar27 = lVar27 + 0x18;
  } while (uVar21 != 0x20);
  local_2d0[uVar23 * 2] = pcVar25;
  local_2d0[uVar23 * 2 + 1] = (char *)pcVar1;
  uVar10 = (uint)*(undefined8 *)(lVar12 + 0x100);
  uVar23 = (ulong)((int)uVar23 + 1);
joined_r0x00e41818:
  if ((uVar10 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x100);
  }
  if ((uVar10 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x100);
  }
  if ((uVar10 >> 0x10 & 1) == 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x181);
    if ((*(byte *)(lVar27 + 0x180) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 400);
    }
    local_2d0[uVar23 * 2] = pcVar25;
    local_2d0[uVar23 * 2 + 1] = &LAB_00e45fe0;
    uVar10 = (uint)*(undefined8 *)(lVar12 + 0x100);
    uVar23 = (ulong)((int)uVar23 + 1);
  }
  uVar21 = uVar23;
  if ((uVar10 >> 0x1b & 1) == 0) {
    lVar27 = FUN_008cca50();
    uVar21 = (ulong)((int)uVar23 + 1);
    pcVar25 = (char *)(lVar27 + 0x289);
    if ((*(byte *)(lVar27 + 0x288) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x298);
    }
    local_2d0[uVar23 * 2] = pcVar25;
    local_2d0[uVar23 * 2 + 1] = &LAB_00e45fd0;
  }
  uVar23 = uVar21;
  if (*(long *)(lVar12 + 0xb8) != 0) {
    lVar27 = FUN_008cca50();
    pcVar25 = (char *)(lVar27 + 0x1c9);
    if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
      pcVar25 = *(char **)(lVar27 + 0x1d8);
    }
    pcVar18 = *(char **)(lVar12 + 0xb8);
    uVar23 = (ulong)((int)uVar21 + 1);
    local_2d0[uVar21 * 2] = pcVar25;
    local_2d0[uVar21 * 2 + 1] = pcVar18;
  }
  local_2d0[uVar23 * 2] = (char *)0x0;
  local_2d0[uVar23 * 2 + 1] = (char *)0x0;
  memcpy(&local_530,local_2d0,0x260);
  memcpy(asStack_790,local_2d0,0x260);
  lVar27 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar25 = local_2d0[lVar14 * 2];
  sVar13 = strlen(pcVar25);
  sVar2 = (ulong)(*(byte *)(lVar27 + 0x1c8) >> 1);
  if ((*(byte *)(lVar27 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar27 + 0x1d0);
  }
  if ((sVar13 == sVar2) &&
     (iVar8 = std::string::compare(lVar27 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
     iVar8 == 0)) {
    auStack_540[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_52f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_790 + lVar14 * 0x10) = local_2d0[lVar14 * 2];
  *(undefined1 **)(asStack_790 + (lVar14 * 2 + 1) * 8) = &LAB_00e45950;
  FUN_00151fe0(param_2,0,2);
  local_798[0] = FUN_0014feb0(param_2,0xffffffff);
  local_7a0 = param_2;
  if (((DAT_043afcd8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043afcd8), iVar8 != 0)) {
    FUN_00e44dc0();
    FUN_00100250(PTR__string_04379718,&DAT_043afcc0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043afcd8);
  }
  uVar9 = local_798[0];
  if ((DAT_043afcc0 & 1) == 0) {
    uVar21 = (ulong)(DAT_043afcc0 >> 1);
    puVar26 = &DAT_043afcc1;
  }
  else {
    uVar21 = DAT_043afcc8;
    puVar26 = DAT_043afcd0;
  }
  FUN_001514f0(param_2,puVar26,uVar21);
  FUN_00152550(param_2,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_00e459a0,0);
  FUN_00152550(param_2,uVar9,&DAT_0397bfcb);
  lVar27 = 0;
  do {
    if (lVar27 == 1) {
      psVar15 = asStack_790;
      FUN_00e4353c();
      pbVar20 = &DAT_043afc28;
      puVar16 = &DAT_043afc29;
      puVar19 = &DAT_043afc38;
    }
    else if (lVar27 == 0) {
      psVar15 = &local_530;
      FUN_00e43360();
      puVar16 = &DAT_043afbb1;
      puVar19 = &DAT_043afbc0;
      pbVar20 = &DAT_043afbb0;
    }
    else {
      psVar15 = (string *)local_2d0;
      FUN_00e43718();
      puVar16 = &DAT_043afca1;
      puVar19 = &DAT_043afcb0;
      pbVar20 = &DAT_043afca0;
    }
    if ((*pbVar20 & 1) != 0) {
      puVar16 = (undefined *)*puVar19;
    }
    FUN_00154450(param_2,puVar16);
    local_7a8 = FUN_0014feb0(param_2,0xffffffff);
    local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
    local_7b0 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_7e0,&local_7a0,local_7a8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00155a20(param_2,psVar15,2);
    uVar9 = local_7a8;
    if (*(long *)(lVar12 + 0xe8) == 0) {
      lVar14 = *(long *)(lVar12 + 0xf0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0xf0);
      uVar9 = local_7a8;
    }
    local_7a8 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar9,"class_cast");
    }
    uVar9 = local_7a8;
    uVar17 = *(undefined8 *)(lVar12 + 200);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_03955ac7);
    uVar9 = local_7a8;
    uVar17 = *(undefined8 *)(lVar12 + 0xd0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar12);
    FUN_00151810(param_2,lVar22);
    FUN_001516f0(param_2,uVar17,3);
    FUN_00152550(param_2,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_7e0,&local_7b0,local_7a8);
    }
    else {
      local_7e0 = &LAB_00e45a90;
      uStack_7d8 = 0;
      local_7d0 = lVar12;
      lStack_7c8 = lVar22;
      FUN_00e459f0(param_2,1,&local_7e0,local_7a8);
      local_7e0 = &LAB_00e45a94;
      uStack_7d8 = 0;
      local_7d0 = lVar12;
      lStack_7c8 = lVar22;
      FUN_00e459f0(param_2,2,&local_7e0,local_7a8);
    }
    FUN_00151fe0(param_2,0,3);
    uVar9 = FUN_0014feb0(param_2,0xffffffff);
    local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_7e0,&local_7a0,uVar9);
    if (*(undefined1 **)(lVar12 + 0xc0) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0xf8) == '\0') goto LAB_00e41c40;
LAB_00e41ef8:
      local_7e0 = &LAB_00e45a90;
      uStack_7d8 = 0;
      local_7d0 = lVar12;
      lStack_7c8 = lVar22;
      FUN_00e459f0(param_2,1,&local_7e0,uVar9);
      local_7e0 = &LAB_00e45a94;
      uStack_7d8 = 0;
      local_7d0 = lVar12;
      lStack_7c8 = lVar22;
      FUN_00e459f0(param_2,2,&local_7e0,uVar9);
      if (param_2 == 0) goto LAB_00e41f4c;
LAB_00e41c48:
      uVar11 = local_7a8;
      FUN_00150260(param_2,uVar9);
    }
    else {
      uStack_7d8 = 0;
      local_7e0 = *(undefined1 **)(lVar12 + 0xc0);
      local_7d0 = lVar12;
      lStack_7c8 = lVar22;
      FUN_00e459f0(param_2,4,&local_7e0,uVar9);
      if (*(char *)(lVar12 + 0xf8) != '\0') goto LAB_00e41ef8;
LAB_00e41c40:
      if (param_2 != 0) goto LAB_00e41c48;
LAB_00e41f4c:
      uVar11 = local_7a8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar11);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_7b0,0xfffffffe);
    lVar27 = lVar27 + 1;
    if (lVar27 == 3) {
      FUN_00e43940();
      puVar16 = DAT_043afd28;
      if ((DAT_043afd18 & 1) == 0) {
        puVar16 = &DAT_043afd19;
      }
      FUN_00154450(param_2,puVar16);
      uVar9 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0._0_4_ = 0x1e;
      FUN_008fe304(&local_7b0,param_2,&local_7e0,&local_7a0,uVar9);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar12);
      FUN_00155a20(param_2,local_2d0,2);
      FUN_00151fe0(param_2,0,3);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_7e0 = (undefined1 *)CONCAT44(local_7e0._4_4_,0x1e);
      FUN_008fe304(&local_7b0,param_2,&local_7e0,&local_7a0,uVar11);
      local_7e0 = *(undefined1 **)(lVar12 + 0xc0);
      if (local_7e0 != (undefined1 *)0x0) {
        uStack_7d8 = 0;
        local_7d0 = lVar12;
        lStack_7c8 = lVar22;
        FUN_00e459f0(param_2,4,&local_7e0,uVar11);
      }
      local_7e0 = &LAB_00e45b58;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a787b8;
      local_7d0 = lVar12;
      lStack_7c8 = lVar22;
      FUN_00e45aa0(param_2,1,&local_7e0,uVar11);
      local_7e0 = &LAB_00e45b5c;
      uStack_7d8 = 0;
      local_7c0 = 0;
      puStack_7b8 = &DAT_03a787b8;
      local_7d0 = lVar12;
      lStack_7c8 = lVar22;
      FUN_00e45aa0(param_2,2,&local_7e0,uVar11);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar11);
      }
      FUN_00152ae0(param_2,uVar9);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_798[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


