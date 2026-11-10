/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0174ac74; name: FUN_0174ac74
 */


undefined8 FUN_0174ac74(long param_1,long param_2)

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
  undefined1 *local_870;
  undefined8 uStack_868;
  long local_860;
  long lStack_858;
  undefined8 local_850;
  undefined *puStack_848;
  long local_840;
  undefined4 local_838;
  long local_830;
  undefined4 local_828 [2];
  string asStack_820 [640];
  undefined8 auStack_5a0 [2];
  string local_590;
  undefined1 auStack_58f [7];
  size_t local_588;
  undefined1 *local_580;
  char *apcStack_310 [2];
  char *local_300;
  code *local_2f8;
  long local_2f0;
  undefined1 auStack_70 [16];
  
  puVar5 = PTR_DAT_0437fe68;
  if (((DAT_043cec28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043cec28), iVar9 != 0)) {
    local_2f0 = 0;
    local_2f8 = (code *)0x0;
    local_300 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437fe68);
      puVar2 = PTR_DAT_0437fe70;
      if (iVar9 != 0) {
        FUN_015c1dd0(PTR_DAT_0437fe70);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437fe68);
      }
    }
    pcVar26 = (char *)FUN_0174df64(&local_300,PTR_DAT_0437fe70);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043cec10,psVar17);
    lVar13 = local_2f0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_300 & 1) != 0) && (local_2f0 != 0)) {
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
          goto LAB_0174c45c;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0174c45c:
    FUN_00100250(PTR__string_04379718,&DAT_043cec10,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cec28);
  }
  std::string::string(&local_590,(string *)&DAT_043cec10);
  iVar9 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cec08);
  sVar1 = (ulong)((byte)local_590 >> 1);
  if (((byte)local_590 & 1) != 0) {
    sVar1 = local_588;
  }
  std::string::append((ulong)&local_590,(char)iVar9);
  if (((byte)local_590 & 1) == 0) {
    puVar27 = auStack_58f;
    local_588 = (size_t)((byte)local_590 >> 1);
  }
  else {
    puVar27 = local_580;
  }
  snprintf(puVar27 + (sVar1 - 1),local_588,"%d",(ulong)DAT_043cec08);
  DAT_043cec08 = DAT_043cec08 + 1;
  if (((DAT_043cec48 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043cec48), iVar9 != 0)) {
    local_2f0 = 0;
    local_2f8 = (code *)0x0;
    local_300 = (char *)0x2e6c6f7308;
    if ((*puVar5 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_0437fe68);
      puVar2 = PTR_DAT_0437fe70;
      if (iVar9 != 0) {
        FUN_015c1dd0(PTR_DAT_0437fe70);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437fe68);
      }
    }
    pcVar26 = (char *)FUN_0174df64(&local_300,PTR_DAT_0437fe70);
    psVar17 = (string *)std::string::append(pcVar26);
    std::string::string((string *)&DAT_043cec30,psVar17);
    lVar13 = local_2f0;
    plVar7 = DAT_043f1798;
    if ((((ulong)local_300 & 1) != 0) && (local_2f0 != 0)) {
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
          goto LAB_0174c5a8;
        }
      }
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar13,0,8);
    }
