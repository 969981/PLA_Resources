/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003432c4; name: FUN_003432c4
 */


ulong * FUN_003432c4(ulong *param_1,uint param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong uVar13;
  size_t __n;
  void *pvVar14;
  void *__dest;
  undefined2 uVar15;
  undefined8 uVar16;
  ulong *local_a0;
  size_t local_98;
  void *local_90;
  undefined4 uStack_88;
  undefined3 uStack_84;
  byte local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  void *local_70;
  ulong *local_68;
  
  lVar3 = *(long *)(param_1[2] + 0x90);
  uVar13 = (long)(int)param_2 * 0x1000193 ^ (long)param_1 * 0x100011b;
  uVar7 = *(ulong *)(lVar3 + 200);
  if (uVar7 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      uVar5 = uVar7 - 1 & uVar13;
      plVar8 = *(long **)(*(long *)(lVar3 + 0xc0) + uVar5 * 8);
    }
    else {
      uVar5 = uVar13;
      if (uVar7 <= uVar13) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar13 / uVar7;
        }
        uVar5 = uVar13 - uVar5 * uVar7;
      }
      plVar8 = *(long **)(*(long *)(lVar3 + 0xc0) + uVar5 * 8);
    }
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar10 < 2) {
        uVar10 = plVar8[1];
        if (uVar13 == uVar10) goto LAB_003433a0;
        while ((uVar10 & uVar7 - 1) == uVar5) {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_0034341c;
            uVar10 = plVar8[1];
            if (uVar13 != uVar10) break;
LAB_003433a0:
            if (((ulong *)plVar8[2] == param_1) && (*(uint *)(plVar8 + 3) == param_2))
            goto LAB_003439a0;
          }
        }
      }
      else {
        do {
          uVar10 = plVar8[1];
          if (uVar13 == uVar10) {
            if (((ulong *)plVar8[2] == param_1) && (*(uint *)(plVar8 + 3) == param_2))
            goto LAB_003439a0;
          }
          else {
            if (uVar7 <= uVar10) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar10 / uVar7;
              }
              uVar10 = uVar10 - uVar2 * uVar7;
            }
            if (uVar10 != uVar5) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_0034341c:
  std::mutex::lock();
  uVar7 = *(ulong *)(lVar3 + 0xf0);
  plVar8 = (long *)(lVar3 + 0xe8);
  if (uVar7 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      uVar5 = uVar7 - 1 & uVar13;
      plVar9 = *(long **)(*plVar8 + uVar5 * 8);
    }
    else {
      uVar5 = uVar13;
      if (uVar7 <= uVar13) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar13 / uVar7;
        }
        uVar5 = uVar13 - uVar5 * uVar7;
      }
      plVar9 = *(long **)(*plVar8 + uVar5 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar10 < 2) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar13) goto LAB_003434ac;
        while ((uVar10 & uVar7 - 1) == uVar5) {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_00343528;
            uVar10 = plVar9[1];
            if (uVar10 != uVar13) break;
LAB_003434ac:
            if (((ulong *)plVar9[2] == param_1) && (*(uint *)(plVar9 + 3) == param_2))
            goto LAB_003439ac;
          }
        }
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar13) {
            if (((ulong *)plVar9[2] == param_1) && (*(uint *)(plVar9 + 3) == param_2))
            goto LAB_003439ac;
          }
          else {
            if (uVar7 <= uVar10) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar10 / uVar7;
              }
              uVar10 = uVar10 - uVar2 * uVar7;
            }
            if (uVar10 != uVar5) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_00343528:
  std::mutex::unlock();
