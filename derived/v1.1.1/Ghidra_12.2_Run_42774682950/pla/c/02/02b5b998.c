/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5b998; name: FUN_02b5b998
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02b5b998(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  long *plVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  int *piVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long lVar25;
  uint *puVar26;
  uint uVar27;
  ulong *puVar28;
  long *plVar29;
  long lVar30;
  char *pcVar31;
  ulong uVar32;
  undefined8 uVar33;
  ulong uVar34;
  long lVar35;
  uint uVar36;
  ulong local_128;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long lStack_70;
  
  puVar6 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar15 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_FUN_04285338;
  param_1[1] = lVar15;
  param_1[9] = (long)&PTR_LAB_04285370;
  lVar9 = *param_2;
  param_1[0xb] = lVar9;
  if (lVar9 != 0) {
    piVar16 = (int *)(lVar9 + 0x50);
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar7) {
        *piVar16 = *piVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar23 = &DAT_cbf29ce484222645;
  param_1[0xc] = (long)&DAT_cbf29ce484222645;
  plVar29 = param_1 + 0x10;
  param_1[0xd] = (long)&DAT_03996322;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_02b5cae8(plVar29);
  plVar3 = param_1 + 0x17;
  FUN_02b5cae8(plVar3);
  plVar1 = param_1 + 0x1e;
  FUN_0290f77c();
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar15 = DAT_043f1798;
  lVar9 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar10 = lVar15;
  }
  param_1[0x2a] = 0;
  param_1[0x2d] = (long)&DAT_cbf29ce484222645;
  param_1[0x2e] = (long)&DAT_03996322;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x28] = lVar10;
  param_1[0x29] = 0x2aaaaaaaaaaaaaa;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  piVar16 = (int *)*param_3;
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 5) ||
     (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[2], uVar20 == 0)) {
    lVar15 = 0;
  }
  else {
    puVar26 = (uint *)((long)piVar16 + uVar20);
    lVar15 = (long)puVar26 + (ulong)*puVar26;
  }
  sVar11 = strlen((char *)(lVar15 + 4));
  bVar4 = *(byte *)(lVar15 + 4);
  if (bVar4 != 0) {
    pbVar17 = (byte *)(lVar15 + 5);
    do {
      puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar4 != 0);
  }
  param_1[0xe] = sVar11;
  plVar12 = (long *)param_1[0xf];
  param_1[0xf] = 0;
  param_1[0xc] = (long)puVar23;
  param_1[0xd] = lVar15 + 4;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  param_1[0xf] = 0;
  piVar16 = (int *)*param_3;
  puVar26 = (uint *)((long)piVar16 + (ulong)*(ushort *)((long)piVar16 + (8 - (long)*piVar16)));
  FUN_02b5cbdc(plVar29,*(undefined4 *)((long)puVar26 + (ulong)*puVar26));
  piVar16 = (int *)*param_3;
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 9) ||
     (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[4], uVar20 == 0)) {
    lVar15 = 0;
  }
  else {
    puVar26 = (uint *)((long)piVar16 + uVar20);
    lVar15 = (long)puVar26 + (ulong)*puVar26;
  }
  FUN_02b5d248(plVar29,lVar15);
  piVar16 = (int *)*param_3;
  puVar26 = (uint *)((long)piVar16 + (ulong)*(ushort *)((long)piVar16 + (10 - (long)*piVar16)));
  FUN_02b5cbdc(plVar3,*(undefined4 *)((long)puVar26 + (ulong)*puVar26));
  piVar16 = (int *)*param_3;
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 0xb) ||
     (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[5], uVar20 == 0)) {
    lVar15 = 0;
  }
  else {
    puVar26 = (uint *)((long)piVar16 + uVar20);
    lVar15 = (long)puVar26 + (ulong)*puVar26;
  }
  FUN_02b5d248(plVar3,lVar15);
  piVar16 = (int *)*param_3;
  puVar26 = (uint *)((long)piVar16 + (ulong)*(ushort *)((long)piVar16 + (0xc - (long)*piVar16)));
  uVar19 = *(uint *)((long)puVar26 + (ulong)*puVar26);
  uVar24 = (ulong)uVar19;
  uVar20 = param_1[0x1f] - param_1[0x1e] >> 2;
  if (uVar20 < uVar24) {
    FUN_02b5ee30(plVar1,uVar24 - uVar20);
  }
  else if (uVar20 != uVar24) {
    param_1[0x1f] = param_1[0x1e] + uVar24 * 4;
  }
  piVar16 = (int *)*param_3;
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 0xf) ||
     (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[7], uVar20 == 0)) {
    uVar36 = 0;
  }
  else {
    uVar36 = (uint)*(byte *)((long)piVar16 + uVar20);
  }
  *(char *)(param_1 + 0x2c) = (char)uVar36;
  piVar16 = (int *)*param_3;
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 0x11) ||
     (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[8], uVar20 == 0)) {
    uVar27 = 0;
    *(undefined1 *)((long)param_1 + 0x161) = 0;
  }
  else {
    bVar4 = *(byte *)((long)piVar16 + uVar20);
    uVar27 = (uint)bVar4;
    *(byte *)((long)param_1 + 0x161) = bVar4;
  }
  if (uVar19 != 0) {
    piVar16 = (int *)*param_3;
    if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 0xd) ||
       (uVar20 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[6], uVar20 == 0)) {
      lVar15 = 0;
    }
    else {
      puVar26 = (uint *)((long)piVar16 + uVar20);
      lVar15 = (long)puVar26 + (ulong)*puVar26;
    }
    memcpy((void *)*plVar1,(void *)(lVar15 + 4),uVar24 << 2);
    uVar36 = (uint)*(byte *)(param_1 + 0x2c);
    uVar27 = (uint)*(byte *)((long)param_1 + 0x161);
  }
  uVar34 = (long)(param_3[2] - param_3[1]) >> 3;
  lVar10 = param_1[0x25];
  lVar15 = param_1[0x26];
  lVar22 = lVar15 - lVar10 >> 5;
  uVar24 = lVar22 * -0x5555555555555555;
  uVar20 = uVar34 + lVar22 * 0x5555555555555555;
  if (uVar34 < uVar24 || uVar20 == 0) {
    if (uVar34 < uVar24) {
      lVar22 = lVar10 + uVar34 * 0x60;
      if (lVar22 != lVar15) {
        lVar30 = 0;
        do {
          lVar25 = lVar15 + lVar30;
          if (*(char *)(lVar25 + -0x28) != '\0') {
            if (*(long **)(lVar25 + -8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar25 + -8) + 0x20))();
            }
            *(undefined1 *)(lVar25 + -0x28) = 0;
          }
          lVar35 = *(long *)(lVar25 + -0x60);
          if (lVar35 != 0) {
            plVar29 = *(long **)(lVar25 + -0x48);
            *(long *)(lVar25 + -0x58) = lVar35;
            lVar25 = *(long *)(lVar25 + -0x50) - lVar35;
            uVar20 = (**(code **)(*plVar29 + 0xc0))(plVar29);
            if ((uVar20 & 1) != 0) {
              if (*(char *)(lVar9 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar9 + 0x38d488) = 1;
                *(undefined8 *)(lVar9 + 0x38d478) = 0;
                *(undefined8 *)(lVar9 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar9 + 0x38d480)) {
                FUN_02bcc824(plVar29,lVar35,lVar25,1);
                goto LAB_02b5be9c;
              }
            }
            (**(code **)(*plVar29 + 0x18))(plVar29,lVar35,lVar25,1);
          }
LAB_02b5be9c:
          lVar30 = lVar30 + -0x60;
        } while ((lVar10 + uVar34 * 0x60) - lVar15 != lVar30);
      }
      param_1[0x26] = lVar22;
    }
  }
  else {
    plVar29 = param_1 + 0x28;
    if ((ulong)((param_1[0x27] - lVar15 >> 5) * -0x5555555555555555) < uVar20) {
      uVar20 = param_1[0x29];
      if (0x7ffffffffffffffe < uVar20) {
        uVar20 = 0x7fffffffffffffff;
      }
      if (uVar20 < uVar34) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = param_1[0x27] - lVar10 >> 5;
      if ((((ulong)(lVar15 * -0x5555555555555555) < uVar20 >> 1) &&
          (uVar20 = lVar15 * 0x5555555555555556, uVar32 = uVar34, uVar20 < uVar34)) ||
         (uVar32 = uVar20, uVar20 != 0)) {
        lVar15 = (**(code **)(*(long *)*plVar29 + 0x10))((long *)*plVar29,uVar32 * 0x60,8);
        uVar20 = uVar32;
        if (lVar15 == 0) {
          (**(code **)(*(long *)*plVar29 + 0xb8))();
        }
      }
      else {
        lVar15 = 0;
      }
      lVar30 = lVar15 + lVar22 * 0x20;
      lVar22 = uVar24 - uVar34;
      lVar10 = lVar30;
      do {
        FUN_02b5f160(plVar29,lVar10);
        lVar10 = lVar10 + 0x60;
        bVar7 = lVar22 != -1;
        lVar22 = lVar22 + 1;
      } while (bVar7);
      lVar22 = param_1[0x25];
      lVar25 = param_1[0x26];
      if (lVar25 == lVar22) {
        lVar25 = lVar22;
      }
      else {
        do {
          while( true ) {
            lVar35 = *plVar29;
            lVar30 = lVar30 + -0x60;
            lVar25 = lVar25 + -0x60;
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0
               )) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar13 == 0) break;
            if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_02b5caa8:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar35;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
            FUN_02b5dfa0(lVar30,lVar25);
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            if (lVar22 == lVar25) goto LAB_02b5c0e8;
          }
          FUN_02b5dfa0(lVar30,lVar25);
        } while (lVar22 != lVar25);
