/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01774b34; name: FUN_01774b34
 */


undefined8 FUN_01774b34(long param_1,long param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  byte *pbVar17;
  string *psVar18;
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
  long lVar29;
  undefined1 *local_750;
  undefined8 uStack_748;
  long local_740;
  long lStack_738;
  undefined8 local_730;
  undefined *puStack_728;
  long local_720;
  undefined4 local_718;
  long local_710;
  undefined4 local_708 [2];
  string asStack_700 [544];
  undefined8 auStack_4e0 [2];
  string local_4d0;
  undefined1 auStack_4cf [7];
  size_t local_4c8;
  undefined1 *local_4c0;
  char *apcStack_2b0 [2];
  char *local_2a0;
  code *local_298;
  long local_290;
  undefined1 auStack_70 [16];
  
  if (((DAT_043cf750 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cf750), iVar10 != 0)) {
    local_290 = 0;
    local_298 = (code *)0x0;
    local_2a0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437fc98 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_0437fc98);
      puVar2 = PTR_DAT_0437fca0;
      if (iVar10 != 0) {
        FUN_015bafd0(PTR_DAT_0437fca0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437fc98);
      }
    }
    pcVar27 = (char *)FUN_01777638(&local_2a0,PTR_DAT_0437fca0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043cf738,psVar18);
    lVar14 = local_290;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2a0 & 1) != 0) && (local_290 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
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
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_01775bb0;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_01775bb0:
    FUN_00100250(PTR__string_04379718,&DAT_043cf738,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cf750);
  }
  std::string::string(&local_4d0,(string *)&DAT_043cf738);
  iVar10 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043cf730);
  sVar1 = (ulong)((byte)local_4d0 >> 1);
  if (((byte)local_4d0 & 1) != 0) {
    sVar1 = local_4c8;
  }
  std::string::append((ulong)&local_4d0,(char)iVar10);
  if (((byte)local_4d0 & 1) == 0) {
    puVar28 = auStack_4cf;
    local_4c8 = (size_t)((byte)local_4d0 >> 1);
  }
  else {
    puVar28 = local_4c0;
  }
  snprintf(puVar28 + (sVar1 - 1),local_4c8,"%d",(ulong)DAT_043cf730);
  DAT_043cf730 = DAT_043cf730 + 1;
  if (((DAT_043cf770 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cf770), iVar10 != 0)) {
    local_290 = 0;
    local_298 = (code *)0x0;
    local_2a0 = (char *)0x2e6c6f7308;
    if ((*PTR_DAT_0437fc98 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_0437fc98);
      puVar2 = PTR_DAT_0437fca0;
      if (iVar10 != 0) {
        FUN_015bafd0(PTR_DAT_0437fca0);
        FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437fc98);
      }
    }
    pcVar27 = (char *)FUN_01777638(&local_2a0,PTR_DAT_0437fca0);
    psVar18 = (string *)std::string::append(pcVar27);
    std::string::string((string *)&DAT_043cf758,psVar18);
    lVar14 = local_290;
    plVar8 = DAT_043f1798;
    if ((((ulong)local_2a0 & 1) != 0) && (local_290 != 0)) {
      lVar24 = tpidr_el0;
      plVar26 = *(long **)(lVar24 + 0x20);
      if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
        *(long **)(lVar24 + 0x20) = DAT_043f1798;
        plVar26 = plVar8;
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
          FUN_02bcc824(plVar26,lVar14,0,8);
          goto LAB_01775d04;
        }
      }
      (**(code **)(*plVar26 + 0x18))(plVar26,lVar14,0,8);
    }
