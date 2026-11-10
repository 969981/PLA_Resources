/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087ccc4; name: FUN_0087ccc4
 */


/* WARNING: Removing unreachable block (ram,0x0087d154) */
/* WARNING: Type propagation algorithm not settling */

int FUN_0087ccc4(undefined1 *param_1,undefined8 *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  void *pvVar15;
  void *pvVar16;
  byte *pbVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  int iVar21;
  void *pvVar22;
  ulong uVar23;
  size_t __n;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  undefined1 auStack_310 [8];
  int local_308;
  int local_304;
  undefined4 auStack_2d8 [6];
  byte abStack_2c0 [48];
  undefined8 local_290;
  undefined8 uStack_288;
  long *local_280;
  ulong local_278;
  undefined8 local_270;
  void *local_268;
  ulong local_260;
  undefined8 uStack_258;
  void *local_250;
  ulong local_248;
  undefined8 local_240;
  void *local_238;
  ulong local_230;
  undefined8 uStack_228;
  void *local_220;
  ulong local_218;
  undefined8 local_210;
  void *local_208;
  long *local_200 [4];
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  byte *local_158;
  undefined4 *puStack_150;
  byte local_148;
  int local_128;
  undefined1 auStack_108 [64];
  size_t local_c8 [6];
  ulong local_98 [7];
  
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  param_1[1] = *param_3;
  (**(code **)PTR_DAT_043788f0)(param_1 + 0x10,*param_2);
  if (param_3[1] == 0) {
    if ((*param_3 >> 1 & 1) == 0) {
      puVar13 = (undefined8 *)FUN_0087cb60(param_3,0);
      if (puVar13 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)FUN_0087cb60(param_3,1);
      }
      else {
        local_200[0] = (long *)*puVar13;
        local_200[1] = (long *)puVar13[1];
        puVar14 = (undefined8 *)FUN_0087cb60(param_3,1);
      }
      bVar5 = puVar13 != (undefined8 *)0x0;
      uVar11 = (ulong)bVar5;
      uVar23 = uVar11;
      if (puVar14 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar14[1];
        uVar23 = (ulong)(bVar5 + 1);
        local_200[uVar11 * 2] = (long *)*puVar14;
        local_200[uVar11 * 2 + 1] = plVar19;
      }
      puVar13 = (undefined8 *)FUN_0087cb60(param_3,2);
      uVar11 = uVar23;
      if (puVar13 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar13[1];
        uVar11 = (ulong)((int)uVar23 + 1);
        local_200[uVar23 * 2] = (long *)*puVar13;
        local_200[uVar23 * 2 + 1] = plVar19;
      }
      puVar13 = (undefined8 *)FUN_0087cb60(param_3,3);
      uVar23 = uVar11;
      if (puVar13 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar13[1];
        uVar23 = (ulong)((int)uVar11 + 1);
        local_200[uVar11 * 2] = (long *)*puVar13;
        local_200[uVar11 * 2 + 1] = plVar19;
      }
      puVar13 = (undefined8 *)FUN_0087cb60(param_3,4);
      uVar11 = uVar23;
      if (puVar13 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar13[1];
        uVar11 = (ulong)((int)uVar23 + 1);
        local_200[uVar23 * 2] = (long *)*puVar13;
        local_200[uVar23 * 2 + 1] = plVar19;
      }
      puVar13 = (undefined8 *)FUN_0087cb60(param_3,5);
      uVar23 = uVar11;
      if (puVar13 != (undefined8 *)0x0) {
        plVar19 = (long *)puVar13[1];
        uVar23 = (ulong)((int)uVar11 + 1);
        local_200[uVar11 * 2] = (long *)*puVar13;
        local_200[uVar11 * 2 + 1] = plVar19;
      }
      cVar8 = (**(code **)PTR_DAT_04378908)(*(undefined8 *)(param_1 + 8),uVar23,local_200);
      if (cVar8 == '\0') {
        return 3;
      }
    }
    else {
      iVar21 = 0;
      iVar10 = 0;
      puVar13 = (undefined8 *)FUN_0087cb60(param_3,0);
      while( true ) {
        if (puVar13 != (undefined8 *)0x0) {
          lVar12 = (long)iVar21;
          local_200[lVar12 * 3] = (long *)*puVar13;
          local_200[lVar12 * 3 + 1] = (long *)puVar13[1];
          local_200[lVar12 * 3 + 2] = (long *)puVar13[6];
          puVar14 = (undefined8 *)puVar13[4];
          iVar21 = iVar21 + 1;
          if (puVar14 != (undefined8 *)0x0) {
            pvVar16 = (void *)*puVar14;
            pvVar15 = (void *)puVar13[1];
            memcpy(pvVar15,pvVar16,(long)*(int *)((long)pvVar16 + 0x14));
            if ((void *)puVar14[1] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar16 + 0x14)),
                     (void *)puVar14[1],(long)*(int *)((long)pvVar16 + 0x18));
            }
            if ((void *)puVar14[4] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar16 + 0x20)),
                     (void *)puVar14[4],(long)*(int *)((long)pvVar16 + 0x1c));
            }
            if ((void *)puVar14[2] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar16 + 0x6f0)),
                     (void *)puVar14[2],(long)*(int *)((long)pvVar16 + 0x6f4));
            }
            if ((void *)puVar14[3] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar16 + 0x7c8)),
                     (void *)puVar14[3],(long)*(int *)((long)pvVar16 + 0x7cc));
            }
            if ((void *)puVar14[5] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar16 + 0x7e8)),
                     (void *)puVar14[5],(long)*(int *)((long)pvVar16 + 0x7ec));
            }
          }
        }
        iVar10 = iVar10 + 1;
        if (iVar10 == 6) break;
        puVar13 = (undefined8 *)FUN_0087cb60(param_3,iVar10);
      }
      cVar8 = (**(code **)PTR_DAT_04378910)(*(undefined8 *)(param_1 + 8),iVar21,local_200);
      if (cVar8 == '\0') {
        return 3;
      }
      if ((*param_3 >> 1 & 1) != 0) {
        *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_3 + 0x78);
        bVar4 = *param_3;
        goto joined_r0x0087d118;
      }
    }
  }
  else {
    if (param_3[1] != 2) {
      return 1;
    }
    if (((DAT_043a6d90 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_043a6d90), iVar10 != 0)) {
      nn::os::InitializeMutex((MutexType *)&DAT_043a6d98,false,0);
      FUN_00100250(PTR__Mutex_04373970,&DAT_043a6d98,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043a6d90);
    }
    nn::os::LockMutex((MutexType *)&DAT_043a6d98);
    FUN_0087c7c0();
    uVar11 = FUN_0087efc8();
    if ((uVar11 & 1) == 0) {
      FUN_0087c7c0();
      FUN_0087ef14();
    }
    lVar12 = FUN_0087c7c0();
    (**(code **)(lVar12 + 0x28))(auStack_310);
    puVar7 = PTR_DAT_04378468;
    (**(code **)PTR_DAT_04378468)(*param_2,0x2f,&local_314);
    (**(code **)puVar7)(*param_2,0x2e,&local_318);
    (**(code **)puVar7)(*param_2,0x31,&local_31c);
    (**(code **)puVar7)(*param_2,0x30,&local_320);
    iVar10 = 3;
    if ((((local_314 <= local_308) && (local_308 <= local_318)) &&
        (iVar10 = 3, local_31c <= local_304)) && (local_304 <= local_320)) {
      lVar12 = FUN_0087c7c0();
      cVar8 = (**(code **)(lVar12 + 0x10))(local_200);
      if ((cVar8 == '\0') || (local_128 != 1)) {
        nn::os::UnlockMutex((MutexType *)&DAT_043a6d98);
        return 3;
      }
      local_1e0 = local_1e0 & 0xfffffffffffe0000 | (ulong)*param_3 & 1 | 0x2214;
      uVar11 = FUN_0087efe0();
      local_1d0 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_200[3] = (long *)0x0;
      local_210 = 0;
      local_208 = (void *)0x0;
      local_1e0 = local_1e0 & 0xfffffffffff80000 | local_1e0 & 0x1ffff | (uVar11 & 1) << 0x11;
      puStack_150 = auStack_2d8;
      local_148 = 0;
      local_220 = (void *)0x0;
      local_218 = 0;
      local_230 = 0;
      uStack_228 = 0;
      uStack_1d8 = 0;
      local_158 = abStack_2c0;
      local_240 = 0;
      local_238 = (void *)0x0;
      local_250 = (void *)0x0;
      local_248 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_270 = 0;
      local_268 = (void *)0x0;
      local_280 = (void *)0x0;
      local_278 = 0;
      local_290 = 0;
      uStack_288 = 0;
      lVar12 = FUN_0087cb60(param_3,0);
      if (lVar12 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar12 + 8));
        uVar11 = (ulong)local_148;
        if ((abStack_2c0[(uVar11 * 3 + 6) * 8] & 1) == 0) {
          pbVar17 = abStack_2c0 + uVar11 * 0x18 + 0x31;
        }
        else {
          pbVar17 = (byte *)local_200[uVar11 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar11 * 8) = pbVar17;
        uVar9 = FUN_0087c018(0);
        auStack_2d8[local_148] = uVar9;
        local_148 = local_148 + 1;
      }
      lVar12 = FUN_0087cb60(param_3,1);
      if (lVar12 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar12 + 8));
        uVar11 = (ulong)local_148;
        if ((abStack_2c0[(uVar11 * 3 + 6) * 8] & 1) == 0) {
          pbVar17 = abStack_2c0 + uVar11 * 0x18 + 0x31;
        }
        else {
          pbVar17 = (byte *)local_200[uVar11 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar11 * 8) = pbVar17;
        uVar9 = FUN_0087c018(1);
        auStack_2d8[local_148] = uVar9;
        local_148 = local_148 + 1;
      }
      lVar12 = FUN_0087cb60(param_3,2);
      if (lVar12 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar12 + 8));
        uVar11 = (ulong)local_148;
        if ((abStack_2c0[(uVar11 * 3 + 6) * 8] & 1) == 0) {
          pbVar17 = abStack_2c0 + uVar11 * 0x18 + 0x31;
        }
        else {
          pbVar17 = (byte *)local_200[uVar11 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar11 * 8) = pbVar17;
        uVar9 = FUN_0087c018(2);
        auStack_2d8[local_148] = uVar9;
        local_148 = local_148 + 1;
      }
      lVar12 = FUN_0087cb60(param_3,3);
      if (lVar12 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar12 + 8));
        uVar11 = (ulong)local_148;
        if ((abStack_2c0[(uVar11 * 3 + 6) * 8] & 1) == 0) {
          pbVar17 = abStack_2c0 + uVar11 * 0x18 + 0x31;
        }
        else {
          pbVar17 = (byte *)local_200[uVar11 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar11 * 8) = pbVar17;
        uVar9 = FUN_0087c018(3);
        auStack_2d8[local_148] = uVar9;
        local_148 = local_148 + 1;
      }
      lVar12 = FUN_0087cb60(param_3,4);
      if (lVar12 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar12 + 8));
        uVar11 = (ulong)local_148;
        if ((abStack_2c0[(uVar11 * 3 + 6) * 8] & 1) == 0) {
          pbVar17 = abStack_2c0 + uVar11 * 0x18 + 0x31;
        }
        else {
          pbVar17 = (byte *)local_200[uVar11 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar11 * 8) = pbVar17;
        uVar9 = FUN_0087c018(4);
        auStack_2d8[local_148] = uVar9;
        local_148 = local_148 + 1;
      }
      lVar12 = FUN_0087cb60(param_3,5);
      if (lVar12 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar12 + 8));
        uVar11 = (ulong)local_148;
        if ((abStack_2c0[(uVar11 * 3 + 6) * 8] & 1) == 0) {
          pbVar17 = abStack_2c0 + uVar11 * 0x18 + 0x31;
        }
        else {
          pbVar17 = (byte *)local_200[uVar11 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar11 * 8) = pbVar17;
        uVar9 = FUN_0087c018(5);
        auStack_2d8[local_148] = uVar9;
        local_148 = local_148 + 1;
      }
      lVar12 = FUN_0087c7c0();
      cVar8 = (**(code **)(lVar12 + 0x20))(local_200);
      plVar19 = local_200[0];
      if ((cVar8 == '\0') || (*(char *)(*local_200[0] + 0xd) != '\0')) {
LAB_0087d6f0:
        iVar10 = 3;
      }
      else {
        if (*(char *)(*local_200[0] + 0xc) != '\0') {
          pvVar15 = malloc(400);
          *(void **)(param_1 + 0xd8) = pvVar15;
          *(undefined8 *)((long)pvVar15 + 0x108) = 0;
          *(undefined8 *)((long)pvVar15 + 0x110) = 0;
          pvVar22 = (void *)plVar19[1];
          pvVar16 = malloc((ulong)*(uint *)((long)pvVar22 + 0x44));
          *(void **)((long)pvVar15 + 0x110) = pvVar16;
          if (pvVar16 != (void *)0x0) {
            memcpy(pvVar16,pvVar22,(ulong)*(uint *)((long)pvVar22 + 0x44));
            iVar10 = *(int *)((long)pvVar16 + 0x4c);
            *(undefined4 *)((long)pvVar15 + 0x178) = 0;
            local_98[4] = 0;
            local_98[5] = 0;
            *(undefined8 *)((long)pvVar15 + 0x180) = 0;
            local_98[2] = 0;
            local_98[3] = 0;
            local_98[0] = 0;
            local_98[1] = 0;
            local_c8[4] = 0;
            local_c8[5] = 0;
            local_c8[2] = 0;
            local_c8[3] = 0;
            local_c8[0] = 0;
            local_c8[1] = 0;
            if (0 < iVar10) {
              lVar18 = 0;
              uVar23 = 0;
              lVar12 = 0;
              uVar11 = 0;
              iVar10 = *(int *)((long)pvVar16 + 0x98);
              pvVar22 = pvVar16;
              if (iVar10 != 3) goto LAB_0087d4cc;
              do {
                *(long *)((long)pvVar15 + 0x188) = (long)pvVar16 + 0x90;
                while( true ) {
                  lVar12 = lVar12 + 1;
                  lVar18 = lVar18 + 0x90;
                  if (*(int *)((long)pvVar22 + 0x4c) <= lVar12) goto LAB_0087d598;
                  pvVar16 = (void *)((long)pvVar22 + lVar18);
                  iVar10 = *(int *)((long)pvVar16 + 0x98);
                  if (iVar10 == 3) break;
LAB_0087d4cc:
                  if (iVar10 == 0) {
                    uVar2 = *(uint *)((long)pvVar16 + 200);
                    uVar20 = -(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar23 << 3;
                    uVar3 = *(uint *)((long)pvVar16 + 0x94);
                    *(ulong *)((long)local_c8 + uVar20 + 0x30) = (ulong)uVar2;
                    *(ulong *)((long)local_c8 + uVar20) =
                         (long)pvVar22 + (ulong)*(uint *)((long)pvVar16 + 0xc4) + (ulong)uVar3;
                    iVar10 = (int)uVar23;
                    uVar1 = iVar10 + 1;
                    uVar23 = (ulong)uVar1;
                    *(ulong *)((long)pvVar15 + (long)iVar10 * 0x10 + 0x120) =
                         (long)pvVar22 + (ulong)*(uint *)((long)pvVar16 + 0xc0) + (ulong)uVar3;
                    *(uint *)((long)pvVar15 + 0x178) = uVar1;
                    pvVar22 = *(void **)((long)pvVar15 + 0x110);
                    uVar11 = uVar11 + uVar2 + 0xff & 0xffffffffffffff00;
                    uVar20 = (ulong)*(uint *)((long)pvVar16 + 0xd0);
                    if ((ulong)*(uint *)((long)pvVar16 + 0xd0) <= *(ulong *)((long)pvVar15 + 0x180))
                    {
                      uVar20 = *(ulong *)((long)pvVar15 + 0x180);
                    }
                    *(ulong *)((long)pvVar15 + 0x180) = uVar20;
                  }
                }
              } while( true );
            }
            uVar23 = 0;
            uVar11 = 0;
LAB_0087d598:
            uVar11 = uVar11 + 0x13ff & 0xfffffffffffff000;
            pvVar16 = malloc(uVar11 + 0x1000);
            *(void **)((long)pvVar15 + 0x100) = pvVar16;
            if (pvVar16 == (void *)0x0) goto LAB_0087d6f0;
            pvVar16 = (void *)((long)pvVar16 + 0xfffU & 0xfffffffffffff000);
            *(void **)((long)pvVar15 + 0x108) = pvVar16;
            if (0 < (int)uVar23) {
              lVar12 = 0;
              do {
                __n = local_c8[lVar12 + 6];
                memcpy(pvVar16,(void *)local_c8[lVar12],__n);
                pvVar16 = (void *)((long)pvVar16 + __n + 0xff & 0xffffffffffffff00);
                lVar12 = lVar12 + 1;
              } while (lVar12 < *(int *)((long)pvVar15 + 0x178));
            }
            (**(code **)PTR_DAT_04378630)(auStack_108,*param_2);
            (**(code **)PTR_DAT_04378920)(auStack_108);
            (**(code **)PTR_DAT_04378930)(auStack_108,0x61);
            (**(code **)PTR_DAT_04378928)(auStack_108,*(undefined8 *)((long)pvVar15 + 0x108),uVar11)
            ;
            (**(code **)PTR_DAT_04378638)(pvVar15,auStack_108);
            lVar12 = (**(code **)PTR_DAT_04378968)(pvVar15);
            if (0 < *(int *)((long)pvVar15 + 0x178)) {
              lVar18 = 0;
              uVar11 = 0;
              plVar19 = (long *)((long)pvVar15 + 0x118);
              do {
                *plVar19 = uVar11 + lVar12;
                lVar6 = lVar18 + 6;
                lVar18 = lVar18 + 1;
                uVar11 = local_c8[lVar6] + (uVar11 | 0xff) & 0xffffffffffffff00;
                plVar19 = plVar19 + 2;
              } while (lVar18 < *(int *)((long)pvVar15 + 0x178));
            }
            iVar10 = 0;
            goto joined_r0x0087d6f4;
          }
        }
        iVar10 = 3;
      }
joined_r0x0087d6f4:
      if ((local_218 & 1) != 0) {
        operator_delete(local_208);
      }
      if ((local_230 & 1) != 0) {
        operator_delete(local_220);
      }
      if ((local_248 & 1) != 0) {
        operator_delete(local_238);
      }
      if ((local_260 & 1) != 0) {
        operator_delete(local_250);
      }
      if ((local_278 & 1) != 0) {
        operator_delete(local_268);
      }
      if ((local_290 & 1) != 0) {
        operator_delete(local_280);
      }
      lVar12 = FUN_0087c7c0();
      (**(code **)(lVar12 + 0x18))(local_200);
      if (iVar10 == 0) {
        cVar8 = (**(code **)PTR_DAT_04378908)
                          (*(undefined8 *)(param_1 + 8),
                           *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x178),
                           *(long *)(param_1 + 0xd8) + 0x118);
        iVar10 = 0;
        if (cVar8 != '\x01') {
          iVar10 = 3;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)&DAT_043a6d98);
    if (iVar10 != 0) {
      return iVar10;
    }
  }
  bVar4 = *param_3;
joined_r0x0087d118:
  if ((bVar4 & 1) == 0) {
    lVar12 = FUN_0087cb60(param_3,5);
    uVar9 = 0x1f;
    if (lVar12 != 0) {
      uVar9 = 0x20;
    }
    *(undefined4 *)(param_1 + 4) = uVar9;
  }
  param_1[1] = param_1[1] & 0xfb;
  *param_1 = 1;
  return 0;
}