LAB_0174c5a8:
    FUN_00100250(PTR__string_04379718,&DAT_043cec30,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cec48);
  }
  puVar2 = DAT_043cec40;
  if ((DAT_043cec30 & 1) == 0) {
    puVar2 = &DAT_043cec31;
  }
  if (((byte)local_590 & 1) == 0) {
    puVar27 = (undefined1 *)((ulong)&local_590 | 1);
  }
  else {
    puVar27 = local_580;
  }
  if (((DAT_043cec58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043cec58), iVar9 != 0)) {
    DAT_043cec50 = 0x148;
    __cxa_guard_release(&DAT_043cec58);
  }
  if (((DAT_043cec68 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043cec68), iVar9 != 0)) {
    DAT_043cec60 = 0x14f;
    __cxa_guard_release(&DAT_043cec68);
  }
  uVar22 = DAT_043cec50;
  lVar13 = FUN_00153520(param_2,DAT_043cec50);
  if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x148)) ||
     (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar22 = DAT_043cec60;
    lVar13 = FUN_00153520(param_2,DAT_043cec60);
    if ((uVar22 < ((ulong)(uint)-(int)lVar13 & 7 | 0x148)) ||
       (puVar18 = (undefined8 *)(lVar13 + ((ulong)(uint)-(int)lVar13 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_01750100();
      puVar3 = DAT_043cec80;
      if ((DAT_043cec70 & 1) == 0) {
        puVar3 = &DAT_043cec71;
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
  *puVar18 = &PTR_FUN_04225000;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0xe8);
  iVar9 = FUN_00154450(param_2,puVar27);
  if (iVar9 != 0) {
    FUN_001516f0(param_2,&LAB_017500c0,0);
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
  if ((((byte)local_590 & 1) != 0) && (local_580 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar25,local_580,0,8);
        goto LAB_0174afe8;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,local_580,0,8);
  }
LAB_0174afe8:
  memset(&local_300,0,0x290);
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
  pcVar20 = FUN_0174e7c0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0174e29c;
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
            *(code **)(lVar13 + 0xf8) = pcVar20;
            goto LAB_0174b204;
          }
          *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      uVar24 = 0;
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
      goto LAB_0174b204;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  uVar24 = 1;
  local_300 = pcVar26;
  local_2f8 = pcVar20;
LAB_0174b204:
  pcVar26 = *(char **)(lVar13 + 0x68);
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
  pcVar20 = FUN_0174eda0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0174e818;
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
            *(code **)(lVar13 + 0xf8) = pcVar20;
            goto LAB_0174b344;
          }
          *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
      goto LAB_0174b344;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_300)[uVar24 * 2] = pcVar26;
  (&local_2f8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0174b344:
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
  if (sVar14 < 0xb && bVar8) {
    uVar11 = (uint)(sVar14 < 10);
  }
  lVar28 = 0;
  uVar22 = 0;
  pcVar20 = FUN_0174eee8;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0174edf8;
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
            *(code **)(lVar13 + 0xf8) = pcVar20;
            goto LAB_0174b484;
          }
          *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
      goto LAB_0174b484;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_300)[uVar24 * 2] = pcVar26;
  (&local_2f8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0174b484:
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
  pcVar20 = FUN_0174f16c;
  if (uVar11 != 0) {
    pcVar20 = FUN_0174f010;
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
            *(code **)(lVar13 + 0xf8) = pcVar20;
            goto LAB_0174b5c4;
          }
          *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
      goto LAB_0174b5c4;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_300)[uVar24 * 2] = pcVar26;
  (&local_2f8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0174b5c4:
  pcVar26 = *(char **)(lVar13 + 0xa0);
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
  pcVar20 = FUN_0174f2a0;
  if (uVar11 != 0) {
    pcVar20 = FUN_0174f258;
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
            *(code **)(lVar13 + 0xf8) = pcVar20;
            goto LAB_0174b704;
          }
          *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
      goto LAB_0174b704;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_300)[uVar24 * 2] = pcVar26;
  (&local_2f8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0174b704:
  pcVar26 = *(char **)(lVar13 + 0xb8);
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
  pcVar20 = FUN_0174f330;
  if (uVar11 != 0) {
    pcVar20 = FUN_0174f2e8;
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
            *(code **)(lVar13 + 0xf8) = pcVar20;
            goto LAB_0174b844;
          }
          *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
      goto LAB_0174b844;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_300)[uVar24 * 2] = pcVar26;
  (&local_2f8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0174b844:
  pcVar26 = *(char **)(lVar13 + 0xd0);
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
  pcVar20 = FUN_0174f4bc;
  if (uVar11 != 0) {
    pcVar20 = FUN_0174f378;
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
            *(code **)(lVar13 + 0xf8) = pcVar20;
            goto LAB_0174b984;
          }
          *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
      goto LAB_0174b984;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_300)[uVar24 * 2] = pcVar26;
  (&local_2f8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0174b984:
  pcVar26 = *(char **)(lVar13 + 0xe8);
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
  pcVar20 = (code *)&LAB_0174fce8;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0174f5a8;
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
            *(code **)(lVar13 + 0xf8) = pcVar20;
            goto LAB_0174ba94;
          }
          *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
      goto LAB_0174ba94;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_300)[uVar24 * 2] = pcVar26;
  (&local_2f8)[uVar24 * 2] = pcVar20;
  uVar24 = (ulong)((int)uVar24 + 1);
LAB_0174ba94:
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
  pcVar20 = (code *)&LAB_0174fec0;
  if (uVar11 != 0) {
    pcVar20 = (code *)&LAB_0174fe8c;
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
        *(code **)(lVar13 + 0xf8) = pcVar20;
        uVar11 = (uint)*(undefined8 *)(lVar13 + 0x140);
        goto joined_r0x0174bb78;
      }
      if (iVar9 == 1) {
        *(code **)(lVar13 + 0x30) = pcVar20;
      }
      else {
        if (iVar9 != 2) {
          *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
          break;
        }
        *(code **)(lVar13 + 0x38) = pcVar20;
      }
      *(undefined1 *)(lVar13 + 0x58) = 1;
      *(ulong *)(lVar13 + 0x140) = *(ulong *)(lVar13 + 0x140) | 1L << (uVar22 & 0x3f);
      uVar11 = (uint)*(undefined8 *)(lVar13 + 0x140);
      goto joined_r0x0174bb78;
    }
    uVar22 = uVar22 + 1;
    lVar28 = lVar28 + 0x18;
  } while (uVar22 != 0x20);
  (&local_300)[uVar24 * 2] = pcVar26;
  (&local_2f8)[uVar24 * 2] = pcVar20;
  uVar11 = (uint)*(undefined8 *)(lVar13 + 0x140);
  uVar24 = (ulong)((int)uVar24 + 1);
