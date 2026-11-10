/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02842d3c; name: FUN_02842d3c
 */


undefined1  [16] FUN_02842d3c(long *param_1)

{
  byte *__s;
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  long *plVar10;
  undefined4 uVar11;
  long lVar12;
  undefined1 *puVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long *local_3e0 [4];
  long *local_3c0;
  char *local_3b0;
  long *local_3a8 [4];
  long *local_388;
  char *local_378;
  char acStack_370 [784];
  
  auVar25 = FUN_02a768ac();
  uVar23 = auVar25._0_8_;
  uVar19 = uVar23 >> 0x28;
  if ((uVar23 >> 0x20 & 0xff) == 0) {
    uVar23 = 0;
    goto LAB_02843488;
  }
  iVar7 = auVar25._8_4_;
  if (iVar7 == 0) {
    auVar25 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar23 = auVar25._0_8_;
    uVar19 = uVar23 >> 0x28;
    if (*(char *)((long)param_1 + 0x1e2) != '\0') {
      nn::fs::CloseFile(param_1[0x1c]);
      *(undefined1 *)((long)param_1 + 0x1e2) = 0;
    }
    iVar7 = auVar25._8_4_;
  }
  uVar23 = uVar23 >> 0x20;
  if ((iVar7 != 0) || ((uVar23 & 0xff) == 0)) goto LAB_02843488;
  piVar14 = (int *)(param_1[0x4a] + (ulong)*(uint *)param_1[0x4a]);
  param_1[0x4e] = (long)piVar14;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
     ((uVar15 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar15 == 0 ||
      (puVar1 = (uint *)((long)piVar14 + uVar15), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
      puVar1 == (uint *)0x0)))) goto LAB_02843488;
  lVar20 = param_1[0x57];
  lVar12 = param_1[0x56];
  lVar16 = lVar20 - lVar12 >> 4;
  uVar15 = (ulong)*puVar1;
  lVar24 = lVar16 * -0x5555555555555555 - uVar15;
  if ((ulong)(lVar16 * -0x5555555555555555) < uVar15) {
    plVar10 = param_1 + 0x59;
    if ((ulong)((param_1[0x58] - lVar20 >> 4) * -0x5555555555555555) <
        uVar15 + lVar16 * 0x5555555555555555) {
      uVar17 = param_1[0x5a];
      if (0x7ffffffffffffffe < uVar17) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (uVar17 < uVar15) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar20 = param_1[0x58] - lVar12 >> 4;
      if ((ulong)(lVar20 * -0x5555555555555555) < uVar17 >> 1) {
        uVar17 = lVar20 * 0x5555555555555556;
        if (uVar15 <= uVar17) goto LAB_02842e80;
LAB_02842e88:
        lVar20 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar15 * 0x30,8);
        uVar17 = uVar15;
        if (lVar20 == 0) {
          (**(code **)(*(long *)*plVar10 + 0xb8))();
        }
      }
      else {
LAB_02842e80:
        uVar15 = uVar17;
        if (uVar17 != 0) goto LAB_02842e88;
        lVar20 = 0;
      }
      lVar16 = lVar20 + lVar16 * 0x10;
      lVar12 = lVar16;
      do {
        FUN_02843fd0(plVar10,lVar12);
        lVar12 = lVar12 + 0x30;
        bVar6 = lVar24 != -1;
        lVar24 = lVar24 + 1;
      } while (bVar6);
      lVar24 = param_1[0x56];
      lVar21 = param_1[0x57];
      if (lVar21 == lVar24) {
        lVar21 = lVar24;
      }
      else {
        do {
          lVar16 = lVar16 + -0x30;
          lVar21 = lVar21 + -0x30;
          FUN_028440c4(plVar10,lVar16,lVar21);
        } while (lVar24 != lVar21);
        lVar24 = param_1[0x56];
        lVar21 = param_1[0x57];
      }
      param_1[0x56] = lVar16;
      lVar16 = param_1[0x58];
      param_1[0x57] = lVar12;
      param_1[0x58] = lVar20 + uVar17 * 0x30;
      while (lVar21 != lVar24) {
        lVar21 = lVar21 + -0x30;
        FUN_00d20548(lVar21);
      }
      if (lVar24 != 0) {
        plVar10 = (long *)*plVar10;
        uVar15 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar15 & 1) != 0) {
          lVar20 = tpidr_el0;
          if (*(char *)(lVar20 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar20 + 0x38d488) = 1;
            *(undefined8 *)(lVar20 + 0x38d478) = 0;
            *(undefined8 *)(lVar20 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar20 + 0x38d480)) {
            FUN_02bcc824(plVar10,lVar24,lVar16 - lVar24,8);
            goto LAB_02842f08;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar24,lVar16 - lVar24,8);
      }
    }
    else {
      do {
        FUN_02843fd0(plVar10,lVar20);
        lVar20 = param_1[0x57] + 0x30;
        bVar6 = lVar24 != -1;
        lVar24 = lVar24 + 1;
        param_1[0x57] = lVar20;
      } while (bVar6);
    }
  }
  else if (lVar24 != 0) {
    lVar12 = lVar12 + uVar15 * 0x30;
    while (lVar12 != lVar20) {
      lVar20 = lVar20 + -0x30;
      FUN_00d20548(lVar20);
    }
    param_1[0x57] = lVar12;
  }
