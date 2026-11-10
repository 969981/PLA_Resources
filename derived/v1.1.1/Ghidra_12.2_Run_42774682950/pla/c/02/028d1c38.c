/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d1c38; name: FUN_028d1c38
 */


void FUN_028d1c38(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int *param_5,
                 byte param_6)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  char cVar12;
  byte bVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  ushort uVar18;
  ushort *puVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  uint *puVar23;
  undefined8 uVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  uint *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  char local_400 [8];
  ulong local_3f8;
  ulong local_3f0;
  undefined8 local_3e8;
  long *local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  long *local_3b8;
  undefined8 local_3b0;
  undefined1 auStack_3a8 [104];
  undefined1 auStack_340 [56];
  undefined8 local_308;
  undefined1 auStack_300 [104];
  undefined1 auStack_298 [56];
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  long *local_240;
  long local_238;
  undefined1 auStack_230 [104];
  undefined1 auStack_1c8 [56];
  long local_190;
  undefined1 auStack_188 [104];
  undefined1 auStack_120 [56];
  undefined1 *local_e8;
  char *local_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  char *local_c0;
  size_t local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  long *local_78;
  undefined1 auStack_70 [16];
  
  lVar26 = *(long *)(param_1 + 0x58);
  lVar30 = *(long *)(param_1 + 0x60);
  if (lVar30 != lVar26) {
    plVar14 = *(long **)(lVar30 + -0x10);
    while( true ) {
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))();
      }
      if (*(long **)(lVar30 + -0x30) != (long *)0x0) {
        (**(code **)(**(long **)(lVar30 + -0x30) + 0x20))();
      }
      if (*(long **)(lVar30 + -0x50) != (long *)0x0) {
        (**(code **)(**(long **)(lVar30 + -0x50) + 0x20))();
      }
      plVar14 = *(long **)(lVar30 + -0x78);
      *(undefined ***)(lVar30 + -0xb0) = &PTR_LAB_04273578;
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 10;
        do {
          iVar10 = (int)*plVar1 + -1;
          cVar12 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar10;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      FUN_00936104(lVar30 + -0xa8);
      if (lVar30 + -0xb0 == lVar26) break;
      plVar14 = *(long **)(lVar30 + -0xc0);
      lVar30 = lVar30 + -0xb0;
    }
  }
  lVar27 = *(long *)(param_1 + 0x90);
  lVar30 = *(long *)(param_1 + 0x98);
  *(long *)(param_1 + 0x60) = lVar26;
  while (lVar30 != lVar27) {
    if (*(long **)(lVar30 + -0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar30 + -0x20) + 0x20))();
    }
    if (*(long **)(lVar30 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar30 + -0x40) + 0x20))();
    }
    plVar14 = (long *)(lVar30 + -0x60);
    lVar30 = lVar30 + -0x1d0;
    if ((long *)*plVar14 != (long *)0x0) {
      (**(code **)(*(long *)*plVar14 + 0x20))();
    }
    FUN_028d5028(lVar30);
  }
  *(long *)(param_1 + 0x98) = lVar27;
  lVar30 = DAT_043ef5a0;
  puVar19 = (ushort *)((long)param_5 - (long)*param_5);
  if (((8 < *puVar19) && ((ulong)puVar19[4] != 0)) &&
     (puVar3 = (uint *)((long)param_5 + (ulong)puVar19[4]),
     puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3), puVar3 != (uint *)0x0)) {
    lVar26 = -(long)*param_5;
    if ((10 < *puVar19) && ((ulong)puVar19[5] != 0)) {
      uVar28 = (ulong)*(byte *)((long)param_5 + (ulong)puVar19[5]);
      lVar27 = *(long *)(param_1 + 0x58);
      if ((ulong)((*(long *)(param_1 + 0x68) - lVar27 >> 4) * 0x2e8ba2e8ba2e8ba3) < uVar28) {
        lVar26 = *(long *)(param_1 + 0x60);
        plVar14 = (long *)(param_1 + 0x70);
        local_248 = 0;
        local_240 = plVar14;
        local_260 = (**(code **)(**(long **)(param_1 + 0x70) + 0x10))
                              (*(long **)(param_1 + 0x70),uVar28 * 0xb0,8);
        if (local_260 == 0) {
          (**(code **)(*(long *)*plVar14 + 0xb8))();
        }
        lVar32 = local_260 + (lVar26 - lVar27 >> 4) * 0x10;
        lVar34 = local_260 + uVar28 * 0xb0;
        lVar26 = *(long *)(param_1 + 0x58);
        lVar29 = *(long *)(param_1 + 0x60);
        lVar27 = lVar32;
        local_258 = lVar32;
        local_250 = lVar32;
        local_248 = lVar34;
        if (lVar29 == lVar26) {
          local_250 = lVar26;
        }
        else {
          do {
            lVar27 = lVar27 + -0xb0;
            lVar29 = lVar29 + -0xb0;
            FUN_028d583c(plVar14,lVar27,lVar29);
          } while (lVar26 != lVar29);
          lVar26 = *(long *)(param_1 + 0x58);
          local_250 = *(long *)(param_1 + 0x60);
        }
        *(long *)(param_1 + 0x58) = lVar27;
        *(long *)(param_1 + 0x60) = lVar32;
        local_248 = *(long *)(param_1 + 0x68);
        *(long *)(param_1 + 0x68) = lVar34;
        local_260 = lVar26;
        local_258 = lVar26;
        FUN_028d566c(&local_260);
        lVar26 = -(long)*param_5;
      }
    }
    if ((0xc < *(ushort *)((long)param_5 + lVar26)) &&
       (uVar28 = (ulong)((ushort *)((long)param_5 + lVar26))[6], uVar28 != 0)) {
      uVar28 = (ulong)*(byte *)((long)param_5 + uVar28);
      lVar26 = *(long *)(param_1 + 0x90);
      if ((ulong)((*(long *)(param_1 + 0xa0) - lVar26 >> 4) * 0x34f72c234f72c235) < uVar28) {
        lVar29 = *(long *)(param_1 + 0x98);
        plVar14 = (long *)(param_1 + 0xa8);
        local_248 = 0;
        local_240 = plVar14;
        lVar27 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))
                           (*(long **)(param_1 + 0xa8),uVar28 * 0x1d0,8);
        if (lVar27 == 0) {
          (**(code **)(*(long *)*plVar14 + 0xb8))();
        }
        lVar34 = lVar27 + (lVar29 - lVar26 >> 4) * 0x10;
        lVar33 = lVar27 + uVar28 * 0x1d0;
        lVar26 = *(long *)(param_1 + 0x90);
        lVar32 = *(long *)(param_1 + 0x98);
        lVar29 = lVar34;
        local_260 = lVar27;
        local_258 = lVar34;
        local_250 = lVar34;
        local_248 = lVar33;
        if (lVar32 == lVar26) {
          local_250 = lVar26;
        }
        else {
          do {
            lVar29 = lVar29 + -0x1d0;
            lVar32 = lVar32 + -0x1d0;
            FUN_028d5c8c(plVar14,lVar29,lVar32);
          } while (lVar26 != lVar32);
          lVar26 = *(long *)(param_1 + 0x90);
          local_250 = *(long *)(param_1 + 0x98);
        }
        *(long *)(param_1 + 0x90) = lVar29;
        *(long *)(param_1 + 0x98) = lVar34;
        local_248 = *(long *)(param_1 + 0xa0);
        *(long *)(param_1 + 0xa0) = lVar33;
        local_260 = lVar26;
        local_258 = lVar26;
        FUN_028d5af8(&local_260);
      }
    }
    *(byte *)(param_1 + 0xd0) = param_6 & 1;
    uVar8 = *(undefined4 *)(param_2 + 0x174);
    puVar31 = puVar3 + 1;
    if ((ulong)*puVar3 != 0) {
      puVar3 = puVar31 + *puVar3;
      plVar14 = (long *)(param_1 + 0x70);
      plVar1 = (long *)(param_1 + 0xa8);
      do {
        puVar17 = &DAT_cbf29ce484222645;
        piVar4 = (int *)((long)puVar31 + (ulong)*puVar31);
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
           (uVar28 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar28 == 0)) {
          lVar26 = 0;
        }
        else {
          puVar5 = (uint *)((long)piVar4 + uVar28);
          lVar26 = (long)puVar5 + (ulong)*puVar5;
        }
        local_d8 = strlen((char *)(lVar26 + 4));
        bVar13 = *(byte *)(lVar26 + 4);
        if (bVar13 != 0) {
          pbVar21 = (byte *)(lVar26 + 5);
          do {
            puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar13) * 0x100000001b3);
            bVar13 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar13 != 0);
        }
        local_d0 = (long *)0x0;
        local_e8 = puVar17;
        local_e0 = (char *)(lVar26 + 4);
        plVar15 = (long *)FUN_028cb574(param_3,&local_e8);
        local_260 = *plVar15;
        local_258 = plVar15[1];
        local_250 = plVar15[2];
        local_248 = plVar15[3];
        local_240 = (long *)plVar15[4];
        if (local_240 != (long *)0x0) {
          (**(code **)(*local_240 + 0x18))();
        }
        local_238 = plVar15[5];
        FUN_028cbfa0(auStack_230,plVar15 + 6);
        FUN_028cc3dc(auStack_1c8,plVar15 + 0x13);
        local_190 = plVar15[0x1a];
        FUN_028cbfa0(auStack_188,plVar15 + 0x1b);
        FUN_028cc3dc(auStack_120,plVar15 + 0x28);
        puVar16 = (undefined8 *)FUN_028cb574(param_4,&local_e8);
        local_3d8 = *puVar16;
        local_3d0 = puVar16[1];
        local_3c8 = puVar16[2];
        local_3c0 = puVar16[3];
        local_3b8 = (long *)puVar16[4];
        if (local_3b8 != (long *)0x0) {
          (**(code **)(*local_3b8 + 0x18))();
        }
        local_3b0 = puVar16[5];
        FUN_028cbfa0(auStack_3a8,puVar16 + 6);
        FUN_028cc3dc(auStack_340,puVar16 + 0x13);
        local_308 = puVar16[0x1a];
        FUN_028cbfa0(auStack_300,puVar16 + 0x1b);
        FUN_028cc3dc(auStack_298,puVar16 + 0x28);
        lVar26 = DAT_043ef5a0;
        plVar15 = (long *)FUN_02aa6448(param_2,param_1 + 8,uVar8);
        if (*plVar15 == 0) {
LAB_028d2d04:
          local_400[0] = '\0';
        }
        else {
          FUN_02b168fc(local_400,*plVar15,lVar26 + 0x60,param_1 + 0x18,&local_e8);
          plVar15 = local_3e0;
          uVar11 = local_3e8;
          uVar22 = local_3f0;
          uVar28 = local_3f8;
          if (local_400[0] != '\0') {
            puVar19 = (ushort *)((long)piVar4 - (long)*piVar4);
            uVar18 = *puVar19;
            if (6 < uVar18) {
              uVar20 = (ulong)puVar19[3];
              lVar26 = -(long)*piVar4;
              if (((uVar20 != 0) &&
                  (puVar5 = (uint *)((long)piVar4 + uVar20),
                  puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5), puVar5 != (uint *)0x0)) &&
                 (*puVar5 != 0)) {
                local_a0 = *(undefined8 *)(param_1 + 200);
                uVar24 = *(undefined8 *)(lVar30 + 0x60);
                if (local_3e0 != (long *)0x0) {
                  (**(code **)(*local_3e0 + 0x18))(local_3e0);
                }
                local_98 = CONCAT71(local_98._1_7_,1);
                local_90 = uVar28;
                local_88 = uVar22;
                local_80 = uVar11;
                local_78 = plVar15;
                FUN_02b3365c(&local_a8,uVar24,&local_98);
                if ((char)local_98 != '\0') {
                  if (local_78 != (long *)0x0) {
                    (**(code **)(*local_78 + 0x20))();
                  }
                  local_98 = local_98 & 0xffffffffffffff00;
                }
                puVar23 = puVar5 + 1;
                if (*puVar5 != 0) {
                  puVar5 = puVar23 + *puVar5;
                  do {
                    puVar17 = &DAT_cbf29ce484222645;
                    piVar6 = (int *)((long)puVar23 + (ulong)*puVar23);
                    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
                       (uVar28 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar28 == 0))
                    {
                      lVar26 = 0;
                    }
                    else {
                      puVar7 = (uint *)((long)piVar6 + uVar28);
                      lVar26 = (long)puVar7 + (ulong)*puVar7;
                    }
                    local_b8 = strlen((char *)(lVar26 + 4));
                    bVar13 = *(byte *)(lVar26 + 4);
                    if (bVar13 != 0) {
                      pbVar21 = (byte *)(lVar26 + 5);
                      do {
                        puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar13) * 0x100000001b3);
                        bVar13 = *pbVar21;
                        pbVar21 = pbVar21 + 1;
                      } while (bVar13 != 0);
                    }
                    local_b0 = (long *)0x0;
                    local_c8 = puVar17;
                    local_c0 = (char *)(lVar26 + 4);
                    uVar28 = FUN_028ca890(&local_238,&local_c8);
                    if (((uVar28 & 1) != 0) &&
                       (plVar15 = (long *)(*(long *)(local_a8[0x1a] + 0x120) + 0x58),
                       cVar12 = (**(code **)(*plVar15 + 0x88))(plVar15,&local_c8), cVar12 != '\0'))
                    {
                      uVar28 = *(ulong *)(param_1 + 0x60);
                      lVar26 = (long)(uVar28 - *(long *)(param_1 + 0x58)) >> 4;
                      if (uVar28 < *(ulong *)(param_1 + 0x68)) {
                        FUN_028d6220(plVar14,uVar28,&local_a0);
                        lVar27 = *(long *)(param_1 + 0x60) + 0xb0;
                        *(long *)(param_1 + 0x60) = lVar27;
                      }
                      else {
                        uVar22 = *(ulong *)(param_1 + 0x78);
                        uVar28 = lVar26 * 0x2e8ba2e8ba2e8ba3 + 1;
                        if (0x7ffffffffffffffe < uVar22) {
                          uVar22 = 0x7fffffffffffffff;
                        }
                        if (uVar22 < uVar28) {
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar27 = (long)(*(ulong *)(param_1 + 0x68) - *(long *)(param_1 + 0x58)) >> 4
                        ;
                        uVar20 = lVar27 * 0x5d1745d1745d1746;
                        local_80 = 0;
                        if (uVar28 <= uVar20) {
                          uVar28 = uVar20;
                        }
                        if ((ulong)(lVar27 * 0x2e8ba2e8ba2e8ba3) < uVar22 >> 1) {
                          uVar22 = uVar28;
                        }
                        local_78 = plVar14;
                        if (uVar22 == 0) {
                          uVar28 = 0;
                        }
                        else {
                          uVar28 = (**(code **)(*(long *)*plVar14 + 0x10))
                                             ((long *)*plVar14,uVar22 * 0xb0,8);
                          if (uVar28 == 0) {
                            (**(code **)(*(long *)*plVar14 + 0xb8))();
                          }
                        }
                        lVar29 = uVar28 + lVar26 * 0x10;
                        lVar32 = uVar28 + uVar22 * 0xb0;
                        local_98 = uVar28;
                        local_90 = lVar29;
                        local_80 = lVar32;
                        FUN_028d6220(plVar14,lVar29,&local_a0);
                        lVar27 = lVar29 + 0xb0;
                        uVar28 = *(ulong *)(param_1 + 0x58);
                        uVar22 = *(ulong *)(param_1 + 0x60);
                        local_88 = lVar27;
                        if (uVar22 == uVar28) {
                          local_88 = uVar28;
                        }
                        else {
                          do {
                            lVar29 = lVar29 + -0xb0;
                            uVar22 = uVar22 - 0xb0;
                            FUN_028d583c(plVar14,lVar29,uVar22);
                          } while (uVar28 != uVar22);
                          uVar28 = *(ulong *)(param_1 + 0x58);
                          local_88 = *(ulong *)(param_1 + 0x60);
                        }
                        *(long *)(param_1 + 0x58) = lVar29;
                        *(long *)(param_1 + 0x60) = lVar27;
                        local_80 = *(undefined8 *)(param_1 + 0x68);
                        *(long *)(param_1 + 0x68) = lVar32;
                        local_98 = uVar28;
                        local_90 = uVar28;
                        FUN_028d566c(&local_98);
                        lVar27 = *(long *)(param_1 + 0x60);
                      }
                      lVar29 = *(long *)(param_1 + 0x58);
                      if ((ulong)((lVar27 - lVar29 >> 4) * 0x2e8ba2e8ba2e8ba3) <=
                          (ulong)(lVar26 * 0x2e8ba2e8ba2e8ba3)) {
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_out_of_range();
                      }
                      if (*(ushort *)((long)piVar6 - (long)*piVar6) < 7) {
                        local_98 = 0;
                      }
                      else {
                        uVar28 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3];
                        local_98 = 0;
                        if (uVar28 != 0) {
                          puVar7 = (uint *)((long)piVar6 + uVar28);
                          local_98 = (long)puVar7 + (ulong)*puVar7;
                        }
                      }
                      lVar27 = FUN_028d7a80(auStack_70,
                                            *(undefined8 *)(lVar29 + lVar26 * 0x10 + 0x40),&local_98
                                           );
                      if (lVar27 != 0) {
                        piVar6 = (int *)(lVar27 + 0x50);
                        do {
                          cVar12 = '\x01';
                          bVar9 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                          if (bVar9) {
                            *piVar6 = *piVar6 + 1;
                            cVar12 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar12 != '\0');
                      }
                      plVar25 = (long *)(lVar29 + lVar26 * 0x10 + 0x38);
                      plVar15 = (long *)*plVar25;
                      *plVar25 = 0;
                      if (plVar15 != (long *)0x0) {
                        plVar2 = plVar15 + 10;
                        do {
                          iVar10 = (int)*plVar2 + -1;
                          cVar12 = '\x01';
                          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar9) {
                            *(int *)plVar2 = iVar10;
                            cVar12 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar12 != '\0');
                        if (iVar10 == 0) {
                          (**(code **)(*plVar15 + 0x10))();
                        }
                      }
                      plVar15 = local_d0;
                      *plVar25 = lVar27;
                      lVar27 = lVar29 + lVar26 * 0x10;
                      *(undefined1 **)(lVar27 + 0x48) = local_e8;
                      *(char **)(lVar27 + 0x50) = local_e0;
                      *(size_t *)(lVar27 + 0x58) = local_d8;
                      if (local_d0 != (long *)0x0) {
                        (**(code **)(*local_d0 + 0x18))(local_d0);
                      }
                      plVar25 = *(long **)(lVar27 + 0x60);
                      *(long **)(lVar27 + 0x60) = plVar15;
                      if (plVar25 != (long *)0x0) {
                        (**(code **)(*plVar25 + 0x20))();
                      }
                      plVar15 = local_3e0;
                      lVar27 = lVar29 + lVar26 * 0x10;
                      *(ulong *)(lVar27 + 0x68) = local_3f8;
                      *(ulong *)(lVar27 + 0x70) = local_3f0;
                      *(undefined8 *)(lVar27 + 0x78) = local_3e8;
                      if (local_3e0 != (long *)0x0) {
                        (**(code **)(*local_3e0 + 0x18))(local_3e0);
                      }
                      plVar25 = *(long **)(lVar27 + 0x80);
                      *(long **)(lVar27 + 0x80) = plVar15;
                      if (plVar25 != (long *)0x0) {
                        (**(code **)(*plVar25 + 0x20))();
                      }
                      plVar15 = local_b0;
                      lVar27 = lVar29 + lVar26 * 0x10;
                      *(undefined1 **)(lVar27 + 0x88) = local_c8;
                      *(char **)(lVar27 + 0x90) = local_c0;
                      *(size_t *)(lVar27 + 0x98) = local_b8;
                      if (local_b0 != (long *)0x0) {
                        (**(code **)(*local_b0 + 0x18))(local_b0);
                      }
                      plVar25 = *(long **)(lVar27 + 0xa0);
                      *(long **)(lVar27 + 0xa0) = plVar15;
                      if (plVar25 != (long *)0x0) {
                        (**(code **)(*plVar25 + 0x20))();
                      }
                      lVar29 = lVar29 + lVar26 * 0x10;
                      *(undefined4 *)(lVar29 + 0xa8) = 0;
                      bVar13 = FUN_028ca890(&local_3b0,&local_c8);
                      *(byte *)(lVar29 + 0xac) = bVar13 & 1;
                      FUN_02b2d224(local_a8 + 0x35,&local_c8);
                    }
                    if (local_b0 != (long *)0x0) {
                      (**(code **)(*local_b0 + 0x20))();
                    }
                    puVar23 = puVar23 + 1;
                  } while (puVar23 != puVar5);
                }
                if (local_a8 != (long *)0x0) {
                  plVar15 = local_a8 + 10;
                  do {
                    iVar10 = (int)*plVar15 + -1;
                    cVar12 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar9) {
                      *(int *)plVar15 = iVar10;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if (iVar10 == 0) {
                    (**(code **)(*local_a8 + 0x10))();
                  }
                }
                lVar26 = -(long)*piVar4;
                uVar18 = *(ushort *)((long)piVar4 - (long)*piVar4);
              }
              plVar15 = local_3e0;
              uVar11 = local_3e8;
              uVar22 = local_3f0;
              uVar28 = local_3f8;
              if ((((8 < uVar18) &&
                   (uVar20 = (ulong)*(ushort *)((long)piVar4 + lVar26 + 8), uVar20 != 0)) &&
                  (puVar5 = (uint *)((long)piVar4 + uVar20),
                  puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5), puVar5 != (uint *)0x0)) &&
                 (*puVar5 != 0)) {
                local_a0 = *(undefined8 *)(param_1 + 200);
                uVar24 = *(undefined8 *)(lVar30 + 0x60);
                if (local_3e0 != (long *)0x0) {
                  (**(code **)(*local_3e0 + 0x18))(local_3e0);
                }
                local_98 = CONCAT71(local_98._1_7_,1);
                local_90 = uVar28;
                local_88 = uVar22;
                local_80 = uVar11;
                local_78 = plVar15;
                FUN_02b3365c(&local_a8,uVar24,&local_98);
                if ((char)local_98 != '\0') {
                  if (local_78 != (long *)0x0) {
                    (**(code **)(*local_78 + 0x20))();
                  }
                  local_98 = local_98 & 0xffffffffffffff00;
                }
                puVar23 = puVar5 + 1;
                if (*puVar5 != 0) {
                  puVar5 = puVar23 + *puVar5;
                  do {
                    puVar17 = &DAT_cbf29ce484222645;
                    piVar4 = (int *)((long)puVar23 + (ulong)*puVar23);
                    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
                       (uVar28 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar28 == 0))
                    {
                      lVar26 = 0;
                    }
                    else {
                      puVar7 = (uint *)((long)piVar4 + uVar28);
                      lVar26 = (long)puVar7 + (ulong)*puVar7;
                    }
                    local_b8 = strlen((char *)(lVar26 + 4));
                    bVar13 = *(byte *)(lVar26 + 4);
                    if (bVar13 != 0) {
                      pbVar21 = (byte *)(lVar26 + 5);
                      do {
                        puVar17 = (undefined1 *)(((ulong)puVar17 ^ (ulong)bVar13) * 0x100000001b3);
                        bVar13 = *pbVar21;
                        pbVar21 = pbVar21 + 1;
                      } while (bVar13 != 0);
                    }
                    local_b0 = (long *)0x0;
                    local_c8 = puVar17;
                    local_c0 = (char *)(lVar26 + 4);
                    uVar28 = FUN_028ca890(&local_190,&local_c8);
                    if (((uVar28 & 1) != 0) &&
                       (plVar15 = (long *)(*(long *)(local_a8[0x1a] + 0x120) + 0x58),
                       cVar12 = (**(code **)(*plVar15 + 0x98))(plVar15,&local_c8), cVar12 != '\0'))
                    {
                      uVar28 = *(ulong *)(param_1 + 0x98);
                      lVar26 = (long)(uVar28 - *(long *)(param_1 + 0x90)) >> 4;
                      if (uVar28 < *(ulong *)(param_1 + 0xa0)) {
                        FUN_028d6344(plVar1,uVar28,&local_a0);
                        lVar27 = *(long *)(param_1 + 0x98) + 0x1d0;
                        *(long *)(param_1 + 0x98) = lVar27;
                      }
                      else {
                        uVar22 = *(ulong *)(param_1 + 0xb0);
                        uVar28 = lVar26 * 0x34f72c234f72c235 + 1;
                        if (0x7ffffffffffffffe < uVar22) {
                          uVar22 = 0x7fffffffffffffff;
                        }
                        if (uVar22 < uVar28) {
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar27 = (long)(*(ulong *)(param_1 + 0xa0) - *(long *)(param_1 + 0x90)) >> 4
                        ;
                        uVar20 = lVar27 * 0x69ee58469ee5846a;
                        local_80 = 0;
                        if (uVar28 <= uVar20) {
                          uVar28 = uVar20;
                        }
                        if ((ulong)(lVar27 * 0x34f72c234f72c235) < uVar22 >> 1) {
                          uVar22 = uVar28;
                        }
                        local_78 = plVar1;
                        if (uVar22 == 0) {
                          uVar28 = 0;
                        }
                        else {
                          uVar28 = (**(code **)(*(long *)*plVar1 + 0x10))
                                             ((long *)*plVar1,uVar22 * 0x1d0,8);
                          if (uVar28 == 0) {
                            (**(code **)(*(long *)*plVar1 + 0xb8))();
                          }
                        }
                        lVar29 = uVar28 + lVar26 * 0x10;
                        lVar32 = uVar28 + uVar22 * 0x1d0;
                        local_98 = uVar28;
                        local_90 = lVar29;
                        local_80 = lVar32;
                        FUN_028d6344(plVar1,lVar29,&local_a0);
                        lVar27 = lVar29 + 0x1d0;
                        uVar28 = *(ulong *)(param_1 + 0x90);
                        uVar22 = *(ulong *)(param_1 + 0x98);
                        local_88 = lVar27;
                        if (uVar22 == uVar28) {
                          local_88 = uVar28;
                        }
                        else {
                          do {
                            lVar29 = lVar29 + -0x1d0;
                            uVar22 = uVar22 - 0x1d0;
                            FUN_028d5c8c(plVar1,lVar29,uVar22);
                          } while (uVar28 != uVar22);
                          uVar28 = *(ulong *)(param_1 + 0x90);
                          local_88 = *(ulong *)(param_1 + 0x98);
                        }
                        *(long *)(param_1 + 0x90) = lVar29;
                        *(long *)(param_1 + 0x98) = lVar27;
                        local_80 = *(undefined8 *)(param_1 + 0xa0);
                        *(long *)(param_1 + 0xa0) = lVar32;
                        local_98 = uVar28;
                        local_90 = uVar28;
                        FUN_028d5af8(&local_98);
                        lVar27 = *(long *)(param_1 + 0x98);
                      }
                      lVar29 = *(long *)(param_1 + 0x90);
                      if ((ulong)((lVar27 - lVar29 >> 4) * 0x34f72c234f72c235) <=
                          (ulong)(lVar26 * 0x34f72c234f72c235)) {
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_out_of_range();
                      }
                      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
                         (uVar28 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar28 == 0
                         )) {
                        lVar27 = 0;
                      }
                      else {
                        puVar7 = (uint *)((long)piVar4 + uVar28);
                        lVar27 = (long)puVar7 + (ulong)*puVar7;
                      }
                      FUN_028d8338(lVar29 + lVar26 * 0x10,lVar27);
                      plVar15 = local_d0;
                      lVar27 = lVar29 + lVar26 * 0x10;
                      *(undefined1 **)(lVar27 + 0x158) = local_e8;
                      *(char **)(lVar27 + 0x160) = local_e0;
                      *(size_t *)(lVar27 + 0x168) = local_d8;
                      if (local_d0 != (long *)0x0) {
                        (**(code **)(*local_d0 + 0x18))(local_d0);
                      }
                      plVar25 = *(long **)(lVar27 + 0x170);
                      *(long **)(lVar27 + 0x170) = plVar15;
                      if (plVar25 != (long *)0x0) {
                        (**(code **)(*plVar25 + 0x20))();
                      }
                      plVar15 = local_3e0;
                      lVar27 = lVar29 + lVar26 * 0x10;
                      *(ulong *)(lVar27 + 0x178) = local_3f8;
                      *(ulong *)(lVar27 + 0x180) = local_3f0;
                      *(undefined8 *)(lVar27 + 0x188) = local_3e8;
                      if (local_3e0 != (long *)0x0) {
                        (**(code **)(*local_3e0 + 0x18))(local_3e0);
                      }
                      plVar25 = *(long **)(lVar27 + 400);
                      *(long **)(lVar27 + 400) = plVar15;
                      if (plVar25 != (long *)0x0) {
                        (**(code **)(*plVar25 + 0x20))();
                      }
                      plVar15 = local_b0;
                      lVar27 = lVar29 + lVar26 * 0x10;
                      *(undefined1 **)(lVar27 + 0x198) = local_c8;
                      *(char **)(lVar27 + 0x1a0) = local_c0;
                      *(size_t *)(lVar27 + 0x1a8) = local_b8;
                      if (local_b0 != (long *)0x0) {
                        (**(code **)(*local_b0 + 0x18))(local_b0);
                      }
                      plVar25 = *(long **)(lVar27 + 0x1b0);
                      *(long **)(lVar27 + 0x1b0) = plVar15;
                      if (plVar25 != (long *)0x0) {
                        (**(code **)(*plVar25 + 0x20))();
                      }
                      lVar29 = lVar29 + lVar26 * 0x10;
                      *(undefined8 *)(lVar29 + 0x1b8) = 0;
                      *(undefined8 *)(lVar29 + 0x1c0) = 0;
                      bVar13 = FUN_028ca890(&local_308,&local_c8);
                      *(byte *)(lVar29 + 0x1c8) = bVar13 & 1;
                      FUN_02b2d224(local_a8 + 0x42,&local_c8);
                    }
                    if (local_b0 != (long *)0x0) {
                      (**(code **)(*local_b0 + 0x20))();
                    }
                    puVar23 = puVar23 + 1;
                  } while (puVar23 != puVar5);
                }
                if (local_a8 != (long *)0x0) {
                  plVar15 = local_a8 + 10;
                  do {
                    iVar10 = (int)*plVar15 + -1;
                    cVar12 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar9) {
                      *(int *)plVar15 = iVar10;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if (iVar10 == 0) {
                    (**(code **)(*local_a8 + 0x10))();
                  }
                }
              }
            }
            if (local_400[0] != '\0') {
              if (local_3e0 != (long *)0x0) {
                (**(code **)(*local_3e0 + 0x20))();
              }
              goto LAB_028d2d04;
            }
          }
        }
        FUN_028cb6ac(&local_308);
        FUN_028cb6ac(&local_3b0);
        if (local_3b8 != (long *)0x0) {
          (**(code **)(*local_3b8 + 0x20))();
        }
        FUN_028cb6ac(&local_190);
        FUN_028cb6ac(&local_238);
        if (local_240 != (long *)0x0) {
          (**(code **)(*local_240 + 0x20))();
        }
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        puVar31 = puVar31 + 1;
      } while (puVar31 != puVar3);
    }
  }
  return;
}


