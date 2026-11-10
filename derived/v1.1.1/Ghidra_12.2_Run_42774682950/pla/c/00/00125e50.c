/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00125e50; name: FUN_00125e50
 */


/* WARNING: Removing unreachable block (ram,0x00126300) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00125e50(uint *param_1,uint *param_2,uint *param_3,int param_4,undefined8 param_5,
                long param_6,uint *param_7,long param_8,uint param_9)

{
  bool bVar1;
  uint *puVar2;
  void *__src;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *__n;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  char *pcVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  code *pcVar22;
  uint *puVar23;
  ulong uVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *__dest;
  void *pvVar28;
  ulong uVar29;
  size_t sVar30;
  uint *__src_00;
  uint *local_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  ulong local_a0;
  long local_98;
  ulong local_90;
  uint *local_88;
  long local_80;
  long local_78;
  uint *local_70 [2];
  
  puVar15 = param_3;
  if (param_1 < param_2) {
    puVar2 = (uint *)((long)param_3 + (long)param_4);
    param_8 = (long)param_7 + param_8;
    __dest = param_1;
    __src_00 = param_7;
    do {
      while( true ) {
        puVar27 = (uint *)((long)param_2 - (long)__dest);
        __n = puVar27;
        if (0x1ffff < (long)puVar27) {
          __n = (uint *)0x20000;
        }
        if (puVar2 < puVar15 + 1) {
          return -1;
        }
        uVar8 = (*puVar15 & 0xff00ff00) >> 8 | (*puVar15 & 0xff00ff) << 8;
        uVar19 = uVar8 >> 0x10 | uVar8 << 0x10;
        if (-1 < (int)uVar19) break;
        uVar24 = (ulong)(uVar19 >> 8) & 0x7ffff;
        __src = (void *)((long)puVar15 + 3);
        puVar4 = (uint *)((long)__src + uVar24);
        if (puVar2 < puVar4) {
          return -1;
        }
        uVar8 = (uVar8 & 0xffff) >> 0xb;
        uVar19 = uVar8 & 0xf;
        if ((long)uVar24 < (long)__n) {
          if ((long)__n < 0x80) {
            FUN_0010a430();
            pcVar22 = *(code **)PTR_PTR_043722f8;
            if (pcVar22 == (code *)0x0) goto LAB_001267d0;
            pcVar18 = "OODLE ERROR : corruption : chunk_len >= 128\n";
            uVar16 = 0x111a;
          }
          else {
            lVar11 = FUN_001038c0(9,__n);
            if (param_8 - (long)__src_00 < lVar11) {
              FUN_0010a430();
              pcVar22 = *(code **)PTR_PTR_043722f8;
              if (pcVar22 == (code *)0x0) goto LAB_001267d0;
              pcVar18 = "OODLE ERROR : decoder scratch too small\n";
              uVar16 = 0x1122;
            }
            else {
              puVar5 = (uint *)((long)__src_00 + lVar11);
              lVar14 = (long)__dest + (param_6 - (long)param_1);
              if ((param_9 & 1) != 0) {
                if (1 < uVar19) goto LAB_00126a58;
                bVar10 = __src <= (void *)((long)__dest + (long)__n);
                bVar1 = __dest <= puVar4;
                if (puVar4 < (uint *)((long)puVar15 + 0xd)) {
                  FUN_0010a430();
                  pcVar22 = *(code **)PTR_PTR_043722f8;
                  if (pcVar22 == (code *)0x0) goto LAB_001269c0;
                  pcVar18 = "OODLE ERROR : corruption : comp_ptr+10 <= comp_end\n";
                  uVar16 = 0xe54;
LAB_001269b8:
                  (*pcVar22)(0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",uVar16,pcVar18);
                }
                else {
                  puVar3 = __src_00 + 0x24;
                  bVar9 = bVar10 && bVar1;
                  pvVar28 = __src;
                  if (lVar14 == 0) {
                    pvVar28 = (void *)((long)puVar15 + 0xb);
                    *(undefined8 *)__dest = *(undefined8 *)((long)puVar15 + 3);
                  }
                  puVar15 = __n;
                  if (lVar11 + -0x90 <= (long)__n) {
                    puVar15 = (uint *)(lVar11 + -0x90);
                  }
                  local_130 = puVar3;
                  lVar11 = FUN_00126a90(&local_130,pvVar28,puVar4,local_70,puVar15,bVar9);
                  if (lVar11 < 0) goto LAB_00126a58;
                  lVar13 = (long)puVar3 + (long)local_70[0];
                  puVar15 = __n;
                  if ((long)puVar5 - lVar13 <= (long)__n) {
                    puVar15 = (uint *)((long)puVar5 - lVar13);
                  }
                  local_78 = lVar13;
                  lVar12 = FUN_00126a90(&local_78,(long)pvVar28 + lVar11,puVar4,&local_80,puVar15,
                                        bVar9,lVar13,puVar5);
                  puVar15 = (uint *)((long)pvVar28 + lVar11 + lVar12);
                  if (lVar12 < 0) goto LAB_00126a58;
                  *(long *)(__src_00 + 10) = local_80;
                  if ((long)__n < 0x10001) {
                    *(long *)(__src_00 + 0xc) = local_80;
                  }
                  else {
                    if (puVar4 < (uint *)((long)puVar15 + 2)) {
                      FUN_0010a430();
                      pcVar22 = *(code **)PTR_PTR_043722f8;
                      if (pcVar22 != (code *)0x0) {
                        pcVar18 = "OODLE ERROR : corruption : comp_ptr+2 <= comp_end\n";
                        uVar16 = 0xea0;
                        goto LAB_001269b8;
                      }
                      goto LAB_001269c0;
                    }
                    uVar8 = *puVar15;
                    *(ulong *)(__src_00 + 0xc) = (ulong)(ushort)uVar8;
                    puVar15 = (uint *)((long)puVar15 + 2);
                    if (local_80 < (long)(ulong)(ushort)uVar8) goto LAB_00126a58;
                  }
                  puVar25 = (uint *)((long)puVar15 + 2);
                  if (puVar4 < puVar25) {
                    FUN_0010a430();
                    pcVar22 = *(code **)PTR_PTR_043722f8;
                    if (pcVar22 != (code *)0x0) {
                      pcVar18 = "OODLE ERROR : corruption : comp_ptr+2 <= comp_end\n";
                      uVar16 = 0xeb4;
                      goto LAB_001269b8;
                    }
                  }
                  else {
                    puVar26 = (uint *)(lVar13 + local_80);
                    if ((ulong)(ushort)*puVar15 == 0xffff) {
                      uVar29 = (ulong)__n >> 1 & 0x7fffffff;
                      uVar17 = uVar29;
                      if ((long)puVar5 - (long)puVar26 <= (long)uVar29) {
                        uVar17 = (long)puVar5 - (long)puVar26;
                      }
                      local_88 = puVar26;
                      lVar11 = FUN_00126a90(&local_88,puVar25,puVar4,&local_90,uVar17,0,puVar26);
                      if (lVar11 < 0) goto LAB_00126a58;
                      lVar13 = (long)puVar26 + local_90;
                      if ((long)puVar5 - lVar13 <= (long)uVar29) {
                        uVar29 = (long)puVar5 - lVar13;
                      }
                      local_98 = lVar13;
                      lVar12 = FUN_00126a90(&local_98,(long)puVar25 + lVar11,puVar4,&local_a0,uVar29
                                            ,0,lVar13);
                      uVar17 = local_a0;
                      if (lVar12 < 0) goto LAB_00126a58;
                      puVar15 = (uint *)((long)puVar25 + lVar11 + lVar12);
                      uVar29 = lVar13 + local_a0;
                      if (local_90 != local_a0) {
                        FUN_0010a430();
                        if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
                          (**(code **)PTR_PTR_043722f8)
                                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",0xedb,
                                     "OODLE ERROR : corruption : off16s_hi_count == off16s_lo_count\n"
                                    );
                        }
                        FUN_0010a450();
                        goto LAB_00126a58;
                      }
                      if ((uVar29 & 1) != 0) {
                        uVar29 = uVar29 + 1;
                      }
                      puVar23 = (uint *)(uVar29 + (local_a0 & 0x7fffffff) * 2);
                      if (puVar5 < puVar23) {
                        FUN_0010a430();
                        if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
                          (**(code **)PTR_PTR_043722f8)
                                    (0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",0xeeb,
                                     "OODLE ERROR : corruption : scratch_ptr+2*num_off16s <= scratch_end\n"
                                    );
                        }
                        FUN_0010a450();
                        goto LAB_00126a58;
                      }
                      *(ulong *)(__src_00 + 0x12) = uVar29;
                      FUN_0010e4c0(uVar29,local_a0 & 0xffffffff,local_98,local_88);
                      puVar25 = *(uint **)(__src_00 + 0x12);
                      sVar30 = (uVar17 & 0x7fffffff) << 1;
                    }
                    else {
                      sVar30 = (ulong)(ushort)*puVar15 * 2;
                      puVar15 = (uint *)((long)puVar25 + sVar30);
                      if (puVar4 < puVar15) {
                        FUN_0010a430();
                        pcVar22 = *(code **)PTR_PTR_043722f8;
                        if (pcVar22 != (code *)0x0) {
                          pcVar18 = "OODLE ERROR : corruption : comp_ptr+2*num_off16s <= comp_end\n"
                          ;
                          uVar16 = 0xef9;
                          goto LAB_001269b8;
                        }
                        goto LAB_001269c0;
                      }
                      if (bVar10 && bVar1) {
                        if ((long)puVar5 - (long)puVar26 < (long)sVar30) goto LAB_00126a58;
                        memcpy(puVar26,puVar25,sVar30);
                        *(uint **)(__src_00 + 0x12) = puVar26;
                        puVar23 = (uint *)((long)puVar26 + sVar30);
                        puVar25 = puVar26;
                      }
                      else {
                        *(uint **)(__src_00 + 0x12) = puVar25;
                        puVar23 = puVar26;
                      }
                    }
                    puVar26 = (uint *)((long)puVar15 + 3);
                    *(size_t *)(__src_00 + 0x14) = (long)puVar25 + sVar30;
                    if (puVar26 <= puVar4) {
                      uVar8 = (uint)*(byte *)((long)puVar15 + 1) << 8;
                      uVar7 = (uint)*(byte *)((long)puVar15 + 2) << 0x10 | uVar8;
                      if (uVar7 == 0 && (byte)*puVar15 == 0) {
                        puVar21 = (undefined8 *)((long)puVar23 + 3U & 0xfffffffffffffffc);
                        puVar15 = (uint *)(puVar21 + 4);
                        __src_00[0x1a] = 0;
                        __src_00[0x1b] = 0;
                        __src_00[0x1c] = 0;
                        __src_00[0x1d] = 0;
                        *(undefined8 **)(__src_00 + 0x16) = puVar21;
                        *(undefined8 **)(__src_00 + 0x18) = puVar21;
                        if (puVar15 <= puVar5) {
                          puVar21[2] = 0;
                          puVar21[3] = 0;
                          *puVar21 = 0;
                          puVar21[1] = 0;
                          if (bVar9) goto LAB_00126444;
LAB_001264ac:
                          *(uint **)(__src_00 + 4) = puVar26;
                          puVar15 = puVar4;
LAB_001264b4:
                          *(uint **)(__src_00 + 6) = puVar15;
                          *(uint **)__src_00 = __dest;
                          *(uint **)(__src_00 + 2) = puVar3;
                          *(long *)(__src_00 + 8) = local_78;
                          *(long *)(__src_00 + 0x22) = local_78 + local_80;
                          *(uint **)(__src_00 + 0xe) = local_130;
                          *(long *)(__src_00 + 0x10) = (long)local_130 + (long)local_70[0];
                          goto LAB_001264f0;
                        }
                        FUN_0010a430();
                        pcVar22 = *(code **)PTR_PTR_043722f8;
                        if (pcVar22 == (code *)0x0) goto LAB_00126a50;
                        pcVar18 = 
                        "OODLE ERROR : corruption : (scratch_ptr + scratch_bytes_needed) <= scratch_end\n"
                        ;
                        uVar16 = 0xf24;
LAB_00126a48:
                        (*pcVar22)(0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",uVar16,pcVar18)
                        ;
                      }
                      else {
                        uVar7 = uVar7 >> 0xc;
                        uVar17 = (ulong)uVar7;
                        puVar25 = puVar26;
                        if (uVar7 != 0xfff) {
LAB_00126380:
                          uVar8 = uVar8 & 0xf00 | (uint)(byte)*puVar15;
                          uVar29 = (ulong)uVar8;
                          puVar26 = puVar25;
                          if (uVar8 == 0xfff) {
                            puVar26 = (uint *)((long)puVar25 + 2);
                            if (puVar4 < puVar26) {
                              FUN_0010a430();
                              pcVar22 = *(code **)PTR_PTR_043722f8;
                              if (pcVar22 != (code *)0x0) {
                                pcVar18 = "OODLE ERROR : corruption : comp_ptr+2 <= comp_end\n";
                                uVar16 = 0xf37;
                                goto LAB_00126a48;
                              }
                              goto LAB_00126a50;
                            }
                            uVar29 = (ulong)(ushort)*puVar25;
                          }
                          *(ulong *)(__src_00 + 0x1a) = uVar17;
                          *(ulong *)(__src_00 + 0x1c) = uVar29;
                          if ((uint *)((long)puVar23 +
                                      (ulong)(((int)uVar29 + (int)uVar17) * 4 + 0x40)) <= puVar5) {
                            uVar20 = (long)puVar23 + 3U & 0xfffffffffffffffc;
                            *(ulong *)(__src_00 + 0x16) = uVar20;
                            puVar21 = (undefined8 *)(uVar20 + (uint)((int)uVar17 << 2));
                            puVar21[2] = 0;
                            puVar21[3] = 0;
                            *puVar21 = 0;
                            puVar21[1] = 0;
                            puVar6 = (undefined8 *)
                                     ((long)(puVar21 + 4) + (ulong)(uint)((int)uVar29 << 2));
                            *(undefined8 **)(__src_00 + 0x18) = puVar21 + 4;
                            puVar6[2] = 0;
                            puVar6[3] = 0;
                            *puVar6 = 0;
                            puVar6[1] = 0;
                            lVar11 = FUN_00126c90(puVar26,puVar4,*(undefined8 *)(__src_00 + 0x16),
                                                  uVar17,lVar14);
                            if (lVar11 < 0) goto LAB_00126a58;
                            lVar13 = FUN_00126c90((long)puVar26 + lVar11,puVar4,
                                                  *(undefined8 *)(__src_00 + 0x18),uVar29,
                                                  lVar14 + 0x10000);
                            if (lVar13 < 0) goto LAB_00126a58;
                            puVar15 = (uint *)(puVar6 + 4);
                            puVar26 = (uint *)((long)puVar26 + lVar11 + lVar13);
                            if (!bVar10 || !bVar1) goto LAB_001264ac;
LAB_00126444:
                            sVar30 = (long)puVar4 - (long)puVar26;
                            if ((long)puVar5 - (long)puVar15 < (long)sVar30) goto LAB_00126a58;
                            memcpy(puVar15,puVar26,sVar30);
                            *(uint **)(__src_00 + 4) = puVar15;
                            puVar15 = (uint *)((long)puVar15 + sVar30);
                            goto LAB_001264b4;
                          }
                          FUN_0010a430();
                          pcVar22 = *(code **)PTR_PTR_043722f8;
                          if (pcVar22 != (code *)0x0) {
                            pcVar18 = 
                            "OODLE ERROR : corruption : (scratch_ptr + scratch_bytes_needed) <= scratch_end\n"
                            ;
                            uVar16 = 0xf47;
                            goto LAB_001269b8;
                          }
                          goto LAB_001269c0;
                        }
                        puVar25 = (uint *)((long)puVar15 + 5);
                        if (puVar25 <= puVar4) {
                          uVar17 = (ulong)*(ushort *)puVar26;
                          goto LAB_00126380;
                        }
                        FUN_0010a430();
                        pcVar22 = *(code **)PTR_PTR_043722f8;
                        if (pcVar22 != (code *)0x0) {
                          pcVar18 = "OODLE ERROR : corruption : comp_ptr+2 <= comp_end\n";
                          uVar16 = 0xf31;
                          goto LAB_00126a48;
                        }
                      }
LAB_00126a50:
                      FUN_0010a450();
                      goto LAB_00126a58;
                    }
                    FUN_0010a430();
                    pcVar22 = *(code **)PTR_PTR_043722f8;
                    if (pcVar22 != (code *)0x0) {
                      pcVar18 = "OODLE ERROR : corruption : comp_ptr+3 <= comp_end\n";
                      uVar16 = 0xf12;
                      goto LAB_001269b8;
                    }
                  }
                }
LAB_001269c0:
                FUN_0010a450();
LAB_00126a58:
                FUN_0010a1f0(__src_00,0x90);
                return -1;
              }
LAB_001264f0:
              if ((param_9 >> 1 & 1) == 0) {
LAB_001266c8:
                __src_00 = param_7;
                if (param_9 != 3) {
                  __src_00 = puVar5;
                }
                goto joined_r0x00126154;
              }
              if (*(uint **)__src_00 != __dest) {
                return -1;
              }
              local_130 = *(uint **)__src_00;
              local_128 = *(undefined8 *)(__src_00 + 2);
              local_120 = *(long *)(__src_00 + 4);
              if (0xffff < (long)__n) {
                puVar27 = (uint *)0x10000;
              }
              local_118 = *(long *)(__src_00 + 6);
              local_110 = *(long *)(__src_00 + 8);
              lVar11 = *(long *)(__src_00 + 10);
              lVar13 = *(long *)(__src_00 + 0xc);
              lVar12 = (long)__dest - lVar14;
              local_f8 = *(long *)(__src_00 + 0xe);
              lStack_f0 = *(long *)(__src_00 + 0x10);
              local_e8 = *(long *)(__src_00 + 0x12);
              lStack_e0 = *(long *)(__src_00 + 0x14);
              local_d8 = *(long *)(__src_00 + 0x16);
              local_d0 = *(long *)(__src_00 + 0x18);
              lStack_c8 = *(long *)(__src_00 + 0x1a);
              local_c0 = *(long *)(__src_00 + 0x1c);
              local_70[0] = (uint *)CONCAT44(local_70[0]._4_4_,0xfffffff8);
              local_b0 = local_d8 + lStack_c8 * 4;
              lStack_a8 = local_110 + lVar13;
              local_108 = lVar11;
              lStack_100 = lVar13;
              local_b8 = local_d8;
              if ((uint *)((long)__n - (long)puVar27) == (uint *)0x0) {
                puVar15 = __dest;
                if (lVar14 != 0) goto joined_r0x00126674;
                if (uVar19 == 1) {
                  puVar15 = (uint *)FUN_00124b90(__dest,puVar27,param_2,lVar12,puVar4);
                }
                else {
                  puVar15 = (uint *)FUN_001236b0(__dest,puVar27,param_2,lVar12,puVar4,&local_130,
                                                 local_70);
                }
              }
              else {
                if (lVar14 == 0) {
                  if (uVar19 == 1) {
                    lVar14 = FUN_00124b90(__dest,puVar27,param_2,lVar12,puVar4);
                    local_b8 = local_d0;
                  }
                  else {
                    lVar14 = FUN_001236b0(__dest,puVar27,param_2,lVar12,puVar4,&local_130,local_70);
                    local_b8 = local_d0;
                  }
                }
                else if (uVar19 == 1) {
                  lVar14 = FUN_00122110(__dest,puVar27,param_2,lVar12,puVar4);
                  local_b8 = local_d0;
                }
                else {
                  lVar14 = FUN_00120980(__dest,puVar27,param_2,lVar12,puVar4);
                  local_b8 = local_d0;
                }
                if (lVar14 == 0) {
                  return -1;
                }
                puVar15 = (uint *)((long)__dest + (long)puVar27);
                local_b0 = local_b8 + local_c0 * 4;
                lStack_a8 = local_110 + lVar11;
                local_110 = local_110 + lVar13;
                puVar27 = (uint *)((long)__n - (long)puVar27);
                local_d0 = local_b8;
joined_r0x00126674:
                if (uVar19 == 1) {
                  puVar15 = (uint *)FUN_00122110(puVar15,puVar27,param_2);
                }
                else {
                  puVar15 = (uint *)FUN_00120980(puVar15,puVar27,param_2);
                }
              }
              if (puVar15 == (uint *)0x0) {
                return -1;
              }
              if (puVar15 == puVar4) {
                if (local_e8 == lStack_e0) {
                  if (local_f8 == lStack_f0) {
                    if (local_120 == local_118) goto LAB_001266c8;
                    FUN_0010a430();
                    pcVar22 = *(code **)PTR_PTR_043722f8;
                    if (pcVar22 == (code *)0x0) goto LAB_001267d0;
                    pcVar18 = 
                    "OODLE ERROR : corruption : arrays->excesses_ptr == arrays->excesses_end\n";
                    uVar16 = 0x1090;
                  }
                  else {
                    FUN_0010a430();
                    pcVar22 = *(code **)PTR_PTR_043722f8;
                    if (pcVar22 == (code *)0x0) goto LAB_001267d0;
                    pcVar18 = 
                    "OODLE ERROR : corruption : arrays->literals_ptr == arrays->literals_end\n";
                    uVar16 = 0x108f;
                  }
                }
                else {
                  FUN_0010a430();
                  pcVar22 = *(code **)PTR_PTR_043722f8;
                  if (pcVar22 == (code *)0x0) goto LAB_001267d0;
                  pcVar18 = "OODLE ERROR : corruption : arrays->off16_ptr == arrays->off16_end\n";
                  uVar16 = 0x108e;
                }
              }
              else {
                FUN_0010a430();
                pcVar22 = *(code **)PTR_PTR_043722f8;
                if (pcVar22 == (code *)0x0) goto LAB_001267d0;
                pcVar18 = "OODLE ERROR : corruption : comp_ptr == comp_end\n";
                uVar16 = 0x108b;
              }
            }
          }
          (*pcVar22)(0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",uVar16,pcVar18);
LAB_001267d0:
          FUN_0010a450();
          return -1;
        }
        if ((long)__n < (long)uVar24) {
          return -1;
        }
        if ((uVar8 & 0xf) != 0) {
          return -1;
        }
        if ((param_9 & 1) != 0) {
          memmove(__dest,__src,(size_t)__n);
        }
joined_r0x00126154:
        puVar15 = (uint *)((long)__src + uVar24);
        __dest = (uint *)((long)__dest + (long)__n);
        if (param_2 <= __dest) goto LAB_00126798;
      }
      if ((param_9 & 1) == 0) {
        lVar11 = FUN_001199a0(puVar15,puVar2,&local_130,__n);
      }
      else if ((puVar2 < __dest) || ((uint *)((long)__dest + (long)__n) < puVar15)) {
        local_70[0] = __dest;
        lVar11 = FUN_00126a90(local_70,puVar15,puVar2,&local_130,__n,0,__src_00,param_8);
        if (local_70[0] != __dest) {
          return -1;
        }
      }
      else {
        local_70[0] = __src_00;
        lVar11 = FUN_00126a90(local_70,puVar15,puVar2,&local_130,__n,0,__src_00,param_8);
        if (local_70[0] != __src_00) {
          return -1;
        }
        memcpy(__dest,__src_00,(size_t)__n);
      }
      if (lVar11 < 0) {
        return -1;
      }
      if ((long)__n <= lVar11) {
        return -1;
      }
      if (local_130 != __n) {
        return -1;
      }
      __dest = (uint *)((long)__dest + (long)__n);
      puVar15 = (uint *)((long)puVar15 + lVar11);
    } while (__dest < param_2);
  }
LAB_00126798:
  return (int)puVar15 - (int)param_3;
}


