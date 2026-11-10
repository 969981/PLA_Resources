/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291dec8; name: FUN_0291dec8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0291dec8(long param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  string sVar5;
  undefined7 uVar6;
  string sVar7;
  undefined7 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ushort *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  long *plVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined1 *puVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  string local_d0;
  undefined7 uStack_cf;
  string local_c8;
  undefined4 uStack_c7;
  undefined1 uStack_c3;
  undefined2 uStack_c2;
  long local_c0;
  long *plStack_b8;
  long local_98;
  undefined1 *local_90;
  char *pcStack_88;
  size_t local_80;
  long *local_78;
  undefined1 *local_70;
  char *pcStack_68;
  size_t local_60;
  long *local_58;
  
  if (*(char *)(param_1 + 0x32c) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    return;
  }
  piVar13 = (int *)*param_2;
  puVar17 = (ushort *)((long)piVar13 - (long)*piVar13);
  if ((*puVar17 < 0xd) || ((ulong)puVar17[6] == 0)) {
    puVar14 = (uint *)0x0;
  }
  else {
    puVar14 = (uint *)((long)piVar13 + (ulong)puVar17[6]);
    puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
  }
  if (*puVar14 != 0) {
    uVar21 = 0;
    do {
      piVar2 = (int *)((long)(puVar14 + uVar21 + 1) + (ulong)puVar14[uVar21 + 1]);
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        lVar24 = 0;
        bVar4 = DAT_00000004;
      }
      else {
        uVar27 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar24 = 0;
        if (uVar27 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar27);
          lVar24 = (long)puVar3 + (ulong)*puVar3;
        }
        bVar4 = *(byte *)(lVar24 + 4);
      }
      if (bVar4 != 0) {
        puVar28 = &DAT_cbf29ce484222645;
        pbVar20 = (byte *)(lVar24 + 5);
        do {
          puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (bVar4 != 0);
        if (puVar28 == (undefined1 *)0xd014a4a47c51e835) {
          puVar14 = (uint *)((long)((long)piVar13 + (ulong)puVar17[6]) +
                            (uVar21 & 0xffffffff) * 4 +
                            (ulong)*(uint *)((long)piVar13 + (ulong)puVar17[6]) + 4);
          piVar2 = (int *)((long)puVar14 + (ulong)*puVar14);
          puVar14 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
          piVar2 = (int *)((long)puVar14 + (ulong)*puVar14);
          if ((((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
               (uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar21 != 0)) &&
              (*(char *)((long)piVar2 + uVar21) != '\0')) && ((param_3 & 1) == 0)) {
            return;
          }
          break;
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != *puVar14);
  }
  if ((*puVar17 < 0xd) || ((ulong)puVar17[6] == 0)) {
    puVar14 = (uint *)0x0;
    uVar11 = uRam0000000000000000;
  }
  else {
    puVar14 = (uint *)((long)piVar13 + (ulong)puVar17[6]);
    puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
    uVar11 = *puVar14;
  }
  if (uVar11 != 0) {
    uVar21 = 0;
    do {
      piVar2 = (int *)((long)(puVar14 + uVar21 + 1) + (ulong)puVar14[uVar21 + 1]);
      if (4 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
        uVar27 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar24 = 0;
        if (uVar27 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar27);
          lVar24 = (long)puVar3 + (ulong)*puVar3;
        }
        bVar4 = *(byte *)(lVar24 + 4);
        if (*(byte *)(lVar24 + 4) == 0) goto LAB_0291e0f4;
LAB_0291e0d0:
        puVar28 = &DAT_cbf29ce484222645;
        pbVar20 = (byte *)(lVar24 + 5);
        do {
          puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (bVar4 != 0);
        if (puVar28 != (undefined1 *)0x1d2b568e64793f5c) goto LAB_0291e0f4;
        puVar14 = (uint *)((long)((long)piVar13 + (ulong)puVar17[6]) +
                          (uVar21 & 0xffffffff) * 4 +
                          (ulong)*(uint *)((long)piVar13 + (ulong)puVar17[6]) + 4);
        piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
        puVar14 = (uint *)((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (8 - (long)*piVar13)))
        ;
        piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
        if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
           (uVar21 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar21 == 0)) {
          iVar34 = 0;
        }
        else {
          iVar34 = *(int *)((long)piVar13 + uVar21);
          if (99 < iVar34) break;
        }
        if (((DAT_043ecd70 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043ecd70), iVar10 != 0))
        {
          uStack_c2 = 0;
          local_d0 = (string)0x18;
          uStack_c7 = 0x6d6f646e;
          local_c0 = 0;
          uStack_cf = s__dev_urandom_038ef709._0_7_;
          local_c8 = s__dev_urandom_038ef709[7];
          uStack_c3 = 0;
          std::random_device::random_device((random_device *)&DAT_043ec3a8,&local_d0);
          lVar24 = local_c0;
          plVar22 = DAT_043f1798;
          if ((((byte)local_d0 & 1) != 0) && (local_c0 != 0)) {
            lVar30 = tpidr_el0;
            plVar29 = *(long **)(lVar30 + 0x20);
            if (*(long **)(lVar30 + 0x20) == (long *)0x0) {
              *(long **)(lVar30 + 0x20) = DAT_043f1798;
              plVar29 = plVar22;
            }
            uVar21 = (**(code **)(*plVar29 + 0xc0))(plVar29);
            if ((uVar21 & 1) != 0) {
              if (*(char *)(lVar30 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar30 + 0x38d488) = 1;
                *(undefined8 *)(lVar30 + 0x38d478) = 0;
                *(undefined8 *)(lVar30 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar30 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar30 + 0x38d480)) {
                FUN_02bcc824(plVar29,lVar24,0,8);
                goto LAB_0291ee60;
              }
            }
            (**(code **)(*plVar29 + 0x18))(plVar29,lVar24,0,8);
          }
LAB_0291ee60:
          FUN_00100250(PTR__random_device_04388068,&DAT_043ec3a8,&PTR_LOOP_0411a000);
          __cxa_guard_release(&DAT_043ecd70);
        }
        if (((DAT_043ecd78 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043ecd78), iVar10 != 0))
        {
          uVar11 = std::random_device::operator()((random_device *)&DAT_043ec3a8);
          iVar10 = (int)((ulong)uVar11 + (ulong)uVar11 * 2 >> 0x20);
          DAT_043ecd90 = uVar11 + (iVar10 + (uVar11 - iVar10 >> 1) >> 0x1e) * -0x7fffffff;
          if (DAT_043ecd90 == 0) {
            DAT_043ecd90 = 1;
          }
          __cxa_guard_release(&DAT_043ecd78);
        }
        do {
          uVar11 = (DAT_043ecd90 % 0xadc8) * 0xbc8f;
          iVar10 = 0x7fffffff;
          if ((DAT_043ecd90 / 0xadc8) * 0xd47 <= uVar11) {
            iVar10 = 0;
          }
          DAT_043ecd90 = iVar10 + uVar11 + (DAT_043ecd90 / 0xadc8) * -0xd47;
        } while ((0x7fffff7f < DAT_043ecd90 - 1) || (uVar11 = DAT_043ecd90 - 1 & 0x7f, 99 < uVar11))
        ;
        if (iVar34 <= (int)uVar11) {
          return;
        }
        break;
      }
      lVar24 = 0;
      bVar4 = DAT_00000004;
      if (DAT_00000004 != 0) goto LAB_0291e0d0;
LAB_0291e0f4:
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar11);
  }
  uVar8 = uStack_cf;
  sVar7 = local_d0;
  local_d0 = SUB81(param_1,0);
  sVar5 = local_d0;
  uStack_cf = (undefined7)((ulong)param_1 >> 8);
  uVar6 = uStack_cf;
  if (*(code **)(param_1 + 0x5d0) != (code *)0x0) {
    (**(code **)(param_1 + 0x5d0))(param_1 + 0x5f0,&local_d0);
    sVar7 = local_d0;
    uVar8 = uStack_cf;
  }
  uStack_cf = uVar8;
  local_d0 = sVar7;
  if (*(code **)(param_1 + 0x650) != (code *)0x0) {
    local_d0 = sVar5;
    uStack_cf = uVar6;
    (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_d0,param_2);
  }
  piVar13 = (int *)*param_2;
  puVar17 = (ushort *)((long)piVar13 - (long)*piVar13);
  if ((*puVar17 < 0xd) || ((ulong)puVar17[6] == 0)) {
    puVar14 = (uint *)0x0;
    uVar11 = uRam0000000000000000;
    if (uRam0000000000000000 == 0) goto LAB_0291e310;
LAB_0291e26c:
    uVar21 = 0;
    do {
      piVar2 = (int *)((long)(puVar14 + uVar21 + 1) + (ulong)puVar14[uVar21 + 1]);
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        lVar24 = 0;
        bVar4 = DAT_00000004;
      }
      else {
        uVar27 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar24 = 0;
        if (uVar27 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar27);
          lVar24 = (long)puVar3 + (ulong)*puVar3;
        }
        bVar4 = *(byte *)(lVar24 + 4);
      }
      if (bVar4 != 0) {
        pbVar20 = (byte *)(lVar24 + 5);
        puVar28 = &DAT_cbf29ce484222645;
        do {
          puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (bVar4 != 0);
        if (puVar28 == (undefined1 *)0xa5d87c9ff14c683c) break;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar11);
  }
  else {
    puVar14 = (uint *)((long)piVar13 + (ulong)puVar17[6]);
    puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
    uVar11 = *puVar14;
    if (*puVar14 != 0) goto LAB_0291e26c;
LAB_0291e310:
    uVar21 = 0;
  }
  puVar14 = (uint *)((long)((long)piVar13 + (ulong)puVar17[6]) +
                    (uVar21 & 0xffffffff) * 4 + (ulong)*(uint *)((long)piVar13 + (ulong)puVar17[6])
                    + 4);
  piVar2 = (int *)((long)puVar14 + (ulong)*puVar14);
  puVar14 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar14 + (ulong)*puVar14);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar21 == 0)) {
    lVar24 = 0;
  }
  else {
    puVar14 = (uint *)((long)piVar2 + uVar21);
    lVar24 = (long)puVar14 + (ulong)*puVar14;
  }
  pcVar1 = (char *)(lVar24 + 4);
  local_60 = strlen(pcVar1);
  bVar4 = *(byte *)(lVar24 + 4);
  local_70 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    pbVar20 = (byte *)(lVar24 + 5);
    do {
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar20;
      pbVar20 = pbVar20 + 1;
    } while (bVar4 != 0);
  }
  local_58 = (long *)0x0;
  pcStack_68 = pcVar1;
  if (((param_4 & 1) != 0) &&
     (puVar28 = *(undefined1 **)(param_1 + 0x540), puVar28 != (undefined1 *)0x0)) {
    uVar21 = (long)puVar28 - ((ulong)puVar28 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      puVar25 = (undefined1 *)((ulong)(puVar28 + -1) & (ulong)local_70);
    }
    else {
      puVar25 = local_70;
      if (puVar28 <= local_70) {
        uVar27 = 0;
        if (puVar28 != (undefined1 *)0x0) {
          uVar27 = (ulong)local_70 / (ulong)puVar28;
        }
        puVar25 = local_70 + -(uVar27 * (long)puVar28);
      }
    }
    lVar24 = *(long *)(param_1 + 0x538);
    plVar22 = *(long **)(lVar24 + (long)puVar25 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      puVar23 = puVar28 + -1;
      if (uVar21 < 2) {
        do {
          if ((undefined1 *)plVar22[1] == local_70) {
            if ((undefined1 *)plVar22[2] == local_70) goto LAB_0291e944;
          }
          else if ((undefined1 *)((ulong)plVar22[1] & (ulong)puVar23) != puVar25) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          puVar26 = (undefined1 *)plVar22[1];
          if (puVar26 == local_70) {
            if ((undefined1 *)plVar22[2] == local_70) goto LAB_0291e944;
          }
          else {
            if (puVar28 <= puVar26) {
              uVar27 = 0;
              if (puVar28 != (undefined1 *)0x0) {
                uVar27 = (ulong)puVar26 / (ulong)puVar28;
              }
              puVar26 = puVar26 + -(uVar27 * (long)puVar28);
            }
            if (puVar26 != puVar25) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  puVar17 = (ushort *)((long)piVar13 - (long)*piVar13);
  if ((*puVar17 < 0xd) || ((ulong)puVar17[6] == 0)) {
    puVar14 = (uint *)0x0;
    uVar11 = uRam0000000000000000;
    if (uRam0000000000000000 == 0) goto LAB_0291e570;
LAB_0291e4cc:
    uVar21 = 0;
    do {
      piVar2 = (int *)((long)(puVar14 + uVar21 + 1) + (ulong)puVar14[uVar21 + 1]);
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        lVar24 = 0;
        bVar4 = DAT_00000004;
      }
      else {
        uVar27 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        lVar24 = 0;
        if (uVar27 != 0) {
          puVar3 = (uint *)((long)piVar2 + uVar27);
          lVar24 = (long)puVar3 + (ulong)*puVar3;
        }
        bVar4 = *(byte *)(lVar24 + 4);
      }
      if (bVar4 != 0) {
        pbVar20 = (byte *)(lVar24 + 5);
        puVar28 = &DAT_cbf29ce484222645;
        do {
          puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar20;
          pbVar20 = pbVar20 + 1;
        } while (bVar4 != 0);
        if (puVar28 == (undefined1 *)0x352b79c017918034) break;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar11);
  }
  else {
    puVar14 = (uint *)((long)piVar13 + (ulong)puVar17[6]);
    puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
    uVar11 = *puVar14;
    if (*puVar14 != 0) goto LAB_0291e4cc;
LAB_0291e570:
    uVar21 = 0;
  }
  puVar14 = (uint *)((long)((long)piVar13 + (ulong)puVar17[6]) +
                    (uVar21 & 0xffffffff) * 4 + (ulong)*(uint *)((long)piVar13 + (ulong)puVar17[6])
                    + 4);
  piVar2 = (int *)((long)puVar14 + (ulong)*puVar14);
  puVar14 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar14 + (ulong)*puVar14);
  if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
     (uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar21 == 0)) {
    lVar24 = 0;
  }
  else {
    puVar14 = (uint *)((long)piVar2 + uVar21);
    lVar24 = (long)puVar14 + (ulong)*puVar14;
  }
  pcVar1 = (char *)(lVar24 + 4);
  local_80 = strlen(pcVar1);
  bVar4 = *(byte *)(lVar24 + 4);
  local_90 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    pbVar20 = (byte *)(lVar24 + 5);
    do {
      local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar20;
      pbVar20 = pbVar20 + 1;
    } while (bVar4 != 0);
  }
  local_78 = (long *)0x0;
  pcStack_88 = pcVar1;
  if (*pcVar1 == '\0') {
    FUN_0290b288(param_1,&local_70);
    if ((param_4 & 1) != 0) {
      FUN_029205f4(&local_d0,*(undefined8 *)(param_1 + 8),param_2);
      FUN_029201c0(param_1 + 0x538,&local_70,&local_d0);
      lVar24 = CONCAT71(uStack_cf,local_d0);
      if (lVar24 != 0) {
        local_c8 = local_d0;
        uStack_c7 = (undefined4)uStack_cf;
        uStack_c3 = (undefined1)((uint7)uStack_cf >> 0x20);
        uStack_c2 = (undefined2)((uint7)uStack_cf >> 0x28);
        lVar30 = local_c0 - lVar24;
        uVar21 = (**(code **)(*plStack_b8 + 0xc0))(plStack_b8);
        if ((uVar21 & 1) != 0) {
          lVar32 = tpidr_el0;
          if (*(char *)(lVar32 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar32 + 0x38d488) = 1;
            *(undefined8 *)(lVar32 + 0x38d478) = 0;
            *(undefined8 *)(lVar32 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar32 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar32 + 0x38d480)) {
            FUN_02bcc824(plStack_b8,lVar24,lVar30,8);
            goto joined_r0x0291ec34;
          }
        }
        (**(code **)(*plStack_b8 + 0x18))(plStack_b8,lVar24,lVar30,8);
      }
    }
  }
  else {
    puVar17 = (ushort *)((long)piVar13 - (long)*piVar13);
    if ((*puVar17 < 0xd) || ((ulong)puVar17[6] == 0)) {
      puVar14 = (uint *)0x0;
      uVar11 = uRam0000000000000000;
      if (uRam0000000000000000 == 0) goto LAB_0291e7b0;
LAB_0291e644:
      uVar21 = 0;
      do {
        piVar2 = (int *)((long)(puVar14 + uVar21 + 1) + (ulong)puVar14[uVar21 + 1]);
        if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
          lVar24 = 0;
          bVar4 = DAT_00000004;
        }
        else {
          uVar27 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
          lVar24 = 0;
          if (uVar27 != 0) {
            puVar3 = (uint *)((long)piVar2 + uVar27);
            lVar24 = (long)puVar3 + (ulong)*puVar3;
          }
          bVar4 = *(byte *)(lVar24 + 4);
        }
        if (bVar4 != 0) {
          pbVar20 = (byte *)(lVar24 + 5);
          puVar28 = &DAT_cbf29ce484222645;
          do {
            puVar28 = (undefined1 *)(((ulong)puVar28 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar20;
            pbVar20 = pbVar20 + 1;
          } while (bVar4 != 0);
          if (puVar28 == (undefined1 *)0x6bfdff25f365b50) break;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar11);
    }
    else {
      puVar14 = (uint *)((long)piVar13 + (ulong)puVar17[6]);
      puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
      uVar11 = *puVar14;
      if (*puVar14 != 0) goto LAB_0291e644;
LAB_0291e7b0:
      uVar21 = 0;
    }
    puVar14 = (uint *)((long)((long)piVar13 + (ulong)puVar17[6]) +
                      (uVar21 & 0xffffffff) * 4 +
                      (ulong)*(uint *)((long)piVar13 + (ulong)puVar17[6]) + 4);
    piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
    puVar14 = (uint *)((long)piVar13 + (ulong)*(ushort *)((long)piVar13 + (8 - (long)*piVar13)));
    piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
    if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
       (uVar21 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar21 == 0)) {
      bVar9 = false;
    }
    else {
      bVar9 = *(char *)((long)piVar13 + uVar21) != '\0';
    }
    local_98 = FUN_0291ef64(param_1,&local_90,bVar9);
    if (local_98 != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x518));
      FUN_0291ff10(param_1 + 0x4e0,&local_70,&local_98);
      if ((param_4 & 1) != 0) {
        FUN_029205f4(&local_d0,*(undefined8 *)(param_1 + 8),param_2);
        FUN_029201c0(param_1 + 0x538,&local_70,&local_d0);
        lVar24 = CONCAT71(uStack_cf,local_d0);
        if (lVar24 != 0) {
          local_c8 = local_d0;
          uStack_c7 = (undefined4)uStack_cf;
          uStack_c3 = (undefined1)((uint7)uStack_cf >> 0x20);
          uStack_c2 = (undefined2)((uint7)uStack_cf >> 0x28);
          lVar30 = local_c0 - lVar24;
          uVar21 = (**(code **)(*plStack_b8 + 0xc0))(plStack_b8);
          if ((uVar21 & 1) != 0) {
            lVar32 = tpidr_el0;
            if (*(char *)(lVar32 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar32 + 0x38d488) = 1;
              *(undefined8 *)(lVar32 + 0x38d478) = 0;
              *(undefined8 *)(lVar32 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar32 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar32 + 0x38d480)) {
              FUN_02bcc824(plStack_b8,lVar24,lVar30,8);
              goto LAB_0291e8f8;
            }
          }
          (**(code **)(*plStack_b8 + 0x18))(plStack_b8,lVar24,lVar30,8);
        }
      }
LAB_0291e8f8:
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x518));
    }
  }
