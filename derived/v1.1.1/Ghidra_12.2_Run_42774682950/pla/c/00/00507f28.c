/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00507f28; name: FUN_00507f28
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00507f28(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *******pppppppuVar9;
  size_t sVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 ******ppppppuVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auStack_f0 [32];
  byte local_d0 [8];
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  long *local_b0;
  undefined8 *******local_a8;
  undefined8 local_a0;
  ulong local_88;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_78 = (ulong *)0x0;
  local_80 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (local_80 != (ulong *)0x0) {
    *local_80 = 0;
  }
  local_88 = 0;
                    /* try { // try from 00507f70 to 00507f7f has its CatchHandler @ 00508a90 */
  FUN_00500ca8(&local_b0,param_2,&local_88);
                    /* try { // try from 00507f84 to 00507f8b has its CatchHandler @ 005089ec */
  FUN_00507580(local_80,&local_b0);
  plVar6 = local_b0;
  puVar3 = PTR_LAB_04373088;
  if (((ulong)local_b0 & 1) == 0) {
    pppppppuVar9 = &local_a8;
joined_r0x00507fb4:
    if ((ulong)local_b0 >> 1 != 0) {
      uVar12 = (ulong)local_b0 >> 1;
      do {
        uVar24 = uVar12 - 1;
        ppppppuVar19 = pppppppuVar9[uVar12 - 1];
        pppppppuVar9[uVar12 - 1] = (undefined8 ******)0x0;
        if (ppppppuVar19 != (undefined8 ******)0x0) {
          (*(code *)**ppppppuVar19)(ppppppuVar19);
          FUN_002e2ea0(puVar3,ppppppuVar19);
        }
        uVar12 = uVar24;
      } while (uVar24 != 0);
    }
    memset(pppppppuVar9,0xab,((ulong)plVar6 >> 1) << 3);
    if (((ulong)local_b0 & 1) != 0) {
      pppppppuVar9 = local_a8;
      goto LAB_00508028;
    }
  }
  else {
    pppppppuVar9 = local_a8;
    if (local_a8 != (undefined8 *******)0x0) goto joined_r0x00507fb4;
    pppppppuVar9 = (undefined8 *******)0x0;
LAB_00508028:
    FUN_002e2ea0(PTR_LAB_04373088,pppppppuVar9);
  }
  if (local_88 != 0) {
    if (local_70 == local_68) {
      lVar5 = (long)local_70 - (long)local_78 >> 3;
      uVar12 = lVar5 + 1;
      if (uVar12 >> 0x3d != 0) {
                    /* try { // try from 00508978 to 0050897f has its CatchHandler @ 005089e8 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
        uVar24 = (long)local_68 - (long)local_78 >> 2;
        if (uVar12 <= uVar24) {
          uVar12 = uVar24;
        }
        if (uVar12 != 0) goto LAB_005080a0;
        lVar22 = 0;
      }
      else {
        uVar12 = 0x1fffffffffffffff;
LAB_005080a0:
        lVar22 = FUN_002e2e80(PTR_FUN_04373078,uVar12 << 3);
      }
      puVar17 = (ulong *)(lVar22 + lVar5 * 8);
      puVar14 = (ulong *)(lVar22 + uVar12 * 8);
      *puVar17 = local_88;
      sVar10 = (long)local_70 - (long)local_78;
      puVar15 = (ulong *)((long)puVar17 - sVar10);
      if (0 < (long)sVar10) {
        memcpy(puVar15,local_78,sVar10);
      }
      bVar4 = local_78 != (ulong *)0x0;
      local_78 = puVar15;
      local_70 = puVar17 + 1;
      local_68 = puVar14;
      if (bVar4) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
    }
    else {
      *local_70 = local_88;
      local_70 = local_70 + 1;
    }
  }
  puVar17 = (ulong *)(param_1 + 0xd8);
                    /* try { // try from 00508100 to 0050810b has its CatchHandler @ 005089e8 */
  FUN_005099a8(puVar17,&local_80);
  uVar12 = *puVar17;
  if (uVar12 < 2) {
                    /* try { // try from 00508914 to 0050893f has its CatchHandler @ 005089b8 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("!empty()","external/com_google_absl\\absl/container/inlined_vector.h",0x175,
                  "back");
  }
  if (uVar12 >> 1 == 0) {
    FUN_002ee770("`InlinedVector::at(size_type)` failed bounds check");
LAB_00508940:
                    /* try { // try from 00508940 to 00508967 has its CatchHandler @ 005089a8 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((uVar12 & 1) == 0) {
    lVar5 = param_1 + 0xe0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0xe0);
  }
  lVar22 = *(long *)(lVar5 + ((uVar12 >> 1) - 1) * 8);
  local_a8 = (undefined8 *******)0x0;
  local_a0 = 0;
  local_b0 = (long *)&DAT_656d616e08;
                    /* try { // try from 0050815c to 00508163 has its CatchHandler @ 005089d4 */
  lVar5 = FUN_00500624(param_2 + 0x20,&local_b0);
  if (((ulong)local_b0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_a0);
  }
  puVar3 = PTR_LAB_04373088;
  if (param_2 + 0x28 == lVar5) goto LAB_005085d4;
  if (*(int *)(lVar5 + 0x38) == 6) {
    lVar16 = *(long *)(lVar5 + 0x70);
    lVar5 = *(long *)(lVar5 + 0x78);
    if (lVar16 == lVar5) {
LAB_005085d4:
      FUN_005092dc(puVar17);
    }
    else {
      bVar4 = false;
      do {
        local_b8 = 0;
                    /* try { // try from 005081d4 to 005081e3 has its CatchHandler @ 00508af8 */
        FUN_00508bdc(local_d0,lVar16,&local_b8);
        uVar12 = local_b8;
        if (local_b8 == 0) {
          bVar4 = (local_d0[0] & 1) != 0;
          uVar12 = (ulong)(local_d0[0] >> 1);
          if (bVar4) {
            uVar12 = local_c8;
          }
          if (uVar12 == 0) {
            if (*(long *)(param_1 + 0xd0) != 0) {
                    /* try { // try from 0050835c to 00508387 has its CatchHandler @ 00508a94 */
              FUN_002f2c60(&local_b0,"field:name error:multiple default method configs");
              uVar12 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                                    ,0x68,&local_b0,0,0);
              if (local_70 < local_68) {
                *local_70 = uVar12;
                local_70 = local_70 + 1;
              }
              else {
                lVar20 = (long)local_70 - (long)local_78 >> 3;
                uVar24 = lVar20 + 1;
                if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 00508970 to 00508977 has its CatchHandler @ 00508988 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
                  uVar23 = (long)local_68 - (long)local_78 >> 2;
                  if (uVar24 <= uVar23) {
                    uVar24 = uVar23;
                  }
                  if (uVar24 != 0) goto LAB_00508500;
                  lVar7 = 0;
                }
                else {
                  uVar24 = 0x1fffffffffffffff;
LAB_00508500:
                  lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar24 << 3);
                }
                puVar14 = (ulong *)(lVar7 + lVar20 * 8);
                puVar15 = (ulong *)(lVar7 + uVar24 * 8);
                *puVar14 = uVar12;
                sVar10 = (long)local_70 - (long)local_78;
                puVar18 = (ulong *)((long)puVar14 - sVar10);
                if (0 < (long)sVar10) {
                  memcpy(puVar18,local_78,sVar10);
                }
                bVar4 = local_78 != (ulong *)0x0;
                local_78 = puVar18;
                local_70 = puVar14 + 1;
                local_68 = puVar15;
                if (bVar4) {
                  FUN_002e2ea0(puVar3);
                }
              }
            }
            *(long *)(param_1 + 0xd0) = lVar22;
          }
          else {
            uVar12 = (ulong)local_d0 | 1;
            if (bVar4) {
              uVar12 = local_c0;
            }
                    /* try { // try from 00508238 to 0050823f has its CatchHandler @ 00508aa8 */
            FUN_002f2ff0(&local_b0,uVar12);
                    /* try { // try from 00508240 to 0050824b has its CatchHandler @ 00508ab8 */
            plVar6 = (long *)FUN_00508fd8(param_1 + 0xa8,&local_b0);
            if (*plVar6 == 0) {
              *plVar6 = lVar22;
            }
            else {
                    /* try { // try from 00508254 to 0050827f has its CatchHandler @ 00508ac8 */
              FUN_002f2c60(auStack_f0,"field:name error:multiple method configs with same name");
              uVar12 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                                    ,0x72,auStack_f0,0,0);
              if (local_70 < local_68) {
                *local_70 = uVar12;
                plVar6 = local_b0;
                local_70 = local_70 + 1;
              }
              else {
                lVar20 = (long)local_70 - (long)local_78 >> 3;
                uVar24 = lVar20 + 1;
                if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 00508968 to 0050896f has its CatchHandler @ 00508998 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
                  uVar23 = (long)local_68 - (long)local_78 >> 2;
                  if (uVar24 <= uVar23) {
                    uVar24 = uVar23;
                  }
                  if (uVar24 != 0) goto LAB_0050849c;
                  lVar7 = 0;
                }
                else {
                  uVar24 = 0x1fffffffffffffff;
LAB_0050849c:
                  lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar24 << 3);
                }
                puVar14 = (ulong *)(lVar7 + lVar20 * 8);
                puVar15 = (ulong *)(lVar7 + uVar24 * 8);
                *puVar14 = uVar12;
                sVar10 = (long)local_70 - (long)local_78;
                puVar18 = (ulong *)((long)puVar14 - sVar10);
                if (0 < (long)sVar10) {
                  memcpy(puVar18,local_78,sVar10);
                }
                bVar4 = local_78 != (ulong *)0x0;
                plVar6 = local_b0;
                local_78 = puVar18;
                local_70 = puVar14 + 1;
                local_68 = puVar15;
                if (bVar4) {
                  FUN_002e2ea0(puVar3);
                  plVar6 = local_b0;
                }
              }
              local_b0 = plVar6;
              if ((plVar6 != (long *)0x0) && (plVar11 = (long *)*plVar6, plVar11 != (long *)0x0)) {
                plVar13 = plVar11 + 1;
                lVar20 = *plVar11;
                do {
                  lVar7 = *plVar13;
                  cVar2 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar4) {
                    *plVar13 = lVar7 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if ((lVar20 != 0) && (*(char *)(lVar20 + 0x10) != '\0')) {
                    /* try { // try from 005082d8 to 0050830f has its CatchHandler @ 00508ab8 */
                  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                               0xb7,1,"%s:%p unref %ld -> %ld",*(undefined8 *)(lVar20 + 8),plVar11,
                               lVar7);
                }
                if (lVar7 < 1) goto LAB_00508940;
                if (lVar7 == 1) {
                  (*(code *)plVar6[3])(plVar6[4]);
                }
              }
            }
          }
          bVar4 = true;
        }
        else if (local_70 == local_68) {
          lVar20 = (long)local_70 - (long)local_78 >> 3;
          uVar24 = lVar20 + 1;
          if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 0050890c to 00508913 has its CatchHandler @ 005089bc */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
            uVar23 = (long)local_68 - (long)local_78 >> 2;
            if (uVar24 <= uVar23) {
              uVar24 = uVar23;
            }
            if (uVar24 != 0) goto LAB_005083b0;
            lVar7 = 0;
          }
          else {
            uVar24 = 0x1fffffffffffffff;
LAB_005083b0:
            lVar7 = FUN_002e2e80(PTR_FUN_04373078,uVar24 << 3);
          }
          puVar14 = (ulong *)(lVar7 + lVar20 * 8);
          puVar15 = (ulong *)(lVar7 + uVar24 * 8);
          *puVar14 = uVar12;
          sVar10 = (long)local_70 - (long)local_78;
          puVar18 = (ulong *)((long)puVar14 - sVar10);
          if (0 < (long)sVar10) {
            memcpy(puVar18,local_78,sVar10);
          }
          bVar1 = local_78 != (ulong *)0x0;
          local_78 = puVar18;
          local_70 = puVar14 + 1;
          local_68 = puVar15;
          if (bVar1) {
            FUN_002e2ea0(puVar3);
          }
        }
        else {
          *local_70 = local_b8;
          local_70 = local_70 + 1;
        }
        if ((local_d0[0] & 1) != 0) {
          FUN_002e2ea0(puVar3,local_c0);
        }
        lVar16 = lVar16 + 0x50;
      } while (lVar16 != lVar5);
      if (!bVar4) goto LAB_005085d4;
    }
    if (local_70 == local_78) goto LAB_00508738;
                    /* try { // try from 005085e8 to 00508617 has its CatchHandler @ 005089d0 */
    FUN_002f2c60(&local_b0,"methodConfig");
    uVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                         ,0x80,&local_b0,local_78,(long)local_70 - (long)local_78 >> 3);
    puVar3 = PTR_LAB_04373088;
    puVar15 = local_80;
    puVar17 = local_78;
    puVar14 = local_70;
    if (local_70 != local_78) {
      lVar5 = 0;
      uVar12 = *local_78;
      puVar14 = local_78;
      puVar18 = local_70;
      do {
        if (uVar12 < 5) {
          puVar3 = PTR_LAB_04373088;
          puVar15 = local_80;
          if ((ulong)((long)puVar18 - (long)puVar14 >> 3) <= lVar5 + 1U) break;
        }
        else {
                    /* try { // try from 00508664 to 0050866f has its CatchHandler @ 00508af4 */
          FUN_002f0430(uVar12,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xd5);
          puVar17 = local_78;
          puVar18 = local_70;
          puVar14 = local_78;
          puVar3 = PTR_LAB_04373088;
          puVar15 = local_80;
          if ((ulong)((long)local_70 - (long)local_78 >> 3) <= lVar5 + 1U) break;
        }
        lVar5 = lVar5 + 1;
        uVar12 = puVar14[lVar5];
      } while( true );
    }
  }
  else {
                    /* try { // try from 00508574 to 0050859f has its CatchHandler @ 005089cc */
    FUN_002f2c60(&local_b0,"field:name error:not of type Array");
    uVar12 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                          ,0x5a,&local_b0,0,0);
    if (local_70 < local_68) {
      *local_70 = uVar12;
      local_70 = local_70 + 1;
      if (local_70 != local_78) {
LAB_005087dc:
                    /* try { // try from 005087dc to 0050880b has its CatchHandler @ 005089d0 */
        FUN_002f2c60(&local_b0,"methodConfig");
        uVar8 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                             ,0x5b,&local_b0,local_78,(long)local_70 - (long)local_78 >> 3);
        puVar3 = PTR_LAB_04373088;
        puVar15 = local_80;
        puVar17 = local_78;
        puVar14 = local_70;
        if (local_70 != local_78) {
          lVar5 = 0;
          uVar12 = *local_78;
          puVar14 = local_78;
          puVar18 = local_70;
          do {
            if (uVar12 < 5) {
              puVar3 = PTR_LAB_04373088;
              puVar15 = local_80;
              if ((ulong)((long)puVar18 - (long)puVar14 >> 3) <= lVar5 + 1U) break;
            }
            else {
                    /* try { // try from 0050889c to 005088a7 has its CatchHandler @ 00508aa4 */
              FUN_002f0430(uVar12,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xd5);
              puVar17 = local_78;
              puVar18 = local_70;
              puVar14 = local_78;
              puVar3 = PTR_LAB_04373088;
              puVar15 = local_80;
              if ((ulong)((long)local_70 - (long)local_78 >> 3) <= lVar5 + 1U) break;
            }
            lVar5 = lVar5 + 1;
            uVar12 = puVar14[lVar5];
          } while( true );
        }
        goto joined_r0x00508744;
      }
    }
    else {
      lVar5 = (long)local_70 - (long)local_78 >> 3;
      uVar24 = lVar5 + 1;
      if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 00508980 to 00508987 has its CatchHandler @ 005089cc */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
        uVar23 = (long)local_68 - (long)local_78 >> 2;
        if (uVar24 <= uVar23) {
          uVar24 = uVar23;
        }
        if (uVar24 != 0) goto LAB_005086d0;
        lVar22 = 0;
      }
      else {
        uVar24 = 0x1fffffffffffffff;
LAB_005086d0:
        lVar22 = FUN_002e2e80(PTR_FUN_04373078,uVar24 << 3);
      }
      puVar17 = (ulong *)(lVar22 + lVar5 * 8);
      puVar14 = (ulong *)(lVar22 + uVar24 * 8);
      *puVar17 = uVar12;
      sVar10 = (long)local_70 - (long)local_78;
      puVar15 = (ulong *)((long)puVar17 - sVar10);
      if (0 < (long)sVar10) {
        memcpy(puVar15,local_78,sVar10);
      }
      bVar4 = local_78 != (ulong *)0x0;
      local_78 = puVar15;
      local_70 = puVar17 + 1;
      local_68 = puVar14;
      if (bVar4) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      if (local_70 != local_78) goto LAB_005087dc;
    }
