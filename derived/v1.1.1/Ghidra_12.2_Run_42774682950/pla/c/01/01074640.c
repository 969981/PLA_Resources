/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01074640; name: FUN_01074640
 */


undefined8 FUN_01074640(long param_1,long param_2)

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
  
  if (((DAT_043b9f38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b9f38), iVar7 != 0)) {
    local_2b0 = 0;
    local_2b8 = (code *)0x0;
    local_2c0 = (char *)0x2e6c6f7308;
    if (((DAT_043b9e08 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b9e08), iVar7 != 0)) {
      FUN_010785c0();
      FUN_00100250(PTR__string_04379718,&DAT_043b9df0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b9e08);
    }
    puVar15 = DAT_043b9e00;
    if ((DAT_043b9df0 & 1) == 0) {
      puVar15 = &DAT_043b9df1;
    }
    pcVar24 = (char *)std::string::append((char *)&local_2c0,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043b9f20,psVar14);
    lVar11 = local_2b0;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2c0 & 1) != 0) && (local_2b0 != 0)) {
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
          goto LAB_01075968;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_01075968:
    FUN_00100250(PTR__string_04379718,&DAT_043b9f20,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b9f38);
  }
  std::string::string(&local_510,(string *)&DAT_043b9f20);
  iVar7 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043b9f18);
  sVar1 = (ulong)((byte)local_510 >> 1);
  if (((byte)local_510 & 1) != 0) {
    sVar1 = local_508;
  }
  std::string::append((ulong)&local_510,(char)iVar7);
  if (((byte)local_510 & 1) == 0) {
    puVar25 = auStack_50f;
    local_508 = (size_t)((byte)local_510 >> 1);
  }
  else {
    puVar25 = local_500;
  }
  snprintf(puVar25 + (sVar1 - 1),local_508,"%d",(ulong)DAT_043b9f18);
  DAT_043b9f18 = DAT_043b9f18 + 1;
  if (((DAT_043b9f58 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b9f58), iVar7 != 0)) {
    local_2b0 = 0;
    local_2b8 = (code *)0x0;
    local_2c0 = (char *)0x2e6c6f7308;
    if (((DAT_043b9e08 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b9e08), iVar7 != 0)) {
      FUN_010785c0();
      FUN_00100250(PTR__string_04379718,&DAT_043b9df0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043b9e08);
    }
    puVar15 = DAT_043b9e00;
    if ((DAT_043b9df0 & 1) == 0) {
      puVar15 = &DAT_043b9df1;
    }
    pcVar24 = (char *)std::string::append((char *)&local_2c0,(ulong)puVar15);
    psVar14 = (string *)std::string::append(pcVar24);
    std::string::string((string *)&DAT_043b9f40,psVar14);
    lVar11 = local_2b0;
    plVar5 = DAT_043f1798;
    if ((((ulong)local_2c0 & 1) != 0) && (local_2b0 != 0)) {
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
          goto LAB_01075ad8;
        }
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar11,0,8);
    }