LAB_01775d04:
    FUN_00100250(PTR__string_04379718,&DAT_043cf758,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043cf770);
  }
  puVar2 = DAT_043cf768;
  if ((DAT_043cf758 & 1) == 0) {
    puVar2 = &DAT_043cf759;
  }
  if (((byte)local_4d0 & 1) == 0) {
    puVar28 = (undefined1 *)((ulong)&local_4d0 | 1);
  }
  else {
    puVar28 = local_4c0;
  }
  if (((DAT_043cf780 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cf780), iVar10 != 0)) {
    DAT_043cf778 = 200;
    __cxa_guard_release(&DAT_043cf780);
  }
  if (((DAT_043cf790 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043cf790), iVar10 != 0)) {
    DAT_043cf788 = 0xcf;
    __cxa_guard_release(&DAT_043cf790);
  }
  uVar23 = DAT_043cf778;
  lVar14 = FUN_00153520(param_2,DAT_043cf778);
  if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 200)) ||
     (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
     puVar19 == (undefined8 *)0x0)) {
    FUN_0014ff10(param_2,0xfffffffe);
    uVar23 = DAT_043cf788;
    lVar14 = FUN_00153520(param_2,DAT_043cf788);
    if ((uVar23 < ((ulong)(uint)-(int)lVar14 & 7 | 200)) ||
       (puVar19 = (undefined8 *)(lVar14 + ((ulong)(uint)-(int)lVar14 & 7)),
       puVar19 == (undefined8 *)0x0)) {
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_01778a20();
      puVar3 = DAT_043cf7a8;
      if ((DAT_043cf798 & 1) == 0) {
        puVar3 = &DAT_043cf799;
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
  lVar14 = *(long *)(param_1 + 0x18);
  puVar19[3] = lVar14;
  lVar24 = *(long *)(param_1 + 0x20);
  puVar19[4] = lVar24;
  *(undefined4 *)(puVar19 + 5) = *(undefined4 *)(param_1 + 0x28);
  if (lVar24 != 0) {
    uVar25 = puVar19[2];
    uVar23 = *(ulong *)(lVar14 + 8);
    if ((uVar25 & uVar25 - 1) == 0) {
      uVar23 = uVar25 - 1 & uVar23;
    }
    else if (uVar25 <= uVar23) {
      uVar7 = 0;
      if (uVar25 != 0) {
        uVar7 = uVar23 / uVar25;
      }
      uVar23 = uVar23 - uVar7 * uVar25;
    }
    *(undefined8 **)(puVar19[1] + uVar23 * 8) = puVar19 + 3;
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar19[10] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  puVar19[6] = uVar20;
  puVar19[7] = uVar4;
  puVar19[8] = *(undefined8 *)(param_1 + 0x40);
  puVar19[9] = *(undefined8 *)(param_1 + 0x48);
  puVar19[10] = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined1 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *puVar19 = &PTR_FUN_04225198;
  *(undefined1 *)(puVar19 + 0xb) = uVar6;
  puVar19[0xc] = *(undefined8 *)(param_1 + 0x60);
  uVar20 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  puVar19[0xf] = *(undefined8 *)(param_1 + 0x78);
  puVar19[0x10] = uVar5;
  puVar19[0xd] = uVar20;
  puVar19[0xe] = uVar4;
  uVar20 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  puVar19[0x13] = *(undefined8 *)(param_1 + 0x98);
  puVar19[0x14] = uVar5;
  puVar19[0x11] = uVar20;
  puVar19[0x12] = uVar4;
  uVar20 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  puVar19[0x17] = *(undefined8 *)(param_1 + 0xb8);
  puVar19[0x18] = uVar5;
  puVar19[0x15] = uVar20;
  puVar19[0x16] = uVar4;
  iVar10 = FUN_00154450(param_2,puVar28);
  if (iVar10 != 0) {
    FUN_001516f0(param_2,&LAB_017789e0,0);
    FUN_00152550(param_2,0xfffffffe,&DAT_0392da3c);
  }
  FUN_00152ae0(param_2,0xfffffffe);
  uVar11 = FUN_0014feb0(param_2,0xffffffff);
  if (param_2 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_2,uVar11);
  }
  FUN_001522a0(param_2,puVar2);
  FUN_0014ff10(param_2,0xfffffffe);
  FUN_00151860(param_2,puVar2);
  lVar14 = FUN_001511d0(param_2,0xffffffff);
  lVar14 = lVar14 + ((ulong)(uint)-(int)lVar14 & 7);
  FUN_0014ff10(param_2,0xfffffffe);
  plVar8 = DAT_043f1798;
  if ((((byte)local_4d0 & 1) != 0) && (local_4c0 != (undefined1 *)0x0)) {
    lVar24 = tpidr_el0;
    plVar26 = *(long **)(lVar24 + 0x20);
    if (*(long **)(lVar24 + 0x20) == (long *)0x0) {
      *(long **)(lVar24 + 0x20) = DAT_043f1798;
      plVar26 = plVar8;
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
        FUN_02bcc824(plVar26,local_4c0,0,8);
        goto LAB_01774ebc;
      }
    }
    (**(code **)(*plVar26 + 0x18))(plVar26,local_4c0,0,8);
  }
LAB_01774ebc:
  memset(&local_2a0,0,0x230);
  pcVar27 = *(char **)(lVar14 + 0x60);
  sVar15 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  lVar24 = lVar14 + 8;
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = FUN_01777e70;
  if (uVar12 != 0) {
    pcVar21 = (code *)&LAB_0177796c;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            uVar25 = 0;
            *(code **)(lVar14 + 0x78) = pcVar21;
            goto LAB_017750e0;
          }
          *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      uVar25 = 0;
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
      goto LAB_017750e0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  uVar25 = 1;
  local_2a0 = pcVar27;
  local_298 = pcVar21;
LAB_017750e0:
  pcVar27 = *(char **)(lVar14 + 0x68);
  sVar15 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_01778608;
  if (uVar12 != 0) {
    pcVar21 = (code *)&LAB_01777ec8;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar10 != 2) {
          if (iVar10 == 0x13) {
            *(code **)(lVar14 + 0x78) = pcVar21;
            goto LAB_017751f0;
          }
          *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
      goto LAB_017751f0;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_2a0)[uVar25 * 2] = pcVar27;
  (&local_298)[uVar25 * 2] = pcVar21;
  uVar25 = (ulong)((int)uVar25 + 1);
LAB_017751f0:
  pcVar27 = *(char **)(lVar14 + 0x70);
  sVar15 = strlen(pcVar27);
  sVar1 = 10;
  if (sVar15 < 0xb) {
    sVar1 = sVar15;
  }
  if (sVar1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = memcmp("__newindex",pcVar27,sVar1);
  }
  bVar9 = uVar12 == 0;
  if (uVar12 == 0) {
    uVar12 = 0xffffffff;
  }
  if (sVar15 < 0xb && bVar9) {
    uVar12 = (uint)(sVar15 < 10);
  }
  lVar29 = 0;
  uVar23 = 0;
  pcVar21 = (code *)&LAB_017787e0;
  if (uVar12 != 0) {
    pcVar21 = (code *)&LAB_017787ac;
  }
  do {
    lVar16 = FUN_008cca50();
    pbVar17 = (byte *)(lVar16 + lVar29);
    sVar15 = strlen(pcVar27);
    sVar1 = (ulong)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar17 + 8);
    }
    if ((sVar15 == sVar1) &&
       (iVar10 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
       iVar10 == 0)) {
      iVar10 = (int)uVar23;
      if (iVar10 == 0x13) {
        *(code **)(lVar14 + 0x78) = pcVar21;
        uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
        goto joined_r0x017752d4;
      }
      if (iVar10 == 1) {
        *(code **)(lVar14 + 0x30) = pcVar21;
      }
      else {
        if (iVar10 != 2) {
          *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
          break;
        }
        *(code **)(lVar14 + 0x38) = pcVar21;
      }
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(ulong *)(lVar14 + 0xc0) = *(ulong *)(lVar14 + 0xc0) | 1L << (uVar23 & 0x3f);
      uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
      goto joined_r0x017752d4;
    }
    uVar23 = uVar23 + 1;
    lVar29 = lVar29 + 0x18;
  } while (uVar23 != 0x20);
  (&local_2a0)[uVar25 * 2] = pcVar27;
  (&local_298)[uVar25 * 2] = pcVar21;
  uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
  uVar25 = (ulong)((int)uVar25 + 1);
