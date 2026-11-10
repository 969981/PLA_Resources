/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0102a6d0; name: FUN_0102a6d0
 */


void FUN_0102a6d0(long param_1,long param_2)

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
  undefined1 *local_b10;
  undefined8 uStack_b08;
  long local_b00;
  long lStack_af8;
  undefined8 local_af0;
  undefined *puStack_ae8;
  long local_ae0;
  undefined4 local_ad8;
  long local_ad0;
  undefined4 local_ac8 [2];
  string asStack_ac0 [864];
  undefined8 auStack_760 [2];
  string local_750;
  undefined1 auStack_74f [7];
  size_t local_748;
  undefined1 *local_740;
  char *apcStack_3f0 [2];
  char *local_3e0;
  code *local_3d8;
  long local_3d0;
  undefined1 auStack_70 [16];
  
  if (((DAT_043b89c8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b89c8), iVar8 != 0)) {
    local_3d0 = 0;
    local_3d8 = (code *)0x0;
    local_3e0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437da80 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437da80);
      puVar2 = PTR_DAT_0437da88;
      if (iVar8 != 0) {
        FUN_00fadd70(PTR_DAT_0437da88);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437da80);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437da88 + 0x10);
    if ((*PTR_DAT_0437da88 & 1) == 0) {
      puVar2 = PTR_DAT_0437da88 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)&local_3e0,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b89b0,psVar17);
    lVar12 = local_3d0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3e0 & 1) != 0) && (local_3d0 != 0)) {
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
          goto LAB_0102d0c4;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_0102d0c4:
    FUN_00100250(PTR__string_04379718,&DAT_043b89b0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b89c8);
  }
  std::string::string(&local_750,(string *)&DAT_043b89b0);
  iVar8 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b89a8);
  if (((byte)local_750 & 1) == 0) {
    uVar23 = (ulong)((byte)local_750 >> 1);
  }
  else {
    uVar23 = local_748;
  }
  std::string::append((ulong)&local_750,(char)iVar8);
  if (((byte)local_750 & 1) == 0) {
    puVar28 = auStack_74f;
    local_748 = (size_t)((byte)local_750 >> 1);
  }
  else {
    puVar28 = local_740;
  }
  snprintf(puVar28 + (uVar23 - 1),local_748,"%d",(ulong)DAT_043b89a8);
  DAT_043b89a8 = DAT_043b89a8 + 1;
  if (((DAT_043b89e8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b89e8), iVar8 != 0)) {
    local_3d0 = 0;
    local_3d8 = (code *)0x0;
    local_3e0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437da80 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(PTR_DAT_0437da80);
      puVar2 = PTR_DAT_0437da88;
      if (iVar8 != 0) {
        FUN_00fadd70(PTR_DAT_0437da88);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437da80);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_0437da88 + 0x10);
    if ((*PTR_DAT_0437da88 & 1) == 0) {
      puVar2 = PTR_DAT_0437da88 + 1;
    }
    pcVar27 = (char *)std::string::append((char *)&local_3e0,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043b89d0,psVar17);
    lVar12 = local_3d0;
    plVar6 = DAT_043f1798;
    if ((((ulong)local_3e0 & 1) != 0) && (local_3d0 != 0)) {
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
          goto LAB_0102d234;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar12,0,8);
    }