LAB_02842f08:
  lVar24 = param_1[0x50];
  uVar15 = (ulong)*puVar1;
  uVar17 = lVar24 - param_1[0x4f] >> 5;
  if (uVar17 < uVar15) {
    FUN_02844260(param_1 + 0x4f,uVar15 - uVar17);
LAB_02842f34:
    uVar4 = *puVar1;
  }
  else {
    if (uVar17 == uVar15) goto LAB_02842f34;
    lVar20 = param_1[0x4f] + uVar15 * 0x20;
    while (lVar20 != lVar24) {
      plVar10 = (long *)(lVar24 + -8);
      lVar24 = lVar24 + -0x20;
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 0x20))();
      }
    }
    param_1[0x50] = lVar20;
    uVar4 = *puVar1;
  }
  if (uVar4 != 0) {
    uVar15 = 0;
    do {
      piVar14 = (int *)((long)(puVar1 + uVar15 + 1) + (ulong)puVar1[uVar15 + 1]);
      if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
         (uVar17 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar17 == 0)) {
        lVar24 = 0;
      }
      else {
        puVar2 = (uint *)((long)piVar14 + uVar17);
        lVar24 = (long)puVar2 + (ulong)*puVar2;
      }
      __s = (byte *)(lVar24 + 4);
      local_378 = strrchr((char *)__s,0x2f);
      local_378 = local_378 + 1;
      memset(acStack_370,0,0x301);
      puVar3 = (undefined8 *)PTR_PTR_04379d00;
      if (param_1[0xd] != 0) {
        puVar3 = (undefined8 *)(param_1[0xd] + 0x60);
      }
      snprintf(acStack_370,0x301,"%s",*puVar3);
      pcVar8 = strrchr(acStack_370,0x2f);
      local_3b0 = acStack_370;
      pcVar8[1] = '\0';
      FUN_0121f9f4(local_3e0,&local_3b0,&local_378);
      FUN_00d797e0(local_3a8,local_3e0);
      if (local_3e0[0] != (long *)0x0) {
        (**(code **)(*local_3e0[0] + 0x20))();
      }
      sVar9 = strlen((char *)__s);
      bVar5 = *__s;
      puVar13 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        puVar13 = &DAT_cbf29ce484222645;
        pbVar18 = (byte *)(lVar24 + 5);
        do {
          puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar5 != 0);
      }
      puVar3 = (undefined8 *)(param_1[0x4f] + uVar15 * 0x20);
      puVar3[2] = sVar9;
      *puVar3 = puVar13;
      puVar3[1] = __s;
      plVar22 = puVar3 + 3;
      plVar10 = (long *)*plVar22;
      *plVar22 = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      *plVar22 = 0;
      if (local_3a8[0] == (long *)0x0) {
        plVar10 = (long *)PTR_PTR_04379d00;
      }
      else {
        plVar10 = local_3a8[0] + 0xc;
      }
      lVar24 = *plVar10;
      piVar14 = (int *)param_1[0x4e];
      if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xd) ||
         (uVar17 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6], uVar17 == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = *(char *)((long)piVar14 + uVar17) != '\0';
      }
      if (((*PTR_DAT_0437b180 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b180);
      }
      lVar20 = *(long *)PTR_DAT_0437b188;
      *(long *)PTR_DAT_0437b190 = lVar20;
      uVar4 = *(byte *)(lVar20 + 0x50) - 1;
      if (uVar4 < 10) {
        uVar11 = *(undefined4 *)(&DAT_03a7e4b0 + (long)(char)uVar4 * 4);
      }
      else {
        uVar11 = 2;
      }
      FUN_0284358c(local_3e0,lVar24,bVar6,uVar11);
      lVar24 = param_1[0x3d];
      if (lVar24 == 0) {
        lVar24 = param_1[1];
        lVar20 = param_1[0x37];
        if (lVar20 == 0) goto LAB_02843374;
LAB_02843180:
        plVar10 = (long *)0x0;
        if (*(int *)(lVar20 + 0xc) != 0) {
          plVar10 = param_1 + 0x36;
        }
      }
      else {
        lVar20 = param_1[0x37];
        if (lVar20 != 0) goto LAB_02843180;
LAB_02843374:
        plVar10 = (long *)0x0;
      }
      FUN_00d24350(param_1[0x56] + uVar15 * 0x30,0,local_3e0,0,lVar24,plVar10);
      if (local_3c0 != (long *)0x0) {
        (**(code **)(*local_3c0 + 0x20))();
      }
      if (local_3e0[0] != (long *)0x0) {
        (**(code **)(*local_3e0[0] + 0x20))();
      }
      if (local_388 != (long *)0x0) {
        (**(code **)(*local_388 + 0x20))();
      }
      if (local_3a8[0] != (long *)0x0) {
        (**(code **)(*local_3a8[0] + 0x20))();
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *puVar1);
  }
LAB_02843488:
  auVar26._0_8_ = uVar19 << 0x28 | auVar25._0_8_ & 0xffffffff | (uVar23 & 0xff) << 0x20;
  auVar26._8_8_ = auVar25._8_8_ & 0xffffffff;
  return auVar26;
}