joined_r0x0291ec34:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
joined_r0x0291ebfc:
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
LAB_0291e944:
  if (uVar21 < 2) {
    puVar25 = (undefined1 *)((ulong)puVar23 & (ulong)local_70);
LAB_0291e980:
    plVar22 = *(long **)(lVar24 + (long)puVar25 * 8);
    if (plVar22 == (long *)0x0) goto LAB_0291ea04;
LAB_0291e988:
    plVar22 = (long *)*plVar22;
    if (plVar22 != (long *)0x0) {
      if (uVar21 < 2) {
        do {
          if ((undefined1 *)plVar22[1] == local_70) {
            if ((undefined1 *)plVar22[2] == local_70) break;
          }
          else if ((undefined1 *)((ulong)plVar22[1] & (ulong)puVar23) != puVar25) goto LAB_0291ea04;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          puVar23 = (undefined1 *)plVar22[1];
          if (puVar23 == local_70) {
            if ((undefined1 *)plVar22[2] == local_70) break;
          }
          else {
            if (puVar28 <= puVar23) {
              uVar21 = 0;
              if (puVar28 != (undefined1 *)0x0) {
                uVar21 = (ulong)puVar23 / (ulong)puVar28;
              }
              puVar23 = puVar23 + -(uVar21 * (long)puVar28);
            }
            if (puVar23 != puVar25) goto LAB_0291ea04;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  else {
    puVar25 = local_70;
    if (local_70 < puVar28) goto LAB_0291e980;
    uVar27 = 0;
    if (puVar28 != (undefined1 *)0x0) {
      uVar27 = (ulong)local_70 / (ulong)puVar28;
    }
    puVar25 = local_70 + -(uVar27 * (long)puVar28);
    plVar22 = *(long **)(lVar24 + (long)puVar25 * 8);
    if (plVar22 != (long *)0x0) goto LAB_0291e988;
LAB_0291ea04:
    plVar22 = (long *)0x0;
  }
  puVar15 = (undefined8 *)plVar22[3];
  puVar12 = (undefined8 *)plVar22[4];
  puVar19 = puVar15;
  if (puVar15 != puVar12) {
    puVar18 = (undefined8 *)*puVar15;
    while (puVar18 != param_2) {
      puVar19 = puVar19 + 1;
      if (puVar12 == puVar19) goto LAB_0291ea6c;
      puVar18 = (undefined8 *)*puVar19;
    }
  }
  if (puVar12 == puVar19) {
LAB_0291ea6c:
    local_d0 = SUB81(param_2,0);
    uStack_cf = (undefined7)((ulong)param_2 >> 8);
    plVar29 = plVar22 + 6;
    if (puVar12 < (undefined8 *)plVar22[5]) {
      FUN_0292380c(plVar29,puVar12,&local_d0);
      plVar22[4] = plVar22[4] + 8;
    }
    else {
      uVar27 = plVar22[7];
      lVar24 = (long)puVar12 - (long)puVar15 >> 3;
      uVar21 = lVar24 + 1;
      if (0x7ffffffffffffffe < uVar27) {
        uVar27 = 0x7fffffffffffffff;
      }
      if (uVar27 < uVar21) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar30 = plVar22[5] - (long)puVar15;
      if ((ulong)(lVar30 >> 3) < uVar27 >> 1) {
        uVar16 = lVar30 >> 2;
        uVar27 = uVar21;
        if (uVar21 <= uVar16) {
          uVar27 = uVar16;
        }
      }
      if (uVar27 == 0) {
        lVar30 = 0;
      }
      else {
        lVar30 = (**(code **)(*(long *)*plVar29 + 0x10))((long *)*plVar29,uVar27 << 3,8);
        if (lVar30 == 0) {
          (**(code **)(*(long *)*plVar29 + 0xb8))();
        }
      }
      lVar32 = lVar30 + lVar24 * 8;
      FUN_0292380c(plVar29,lVar32,&local_d0);
      lVar31 = plVar22[3];
      lVar33 = plVar22[4];
      lVar24 = lVar32 + 8;
      if (lVar33 != lVar31) {
        do {
          lVar32 = lVar32 + -8;
          lVar33 = lVar33 + -8;
          FUN_0292380c(plVar29,lVar32,lVar33);
        } while (lVar31 != lVar33);
        lVar31 = plVar22[3];
      }
      lVar33 = plVar22[5];
      plVar22[3] = lVar32;
      plVar22[4] = lVar24;
      plVar22[5] = lVar30 + uVar27 * 8;
      if (lVar31 != 0) {
        plVar29 = (long *)*plVar29;
        uVar21 = (**(code **)(*plVar29 + 0xc0))(plVar29);
        if ((uVar21 & 1) != 0) {
          lVar24 = tpidr_el0;
          if (*(char *)(lVar24 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar24 + 0x38d488) = 1;
            *(undefined8 *)(lVar24 + 0x38d478) = 0;
            *(undefined8 *)(lVar24 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar24 + 0x38d480)) {
            FUN_02bcc824(plVar29,lVar31,lVar33 - lVar31,8);
            goto joined_r0x0291ebfc;
          }
        }
        (**(code **)(*plVar29 + 0x18))(plVar29,lVar31,lVar33 - lVar31,8);
      }
    }
  }
  goto joined_r0x0291ebfc;
}


