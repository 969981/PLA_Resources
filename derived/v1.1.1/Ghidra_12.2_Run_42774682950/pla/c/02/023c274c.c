/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023c274c; name: FUN_023c274c
 */


undefined8 FUN_023c274c(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  char cVar5;
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
  undefined1 *local_960;
  undefined8 uStack_958;
  long local_950;
  long lStack_948;
  undefined8 local_940;
  undefined *puStack_938;
  long local_930;
  undefined4 local_928;
  long local_920;
  undefined4 local_918 [2];
  string asStack_910 [720];
  undefined8 auStack_640 [2];
  string local_630;
  undefined1 auStack_62f [7];
  size_t local_628;
  undefined1 *local_620;
  char *apcStack_360 [2];
  char *local_350;
  code *local_348;
  long local_340;
  undefined1 auStack_70 [16];
  
  if (((DAT_043e3948 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e3948), iVar9 != 0)) {
    local_340 = 0;
    local_348 = (code *)0x0;
    local_350 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386bd8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04386bd8);
      puVar2 = PTR_DAT_04386be0;
      if (iVar9 != 0) {
        FUN_023c7420(PTR_DAT_04386be0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386bd8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_04386be0 + 0x10);
    if ((*PTR_DAT_04386be0 & 1) == 0) {
      puVar2 = PTR_DAT_04386be0 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_350,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e3930,psVar17);
    lVar13 = local_340;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_350 & 1) != 0) && (local_340 != 0)) {
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
          goto LAB_023c42e8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_023c42e8:
    FUN_00100250(PTR__string_04379718,&DAT_043e3930,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e3948);
  }
  std::string::string(&local_630,(string *)&DAT_043e3930);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043e3928);
  sVar1 = (ulong)((byte)local_630 >> 1);
  if (((byte)local_630 & 1) != 0) {
    sVar1 = local_628;
  }
  std::string::append((ulong)&local_630,(char)iVar9);
  if (((byte)local_630 & 1) == 0) {
    puVar27 = auStack_62f;
    local_628 = (size_t)((byte)local_630 >> 1);
  }
  else {
    puVar27 = local_620;
  }
  snprintf(puVar27 + (sVar1 - 1),local_628,"%d",(ulong)DAT_043e3928);
  DAT_043e3928 = DAT_043e3928 + 1;
  if (((DAT_043e3968 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e3968), iVar9 != 0)) {
    local_340 = 0;
    local_348 = (code *)0x0;
    local_350 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_04386bd8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04386bd8);
      puVar2 = PTR_DAT_04386be0;
      if (iVar9 != 0) {
        FUN_023c7420(PTR_DAT_04386be0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04386bd8);
      }
    }
    puVar2 = *(undefined **)(PTR_DAT_04386be0 + 0x10);
    if ((*PTR_DAT_04386be0 & 1) == 0) {
      puVar2 = PTR_DAT_04386be0 + 1;
    }
    pcVar26 = (char *)std::string::append((char *)&local_350,(ulong)puVar2);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043e3950,psVar17);
    lVar13 = local_340;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_350 & 1) != 0) && (local_340 != 0)) {
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
          goto LAB_023c4458;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_023c4458:
    FUN_00100250(PTR__string_04379718,&DAT_043e3950,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043e3968);
  }
  puVar2 = DAT_043e3960;
  if ((DAT_043e3950 & 1) == 0) {
    puVar2 = &DAT_043e3951;
  }
  if (((byte)local_630 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_630 | 1);
  }
  else {
    puVar27 = local_620;
  }
  if (((DAT_043e3978 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e3978), iVar9 != 0)) {
    DAT_043e3970 = 0x170;
    __cxa_guard_release(&DAT_043e3978);
  }
  if (((DAT_043e3988 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043e3988), iVar9 != 0)) {
    DAT_043e3980 = 0x177;
    __cxa_guard_release(&DAT_043e3988);
  }
  uVar22 = DAT_043e3970;
  lVar13 = FUN_00153520(param_2,DAT_043e3970);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x170)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043e3980;
    lVar13 = FUN_00153520(param_2,DAT_043e3980);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x170)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_023ce990();
      puVar3 = DAT_043e39a0;
      if ((DAT_043e3990 & 1) == 0) {
        puVar3 = &DAT_043e3991;
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
  *puVar18 = &PTR_FUN_0425be48;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x110);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_023ce950,0);
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
  if ((((byte)local_630 & 1) != 0) && (local_620 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_620,0,8);
        goto LAB_023c2ab8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_620,0,8);
  }