joined_r0x017752d4:
  if ((uVar12 >> 0x11 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
  }
  if ((uVar12 >> 0x12 & 1) == 0) {
    FUN_008cca50();
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
  }
  uVar23 = uVar25;
  if ((uVar12 >> 0x10 & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x181);
    if ((*(byte *)(lVar29 + 0x180) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 400);
    }
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_2a0)[uVar25 * 2] = pcVar27;
    (&local_298)[uVar25 * 2] = (code *)PTR_LAB_0437fc70;
    uVar12 = (uint)*(undefined8 *)(lVar14 + 0xc0);
  }
  uVar25 = uVar23;
  if ((uVar12 >> 0x1b & 1) == 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x289);
    if ((*(byte *)(lVar29 + 0x288) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x298);
    }
    uVar25 = (ulong)((int)uVar23 + 1);
    (&local_2a0)[uVar23 * 2] = pcVar27;
    (&local_298)[uVar23 * 2] = (code *)PTR_LAB_0437fc78;
  }
  uVar23 = uVar25;
  if (*(long *)(lVar14 + 0x78) != 0) {
    lVar29 = FUN_008cca50();
    pcVar27 = (char *)(lVar29 + 0x1c9);
    if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
      pcVar27 = *(char **)(lVar29 + 0x1d8);
    }
    pcVar21 = *(code **)(lVar14 + 0x78);
    uVar23 = (ulong)((int)uVar25 + 1);
    (&local_2a0)[uVar25 * 2] = pcVar27;
    (&local_298)[uVar25 * 2] = pcVar21;
  }
  (&local_2a0)[uVar23 * 2] = (char *)0x0;
  (&local_298)[uVar23 * 2] = (code *)0x0;
  memcpy(&local_4d0,&local_2a0,0x230);
  memcpy(asStack_700,&local_2a0,0x230);
  lVar29 = FUN_008cca50();
  lVar16 = uVar23 - 1;
  pcVar27 = (&local_2a0)[lVar16 * 2];
  sVar15 = strlen(pcVar27);
  sVar1 = (ulong)(*(byte *)(lVar29 + 0x1c8) >> 1);
  if ((*(byte *)(lVar29 + 0x1c8) & 1) != 0) {
    sVar1 = *(size_t *)(lVar29 + 0x1d0);
  }
  if ((sVar15 == sVar1) &&
     (iVar10 = std::string::compare(lVar29 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)pcVar27),
     iVar10 == 0)) {
    auStack_4e0[lVar16 * 2 + 2] = 0;
    *(undefined8 *)(auStack_4cf + lVar16 * 0x10 + 7) = 0;
  }
  *(char **)(asStack_700 + lVar16 * 0x10) = (&local_2a0)[lVar16 * 2];
  *(undefined1 **)(asStack_700 + (lVar16 * 2 + 1) * 8) = &LAB_01778820;
  FUN_00151fe0(param_2,0,2);
  local_708[0] = FUN_0014feb0(param_2,0xffffffff);
  local_710 = param_2;
  if ((*PTR_DAT_0437fc98 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_0437fc98);
    puVar2 = PTR_DAT_0437fca0;
    if (iVar10 != 0) {
      FUN_015bafd0(PTR_DAT_0437fca0);
      FUN_00100250(PTR__string_04379718,puVar2,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437fc98);
    }
  }
  uVar11 = local_708[0];
  uVar23 = *(ulong *)(PTR_DAT_0437fca0 + 8);
  puVar2 = *(undefined **)(PTR_DAT_0437fca0 + 0x10);
  if ((*PTR_DAT_0437fca0 & 1) == 0) {
    puVar2 = PTR_DAT_0437fca0 + 1;
    uVar23 = (ulong)((byte)*PTR_DAT_0437fca0 >> 1);
  }
  FUN_001514f0(param_2,puVar2,uVar23);
  FUN_00152550(param_2,uVar11,&DAT_038f8fce);
  FUN_001516f0(param_2,&LAB_017784a0,0);
  FUN_00152550(param_2,uVar11,&DAT_0397bfcb);
  lVar29 = 0;
  do {
    if (lVar29 == 1) {
      psVar18 = asStack_700;
      pbVar17 = (byte *)FUN_015bb798();
    }
    else if (lVar29 == 0) {
      psVar18 = &local_4d0;
      pbVar17 = (byte *)FUN_015b9940();
    }
    else {
      psVar18 = (string *)&local_2a0;
      pbVar17 = (byte *)FUN_015bad74();
    }
    pbVar22 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar22 = pbVar17 + 1;
    }
    FUN_00154450(param_2,pbVar22);
    local_718 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    local_720 = param_2;
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,local_718);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00155a20(param_2,psVar18,2);
    uVar11 = local_718;
    if (*(long *)(lVar14 + 0xa8) == 0) {
      lVar16 = *(long *)(lVar14 + 0xb0);
    }
    else {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_check");
      lVar16 = *(long *)(lVar14 + 0xb0);
      uVar11 = local_718;
    }
    local_718 = uVar11;
    if (lVar16 != 0) {
      FUN_00151810(param_2);
      FUN_00152550(param_2,uVar11,"class_cast");
    }
    uVar11 = local_718;
    uVar20 = *(undefined8 *)(lVar14 + 0x88);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_03955ac7);
    uVar11 = local_718;
    uVar20 = *(undefined8 *)(lVar14 + 0x90);
    FUN_00151490(param_2);
    FUN_00151810(param_2,lVar14);
    FUN_00151810(param_2,lVar24);
    FUN_001516f0(param_2,uVar20,3);
    FUN_00152550(param_2,uVar11,&DAT_0397c077);
    if (*(char *)(lVar14 + 0x58) == '\0') {
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,1);
      FUN_008fe304(auStack_70,param_2,&local_750,&local_720,local_718);
    }
    else {
      local_750 = &LAB_01778910;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_01778870(param_2,1,&local_750,local_718);
      local_750 = &LAB_01778914;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_01778870(param_2,2,&local_750,local_718);
    }
    FUN_00151fe0(param_2,0,3);
    uVar11 = FUN_0014feb0(param_2,0xffffffff);
    local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
    FUN_008fe304(auStack_70,param_2,&local_750,&local_710,uVar11);
    if (*(undefined1 **)(lVar14 + 0x80) == (undefined1 *)0x0) {
      if (*(char *)(lVar14 + 0xb8) != '\0') goto LAB_01775958;
LAB_0177566c:
      if (param_2 == 0) goto LAB_017759a8;
LAB_01775674:
      uVar13 = local_718;
      FUN_00150260(param_2,uVar11);
    }
    else {
      uStack_748 = 0;
      local_750 = *(undefined1 **)(lVar14 + 0x80);
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_01778870(param_2,4,&local_750,uVar11);
      if (*(char *)(lVar14 + 0xb8) == '\0') goto LAB_0177566c;
LAB_01775958:
      local_750 = &LAB_01778910;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_01778870(param_2,1,&local_750,uVar11);
      local_750 = &LAB_01778914;
      uStack_748 = 0;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_01778870(param_2,2,&local_750,uVar11);
      if (param_2 != 0) goto LAB_01775674;
LAB_017759a8:
      uVar13 = local_718;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_2,uVar13);
    FUN_0014ff10(param_2,0xfffffffe);
    FUN_0014ff10(local_720,0xfffffffe);
    lVar29 = lVar29 + 1;
    if (lVar29 == 3) {
      FUN_01776df8();
      puVar2 = DAT_043cf6e0;
      if ((DAT_043cf6d0 & 1) == 0) {
        puVar2 = &DAT_043cf6d1;
      }
      FUN_00154450(param_2,puVar2);
      uVar11 = FUN_0014feb0(param_2,0xffffffff);
      local_750._0_4_ = 0x1e;
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar11);
      FUN_00151490(param_2);
      FUN_00151810(param_2,lVar14);
      FUN_00155a20(param_2,&local_2a0,2);
      FUN_00151fe0(param_2,0,3);
      uVar13 = FUN_0014feb0(param_2,0xffffffff);
      local_750 = (undefined1 *)CONCAT44(local_750._4_4_,0x1e);
      FUN_008fe304(&local_720,param_2,&local_750,&local_710,uVar13);
      local_750 = *(undefined1 **)(lVar14 + 0x80);
      if (local_750 != (undefined1 *)0x0) {
        uStack_748 = 0;
        local_740 = lVar14;
        lStack_738 = lVar24;
        FUN_01778870(param_2,4,&local_750,uVar13);
      }
      local_750 = &LAB_017789d8;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c588;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_01778920(param_2,1,&local_750,uVar13);
      local_750 = &LAB_017789dc;
      uStack_748 = 0;
      local_730 = 0;
      puStack_728 = &DAT_03a7c588;
      local_740 = lVar14;
      lStack_738 = lVar24;
      FUN_01778920(param_2,2,&local_750,uVar13);
      if (param_2 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_2,uVar13);
      }
      FUN_00152ae0(param_2,uVar11);
      FUN_0014ff10(param_2,0xfffffffe);
      FUN_0014ff70(param_2,local_708[0],0xffffffff);
      FUN_0014ff10(param_2,0xfffffffe);
      return 1;
    }
  } while( true );
}