LAB_00508738:
    uVar8 = 0;
    puVar3 = PTR_LAB_04373088;
    puVar15 = local_80;
    puVar17 = local_78;
    puVar14 = local_70;
  }
joined_r0x00508744:
  local_70 = puVar14;
  PTR_LAB_04373088 = puVar3;
  if (puVar15 == (ulong *)0x0) {
    local_80 = (ulong *)0x0;
    local_70 = puVar17;
    goto joined_r0x00508858;
  }
  local_80 = (ulong *)0x0;
  uVar12 = *puVar15;
  if ((uVar12 & 1) == 0) {
    puVar17 = puVar15 + 1;
joined_r0x0050876c:
    if (uVar12 >> 1 != 0) {
      uVar24 = uVar12 >> 1;
      do {
        uVar23 = uVar24 - 1;
        puVar21 = (undefined8 *)puVar17[uVar24 - 1];
        puVar17[uVar24 - 1] = 0;
        if (puVar21 != (undefined8 *)0x0) {
          (**(code **)*puVar21)(puVar21);
          FUN_002e2ea0(puVar3,puVar21);
        }
        uVar24 = uVar23;
      } while (uVar23 != 0);
    }
    memset(puVar17,0xab,(uVar12 >> 1) << 3);
    if ((*puVar15 & 1) != 0) {
      uVar12 = puVar15[1];
      goto LAB_00508838;
    }
  }
  else {
    puVar17 = (ulong *)puVar15[1];
    if (puVar17 != (ulong *)0x0) goto joined_r0x0050876c;
    uVar12 = 0;
LAB_00508838:
    FUN_002e2ea0(PTR_LAB_04373088,uVar12);
  }
  FUN_002e2ea0(PTR_LAB_04373088,puVar15);
  local_70 = local_78;
joined_r0x00508858:
  if (local_70 != (ulong *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  return uVar8;
}