LAB_0102d234:
    FUN_00100250(PTR__string_04379718,&DAT_043b89d0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b89e8);
  }
  puVar2 = DAT_043b89e0;
  if ((DAT_043b89d0 & 1) == 0) {
    puVar2 = &DAT_043b89d1;
  }
  if (((byte)local_750 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_750 | 1);
  }
  else {
    puVar28 = local_740;
  }
  if (((DAT_043b89f8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b89f8), iVar8 != 0)) {
    DAT_043b89f0 = 0x240;
    __cxa_guard_release(&DAT_043b89f8);
  }
  if (((DAT_043b8a08 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_043b8a08), iVar8 != 0)) {
    DAT_043b8a00 = 0x247;
    __cxa_guard_release(&DAT_043b8a08);
  }
  uVar23 = DAT_043b89f0;
  lVar12 = FUN_00153520(param_1,DAT_043b89f0);
  if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x240)) ||
     (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar23 = DAT_043b8a00;
    lVar12 = FUN_00153520(param_1,DAT_043b8a00);
    if ((uVar23 < ((ulong)(uint)-(int)lVar12 & 7 | 0x240)) ||
       (puVar19 = (undefined8 *)(lVar12 + ((ulong)(uint)-(int)lVar12 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0102d8b0();
      puVar3 = DAT_043b8a20;
      if ((DAT_043b8a10 & 1) == 0) {
        puVar3 = &DAT_043b8a11;
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
  *puVar19 = &PTR_FUN_041ef2f0;
  memcpy(puVar19 + 0xc,(void *)(param_2 + 0x60),0x1e0);
  iVar8 = FUN_00154450(param_1,puVar28);
  if (iVar8 != 0) {
    FUN_001516f0(param_1,&LAB_0102d870,0);
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
  if ((((byte)local_750 & 1) != 0) && (local_740 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar26,local_740,0,8);
        goto LAB_0102aa34;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_740,0,8);
  }
LAB_0102aa34:
  memset(&local_3e0,0,0x370);
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
  pcVar21 = FUN_01027bd4;
  if (uVar10 != 0) {
    pcVar21 = FUN_01027a88;
  }
  puVar1 = (ulong *)(lVar12 + 0x238);
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102ac44;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102ac44;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_3e0 = pcVar27;
  local_3d8 = pcVar21;
LAB_0102ac44:
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
  pcVar21 = FUN_01027d14;
  if (uVar10 != 0) {
    pcVar21 = FUN_01027ccc;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102ad8c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102ad8c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102ad8c:
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
  pcVar21 = FUN_01027da4;
  if (uVar10 != 0) {
    pcVar21 = FUN_01027d5c;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102aed0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102aed0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102aed0:
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
  pcVar21 = FUN_01027e34;
  if (uVar10 != 0) {
    pcVar21 = FUN_01027dec;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102b014;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102b014;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102b014:
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
  pcVar21 = FUN_01028010;
  if (uVar10 != 0) {
    pcVar21 = FUN_01027e7c;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102b158;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102b158;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102b158:
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
  pcVar21 = FUN_01028150;
  if (uVar10 != 0) {
    pcVar21 = FUN_01028108;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102b29c;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102b29c;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102b29c:
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
  pcVar21 = FUN_010281e0;
  if (uVar10 != 0) {
    pcVar21 = FUN_01028198;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102b3e0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102b3e0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102b3e0:
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
  pcVar21 = FUN_01028270;
  if (uVar10 != 0) {
    pcVar21 = FUN_01028228;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102b524;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102b524;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102b524:
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
  pcVar21 = FUN_010285e4;
  if (uVar10 != 0) {
    pcVar21 = FUN_010282b8;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102b668;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102b668;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102b668:
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
  pcVar21 = FUN_010288bc;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_010286dc;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102b7ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102b7ac;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102b7ac:
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
  pcVar21 = FUN_01028b2c;
  if (uVar10 != 0) {
    pcVar21 = FUN_010289b4;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102b8f0;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102b8f0;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102b8f0:
  pcVar27 = *(char **)(lVar12 + 0x168);
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
  pcVar21 = FUN_01028d8c;
  if (uVar10 != 0) {
    pcVar21 = FUN_01028c24;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102ba34;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102ba34;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102ba34:
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
  pcVar21 = FUN_0102911c;
  if (uVar10 != 0) {
    pcVar21 = FUN_01028dec;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102bb78;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102bb78;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102bb78:
  pcVar27 = *(char **)(lVar12 + 0x178);
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
  pcVar21 = FUN_01029380;
  if (uVar10 != 0) {
    pcVar21 = FUN_01029174;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102bcbc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102bcbc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102bcbc:
  pcVar27 = *(char **)(lVar12 + 0x188);
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
  pcVar21 = FUN_010294a4;
  if (uVar10 != 0) {
    pcVar21 = FUN_0102941c;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102be00;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102be00;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102be00:
  pcVar27 = *(char **)(lVar12 + 0x198);
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
  pcVar21 = FUN_0102960c;
  if (uVar10 != 0) {
    pcVar21 = FUN_01029540;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102bf44;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102bf44;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102bf44:
  pcVar27 = *(char **)(lVar12 + 0x1a8);
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
  pcVar21 = FUN_01029828;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_010296ec;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102c088;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102c088;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102c088:
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
  pcVar21 = FUN_010299dc;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_01029870;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102c1cc;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102c1cc;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102c1cc:
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
  pcVar21 = FUN_01029c94;
  if (uVar10 != 0) {
    pcVar21 = FUN_01029a78;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102c310;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102c310;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102c310:
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
  pcVar21 = FUN_01029d60;
  if (uVar10 != 0) {
    pcVar21 = FUN_01029cec;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102c454;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102c454;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102c454:
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
  pcVar21 = FUN_0102a2c0;
  if (uVar10 != 0) {
    pcVar21 = FUN_01029de8;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102c598;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102c598;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102c598:
  pcVar27 = *(char **)(lVar12 + 0x1e0);
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
  pcVar21 = (code *)&LAB_0102a4b4;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0102a318;
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
            *(code **)(lVar12 + 0x1f0) = pcVar21;
            goto LAB_0102c6ac;
          }
          *puVar1 = *puVar1 | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar12 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar12 + 0x58) = 1;
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      goto LAB_0102c6ac;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_0102c6ac:
  pcVar27 = *(char **)(lVar12 + 0x1e8);
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
  pcVar21 = (code *)&LAB_0102a688;
  if (uVar10 != 0) {
    pcVar21 = (code *)&LAB_0102a650;
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
        *(code **)(lVar12 + 0x1f0) = pcVar21;
        uVar10 = (uint)*puVar1;
        goto joined_r0x0102c794;
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
      *(ulong *)(lVar12 + 0x238) = *(ulong *)(lVar12 + 0x238) | 1L << (uVar23 & 0x3f);
      uVar10 = (uint)*puVar1;
      goto joined_r0x0102c794;
    }
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar23 != 0x20);
  (&local_3e0)[uVar25 * 2] = pcVar27;
  (&local_3d8)[uVar25 * 2] = pcVar21;
  uVar10 = (uint)*puVar1;
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x0102c794:
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
    (&local_3e0)[uVar25 * 2] = pcVar27;
    (&local_3d8)[uVar25 * 2] = (code *)PTR_LAB_0437dae0;
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
    (&local_3e0)[uVar23 * 2] = pcVar27;
    (&local_3d8)[uVar23 * 2] = (code *)PTR_LAB_0437dae8;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar12 + 0x1f0) != 0) {
    lVar24 = FUN_008cca50();
    pcVar27 = (char *)(lVar24 + 0x1c9);
    if ((*(byte *)(lVar24 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar24 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar12 + 0x1f0);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_3e0)[uVar25 * 2] = pcVar27;
    (&local_3d8)[uVar25 * 2] = pcVar21;
  }
  (&local_3e0)[uVar23 * 2] = (char *)0x0;
  (&local_3d8)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_750,&local_3e0,0x370);
  memcpy(asStack_ac0,&local_3e0,0x370);
  lVar24 = FUN_008cca50();
  lVar14 = uVar23 - 1;
  pcVar27 = (&local_3e0)[lVar14 * 2];
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
    auStack_760[lVar14 * 2 + 2] = 0;
    *(undefined8 *)(auStack_74f + lVar14 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_ac0 + lVar14 * 0x10) = (&local_3e0)[lVar14 * 2];
  *(undefined1 **)(asStack_ac0 + (lVar14 * 2 + 1) * 8) = &LAB_0102d6b0;
  FUN_00151fe0(param_1,0,2);
  local_ac8[0] = FUN_0014feb0(param_1,0xffffffff);
  local_ad0 = param_1;
  if ((*PTR_DAT_0437da80 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_0437da80);
    puVar2 = PTR_DAT_0437da88;
    if (iVar8 != 0) {
      FUN_00fadd70(PTR_DAT_0437da88);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437da80);
    }
  }
  uVar9 = local_ac8[0];
  uVar23 = *(ulong *)(PTR_DAT_0437da88 + 8);
  puVar2 = *(undefined **)(PTR_DAT_0437da88 + 0x10);
  if ((*PTR_DAT_0437da88 & 1) == 0) {
    puVar2 = PTR_DAT_0437da88 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437da88 >> 1);
  }
  FUN_001514f0(param_1,puVar2,uVar23);
  FUN_00152550(param_1,uVar9,&DAT_038f8fce);
  FUN_001516f0(param_1,PTR_LAB_0437dad8,0);
  FUN_00152550(param_1,uVar9,&DAT_0397bfcb);
  lVar24 = 0;
  do {
    if (lVar24 == 1) {
      psVar17 = asStack_ac0;
      pbVar16 = (byte *)FUN_00fafed8();
    }
    else if (lVar24 == 0) {
      psVar17 = &local_750;
      pbVar16 = (byte *)FUN_00faf49c();
    }
    else {
      psVar17 = (string *)&local_3e0;
      pbVar16 = (byte *)FUN_00fae7c8();
    }
    pbVar22 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar22 = pbVar16 + 1;
    }
    FUN_00154450(param_1,pbVar22);
    local_ad8 = FUN_0014feb0(param_1,0xffffffff);
    local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,0x1e);
    local_ae0 = param_1;
    FUN_008fe304(auStack_70,param_1,&local_b10,&local_ad0,local_ad8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00155a20(param_1,psVar17,2);
    uVar9 = local_ad8;
    if (*(long *)(lVar12 + 0x220) == 0) {
      lVar14 = *(long *)(lVar12 + 0x228);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_check");
      lVar14 = *(long *)(lVar12 + 0x228);
      uVar9 = local_ad8;
    }
    local_ad8 = uVar9;
    if (lVar14 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar9,"class_cast");
    }
    uVar9 = local_ad8;
    uVar20 = *(undefined8 *)(lVar12 + 0x200);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_03955ac7);
    uVar9 = local_ad8;
    uVar20 = *(undefined8 *)(lVar12 + 0x208);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar12);
    FUN_00151810(param_1,lVar18);
    FUN_001516f0(param_1,uVar20,3);
    FUN_00152550(param_1,uVar9,&DAT_0397c077);
    if (*(char *)(lVar12 + 0x58) == '\0') {
      local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,1);
      FUN_008fe304(auStack_70,param_1,&local_b10,&local_ae0,local_ad8);
    }
    else {
      local_b10 = &LAB_0102d7a0;
      uStack_b08 = 0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_0102d700(param_1,1,&local_b10,local_ad8);
      local_b10 = &LAB_0102d7a4;
      uStack_b08 = 0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_0102d700(param_1,2,&local_b10,local_ad8);
    }
    FUN_00151fe0(param_1,0,3);
    uVar9 = FUN_0014feb0(param_1,0xffffffff);
    local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_1,&local_b10,&local_ad0,uVar9);
    if (*(undefined1 **)(lVar12 + 0x1f8) == (undefined1 *)0x0) {
      if (*(char *)(lVar12 + 0x230) != '\0') goto LAB_0102ce2c;
LAB_0102cb30:
      if (param_1 == 0) goto LAB_0102ce80;
LAB_0102cb38:
      uVar11 = local_ad8;
      FUN_00150260(param_1,uVar9);
    }
    else {
      uStack_b08 = 0;
      local_b10 = *(undefined1 **)(lVar12 + 0x1f8);
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_0102d700(param_1,4,&local_b10,uVar9);
      if (*(char *)(lVar12 + 0x230) == '\0') goto LAB_0102cb30;
LAB_0102ce2c:
      local_b10 = &LAB_0102d7a0;
      uStack_b08 = 0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_0102d700(param_1,1,&local_b10,uVar9);
      local_b10 = &LAB_0102d7a4;
      uStack_b08 = 0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_0102d700(param_1,2,&local_b10,uVar9);
      if (param_1 != 0) goto LAB_0102cb38;
LAB_0102ce80:
      uVar11 = local_ad8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar11);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_ae0,0xfffffffe);
    lVar24 = lVar24 + 1;
    if (lVar24 == 3) {
      FUN_010277c4();
      puVar2 = DAT_043b8998;
      if ((DAT_043b8988 & 1) == 0) {
        puVar2 = &DAT_043b8989;
      }
      FUN_00154450(param_1,puVar2);
      uVar9 = FUN_0014feb0(param_1,0xffffffff);
      local_b10._0_4_ = 0x1e;
      FUN_008fe304(&local_ae0,param_1,&local_b10,&local_ad0,uVar9);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar12);
      FUN_00155a20(param_1,&local_3e0,2);
      FUN_00151fe0(param_1,0,3);
      uVar11 = FUN_0014feb0(param_1,0xffffffff);
      local_b10 = (undefined1 *)CONCAT44(local_b10._4_4_,0x1e);
      FUN_008fe304(&local_ae0,param_1,&local_b10,&local_ad0,uVar11);
      local_b10 = *(undefined1 **)(lVar12 + 0x1f8);
      if (local_b10 != (undefined1 *)0x0) {
        uStack_b08 = 0;
        local_b00 = lVar12;
        lStack_af8 = lVar18;
        FUN_0102d700(param_1,4,&local_b10,uVar11);
      }
      local_b10 = &LAB_0102d868;
      uStack_b08 = 0;
      local_af0 = 0;
      puStack_ae8 = &DAT_03a788e0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_0102d7b0(param_1,1,&local_b10,uVar11);
      local_b10 = &LAB_0102d86c;
      uStack_b08 = 0;
      local_af0 = 0;
      puStack_ae8 = &DAT_03a788e0;
      local_b00 = lVar12;
      lStack_af8 = lVar18;
      FUN_0102d7b0(param_1,2,&local_b10,uVar11);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar11);
      }
      FUN_00152ae0(param_1,uVar9);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_ac8[0],0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