LAB_01075ad8:
    FUN_00100250(PTR__string_04379718,&DAT_043b9f40,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b9f58);
  }
  puVar15 = DAT_043b9f50;
  if ((DAT_043b9f40 & 1) == 0) {
    puVar15 = &DAT_043b9f41;
  }
  if (((byte)local_510 & 1) == 0) {
    puVar25 = (undefined1 *)((ulong)&local_510 | 1);
  }
  else {
    puVar25 = local_500;
  }
  if (((DAT_043b9f68 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b9f68), iVar7 != 0)) {
    DAT_043b9f60 = 0xe8;
    __cxa_guard_release(&DAT_043b9f68);
  }
  if (((DAT_043b9f78 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b9f78), iVar7 != 0)) {
    DAT_043b9f70 = 0xef;
    __cxa_guard_release(&DAT_043b9f78);
  }
  uVar20 = DAT_043b9f60;
  lVar11 = FUN_00153520(param_2,DAT_043b9f60);
  if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0xe8)) ||
     (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
     puVar18 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar20 = DAT_043b9f70;
    lVar11 = FUN_00153520(param_2,DAT_043b9f70);
    if ((uVar20 < ((ulong)(uint)-(int)lVar11 & 7 | 0xe8)) ||
       (puVar18 = (undefined8 *)(lVar11 + ((ulong)(uint)-(int)lVar11 & 7)),
       puVar18 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0107b150();
      puVar2 = DAT_043b9f90;
      if ((DAT_043b9f80 & 1) == 0) {
        puVar2 = &DAT_043b9f81;
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
  *puVar18 = &PTR_FUN_041ef558;
  memcpy(puVar18 + 0xc,(void *)(param_1 + 0x60),0x88);
  iVar7 = FUN_00154450(param_2,puVar25);
  if (iVar7 != 0) {
    FUN_001516f0(param_2,&LAB_0107b110,0);
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
  if ((((byte)local_510 & 1) != 0) && (local_500 != (undefined1 *)0x0)) {
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
        FUN_02bcc824(plVar23,local_500,0,8);
        goto LAB_010749ac;
      }
    }
    (**(code **)(*plVar23 + 0x18))(plVar23,local_500,0,8);
  }
LAB_010749ac:
  memset(&local_2c0,0,0x250);
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
  pcVar17 = FUN_01078fac;
  if (uVar9 != 0) {
    pcVar17 = FUN_01078dbc;
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
            *(code **)(lVar11 + 0x98) = pcVar17;
            goto LAB_01074ba8;
          }
          *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      uVar22 = 0;
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
      goto LAB_01074ba8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  uVar22 = 1;
  local_2c0 = pcVar24;
  local_2b8 = pcVar17;
LAB_01074ba8:
  pcVar24 = *(char **)(lVar11 + 0x70);
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
  pcVar17 = (code *)&LAB_0107908c;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_01078ff4;
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
            *(code **)(lVar11 + 0x98) = pcVar17;
            goto LAB_01074ce8;
          }
          *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
      goto LAB_01074ce8;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2c0)[uVar22 * 2] = pcVar24;
  (&local_2b8)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_01074ce8:
  pcVar24 = *(char **)(lVar11 + 0x80);
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
  pcVar17 = FUN_010792b4;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_010790cc;
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
            *(code **)(lVar11 + 0x98) = pcVar17;
            goto LAB_01074e28;
          }
          *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
      goto LAB_01074e28;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2c0)[uVar22 * 2] = pcVar24;
  (&local_2b8)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_01074e28:
  pcVar24 = *(char **)(lVar11 + 0x88);
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
  pcVar17 = (code *)&LAB_0107ad0c;
  if (uVar9 != 0) {
    pcVar17 = (code *)&LAB_0107930c;
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
            *(code **)(lVar11 + 0x98) = pcVar17;
            goto LAB_01074f38;
          }
          *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
      goto LAB_01074f38;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2c0)[uVar22 * 2] = pcVar24;
  (&local_2b8)[uVar22 * 2] = pcVar17;
  uVar22 = (ulong)((int)uVar22 + 1);
LAB_01074f38:
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
  pcVar17 = FUN_0107af08;
  if (uVar9 != 0) {
    pcVar17 = FUN_0107aec0;
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
        *(code **)(lVar11 + 0x98) = pcVar17;
        uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
        goto joined_r0x0107501c;
      }
      if (iVar7 == 1) {
        *(code **)(lVar11 + 0x30) = pcVar17;
      }
      else {
        if (iVar7 != 2) {
          *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
          break;
        }
        *(code **)(lVar11 + 0x38) = pcVar17;
      }
      *(undefined1 *)(lVar11 + 0x58) = 1;
      *(ulong *)(lVar11 + 0xe0) = *(ulong *)(lVar11 + 0xe0) | 1L << (uVar20 & 0x3f);
      uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
      goto joined_r0x0107501c;
    }
    uVar20 = uVar20 + 1;
    lVar26 = lVar26 + 0x18;
  } while (uVar20 != 0x20);
  (&local_2c0)[uVar22 * 2] = pcVar24;
  (&local_2b8)[uVar22 * 2] = pcVar17;
  uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
  uVar22 = (ulong)((int)uVar22 + 1);