LAB_00343530:
  std::mutex::lock();
  uVar7 = *(ulong *)(lVar3 + 0xf0);
  if (uVar7 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar10 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      uVar5 = uVar7 - 1 & uVar13;
      plVar9 = *(long **)(*plVar8 + uVar5 * 8);
    }
    else {
      uVar5 = uVar13;
      if (uVar7 <= uVar13) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar13 / uVar7;
        }
        uVar5 = uVar13 - uVar5 * uVar7;
      }
      plVar9 = *(long **)(*plVar8 + uVar5 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar10 < 2) {
        uVar10 = plVar9[1];
        if (uVar10 == uVar13) goto LAB_003435b4;
        while ((uVar10 & uVar7 - 1) == uVar5) {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_00343630;
            uVar10 = plVar9[1];
            if (uVar10 != uVar13) break;
LAB_003435b4:
            if (((ulong *)plVar9[2] == param_1) && (*(uint *)(plVar9 + 3) == param_2))
            goto LAB_003439c0;
          }
        }
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar13) {
            if (((ulong *)plVar9[2] == param_1) && (*(uint *)(plVar9 + 3) == param_2))
            goto LAB_003439c0;
          }
          else {
            if (uVar7 <= uVar10) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar10 / uVar7;
              }
              uVar10 = uVar10 - uVar2 * uVar7;
            }
            if (uVar10 != uVar5) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_00343630:
  pbVar6 = (byte *)*param_1;
  if ((*pbVar6 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
                    /* try { // try from 00343648 to 0034365b has its CatchHandler @ 00343a5c */
  FUN_0033b810(&local_80,"UNKNOWN_ENUM_VALUE_%s_%d",pbVar6,param_2);
                    /* try { // try from 0034365c to 00343673 has its CatchHandler @ 00343a70 */
  lVar3 = FUN_00341fc0();
  FUN_0038e9d0(PTR_DAT_04373b78,0);
  lVar3 = *(long *)(lVar3 + 0x20);
                    /* try { // try from 00343678 to 00343683 has its CatchHandler @ 00343a80 */
  puVar12 = (ulong *)FUN_003415f0(lVar3,0x28);
  puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  pvVar14 = local_70;
  uVar7 = uStack_78;
  if (puVar4 != (ulong *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    if ((local_80 & 1) == 0) {
      puVar4[2] = (ulong)local_70;
      puVar4[1] = uStack_78;
      *puVar4 = CONCAT71(uStack_7f,local_80);
    }
    else {
      if (0xffffffffffffffef < uStack_78) {
                    /* try { // try from 003439d4 to 003439db has its CatchHandler @ 00343a80 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_78 < 0x17) {
        __dest = (void *)((long)puVar4 + 1);
        *(char *)puVar4 = (char)((int)uStack_78 << 1);
        if (uStack_78 != 0) goto LAB_00343720;
      }
      else {
        uVar13 = uStack_78 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar13);
        *puVar4 = uVar13 | 1;
        puVar4[1] = uVar7;
        puVar4[2] = (ulong)__dest;
LAB_00343720:
        memcpy(__dest,pvVar14,uVar7);
      }
      *(undefined1 *)((long)__dest + uVar7) = 0;
    }
  }
  lVar3 = lVar3 + 0xd0;
                    /* try { // try from 0034373c to 00343747 has its CatchHandler @ 00343a80 */
  local_a0 = puVar4;
  FUN_003410d8(lVar3,&local_a0);
  *puVar12 = (ulong)puVar4;
  pbVar6 = (byte *)param_1[1];
  local_a0 = (ulong *)0x0;
  local_98 = 0;
  local_90 = (void *)0x0;
  if ((*pbVar6 & 1) == 0) {
    __n = (size_t)(*pbVar6 >> 1);
    pbVar6 = pbVar6 + 1;
  }
  else {
    __n = *(size_t *)(pbVar6 + 8);
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* try { // try from 003439cc to 003439d3 has its CatchHandler @ 00343a08 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n + 1 < 0x17) {
    local_a0 = (ulong *)(ulong)(byte)((int)__n << 1);
    pvVar14 = (void *)((ulong)&local_a0 | 1);
    if (__n != 0) goto LAB_003437d0;
  }
  else {
    uVar7 = __n + 0x11 & 0xfffffffffffffff0;
    pvVar14 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
    local_a0 = (ulong *)(uVar7 | 1);
    local_98 = __n;
    local_90 = pvVar14;
LAB_003437d0:
    memcpy(pvVar14,pbVar6,__n);
  }
  *(undefined1 *)((long)pvVar14 + __n) = 0;
                    /* try { // try from 003437e4 to 003437f7 has its CatchHandler @ 00343a08 */
  FUN_002e4094(&local_a0,&DAT_0389ff53,1);
  uVar7 = (ulong)(local_80 >> 1);
  pvVar14 = (void *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    uVar7 = uStack_78;
    pvVar14 = local_70;
  }
                    /* try { // try from 00343818 to 0034381f has its CatchHandler @ 00343a1c */
  pbVar6 = (byte *)FUN_002e4094(&local_a0,pvVar14,uVar7);
  uStack_88 = *(undefined4 *)(pbVar6 + 1);
  bVar1 = *pbVar6;
  uStack_84 = (undefined3)((uint)*(undefined4 *)(pbVar6 + 4) >> 8);
  uVar7 = *(ulong *)(pbVar6 + 8);
  pvVar14 = *(void **)(pbVar6 + 0x10);
  pbVar6[0x10] = 0;
  pbVar6[0x11] = 0;
  pbVar6[0x12] = 0;
  pbVar6[0x13] = 0;
  pbVar6[0x14] = 0;
  pbVar6[0x15] = 0;
  pbVar6[0x16] = 0;
  pbVar6[0x17] = 0;
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[5] = 0;
  pbVar6[6] = 0;
  pbVar6[7] = 0;
  pbVar6[8] = 0;
  pbVar6[9] = 0;
  pbVar6[10] = 0;
  pbVar6[0xb] = 0;
  pbVar6[0xc] = 0;
  pbVar6[0xd] = 0;
  pbVar6[0xe] = 0;
  pbVar6[0xf] = 0;
  puVar4 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (puVar4 != (ulong *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    if ((bVar1 & 1) == 0) {
      *(byte *)puVar4 = bVar1;
      *(uint *)((long)puVar4 + 4) = CONCAT31(uStack_84,uStack_88._3_1_);
      *(undefined4 *)((long)puVar4 + 1) = uStack_88;
      puVar4[1] = uVar7;
      puVar4[2] = (ulong)pvVar14;
    }
    else {
      if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 003439dc to 003439e3 has its CatchHandler @ 003439e4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar7 < 0x17) {
        pbVar6 = (byte *)((long)puVar4 + 1);
        *(byte *)puVar4 = (byte)((int)uVar7 << 1);
        if (uVar7 != 0) goto LAB_003438dc;
      }
      else {
        uVar13 = uVar7 + 0x10 & 0xfffffffffffffff0;
        pbVar6 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar13);
        puVar4[1] = uVar7;
        puVar4[2] = (ulong)pbVar6;
        *puVar4 = uVar13 | 1;
LAB_003438dc:
        memcpy(pbVar6,pvVar14,uVar7);
      }
      pbVar6[uVar7] = 0;
    }
  }
                    /* try { // try from 003438f4 to 003438ff has its CatchHandler @ 003439e4 */
  local_68 = puVar4;
  FUN_003410d8(lVar3,&local_68);
  puVar12[1] = (ulong)puVar4;
  if ((bVar1 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,pvVar14);
  }
  if (((ulong)local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
  *(uint *)(puVar12 + 2) = param_2;
  puVar12[3] = (ulong)param_1;
                    /* try { // try from 00343938 to 0034393b has its CatchHandler @ 00343a80 */
  uVar7 = FUN_003b8ddc();
  local_98 = (size_t)param_2;
  puVar12[4] = uVar7;
                    /* try { // try from 0034394c to 0034395b has its CatchHandler @ 00343a0c */
  local_a0 = param_1;
  local_68 = puVar12;
  FUN_00340a70(plVar8,&local_a0,&local_68);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
LAB_00343974:
  std::mutex::unlock();
  return puVar12;
LAB_003439a0:
  if ((undefined8 *)plVar8[4] != (undefined8 *)0x0) {
    return (undefined8 *)plVar8[4];
  }
  goto LAB_0034341c;
LAB_003439ac:
  puVar11 = (undefined8 *)plVar9[4];
  std::mutex::unlock();
  if (puVar11 != (undefined8 *)0x0) {
    return puVar11;
  }
  goto LAB_00343530;
LAB_003439c0:
  puVar12 = (ulong *)plVar9[4];
  if (puVar12 != (ulong *)0x0) goto LAB_00343974;
  goto LAB_00343630;
}