LAB_02b5c0e8:
        lVar22 = param_1[0x26];
        lVar25 = param_1[0x25];
      }
      lVar35 = param_1[0x27];
      param_1[0x25] = lVar30;
      param_1[0x26] = lVar10;
      param_1[0x27] = lVar15 + uVar20 * 0x60;
      if (lVar22 != lVar25) {
        lVar15 = 0;
        do {
          lVar10 = lVar22 + lVar15;
          if (*(char *)(lVar10 + -0x28) != '\0') {
            if (*(long **)(lVar10 + -8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar10 + -8) + 0x20))();
            }
            *(undefined1 *)(lVar10 + -0x28) = 0;
          }
          lVar30 = *(long *)(lVar10 + -0x60);
          if (lVar30 != 0) {
            plVar3 = *(long **)(lVar10 + -0x48);
            *(long *)(lVar10 + -0x58) = lVar30;
            lVar10 = *(long *)(lVar10 + -0x50) - lVar30;
            uVar20 = (**(code **)(*plVar3 + 0xc0))(plVar3);
            if ((uVar20 & 1) != 0) {
              if (*(char *)(lVar9 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar9 + 0x38d488) = 1;
                *(undefined8 *)(lVar9 + 0x38d478) = 0;
                *(undefined8 *)(lVar9 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar9 + 0x38d480)) {
                FUN_02bcc824(plVar3,lVar30,lVar10,1);
                goto LAB_02b5c14c;
              }
            }
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar30,lVar10,1);
          }
