/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001270c0; name: FUN_001270c0
 */


/* WARNING: Control flow encountered bad instruction data */

ulong FUN_001270c0(uint *param_1,uint *param_2,uint *param_3,int param_4,undefined8 param_5,
                  long param_6,uint *param_7,long param_8,uint param_9)

{
  uint *puVar1;
  uint *__src;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar8;
  uint uVar7;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  uint *__src_00;
  uint *__dest;
  uint uVar23;
  uint *puVar24;
  ulong uVar25;
  int local_144;
  uint *local_140;
  ulong local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  uint *local_78;
  uint *local_70 [2];
  
  puVar22 = param_3;
  if (param_1 < param_2) {
    puVar1 = (uint *)((long)param_3 + (long)param_4);
    param_8 = (long)param_7 + param_8;
    __src_00 = param_7;
    __dest = param_1;
LAB_00127120:
    do {
      uVar23 = 0xffffffff;
      uVar13 = (long)param_2 - (long)__dest;
      if (0x1ffff < (long)param_2 - (long)__dest) {
        uVar13 = 0x20000;
      }
      if (puVar1 < puVar22 + 1) goto LAB_00127ac0;
      uVar7 = (*puVar22 & 0xff00ff00) >> 8 | (*puVar22 & 0xff00ff) << 8;
      uVar8 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (-1 < (int)uVar8) {
        if ((param_9 & 1) == 0) {
          uVar10 = FUN_001199a0(puVar22,puVar1,&local_e0,uVar13);
joined_r0x00127308:
          if (((-1 < (long)uVar10) && ((long)uVar10 < (long)uVar13)) && (local_e0 == uVar13))
          goto LAB_00127390;
        }
        else if ((puVar1 < __dest) || ((uint *)((long)__dest + uVar13) < puVar22)) {
          local_70[0] = __dest;
          uVar10 = FUN_00127b70(local_70,puVar22,puVar1,&local_e0,uVar13,0,__src_00,param_8);
          if (local_70[0] == __dest) goto joined_r0x00127308;
        }
        else {
          local_70[0] = __src_00;
          uVar10 = FUN_00127b70(local_70,puVar22,puVar1,&local_e0,uVar13,0,__src_00,param_8);
          if (local_70[0] == __src_00) {
            memcpy(__dest,__src_00,uVar13);
            goto joined_r0x00127308;
          }
        }
        uVar23 = 0xffffffff;
        goto LAB_00127ac0;
      }
      uVar10 = (ulong)(uVar8 >> 8 & 0x7ffff);
      __src = (uint *)((long)puVar22 + 3);
      puVar3 = (uint *)((long)__src + uVar10);
      if (puVar1 < puVar3) goto LAB_00127ac0;
      uVar7 = (uVar7 & 0xffff) >> 0xb & 0xf;
      if ((long)uVar13 <= (long)uVar10) {
        if ((uVar7 != 0) || ((long)uVar13 < (long)uVar10)) goto LAB_00127ac0;
        puVar22 = __src;
        if ((param_9 & 1) != 0) {
          memmove(__dest,__src,uVar13);
        }
LAB_00127390:
        __dest = (uint *)((long)__dest + uVar13);
        puVar22 = (uint *)((long)puVar22 + uVar10);
        if (param_2 <= __dest) break;
        goto LAB_00127120;
      }
      if ((long)uVar13 < 0x80) {
        FUN_0010a430();
        pcVar18 = *(code **)PTR_PTR_043722f8;
        if (pcVar18 != (code *)0x0) {
          pcVar16 = "OODLE ERROR : corruption : chunk_len >= 128\n";
          uVar14 = 0xdae;
LAB_00127b20:
          (*pcVar18)(0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",uVar14,pcVar16);
        }
LAB_00127b28:
        FUN_0010a450();
        uVar23 = 0xffffffff;
        goto LAB_00127ac0;
      }
      lVar11 = FUN_001038c0(0xd,uVar13);
      if (param_8 - (long)__src_00 < lVar11) {
        FUN_0010a430();
        pcVar18 = *(code **)PTR_PTR_043722f8;
        if (pcVar18 != (code *)0x0) {
          pcVar16 = "OODLE ERROR : Leviathan decoder scratch too small\n";
          uVar14 = 0xdc4;
          goto LAB_00127b20;
        }
        goto LAB_00127b28;
      }
      lVar4 = (long)__dest + (param_6 - (long)param_1);
      puVar5 = (uint *)((long)__src_00 + lVar11);
      if ((param_9 & 1) != 0) {
        FUN_0010a1f0(__src_00,0x1d0);
        if (uVar7 < 6) {
          puVar2 = __src_00 + 0x74;
          *(uint **)__src_00 = __dest;
          *(uint **)(__src_00 + 2) = puVar2;
          *(uint **)(__src_00 + 4) = puVar5;
          if (puVar22 + 4 <= puVar3) {
            puVar24 = __src;
            if (lVar4 == 0) {
              puVar24 = (uint *)((long)puVar22 + 0xb);
              *(undefined8 *)__dest = *(undefined8 *)((long)puVar22 + 3);
            }
            local_78 = (uint *)0x0;
            local_70[0] = (uint *)0x0;
            local_80 = 0;
            if (puVar24 < puVar3) {
              uVar23 = *puVar24;
              uVar15 = (uVar13 & 0xffffffff) / 3;
              if ((char)(byte)uVar23 < '\0') {
                lVar11 = (long)puVar24 + 1;
                lVar12 = FUN_001199a0(lVar11,puVar3,&local_80,uVar15);
                if (-1 < lVar12) {
                  local_140 = (uint *)((long)puVar5 - local_80);
                  local_70[0] = local_140;
                  lVar12 = FUN_00127b70(local_70,lVar11,puVar3,&local_e0,local_80,0,puVar2);
                  if (-1 < lVar12) {
                    local_144 = (byte)uVar23 - 0x7f;
                    puVar24 = (uint *)(lVar11 + lVar12);
                    if (local_144 < 2) goto LAB_00127570;
                    local_140 = (uint *)((long)local_140 - local_80);
                    local_88 = 0;
                    local_78 = local_140;
                    lVar11 = FUN_00127b70(&local_78,puVar24,puVar3,&local_88,local_80,0,puVar2);
                    if ((-1 < lVar11) && (local_80 == local_88)) goto LAB_001272a4;
                  }
                }
              }
              else {
                lVar11 = FUN_001199a0(puVar24,puVar3,&local_80,uVar15);
                if (-1 < lVar11) {
                  local_140 = (uint *)((long)puVar5 - local_80);
                  local_70[0] = local_140;
                  lVar11 = FUN_00127b70(local_70,puVar24,puVar3,&local_e0,local_80,0,puVar2);
                  if (-1 < lVar11) {
                    local_144 = 0;
LAB_001272a4:
                    puVar24 = (uint *)((long)puVar24 + lVar11);
LAB_00127570:
                    local_90 = 0;
                    local_88 = 0;
                    lVar11 = FUN_001199a0(puVar24,puVar3,&local_90,(uVar13 & 0xffffffff) / 5);
                    if (lVar11 < 0) {
LAB_001279d8:
                      lVar19 = -1;
                    }
                    else {
                      lVar17 = (long)local_140 - local_90;
                      local_88 = lVar17;
                      lVar11 = FUN_00127b70(&local_88,puVar24,puVar3,&local_e0,local_90,0,puVar2);
                      lVar12 = (long)puVar24 + lVar11;
                      if (lVar11 < 0) goto LAB_001279d8;
                      uVar21 = (long)__src_00 + 0x1dfU & 0xfffffffffffffff0;
                      uVar20 = uVar21 + local_80 * 4 + 0xf & 0xfffffffffffffff0;
                      uVar15 = uVar20 + local_90 * 4;
                      *(ulong *)(__src_00 + 6) = uVar21;
                      *(long *)(__src_00 + 8) = local_80;
                      *(ulong *)(__src_00 + 10) = uVar20;
                      *(long *)(__src_00 + 0xc) = local_90;
                      if (uVar7 < 2) {
                        uVar25 = uVar13;
                        if ((long)(lVar17 - uVar15) <= (long)uVar13) {
                          uVar25 = lVar17 - uVar15;
                        }
                        local_e0 = uVar15;
                        lVar11 = FUN_00127b70(&local_e0,lVar12,puVar3,&local_a0,uVar25,1,uVar15);
                        if (-1 < lVar11) {
                          *(ulong *)(__src_00 + 0xe) = local_e0;
                          *(long *)(__src_00 + 0x2e) = local_a0;
                          local_98 = local_a0;
LAB_001276d0:
                          puVar22 = (uint *)(lVar12 + lVar11);
                          *(long *)(__src_00 + 0x4e) = local_98;
                          local_a0 = 0;
                          if (puVar22 < puVar3) {
                            uVar15 = uVar15 + local_98;
                            uVar25 = uVar13 >> 1 & 0x7fffffff;
                            if ((char)(byte)*puVar22 < '\0') {
                              if (((byte)*puVar22 & 0x7f) != 3) {
                                FUN_0010a430();
                                pcVar18 = *(code **)PTR_PTR_043722f8;
                                if (pcVar18 != (code *)0x0) {
                                  uVar14 = 0xbfd;
                                  pcVar16 = 
                                  "OODLE ERROR : corruption : num_packets_arrays == (1<<3)\n";
                                  goto LAB_001279d0;
                                }
                                goto LAB_001279d4;
                              }
                              lVar11 = FUN_0011f790((long)puVar22 + 1,puVar3,uVar15,lVar17,
                                                    __src_00 + 0x50,&local_e0,8,&local_a0,1,uVar15,
                                                    lVar17);
                              if ((-1 < lVar11) && (local_a0 <= (long)uVar25)) {
                                *(ulong *)(__src_00 + 0x60) = *(long *)(__src_00 + 0x50) + local_e0;
                                *(long *)(__src_00 + 0x62) = *(long *)(__src_00 + 0x52) + local_d8;
                                *(long *)(__src_00 + 100) = *(long *)(__src_00 + 0x54) + local_d0;
                                *(long *)(__src_00 + 0x66) = *(long *)(__src_00 + 0x56) + local_c8;
                                *(long *)(__src_00 + 0x68) = *(long *)(__src_00 + 0x58) + local_c0;
                                *(long *)(__src_00 + 0x6a) = *(long *)(__src_00 + 0x5a) + local_b8;
                                *(long *)(__src_00 + 0x6c) = *(long *)(__src_00 + 0x5c) + local_b0;
                                lVar11 = (long)puVar22 + 1 + lVar11;
                                *(long *)(__src_00 + 0x6e) = *(long *)(__src_00 + 0x5e) + local_a8;
                                __src_00[0x70] = 0;
                                __src_00[0x71] = 0;
                                goto LAB_00127940;
                              }
                            }
                            else {
                              if ((long)(lVar17 - uVar15) <= (long)uVar25) {
                                uVar25 = lVar17 - uVar15;
                              }
                              local_e0 = uVar15;
                              lVar11 = FUN_00127b70(&local_e0,puVar22,puVar3,&local_a0,uVar25,1,
                                                    uVar15);
                              if (-1 < lVar11) {
                                lVar11 = (long)puVar22 + lVar11;
                                *(ulong *)(__src_00 + 0x70) = local_e0;
LAB_00127940:
                                *(long *)(__src_00 + 0x72) = local_a0;
                                if ((long)(uVar13 * 2) < (long)((uVar15 + local_a0) - (long)puVar2))
                                {
                                  FUN_0010a430(lVar11);
                                  pcVar18 = *(code **)PTR_PTR_043722f8;
                                  if (pcVar18 != (code *)0x0) {
                                    uVar14 = 0xc48;
                                    pcVar16 = 
                                    "OODLE ERROR : corruption : rrPtrDiff( scratch_ptr - scratch_space ) <= 2*chunk_len\n"
                                    ;
LAB_001279d0:
                                    (*pcVar18)(0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",
                                               uVar14,pcVar16);
                                  }
                                }
                                else {
                                  lVar11 = FUN_0012f4a0(lVar11,puVar3,local_70[0],local_78,local_80,
                                                        local_144,local_88,local_90,uVar21,uVar20,
                                                        uVar13 + lVar4,0,0);
                                  if (-1 < (int)lVar11) {
                                    lVar19 = 0;
                                    goto LAB_001279e0;
                                  }
                                  FUN_0010a430();
                                  pcVar18 = *(code **)PTR_PTR_043722f8;
                                  if (pcVar18 != (code *)0x0) {
                                    uVar14 = 0xc5e;
                                    pcVar16 = "OODLE ERROR : newLZ_get_offsets_excesses failed\n";
                                    goto LAB_001279d0;
                                  }
                                }
                                goto LAB_001279d4;
                              }
                            }
                          }
                          else {
                            FUN_0010a430();
                            pcVar18 = *(code **)PTR_PTR_043722f8;
                            if (pcVar18 != (code *)0x0) {
                              uVar14 = 0xbf5;
                              pcVar16 = "OODLE ERROR : corruption : comp_ptr < chunk_comp_end\n";
                              goto LAB_001279d0;
                            }
LAB_001279d4:
                            lVar11 = FUN_0010a450();
                          }
                        }
                        goto LAB_001279d8;
                      }
                      uVar14 = 4;
                      if (uVar7 != 3) {
                        uVar14 = 0x10;
                      }
                      uVar6 = 2;
                      if (uVar7 != 2) {
                        uVar6 = uVar14;
                      }
                      lVar11 = FUN_0011f790(lVar12,puVar3,uVar15,lVar17,__src_00 + 0xe,
                                            __src_00 + 0x2e,uVar6,&local_98,1,uVar15,lVar17);
                      if (lVar11 < 0) goto LAB_001279d8;
                      lVar19 = -1;
                      if (local_98 <= (long)uVar13) goto LAB_001276d0;
                    }
LAB_001279e0:
                    if (-1 < lVar19) goto LAB_00127464;
                  }
                }
              }
            }
            else {
              FUN_0010a430();
              if (*(code **)PTR_PTR_043722f8 != (code *)0x0) {
                (**(code **)PTR_PTR_043722f8)
                          (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",0xb2f,
                           "OODLE ERROR : corruption : comp_ptr < chunk_comp_end\n");
              }
              FUN_0010a450();
            }
          }
        }
        __src_00[0] = 0;
        __src_00[1] = 0;
        uVar23 = 0xffffffff;
        goto LAB_00127ac0;
      }
LAB_00127464:
      uVar23 = 0xffffffff;
      if ((param_9 >> 1 & 1) != 0) {
        if ((5 < uVar7) || (*(uint **)__src_00 != __dest)) goto LAB_00127ac0;
        puVar22 = __dest + (ulong)(lVar4 == 0) * 2;
        if (*(long *)(__src_00 + 0x70) == 0) {
          if (uVar7 != 1) {
            if (uVar7 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0012754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar13 = (*(code *)(&UNK_00127550 + (ulong)(byte)(&DAT_039c38ba)[uVar7] * 4))
                                 (lVar11,puVar22);
              return uVar13;
            }
            uVar14 = 0xd19;
            goto LAB_001277cc;
          }
          uVar15 = FUN_0012b260(__src_00,puVar22,__dest,(long)__dest + uVar13,(long)__dest - lVar4);
        }
        else {
          if (uVar7 != 1) {
            if (uVar7 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0012750c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar13 = (*(code *)(&UNK_00127510 + (ulong)(byte)(&DAT_039c38b4)[uVar7] * 4))();
              return uVar13;
            }
            uVar14 = 0xcce;
LAB_001277cc:
            iVar9 = FUN_0010a390("v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",uVar14,
                                 "newLZHC_decode_chunk_phase2","bad chunk_type");
            if (iVar9 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            goto LAB_00127858;
          }
          uVar15 = FUN_00127d70(__src_00,puVar22,__dest,(long)__dest + uVar13,(long)__dest - lVar4);
        }
        if ((uVar15 & 1) == 0) goto LAB_00127ac0;
      }
LAB_00127858:
      __src_00 = param_7;
      if (param_9 != 3) {
        __src_00 = puVar5;
      }
      __dest = (uint *)((long)__dest + uVar13);
      puVar22 = (uint *)((long)__src + uVar10);
    } while (__dest < param_2);
  }
  uVar23 = (int)puVar22 - (int)param_3;
LAB_00127ac0:
  return (ulong)uVar23;
}