joined_r0x0107501c:
  if ((uVar9 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
  }
  if ((uVar9 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
  }
  if ((uVar9 >> 0x10 & 1) == 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x181);
    if ((*(byte *)(lVar26 + 0x180) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 400);
    }
    (&local_2c0)[uVar22 * 2] = pcVar24;
    (&local_2b8)[uVar22 * 2] = (code *)&LAB_01079970;
    uVar9 = (uint)*(undefined8 *)(lVar11 + 0xe0);
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
    (&local_2c0)[uVar22 * 2] = pcVar24;
    (&local_2b8)[uVar22 * 2] = (code *)&LAB_01079968;
  }
  uVar22 = uVar20;
  if (*(long *)(lVar11 + 0x98) != 0) {
    lVar26 = FUN_008cca50();
    pcVar24 = (char *)(lVar26 + 0x1c9);
    if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
      pcVar24 = *(char **)(lVar26 + 0x1d8);
    }
    pcVar17 = *(code **)(lVar11 + 0x98);
    uVar22 = (ulong)((int)uVar20 + 1);
    (&local_2c0)[uVar20 * 2] = pcVar24;
    (&local_2b8)[uVar20 * 2] = pcVar17;
  }
  (&local_2c0)[uVar22 * 2] = (char *)0x0;
  (&local_2b8)[uVar22 * 2] = (code *)0x0;
  memcpy(&local_510,&local_2c0,0x250);
  memcpy(asStack_760,&local_2c0,0x250);
  lVar26 = FUN_008cca50();
  lVar13 = uVar22 - 1;
  pcVar24 = (&local_2c0)[lVar13 * 2];
  sVar12 = strlen(pcVar24);
  sVar1 = (ulong)(*(byte *)(lVar26 + 0x1c8) >> 1);
  if ((*(byte *)(lVar26 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar26 + 0x1d0);
  }
  if ((sVar12 == sVar1) &&
     (iVar7 = std::string::compare(lVar26 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar24),
     iVar7 == 0)) {
    auStack_520[lVar13 * 2 + 2] = 0;
    *(undefined8 *)(auStack_50f + lVar13 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_760 + lVar13 * 0x10) = (&local_2c0)[lVar13 * 2];
  *(code **)(asStack_760 + (lVar13 * 2 + 1) * 8) = FUN_0107af50;
  FUN_00151fe0(param_2,0,2);
  local_768[0] = FUN_0014feb0(param_2,0xffffffff);
  local_770 = param_2;
  if (((DAT_043b9e08 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b9e08), iVar7 != 0)) {
    FUN_010785c0();
    FUN_00100250(PTR__string_04379718,&DAT_043b9df0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043b9e08);
  }
  uVar8 = local_768[0];
  if ((DAT_043b9df0 & 1) == 0) {
    uVar20 = (ulong)(DAT_043b9df0 >> 1);
    puVar15 = &DAT_043b9df1;
  }
  else {
    uVar20 = DAT_043b9df8;
    puVar15 = DAT_043b9e00;
  }
  FUN_001514f0(param_2,puVar15,uVar20);
  FUN_00152550(param_2,uVar8,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_01079880,0);
  FUN_00152550(param_2,uVar8,&DAT_0397bfcb);
  lVar26 = 0;
  do {
    if (lVar26 == 1) {
      psVar14 = asStack_760;
      FUN_01076dd8();
      pbVar19 = &DAT_043b9d58;
      puVar15 = &DAT_043b9d59;
      puVar18 = &DAT_043b9d68;
    }
    else if (lVar26 == 0) {
      psVar14 = &local_510;
      FUN_01076be4();
      puVar15 = &DAT_043b9ce1;
      puVar18 = &DAT_043b9cf0;
      pbVar19 = &DAT_043b9ce0;
    }
    else {
      psVar14 = (string *)&local_2c0;
      FUN_01076fcc();
      puVar15 = &DAT_043b9dd1;
      puVar18 = &DAT_043b9de0;
      pbVar19 = &DAT_043b9dd0;
    }
    if ((*pbVar19 & 1) != 0) {
      puVar15 = (undefined *)*puVar18;
    }
    FUN_00154450(param_2,puVar15);
    local_778 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    local_780 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,local_778);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00155a20(param_2,psVar14,2);
    uVar8 = local_778;
    if (*(long *)(lVar11 + 200) == 0) {
      lVar13 = *(long *)(lVar11 + 0xd0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_check");
      lVar13 = *(long *)(lVar11 + 0xd0);
      uVar8 = local_778;
    }
    local_778 = uVar8;
    if (lVar13 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar8,"class_cast");
    }
    uVar8 = local_778;
    uVar16 = *(undefined8 *)(lVar11 + 0xa8);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_03955ac7);
    uVar8 = local_778;
    uVar16 = *(undefined8 *)(lVar11 + 0xb0);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar11);
    FUN_00151810(param_2,lVar21);
    FUN_001516f0(param_2,uVar16,3);
    FUN_00152550(param_2,uVar8,&DAT_0397c077);
    if (*(char *)(lVar11 + 0x58) == '\0') {
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_7b0,&local_780,local_778);
    }
    else {
      local_7b0 = &LAB_0107b040;
      uStack_7a8 = 0;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_0107afa0(param_2,1,&local_7b0,local_778);
      local_7b0 = &LAB_0107b044;
      uStack_7a8 = 0;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_0107afa0(param_2,2,&local_7b0,local_778);
    }
    FUN_00151fe0(param_2,0,3);
    uVar8 = FUN_0014feb0(param_2,0xffffffff);
    local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_7b0,&local_770,uVar8);
    if (*(undefined1 **)(lVar11 + 0xa0) == (undefined1 *)0x0) {
      if (*(char *)(lVar11 + 0xd8) == '\0') goto LAB_010753ec;
LAB_010756d8:
      local_7b0 = &LAB_0107b040;
      uStack_7a8 = 0;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_0107afa0(param_2,1,&local_7b0,uVar8);
      local_7b0 = &LAB_0107b044;
      uStack_7a8 = 0;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_0107afa0(param_2,2,&local_7b0,uVar8);
      if (param_2 == 0) goto LAB_01075728;
LAB_010753f4:
      uVar10 = local_778;
      FUN_00150260(param_2,uVar8);
    }
    else {
      uStack_7a8 = 0;
      local_7b0 = *(undefined1 **)(lVar11 + 0xa0);
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_0107afa0(param_2,4,&local_7b0,uVar8);
      if (*(char *)(lVar11 + 0xd8) != '\0') goto LAB_010756d8;
LAB_010753ec:
      if (param_2 != 0) goto LAB_010753f4;
LAB_01075728:
      uVar10 = local_778;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar10);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_780,0xfffffffe);
    lVar26 = lVar26 + 1;
    if (lVar26 == 3) {
      FUN_0107720c();
      puVar15 = DAT_043b9e58;
      if ((DAT_043b9e48 & 1) == 0) {
        puVar15 = &DAT_043b9e49;
      }
      FUN_00154450(param_2,puVar15);
      uVar8 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0._0_4_ = 0x1e;
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar8);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar11);
      FUN_00155a20(param_2,&local_2c0,2);
      FUN_00151fe0(param_2,0,3);
      uVar10 = FUN_0014feb0(param_2,0xffffffff);
      local_7b0 = (undefined1 *)CONCAT44(local_7b0._4_4_,0x1e);
      FUN_008fe304(&local_780,param_2,&local_7b0,&local_770,uVar10);
      local_7b0 = *(undefined1 **)(lVar11 + 0xa0);
      if (local_7b0 != (undefined1 *)0x0) {
        uStack_7a8 = 0;
        local_7a0 = lVar11;
        lStack_798 = lVar21;
        FUN_0107afa0(param_2,4,&local_7b0,uVar10);
      }
      local_7b0 = &LAB_0107b108;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a78948;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_0107b050(param_2,1,&local_7b0,uVar10);
      local_7b0 = &LAB_0107b10c;
      uStack_7a8 = 0;
      local_790 = 0;
      puStack_788 = &DAT_03a78948;
      local_7a0 = lVar11;
      lStack_798 = lVar21;
      FUN_0107b050(param_2,2,&local_7b0,uVar10);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar10);
      }
      FUN_00152ae0(param_2,uVar8);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_768[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