LAB_02b5c14c:
          lVar15 = lVar15 + -0x60;
        } while (lVar25 - lVar22 != lVar15);
      }
      if (lVar25 != 0) {
        plVar29 = (long *)*plVar29;
        uVar20 = (**(code **)(*plVar29 + 0xc0))(plVar29);
        if ((uVar20 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            FUN_02bcc824(plVar29,lVar25,lVar35 - lVar25,8);
            goto LAB_02b5c2e4;
          }
        }
        (**(code **)(*plVar29 + 0x18))(plVar29,lVar25,lVar35 - lVar25,8);
      }
    }
    else {
      lVar10 = uVar24 - uVar34;
      do {
        FUN_02b5f160(plVar29,lVar15);
        lVar15 = param_1[0x26] + 0x60;
        bVar7 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        param_1[0x26] = lVar15;
      } while (bVar7);
    }
  }
LAB_02b5c2e4:
  lVar15 = param_3[1];
  if (param_3[2] != lVar15) {
    uVar36 = uVar36 + uVar27;
    uVar24 = (ulong)(uVar36 * 9);
    uVar19 = 0;
    uVar20 = 0;
    lVar10 = (ulong)uVar36 * -9;
    do {
      lVar22 = param_1[0x25];
      if (uVar36 == 0) {
        lVar30 = *(long *)(*param_2 + 0x58);
        local_80 = *(undefined8 *)(lVar30 + 8);
        local_78 = *(undefined8 *)(lVar30 + 0x6098);
        lStack_70 = lVar30 + 0x10;
        FUN_02ba0f00(&local_b0,*(undefined8 *)(lVar30 + 0x6120),&local_80,param_1[0xd],
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + uVar20 * 8) + 0x68) + 8));
        pcVar31 = (char *)(lVar22 + uVar20 * 0x60 + 0x38);
        if (*pcVar31 == '\0') {
          if ((char)local_b0 != '\0') {
            lVar22 = lVar22 + uVar20 * 0x60;
            *(undefined8 *)(lVar22 + 0x40) = local_a8;
            *(undefined8 *)(lVar22 + 0x48) = local_a0;
            *(undefined8 *)(lVar22 + 0x50) = local_98;
            *(long **)(lVar22 + 0x58) = local_90;
            *pcVar31 = '\x01';
            goto joined_r0x02b5c550;
          }
        }
        else {
          if ((char)local_b0 == '\0') {
            plVar29 = *(long **)(lVar22 + uVar20 * 0x60 + 0x58);
            if (plVar29 != (long *)0x0) {
              (**(code **)(*plVar29 + 0x20))();
            }
            *pcVar31 = '\0';
            cVar5 = (char)local_b0;
          }
          else {
            lVar22 = lVar22 + uVar20 * 0x60;
            plVar29 = *(long **)(lVar22 + 0x58);
            *(undefined8 *)(lVar22 + 0x40) = local_a8;
            *(undefined8 *)(lVar22 + 0x48) = local_a0;
            *(undefined8 *)(lVar22 + 0x50) = local_98;
            *(undefined8 *)(lVar22 + 0x58) = 0;
            if (plVar29 != (long *)0x0) {
              (**(code **)(*plVar29 + 0x20))();
            }
            *(long **)(lVar22 + 0x58) = local_90;
joined_r0x02b5c550:
            local_90 = (long *)0x0;
            cVar5 = (char)local_b0;
          }
          if (cVar5 != '\0') {
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            local_b0 = local_b0 & 0xffffffffffffff00;
          }
        }
      }
      else {
        puVar14 = (ulong *)(lVar22 + uVar20 * 0x60);
        puVar28 = (ulong *)(lVar22 + uVar20 * 0x60 + 8);
        uVar34 = *puVar28;
        pcVar31 = (char *)*puVar14;
        uVar32 = uVar34 - (long)pcVar31;
        if (uVar32 < uVar24) {
          lVar15 = lVar22 + uVar20 * 0x60;
          plVar29 = (long *)(lVar15 + 0x10);
          puVar2 = (undefined8 *)(lVar15 + 0x18);
          if (*plVar29 - uVar34 < uVar24 - uVar32) {
            uVar18 = *(ulong *)(lVar22 + uVar20 * 0x60 + 0x20);
            if (0x7ffffffffffffffe < uVar18) {
              uVar18 = 0x7fffffffffffffff;
            }
            if (uVar18 < uVar24) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar21 = *plVar29 - (long)pcVar31;
            if (((uVar21 < uVar18 >> 1) &&
                (uVar18 = uVar21 * 2, local_128 = uVar24, uVar18 < uVar24)) ||
               (local_128 = uVar18, uVar18 != 0)) {
              lVar15 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,local_128,1);
              if (lVar15 == 0) {
                (**(code **)(*(long *)*puVar2 + 0xb8))();
                goto LAB_02b5c584;
              }
            }
            else {
              local_128 = 0;
LAB_02b5c584:
              lVar15 = 0;
            }
            uVar32 = lVar15 + uVar32;
            lVar30 = (lVar10 + uVar34) - (long)pcVar31;
            uVar34 = uVar32;
            do {
              FUN_02b5f360(puVar2,uVar34);
              uVar34 = uVar34 + 1;
              bVar7 = lVar30 != -1;
              lVar30 = lVar30 + 1;
            } while (bVar7);
            uVar21 = *puVar14;
            uVar18 = *puVar28;
            if (uVar18 != uVar21) {
              do {
                uVar33 = *puVar2;
                if (((*PTR_DAT_04379520 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), iVar8 != 0)) {
                  FUN_008a62a4(PTR_DAT_04379528);
                  FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
                lVar30 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                if (lVar30 == 0) {
                  *(undefined1 *)(uVar32 - 1) = *(undefined1 *)(uVar18 - 1);
                }
                else {
                  if (0xf < *(ulong *)(lVar30 + 0x80)) goto LAB_02b5caa8;
                  *(undefined8 *)(lVar30 + *(ulong *)(lVar30 + 0x80) * 8) = uVar33;
                  *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
                  *(undefined1 *)(uVar32 - 1) = *(undefined1 *)(uVar18 - 1);
                  *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + -1;
                }
                uVar18 = uVar18 - 1;
                uVar32 = uVar32 - 1;
              } while (uVar21 != uVar18);
              uVar21 = *puVar14;
            }
            *puVar14 = uVar32;
            *puVar28 = uVar34;
            lVar30 = *plVar29;
            *plVar29 = lVar15 + local_128;
            if (uVar21 != 0) {
              plVar29 = (long *)*puVar2;
              uVar34 = (**(code **)(*plVar29 + 0xc0))(plVar29);
              if ((uVar34 & 1) != 0) {
                if (*(char *)(lVar9 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar9 + 0x38d488) = 1;
                  *(undefined8 *)(lVar9 + 0x38d478) = 0;
                  *(undefined8 *)(lVar9 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar9 + 0x38d480)) {
                  FUN_02bcc824(plVar29,uVar21,lVar30 - uVar21,1);
                  goto LAB_02b5c73c;
                }
              }
              (**(code **)(*plVar29 + 0x18))(plVar29,uVar21,lVar30 - uVar21,1);
            }
          }
          else {
            lVar15 = (lVar10 + uVar34) - (long)pcVar31;
            do {
              FUN_02b5f360(puVar2,uVar34);
              uVar34 = *puVar28 + 1;
              bVar7 = lVar15 != -1;
              lVar15 = lVar15 + 1;
              *puVar28 = uVar34;
            } while (bVar7);
          }
LAB_02b5c73c:
          pcVar31 = (char *)*puVar14;
        }
        else if (uVar32 != uVar24) {
          *puVar28 = (ulong)(pcVar31 + uVar24);
        }
        puVar26 = (uint *)(*plVar1 + (ulong)uVar19 * 4);
        uVar34 = (ulong)uVar36;
        do {
          snprintf(pcVar31,9,"%08X",(ulong)*puVar26);
          pcVar31[8] = '_';
          uVar34 = uVar34 - 1;
          pcVar31 = pcVar31 + 9;
          puVar26 = puVar26 + 1;
        } while (uVar34 != 0);
        *(undefined1 *)(*puVar14 + (uVar24 - 1)) = 0;
        local_b0 = *puVar14;
        FUN_02b5d9e0(&local_88,param_1 + 0xc,&local_b0);
        if (local_88 == (long *)0x0) {
          plVar29 = (long *)PTR_PTR_04379d00;
        }
        else {
          plVar29 = local_88 + 0xc;
        }
        lVar15 = *(long *)(*param_2 + 0x58);
        lStack_70 = lVar15 + 0x10;
        local_80 = *(undefined8 *)(lVar15 + 8);
        local_78 = *(undefined8 *)(lVar15 + 0x6098);
        FUN_02ba0f00(&local_b0,*(undefined8 *)(lVar15 + 0x6120),&local_80,*plVar29,
                     *(undefined8 *)(*(long *)(*(long *)(param_3[1] + uVar20 * 8) + 0x68) + 8));
        plVar29 = local_90;
        pcVar31 = (char *)(lVar22 + uVar20 * 0x60 + 0x38);
        if (*pcVar31 == '\0') {
          if ((char)local_b0 != '\0') {
            lVar22 = lVar22 + uVar20 * 0x60;
            *(undefined8 *)(lVar22 + 0x40) = local_a8;
            *(undefined8 *)(lVar22 + 0x48) = local_a0;
            *(undefined8 *)(lVar22 + 0x50) = local_98;
            local_90 = (long *)0x0;
            *(long **)(lVar22 + 0x58) = plVar29;
            *pcVar31 = '\x01';
            goto joined_r0x02b5c8b8;
          }
        }
        else {
          if ((char)local_b0 == '\0') {
            plVar29 = *(long **)(lVar22 + uVar20 * 0x60 + 0x58);
            if (plVar29 != (long *)0x0) {
              (**(code **)(*plVar29 + 0x20))();
            }
            *pcVar31 = '\0';
          }
          else {
            lVar22 = lVar22 + uVar20 * 0x60;
            plVar29 = *(long **)(lVar22 + 0x58);
            *(undefined8 *)(lVar22 + 0x40) = local_a8;
            *(undefined8 *)(lVar22 + 0x48) = local_a0;
            *(undefined8 *)(lVar22 + 0x50) = local_98;
            *(undefined8 *)(lVar22 + 0x58) = 0;
            if (plVar29 != (long *)0x0) {
              (**(code **)(*plVar29 + 0x20))();
            }
            plVar29 = local_90;
            local_90 = (long *)0x0;
            *(long **)(lVar22 + 0x58) = plVar29;
          }
joined_r0x02b5c8b8:
          if ((char)local_b0 != '\0') {
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            local_b0 = local_b0 & 0xffffffffffffff00;
          }
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
      }
      lVar15 = param_3[1];
      uVar20 = uVar20 + 1;
      uVar19 = uVar19 + uVar36;
    } while (uVar20 < (ulong)(param_3[2] - lVar15 >> 3));
  }
  return;
}