LAB_023c2ab8:
  memset(&local_350,0,0x2e0);
  pcVar26 = *(char **)(lVar13 + 0x70);
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
  pcVar20 = FUN_023c7ea0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023c7cec;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c2cb4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c2cb4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_350 = pcVar26;
  local_348 = pcVar20;
LAB_023c2cb4:
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
  pcVar20 = FUN_023c80b0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023c7ef8;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c2df4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c2df4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c2df4:
  pcVar26 = *(char **)(lVar13 + 0x80);
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
  pcVar20 = FUN_023c8620;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023c8108;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c2f34;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c2f34;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c2f34:
  pcVar26 = *(char **)(lVar13 + 0x88);
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
  pcVar20 = (code *)&LAB_023cb760;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023c8678;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c3074;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c3074;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c3074:
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
  pcVar20 = (code *)&LAB_023cb890;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023cb7a4;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c31b4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c31b4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c31b4:
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
  pcVar20 = FUN_023cbb50;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023cb9ac;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c32f4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c32f4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c32f4:
  pcVar26 = *(char **)(lVar13 + 0xb0);
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
  pcVar20 = FUN_023cbce4;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023cbba8;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c3434;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c3434;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c3434:
  pcVar26 = *(char **)(lVar13 + 200);
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
  pcVar20 = FUN_023cbe78;
  if (uVar11 != 0) {
    pcVar20 = FUN_023cbe30;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c3574;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c3574;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c3574:
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
  pcVar20 = (code *)&LAB_023cc1fc;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023cc084;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c36b4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c36b4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c36b4:
  pcVar26 = *(char **)(lVar13 + 0xf8);
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
  pcVar20 = FUN_023cc3c4;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023cc240;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c37f4;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c37f4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c37f4:
  pcVar26 = *(char **)(lVar13 + 0x110);
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
  pcVar20 = (code *)&LAB_023ce254;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023cc4bc;
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
            *(code **)(lVar13 + 0x120) = pcVar20;
            goto LAB_023c3904;
          }
          *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c3904;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_350)[uVar24 * 2] = pcVar26;
  (&local_348)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_023c3904:
  pcVar26 = *(char **)(lVar13 + 0x118);
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
  pcVar20 = (code *)&LAB_023ce458;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_023ce424;
  }
  while( true ) {
    lVar15 = FUN_008cca50();
    pbVar16 = (byte *)(lVar15 + lVar28);
    sVar14 = strlen(pcVar26);
    sVar1 = (ulong)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar16 + 8);
    }
    if ((sVar14 == sVar1) &&
       (iVar9 = std::string::compare((ulong)pbVar16,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
       iVar9 == 0)) break;
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
    if (uVar22 == 0x20) {
LAB_023c3ff4:
      (&local_350)[uVar24 * 2] = pcVar26;
      (&local_348)[uVar24 * 2] = pcVar20;
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
      uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x023c39e8:
      if ((uVar11 >> 0x11 & 1) == 0) {
LAB_023c39ec:
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
      }
LAB_023c39f4:
      if ((uVar11 >> 0x12 & 1) == 0) {
        FUN_008cca50();
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
      }
      uVar22 = uVar24;
      if ((uVar11 >> 0x10 & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x181);
        if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 400);
        }
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_350)[uVar24 * 2] = pcVar26;
        (&local_348)[uVar24 * 2] = (code *)PTR_LAB_04386bc8;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
      }
      uVar24 = uVar22;
      if ((uVar11 >> 0x1b & 1) == 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x289);
        if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x298);
        }
        uVar24 = (ulong)((int)uVar22 + 1);
        (&local_350)[uVar22 * 2] = pcVar26;
        (&local_348)[uVar22 * 2] = (code *)PTR_LAB_04386bd0;
      }
      uVar22 = uVar24;
      if (*(long *)(lVar13 + 0x120) != 0) {
        lVar28 = FUN_008cca50();
        pcVar26 = (char *)(lVar28 + 0x1c9);
        if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
          pcVar26 = *(char **)(lVar28 + 0x1d8);
        }
        pcVar20 = *(code **)(lVar13 + 0x120);
        uVar22 = (ulong)((int)uVar24 + 1);
        (&local_350)[uVar24 * 2] = pcVar26;
        (&local_348)[uVar24 * 2] = pcVar20;
      }
      (&local_350)[uVar22 * 2] = (char *)0x0;
      (&local_348)[uVar22 * 2] = (code *)0x0;
      memcpy(&local_630,&local_350,0x2e0);
      memcpy(asStack_910,&local_350,0x2e0);
      lVar28 = FUN_008cca50();
      lVar15 = uVar22 - 1;
      pcVar26 = (&local_350)[lVar15 * 2];
      sVar14 = strlen(pcVar26);
      sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
      if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
        sVar1 = *(size_t *)(lVar28 + 0x1d0);
      }
      if ((sVar14 == sVar1) &&
         (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
         iVar9 == 0)) {
        auStack_640[lVar15 * 2 + 2] = 0;
        *(undefined8 *)(auStack_62f + lVar15 * 0x10 + 7) = 0;
      }
      *(char **)(asStack_910 + lVar15 * 0x10) = (&local_350)[lVar15 * 2];
      *(undefined1 **)(asStack_910 + (lVar15 * 2 + 1) * 8) = &LAB_023ce490;
      FUN_00151fe0(param_2,0,2);
      local_918[0] = FUN_0014feb0(param_2,0xffffffff);
      local_920 = param_2;
      if ((*PTR_DAT_04386bd8 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04386bd8);
        puVar2 = PTR_DAT_04386be0;
        if (iVar9 != 0) {
          FUN_023c7420(PTR_DAT_04386be0);
          FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04386bd8);
        }
      }
      uVar10 = local_918[0];
      uVar22 = *(ulong *)(PTR_DAT_04386be0 + 8);
      puVar2 = *(undefined **)(PTR_DAT_04386be0 + 0x10);
      if ((*PTR_DAT_04386be0 & 1) == 0) {
        puVar2 = PTR_DAT_04386be0 + 1;
        uVar22 = (ulong)((byte)*PTR_DAT_04386be0 >> 1);
      }
      FUN_001514f0(param_2,puVar2,uVar22);
      FUN_00152550(param_2,uVar10,&DAT_038f8fce);
      FUN_001516f0(param_2,&LAB_023cca70,0);
      FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
      lVar28 = 0;
      do {
        if (lVar28 == 1) {
          psVar17 = asStack_910;
          pbVar16 = (byte *)FUN_023c5818();
        }
        else if (lVar28 == 0) {
          psVar17 = &local_630;
          pbVar16 = (byte *)FUN_023c5624();
        }
        else {
          psVar17 = (string *)&local_350;
          pbVar16 = (byte *)FUN_023c5a0c();
        }
        pbVar21 = *(byte **)(pbVar16 + 0x10);
        if ((*pbVar16 & 1) == 0) {
          pbVar21 = pbVar16 + 1;
        }
        FUN_00154450(param_2,pbVar21);
        local_928 = FUN_0014feb0(param_2,0xffffffff);
        local_960 = (undefined1 *)CONCAT44(local_960._4_4_,0x1e);
        local_930 = param_2;
        FUN_008fe304(auStack_70,param_2,&local_960,&local_920,local_928);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00155a20(param_2,psVar17,2);
        uVar10 = local_928;
        if (*(long *)(lVar13 + 0x150) == 0) {
          lVar15 = *(long *)(lVar13 + 0x158);
        }
        else {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_check");
          lVar15 = *(long *)(lVar13 + 0x158);
          uVar10 = local_928;
        }
        local_928 = uVar10;
        if (lVar15 != 0) {
          FUN_00151810(param_2);
          FUN_00152550(param_2,uVar10,"class_cast");
        }
        uVar10 = local_928;
        uVar19 = *(undefined8 *)(lVar13 + 0x130);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_03955ac7);
        uVar10 = local_928;
        uVar19 = *(undefined8 *)(lVar13 + 0x138);
        FUN_00151490(param_2);
        FUN_00151810(param_2,lVar13);
        FUN_00151810(param_2,lVar23);
        FUN_001516f0(param_2,uVar19,3);
        FUN_00152550(param_2,uVar10,&DAT_0397c077);
        if (*(char *)(lVar13 + 0x58) == '\0') {
          local_960 = (undefined1 *)CONCAT44(local_960._4_4_,1);
          FUN_008fe304(auStack_70,param_2,&local_960,&local_930,local_928);
        }
        else {
          local_960 = &LAB_023ce580;
          uStack_958 = 0;
          local_950 = lVar13;
          lStack_948 = lVar23;
          FUN_023ce4e0(param_2,1,&local_960,local_928);
          local_960 = &LAB_023ce88c;
          uStack_958 = 0;
          local_950 = lVar13;
          lStack_948 = lVar23;
          FUN_023ce4e0(param_2,2,&local_960,local_928);
        }
        FUN_00151fe0(param_2,0,3);
        uVar10 = FUN_0014feb0(param_2,0xffffffff);
        local_960 = (undefined1 *)CONCAT44(local_960._4_4_,0x1e);
        FUN_008fe304(auStack_70,param_2,&local_960,&local_920,uVar10);
        if (*(undefined1 **)(lVar13 + 0x128) == (undefined1 *)0x0) {
          cVar5 = *(char *)(lVar13 + 0x160);
        }
        else {
          uStack_958 = 0;
          local_960 = *(undefined1 **)(lVar13 + 0x128);
          local_950 = lVar13;
          lStack_948 = lVar23;
          FUN_023ce4e0(param_2,4,&local_960,uVar10);
          cVar5 = *(char *)(lVar13 + 0x160);
        }
        if (cVar5 != '\0') {
          local_960 = &LAB_023ce580;
          uStack_958 = 0;
          local_950 = lVar13;
          lStack_948 = lVar23;
          FUN_023ce4e0(param_2,1,&local_960,uVar10);
          local_960 = &LAB_023ce88c;
          uStack_958 = 0;
          local_950 = lVar13;
          lStack_948 = lVar23;
          FUN_023ce4e0(param_2,2,&local_960,uVar10);
        }
        uVar12 = local_928;
        if (param_2 == 0) {
          FUN_00151490(0);
        }
        else {
          FUN_00150260(param_2,uVar10);
        }
        FUN_00152ae0(param_2,uVar12);
        FUN_0014ff10(param_2,0xfffffffe);
        FUN_0014ff10(local_930,0xfffffffe);
        lVar28 = lVar28 + 1;
      } while (lVar28 != 3);
      FUN_023c5c5c();
      puVar2 = DAT_043e3630;
      if ((DAT_043e3620 & 1) == 0) {
        puVar2 = &DAT_043e3621;
      }
      FUN_00154450(param_2,puVar2);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_960._0_4_ = 0x1e;
      FUN_008fe304(&local_930,param_2,&local_960,&local_920,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_350,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_960 = (undefined1 *)CONCAT44(local_960._4_4_,0x1e);
      FUN_008fe304(&local_930,param_2,&local_960,&local_920,uVar12);
      local_960 = *(undefined1 **)(lVar13 + 0x128);
      if (local_960 != (undefined1 *)0x0) {
        uStack_958 = 0;
        local_950 = lVar13;
        lStack_948 = lVar23;
        FUN_023ce4e0(param_2,4,&local_960,uVar12);
      }
      local_960 = &LAB_023ce948;
      uStack_958 = 0;
      local_940 = 0;
      puStack_938 = &DAT_03a7d530;
      local_950 = lVar13;
      lStack_948 = lVar23;
      FUN_023ce890(param_2,1,&local_960,uVar12);
      local_960 = &LAB_023ce94c;
      uStack_958 = 0;
      local_940 = 0;
      puStack_938 = &DAT_03a7d530;
      local_950 = lVar13;
      lStack_948 = lVar23;
      FUN_023ce890(param_2,2,&local_960,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_918[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  }
  iVar9 = (int)uVar22;
  if (iVar9 == 0x13) {
    *(code **)(lVar13 + 0x120) = pcVar20;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
    goto joined_r0x023c39e8;
  }
  if (iVar9 == 1) {
    *(code **)(lVar13 + 0x30) = pcVar20;
  }
  else {
    if (iVar9 != 2) {
      *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
      goto LAB_023c3ff4;
    }
    *(code **)(lVar13 + 0x38) = pcVar20;
  }
  *(undefined1 *)(lVar13 + 0x58) = 1;
  *(ulong *)(lVar13 + 0x168) = *(ulong *)(lVar13 + 0x168) | 1L << (uVar22 & 0x3f);
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x168);
  if ((uVar11 >> 0x11 & 1) == 0) goto LAB_023c39ec;
  goto LAB_023c39f4;
}