joined_r0x0174bb78:
  if ((uVar11 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x140);
  }
  if ((uVar11 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x140);
  }
  uVar22 = uVar24;
  if ((uVar11 >> 0x10 & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x181);
    if ((*(byte *)(lVar28 + 0x180) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 400);
    }
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_300)[uVar24 * 2] = pcVar26;
    (&local_2f8)[uVar24 * 2] = (code *)PTR_LAB_0437fe40;
    uVar11 = (uint)*(undefined8 *)(lVar13 + 0x140);
  }
  uVar24 = uVar22;
  if ((uVar11 >> 0x1b & 1) == 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x289);
    if ((*(byte *)(lVar28 + 0x288) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x298);
    }
    uVar24 = (ulong)((int)uVar22 + 1);
    (&local_300)[uVar22 * 2] = pcVar26;
    (&local_2f8)[uVar22 * 2] = (code *)PTR_LAB_0437fe48;
  }
  uVar22 = uVar24;
  if (*(long *)(lVar13 + 0xf8) != 0) {
    lVar28 = FUN_008cca50();
    pcVar26 = (char *)(lVar28 + 0x1c9);
    if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
      pcVar26 = *(char **)(lVar28 + 0x1d8);
    }
    pcVar20 = *(code **)(lVar13 + 0xf8);
    uVar22 = (ulong)((int)uVar24 + 1);
    (&local_300)[uVar24 * 2] = pcVar26;
    (&local_2f8)[uVar24 * 2] = pcVar20;
  }
  (&local_300)[uVar22 * 2] = (char *)0x0;
  (&local_2f8)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_590,&local_300,0x290);
  memcpy(asStack_820,&local_300,0x290);
  lVar28 = FUN_008cca50();
  lVar15 = uVar22 - 1;
  pcVar26 = (&local_300)[lVar15 * 2];
  sVar14 = strlen(pcVar26);
  sVar1 = (ulong)(*(byte *)(lVar28 + 0x1c8) >> 1);
  if ((*(byte *)(lVar28 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar28 + 0x1d0);
  }
  if ((sVar14 == sVar1) &&
     (iVar9 = std::string::compare(lVar28 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar26),
     iVar9 == 0)) {
    auStack_5a0[lVar15 * 2 + 2] = 0;
    *(undefined8 *)(auStack_58f + lVar15 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_820 + lVar15 * 0x10) = (&local_300)[lVar15 * 2];
  *(undefined1 **)(asStack_820 + (lVar15 * 2 + 1) * 8) = &LAB_0174ff00;
  FUN_00151fe0(param_2,0,2);
  local_828[0] = FUN_0014feb0(param_2,0xffffffff);
  local_830 = param_2;
  if ((*puVar5 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_0437fe68);
    puVar5 = PTR_DAT_0437fe70;
    if (iVar9 != 0) {
      FUN_015c1dd0(PTR_DAT_0437fe70);
      FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437fe68);
    }
  }
  uVar10 = local_828[0];
  uVar22 = *(ulong *)(PTR_DAT_0437fe70 + 8);
  puVar5 = *(undefined **)(PTR_DAT_0437fe70 + 0x10);
  if ((*PTR_DAT_0437fe70 & 1) == 0) {
    puVar5 = PTR_DAT_0437fe70 + 1;
    uVar22 = (ulong)((byte)*PTR_DAT_0437fe70 >> 1);
  }
  FUN_001514f0(param_2,puVar5,uVar22);
  FUN_00152550(param_2,uVar10,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_0174fb80,0);
  FUN_00152550(param_2,uVar10,&DAT_0397bfcb);
  lVar28 = 0;
  do {
    if (lVar28 == 1) {
      psVar17 = asStack_820;
      pbVar16 = (byte *)FUN_015c2598();
    }
    else if (lVar28 == 0) {
      psVar17 = &local_590;
      pbVar16 = (byte *)FUN_015c0740();
    }
    else {
      psVar17 = (string *)&local_300;
      pbVar16 = (byte *)FUN_015c1b74();
    }
    pbVar21 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar21 = pbVar16 + 1;
    }
    FUN_00154450(param_2,pbVar21);
    local_838 = FUN_0014feb0(param_2,0xffffffff);
    local_870 = (undefined1 *)CONCAT44(local_870._4_4_,0x1e);
    local_840 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_870,&local_830,local_838);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00155a20(param_2,psVar17,2);
    uVar10 = local_838;
    if (*(long *)(lVar13 + 0x128) == 0) {
      lVar15 = *(long *)(lVar13 + 0x130);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_check");
      lVar15 = *(long *)(lVar13 + 0x130);
      uVar10 = local_838;
    }
    local_838 = uVar10;
    if (lVar15 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar10,"class_cast");
    }
    uVar10 = local_838;
    uVar19 = *(undefined8 *)(lVar13 + 0x108);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_03955ac7);
    uVar10 = local_838;
    uVar19 = *(undefined8 *)(lVar13 + 0x110);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar13);
    FUN_00151810(param_2,lVar23);
    FUN_001516f0(param_2,uVar19,3);
    FUN_00152550(param_2,uVar10,&DAT_0397c077);
    if (*(char *)(lVar13 + 0x58) == '\0') {
      local_870 = (undefined1 *)CONCAT44(local_870._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_870,&local_840,local_838);
    }
    else {
      local_870 = &LAB_0174fff0;
      uStack_868 = 0;
      local_860 = lVar13;
      lStack_858 = lVar23;
      FUN_0174ff50(param_2,1,&local_870,local_838);
      local_870 = &LAB_0174fff4;
      uStack_868 = 0;
      local_860 = lVar13;
      lStack_858 = lVar23;
      FUN_0174ff50(param_2,2,&local_870,local_838);
    }
    FUN_00151fe0(param_2,0,3);
    uVar10 = FUN_0014feb0(param_2,0xffffffff);
    local_870 = (undefined1 *)CONCAT44(local_870._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_870,&local_830,uVar10);
    if (*(undefined1 **)(lVar13 + 0x100) == (undefined1 *)0x0) {
      if (*(char *)(lVar13 + 0x138) != '\0') goto LAB_0174c204;
LAB_0174bf0c:
      if (param_2 == 0) goto LAB_0174c258;
LAB_0174bf14:
      uVar12 = local_838;
      FUN_00150260(param_2,uVar10);
    }
    else {
      uStack_868 = 0;
      local_870 = *(undefined1 **)(lVar13 + 0x100);
      local_860 = lVar13;
      lStack_858 = lVar23;
      FUN_0174ff50(param_2,4,&local_870,uVar10);
      if (*(char *)(lVar13 + 0x138) == '\0') goto LAB_0174bf0c;
LAB_0174c204:
      local_870 = &LAB_0174fff0;
      uStack_868 = 0;
      local_860 = lVar13;
      lStack_858 = lVar23;
      FUN_0174ff50(param_2,1,&local_870,uVar10);
      local_870 = &LAB_0174fff4;
      uStack_868 = 0;
      local_860 = lVar13;
      lStack_858 = lVar23;
      FUN_0174ff50(param_2,2,&local_870,uVar10);
      if (param_2 != 0) goto LAB_0174bf14;
LAB_0174c258:
      uVar12 = local_838;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar12);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_840,0xfffffffe);
    lVar28 = lVar28 + 1;
    if (lVar28 == 3) {
      FUN_0174d72c();
      puVar5 = DAT_043ceb98;
      if ((DAT_043ceb88 & 1) == 0) {
        puVar5 = &DAT_043ceb89;
      }
      FUN_00154450(param_2,puVar5);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_870._0_4_ = 0x1e;
      FUN_008fe304(&local_840,param_2,&local_870,&local_830,uVar10);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar13);
      FUN_00155a20(param_2,&local_300,2);
      FUN_00151fe0(param_2,0,3);
      uVar12 = FUN_0014feb0(param_2,0xffffffff);
      local_870 = (undefined1 *)CONCAT44(local_870._4_4_,0x1e);
      FUN_008fe304(&local_840,param_2,&local_870,&local_830,uVar12);
      local_870 = *(undefined1 **)(lVar13 + 0x100);
      if (local_870 != (undefined1 *)0x0) {
        uStack_868 = 0;
        local_860 = lVar13;
        lStack_858 = lVar23;
        FUN_0174ff50(param_2,4,&local_870,uVar12);
      }
      local_870 = &LAB_017500b8;
      uStack_868 = 0;
      local_850 = 0;
      puStack_848 = &DAT_03a7c560;
      local_860 = lVar13;
      lStack_858 = lVar23;
      FUN_01750000(param_2,1,&local_870,uVar12);
      local_870 = &LAB_017500bc;
      uStack_868 = 0;
      local_850 = 0;
      puStack_848 = &DAT_03a7c560;
      local_860 = lVar13;
      lStack_858 = lVar23;
      FUN_01750000(param_2,2,&local_870,uVar12);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar12);
      }
      FUN_00152ae0(param_2,uVar10);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_828[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


