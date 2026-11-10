/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b525ac; name: FUN_01b525ac
 */


void FUN_01b525ac(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  size_t sVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  ushort *puVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined1 *local_118 [5];
  long *local_f0;
  long *local_d0;
  long *local_b0;
  long *local_90;
  long *local_70;
  
  param_1[0x10] = 0;
  param_1[4] = &DAT_cbf29ce484222645;
  param_1[5] = &DAT_03996322;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x12] = 0;
  puVar5 = PTR_DAT_04379520;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar26 = DAT_043f1798;
  lVar4 = tpidr_el0;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar4 + 0x20), *(long *)(lVar4 + 0x20) == 0)) {
    *(long *)(lVar4 + 0x20) = DAT_043f1798;
    lVar9 = lVar26;
  }
  param_1[0x19] = 0;
  param_1[0x15] = lVar9;
  param_1[0x16] = 0x1fffffffffffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  lVar26 = DAT_043f1798;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
      (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
     (lVar9 = *(long *)(lVar4 + 0x20), *(long *)(lVar4 + 0x20) == 0)) {
    *(long *)(lVar4 + 0x20) = DAT_043f1798;
    lVar9 = lVar26;
  }
  param_1[0x1c] = lVar9;
  param_1[0x1d] = 0x1fffffffffffffff;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((long)param_1 + 0x102) = 0;
  param_1[0x21] = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    uVar14 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = *(undefined8 *)((long)param_2 + uVar13);
    }
  }
  *param_1 = uVar14;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    uVar14 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = *(undefined8 *)((long)param_2 + uVar13);
    }
  }
  param_1[1] = uVar14;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar13 == 0)) {
    lVar26 = 0;
  }
  else {
    puVar23 = (uint *)((long)param_2 + uVar13);
    lVar26 = (long)puVar23 + (ulong)*puVar23;
  }
  sVar10 = strlen((char *)(lVar26 + 4));
  bVar2 = *(byte *)(lVar26 + 4);
  puVar22 = &DAT_cbf29ce484222645;
  if (bVar2 != 0) {
    puVar22 = &DAT_cbf29ce484222645;
    pbVar21 = (byte *)(lVar26 + 5);
    do {
      puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar21;
      pbVar21 = pbVar21 + 1;
    } while (bVar2 != 0);
  }
  param_1[6] = sVar10;
  plVar11 = (long *)param_1[7];
  param_1[7] = 0;
  param_1[4] = puVar22;
  param_1[5] = (char *)(lVar26 + 4);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  param_1[7] = 0;
  uVar29 = 0;
  if ((0xc < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar13 != 0)) {
    uVar29 = *(undefined4 *)((long)param_2 + uVar13);
  }
  *(undefined4 *)(param_1 + 8) = uVar29;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xf) {
    piVar18 = (int *)0x0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7];
    piVar18 = (int *)0x0;
    if (uVar13 != 0) {
      puVar23 = (uint *)((long)param_2 + uVar13);
      piVar18 = (int *)((long)puVar23 + (ulong)*puVar23);
    }
  }
  puVar19 = (ushort *)((long)piVar18 - (long)*piVar18);
  uVar3 = *puVar19;
  if (uVar3 < 5) {
    uVar29 = 0;
    uVar31 = 0;
    uVar32 = 0;
  }
  else {
    uVar29 = 0;
    uVar31 = 0;
    if ((ulong)puVar19[2] != 0) {
      uVar31 = *(undefined4 *)((long)piVar18 + (ulong)puVar19[2]);
    }
    if (uVar3 < 7) {
      uVar32 = 0;
    }
    else {
      uVar32 = 0;
      uVar29 = 0;
      if ((ulong)puVar19[3] != 0) {
        uVar29 = *(undefined4 *)((long)piVar18 + (ulong)puVar19[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar19[4] != 0)) {
        uVar32 = *(uint *)((long)piVar18 + (ulong)puVar19[4]);
      }
    }
  }
  param_1[0xb] = (ulong)uVar32;
  param_1[10] = CONCAT44(uVar29,uVar31);
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x11) {
    piVar18 = (int *)0x0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[8];
    piVar18 = (int *)0x0;
    if (uVar13 != 0) {
      puVar23 = (uint *)((long)param_2 + uVar13);
      piVar18 = (int *)((long)puVar23 + (ulong)*puVar23);
    }
  }
  puVar19 = (ushort *)((long)piVar18 - (long)*piVar18);
  uVar3 = *puVar19;
  if (uVar3 < 5) {
    uVar29 = 0;
    uVar31 = 0;
    uVar32 = 0;
  }
  else {
    uVar29 = 0;
    uVar31 = 0;
    if ((ulong)puVar19[2] != 0) {
      uVar31 = *(undefined4 *)((long)piVar18 + (ulong)puVar19[2]);
    }
    if (uVar3 < 7) {
      uVar32 = 0;
    }
    else {
      uVar32 = 0;
      uVar29 = 0;
      if ((ulong)puVar19[3] != 0) {
        uVar29 = *(undefined4 *)((long)piVar18 + (ulong)puVar19[3]);
      }
      if ((8 < uVar3) && ((ulong)puVar19[4] != 0)) {
        uVar32 = *(uint *)((long)piVar18 + (ulong)puVar19[4]);
      }
    }
  }
  param_1[0xd] = (ulong)uVar32;
  param_1[0xc] = CONCAT44(uVar29,uVar31);
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x13) {
    uVar29 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[9];
    uVar29 = 0;
    if (uVar13 != 0) {
      uVar29 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0xe) = uVar29;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x15) {
    uVar29 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10];
    uVar29 = 0;
    if (uVar13 != 0) {
      uVar29 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)((long)param_1 + 0x74) = uVar29;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x17) {
    uVar29 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xb];
    uVar29 = 0;
    if (uVar13 != 0) {
      uVar29 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0xf) = uVar29;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x2d) ||
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x16], uVar13 == 0)) {
    puVar23 = (uint *)0x0;
    uVar32 = uRam0000000000000000;
  }
  else {
    puVar23 = (uint *)((long)param_2 + uVar13);
    puVar23 = (uint *)((long)puVar23 + (ulong)*puVar23);
    uVar32 = *puVar23;
  }
  if (uVar32 != 0) {
    lVar26 = 0;
    uVar13 = 0;
    do {
      uVar32 = puVar23[uVar13 + 1];
      FUN_01935500(local_118,(long)puVar23 + lVar26 + (ulong)uVar32 + 4);
      uVar12 = FUN_0165ff30(local_118);
      if ((uVar12 & 1) != 0) {
        param_1[0x10] = (long)puVar23 + lVar26 + (ulong)uVar32 + 4;
        *(int *)(param_1 + 0x11) = (int)uVar13;
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if (local_f0 != (long *)0x0) {
          (**(code **)(*local_f0 + 0x20))();
        }
        break;
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      uVar13 = uVar13 + 1;
      lVar26 = lVar26 + 4;
    } while (uVar13 < *puVar23);
  }
  lVar26 = (long)*param_2;
  puVar24 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (0x2e - lVar26)));
  puVar24 = (uint *)((long)puVar24 + (ulong)*puVar24);
  puVar23 = puVar24 + 1;
  uVar13 = (ulong)*puVar24;
  if (uVar13 != 0) {
    puVar24 = puVar23 + uVar13;
    puVar1 = param_1 + 0x15;
    do {
      local_118[0] = (undefined1 *)((long)puVar23 + (ulong)*puVar23);
      uVar13 = param_1[0x13];
      if (uVar13 < (ulong)param_1[0x14]) {
        FUN_01b5f8a4(puVar1,uVar13,local_118);
        param_1[0x13] = param_1[0x13] + 8;
      }
      else {
        uVar12 = param_1[0x16];
        lVar26 = (long)(uVar13 - param_1[0x12]) >> 3;
        uVar13 = lVar26 + 1;
        if (0x7ffffffffffffffe < uVar12) {
          uVar12 = 0x7fffffffffffffff;
        }
        if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = param_1[0x14] - param_1[0x12];
        uVar15 = lVar9 >> 2;
        if (uVar13 <= uVar15) {
          uVar13 = uVar15;
        }
        if ((ulong)(lVar9 >> 3) < uVar12 >> 1) {
          uVar12 = uVar13;
        }
        if (uVar12 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 << 3,8);
          if (lVar9 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar16 = lVar9 + lVar26 * 8;
        FUN_01b5f8a4(puVar1,lVar16,local_118);
        lVar27 = param_1[0x12];
        lVar20 = param_1[0x13];
        lVar26 = lVar16 + 8;
        if (lVar20 != lVar27) {
          do {
            lVar16 = lVar16 + -8;
            lVar20 = lVar20 + -8;
            FUN_01b5f97c(puVar1,lVar16,lVar20);
          } while (lVar27 != lVar20);
          lVar27 = param_1[0x12];
        }
        lVar20 = param_1[0x14];
        param_1[0x12] = lVar16;
        param_1[0x13] = lVar26;
        param_1[0x14] = lVar9 + uVar12 * 8;
        if (lVar27 != 0) {
          plVar11 = (long *)*puVar1;
          uVar13 = (**(code **)(*plVar11 + 0xc0))(plVar11);
          if ((uVar13 & 1) != 0) {
            if (*(char *)(lVar4 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar4 + 0x38d488) = 1;
              *(undefined8 *)(lVar4 + 0x38d478) = 0;
              *(undefined8 *)(lVar4 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar4 + 0x38d480)) {
              FUN_02bcc824(plVar11,lVar27,lVar20 - lVar27,8);
              goto LAB_01b52b5c;
            }
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,lVar27,lVar20 - lVar27,8);
        }
      }
LAB_01b52b5c:
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar24);
    lVar26 = (long)*param_2;
  }
  lVar26 = -lVar26;
  uVar13 = (ulong)*(ushort *)((long)param_2 + lVar26 + 0x30);
  puVar23 = (uint *)((long)param_2 + uVar13);
  uVar12 = (ulong)*puVar23;
  puVar23 = (uint *)((long)puVar23 + uVar12);
  puVar24 = puVar23 + 1;
  uVar15 = (ulong)*puVar23;
  if (uVar15 != 0) {
    puVar1 = param_1 + 0x1c;
    lVar26 = (long)param_2 + uVar12 + uVar13 + 9;
    puVar23 = puVar24;
    do {
      local_118[0] = &DAT_cbf29ce484222645;
      puVar25 = puVar23 + 1;
      bVar2 = *(byte *)((long)puVar25 + (ulong)*puVar23);
      if (bVar2 != 0) {
        pbVar21 = (byte *)(lVar26 + (ulong)*puVar23);
        do {
          local_118[0] = (undefined1 *)(((ulong)local_118[0] ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar21;
          pbVar21 = pbVar21 + 1;
        } while (bVar2 != 0);
      }
      uVar13 = param_1[0x1a];
      if (uVar13 < (ulong)param_1[0x1b]) {
        FUN_01666d2c(puVar1,uVar13,local_118);
        param_1[0x1a] = param_1[0x1a] + 8;
      }
      else {
        uVar12 = param_1[0x1d];
        lVar9 = (long)(uVar13 - param_1[0x19]) >> 3;
        uVar13 = lVar9 + 1;
        if (0x7ffffffffffffffe < uVar12) {
          uVar12 = 0x7fffffffffffffff;
        }
        if (uVar12 < uVar13) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar16 = param_1[0x1b] - param_1[0x19];
        uVar17 = lVar16 >> 2;
        if (uVar13 <= uVar17) {
          uVar13 = uVar17;
        }
        if ((ulong)(lVar16 >> 3) < uVar12 >> 1) {
          uVar12 = uVar13;
        }
        if (uVar12 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 << 3,8);
          if (lVar16 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar27 = lVar16 + lVar9 * 8;
        FUN_01666d2c(puVar1,lVar27,local_118);
        lVar20 = param_1[0x19];
        lVar28 = param_1[0x1a];
        lVar9 = lVar27 + 8;
        if (lVar28 != lVar20) {
          do {
            lVar27 = lVar27 + -8;
            lVar28 = lVar28 + -8;
            FUN_01666d2c(puVar1,lVar27,lVar28);
          } while (lVar20 != lVar28);
          lVar20 = param_1[0x19];
        }
        lVar28 = param_1[0x1b];
        param_1[0x19] = lVar27;
        param_1[0x1a] = lVar9;
        param_1[0x1b] = lVar16 + uVar12 * 8;
        if (lVar20 != 0) {
          plVar11 = (long *)*puVar1;
          uVar13 = (**(code **)(*plVar11 + 0xc0))(plVar11);
          if ((uVar13 & 1) != 0) {
            if (*(char *)(lVar4 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar4 + 0x38d488) = 1;
              *(undefined8 *)(lVar4 + 0x38d478) = 0;
              *(undefined8 *)(lVar4 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar4 + 0x38d480)) {
              FUN_02bcc824(plVar11,lVar20,lVar28 - lVar20,8);
              goto LAB_01b52cc4;
            }
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,lVar20,lVar28 - lVar20,8);
        }
      }
LAB_01b52cc4:
      lVar26 = lVar26 + 4;
      puVar23 = puVar25;
    } while (puVar25 != puVar24 + uVar15);
    lVar26 = -(long)*param_2;
  }
  if (*(ushort *)((long)param_2 + lVar26) < 0x19) {
    bVar7 = false;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 + lVar26))[0xc];
    bVar7 = false;
    if (uVar13 != 0) {
      bVar7 = *(char *)((long)param_2 + uVar13) != '\0';
    }
  }
  *(bool *)(param_1 + 0x20) = bVar7;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1b) {
    bVar7 = false;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xd];
    bVar7 = false;
    if (uVar13 != 0) {
      bVar7 = *(char *)((long)param_2 + uVar13) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x101) = bVar7;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1d) {
    bVar7 = false;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xe];
    bVar7 = false;
    if (uVar13 != 0) {
      bVar7 = *(char *)((long)param_2 + uVar13) != '\0';
    }
  }
  *(bool *)((long)param_1 + 0x102) = bVar7;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x1f) {
    uVar14 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xf];
    uVar14 = 0;
    if (uVar13 != 0) {
      uVar14 = *(undefined8 *)((long)param_2 + uVar13);
    }
  }
  param_1[0x21] = uVar14;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x21) ||
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x10], uVar13 == 0)) {
    *(undefined4 *)(param_1 + 0x22) = 0;
  }
  else {
    fVar30 = *(float *)((long)param_2 + uVar13);
    if (1.1920929e-07 <= fVar30) goto LAB_01b52e40;
  }
  fVar30 = 1.0;
LAB_01b52e40:
  *(float *)(param_1 + 0x22) = fVar30;
  uVar29 = 0;
  if ((0x22 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x11], uVar13 != 0)) {
    uVar29 = *(undefined4 *)((long)param_2 + uVar13);
  }
  *(undefined4 *)((long)param_1 + 0x114) = uVar29;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x25) {
    uVar29 = 0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x12];
    uVar29 = 0;
    if (uVar13 != 0) {
      uVar29 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0x23) = uVar29;
  uVar29 = 0;
  uVar31 = 0;
  if (0x26 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x13];
    uVar31 = 0;
    if (uVar13 != 0) {
      uVar31 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)((long)param_1 + 0x11c) = uVar31;
  uVar31 = 0;
  if (0x28 < *(ushort *)((long)param_2 - (long)*param_2)) {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x14];
    uVar31 = 0;
    if (uVar13 != 0) {
      uVar31 = *(undefined4 *)((long)param_2 + uVar13);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = uVar31;
  if ((0x2a < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x15], uVar13 != 0)) {
    uVar29 = *(undefined4 *)((long)param_2 + uVar13);
  }
  *(undefined4 *)((long)param_1 + 0x124) = uVar29;
  return;
}


