/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00103a80; name: FUN_00103a80
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00103a80(ulong *param_1,uint *param_2,long param_3,long param_4,long param_5,ulong param_6,
            void *param_7,long param_8,int param_9,int param_10,int param_11,uint param_12)

{
  ulong *puVar1;
  byte *pbVar2;
  void *__dest;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  void *__src;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  code *pcVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  size_t sVar23;
  byte *__src_00;
  int iVar24;
  uint uVar25;
  long lVar26;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar28;
  char *pcVar27;
  uint local_a0;
  int local_9c;
  int local_98;
  long local_90;
  int local_88;
  byte *local_80;
  byte *pbStack_78;
  ulong local_70;
  long local_68;
  
  uVar28 = (undefined4)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  if (param_2 == (uint *)0x0) {
LAB_00103f2c:
    uVar9 = 0;
  }
  else {
    FUN_0010a1f0(param_2,0x10);
    iVar8 = (int)param_1[5] + 1;
    *(int *)(param_1 + 5) = iVar8;
    if (999 < iVar8) {
      FUN_0010a430();
      pcVar14 = *(code **)PTR_PTR_043722f8;
      if (pcVar14 != (code *)0x0) {
        pcVar11 = "OODLE ERROR : 1000 calls without progress!\n";
        uVar9 = 0x32e;
        goto LAB_00103f24;
      }
      goto LAB_00103f28;
    }
    uVar13 = *param_1;
    uVar6 = param_1[1];
    uVar16 = param_5 - param_4;
    if (0x3ffff < (long)uVar16) {
      uVar16 = 0x40000;
    }
    if ((long)param_6 <= (long)uVar16) {
      uVar16 = param_6;
    }
    uVar17 = uVar13;
    if (uVar6 != 0x3fffffffffffffff) {
      uVar17 = uVar13 & 0x3ffff;
      uVar5 = (long)(int)uVar16;
      if ((long)(0x40000 - uVar17) <= (long)(int)uVar16) {
        uVar5 = 0x40000 - uVar17;
      }
      uVar16 = uVar5;
      if ((long)(uVar6 - uVar13) <= (long)uVar5) {
        uVar16 = uVar6 - uVar13;
      }
    }
    uVar9 = 1;
    if (param_8 == 0) {
      return 1;
    }
    uVar12 = (uint)uVar16;
    if (uVar12 == 0) {
      return 1;
    }
    uVar25 = (uint)param_5;
    if ((uVar17 == 0) && (param_1[2] != uVar13)) {
      if (1 < param_8) {
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[2] = uVar13;
        __src = (void *)FUN_0010a590(param_1 + 6,param_7);
        if (__src == (void *)0x0) {
          FUN_0010a430();
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 != (code *)0x0) {
            pcVar11 = "OODLE ERROR : LZ corruption : invalid header..\n";
            uVar9 = 0x390;
            goto LAB_00103f24;
          }
        }
        else {
          if ((int)param_1[8] != 0) {
            param_1[3] = *param_1;
            *(undefined1 *)(param_1 + 0xf) = 1;
          }
          uVar19 = *(uint *)(&DAT_039c2d78 + (long)*(int *)((long)param_1 + 0x34) * 4);
          if ((param_9 == 1) && ((0x3f10U >> (ulong)(uVar19 & 0x1f) & 1) == 0)) {
            FUN_0010a430();
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = 
              "OODLE ERROR : Requested Fuzz Safety, saw a compressor that can\'t decode Safe\n";
              uVar9 = 0x3a4;
              goto LAB_00103f24;
            }
          }
          else {
            uVar9 = FUN_00103910(uVar19,(long)(int)uVar12,0);
            if ((int)uVar9 <= *(int *)((long)param_1 + 0x4c)) {
              if ((2 < param_11) && (*(code **)PTR_PTR_043722f8 != (code *)0x0)) {
                pcVar11 = "";
                if ((int)param_1[8] != 0) {
                  pcVar11 = "reset";
                }
                pcVar27 = "";
                if (*(int *)((long)param_1 + 0x3c) != 0) {
                  pcVar27 = "memcpy";
                }
                uVar9 = (**(code **)PTR_PTR_043722f8)
                                  (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",
                                   0x3b8,"CHUNK header @ %lld  , compressor %d=%s %s %s\n",
                                   param_1[2],uVar19,(&PTR_DAT_0411a118)[(int)uVar19],pcVar11,
                                   pcVar27);
                uVar28 = (undefined4)((ulong)pcVar27 >> 0x20);
              }
              iVar8 = *(int *)((long)param_1 + 0x34);
              uVar13 = param_1[2];
              goto joined_r0x00103b74;
            }
            FUN_0010a430();
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = 
              "OODLE ERROR : Heterogenous compressor file with insufficient decoder memory size!\n";
              uVar9 = 0x3ad;
              goto LAB_00103f24;
            }
          }
        }
        goto LAB_00103f28;
      }
    }
    else {
      iVar8 = *(int *)((long)param_1 + 0x34);
      uVar13 = param_1[2];
      __src = param_7;
joined_r0x00103b74:
      if ((uVar13 == 0) && ((int)param_1[8] == 0)) {
        uVar25 = uVar25 - 1 & uVar25;
        if ((uVar25 != 0) && ((long)uVar6 <= param_5)) goto LAB_00103b88;
LAB_001044cc:
        if (uVar25 != 0) {
          FUN_0010a430(uVar9);
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 != (code *)0x0) {
            pcVar11 = "OODLE ERROR : sliding window must be pow2!\n";
            uVar9 = 0x3e0;
            goto LAB_00103f24;
          }
          goto LAB_00103f28;
        }
        switch(*(undefined4 *)(&DAT_039c2d78 + (long)iVar8 * 4)) {
        case 0:
          if (param_5 < 0x20000) {
            FUN_0010a430(uVar9);
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = "OODLE ERROR : you didn\'t give me enough window!\n";
              uVar9 = 0x3ef;
              goto LAB_00103f24;
            }
            break;
          }
LAB_001048a4:
          uVar18 = 1;
          goto LAB_00103b8c;
        default:
          FUN_0010a430(uVar9);
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 != (code *)0x0) {
            pcVar11 = "OODLE ERROR : compressor not compatible with sliding window!\n";
            uVar9 = 0x40f;
            goto LAB_00103f24;
          }
          break;
        case 2:
        case 6:
        case 7:
          if (0xffff < param_5) goto LAB_001048a4;
          FUN_0010a430(uVar9);
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 != (code *)0x0) {
            pcVar11 = "OODLE ERROR : you didn\'t give me enough window!\n";
            uVar9 = 0x409;
            goto LAB_00103f24;
          }
          break;
        case 4:
          if (param_5 < 0x10000) {
            FUN_0010a430(uVar9);
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = "OODLE ERROR : you didn\'t give me enough window!\n";
              uVar9 = 0x3f7;
              goto LAB_00103f24;
            }
          }
          else {
            if (param_9 != 1) goto LAB_001048a4;
            FUN_0010a430(uVar9);
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = "OODLE ERROR : compressor not compatible with sliding window!\n";
              uVar9 = 0x3ff;
              goto LAB_00103f24;
            }
          }
          break;
        case 0xffffffff:
          FUN_0010a430(uVar9);
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 == (code *)0x0) break;
          pcVar11 = "OODLE ERROR : invalid decodeType!\n";
          uVar9 = 999;
          goto LAB_00103f24;
        }
        goto LAB_00103f28;
      }
      if (param_5 < (long)uVar6) {
        uVar25 = uVar25 - 1 & uVar25;
        goto LAB_001044cc;
      }
LAB_00103b88:
      uVar18 = 0;
LAB_00103b8c:
      pbVar2 = (byte *)((long)param_7 + param_8);
      __dest = (void *)(param_3 + param_4);
      iVar24 = (int)param_7;
      if (*(int *)((long)param_1 + 0x3c) == 0) {
        if ((iVar8 != 6) && (iVar8 != 0xc)) {
          if (iVar8 != 10 && 0x3fff < (int)uVar12) {
            uVar12 = 0x4000;
          }
          uVar16 = (ulong)uVar12;
        }
        uVar12 = (uint)uVar16;
        if ((iVar8 == 0xc) || (iVar8 == 6)) {
          uVar10 = *(undefined4 *)((long)param_1 + 0x44);
LAB_00103c80:
          iVar7 = FUN_0010ab00(__src,pbVar2,&local_a0,uVar10,uVar16 & 0xffffffff);
        }
        else {
          uVar10 = *(undefined4 *)((long)param_1 + 0x44);
          if (iVar8 == 10) goto LAB_00103c80;
          iVar7 = FUN_0010a980(__src,pbVar2,&local_a0,uVar10,uVar16 & 0xffffffff);
        }
        if (0 < iVar7) {
          param_2[2] = uVar12;
          param_2[3] = local_a0 + iVar7;
          if ((2 < param_11) && (*(code **)PTR_PTR_043722f8 != (code *)0x0)) {
            (**(code **)PTR_PTR_043722f8)
                      (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x4b4,
                       "QH : %d , %d , %08X\n",uVar16 & 0xffffffff,local_a0,local_9c);
          }
          if (uVar12 < local_a0) {
            FUN_0010a430();
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = "OODLE ERROR : LZ corruption : qh.compLen > qh_rawLen!\n";
              uVar9 = 0x4c4;
              goto LAB_00103f24;
            }
            goto LAB_00103f28;
          }
          __src_00 = (byte *)((long)__src + (long)iVar7);
          pbVar3 = __src_00 + (int)local_a0;
          if (pbVar2 < pbVar3) goto LAB_00103ea0;
          if ((((param_10 != 0) && (0 < (int)local_a0)) && (*(int *)((long)param_1 + 0x44) != 0)) &&
             (iVar7 = FUN_0010a960(__src_00), iVar7 != local_9c)) {
            FUN_0010a430();
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = "OODLE ERROR : LZ corruption : crc check fail.\n";
              uVar9 = 0x4eb;
              goto LAB_00103f24;
            }
            goto LAB_00103f28;
          }
          if (local_88 == 0) {
            uVar25 = 0;
            if (local_a0 != uVar12) goto LAB_00103d3c;
LAB_00104600:
            if ((param_12 & 1) != 0) {
              memmove(__dest,__src_00,(long)(int)uVar12);
            }
            uVar16 = *param_1 + (long)(int)uVar12;
            *param_1 = uVar16;
            if ((long)param_1[1] < (long)uVar16) {
              FUN_0010a430();
              pcVar14 = *(code **)PTR_PTR_043722f8;
              if (pcVar14 != (code *)0x0) {
                pcVar11 = "OODLE ERROR : LZ corruption : overrun!\n";
                uVar9 = 0x540;
                goto LAB_00103f24;
              }
              goto LAB_00103f28;
            }
            uVar25 = ((int)__src_00 + uVar12) - iVar24;
LAB_00104038:
            *(undefined4 *)(param_1 + 5) = 0;
            *param_2 = uVar12;
            param_2[1] = uVar25;
            goto LAB_00104040;
          }
          uVar25 = 0;
          switch(iVar8) {
          case 0:
            if ((long)pbVar2 - (long)__src_00 < 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = (ulong)*__src_00;
            }
            puVar1 = (ulong *)(__src_00 + 1);
            if ((long)pbVar2 - (long)puVar1 < 8) {
              if ((long)pbVar2 - (long)puVar1 < 1) {
                uVar25 = 0;
                if ((long)pbVar2 - (long)(__src_00 + 2) < 1) goto LAB_001049cc;
LAB_001048fc:
                uVar19 = (uint)__src_00[2] << 0x10;
                if (0 < (long)pbVar2 - (long)(__src_00 + 3)) goto LAB_00104914;
LAB_001049e0:
                uVar21 = 0;
                if ((long)pbVar2 - (long)(__src_00 + 4) < 1) goto LAB_001049f4;
LAB_0010492c:
                uVar13 = (ulong)__src_00[4];
              }
              else {
                uVar25 = (uint)(byte)*puVar1 << 0x18;
                if (0 < (long)pbVar2 - (long)(__src_00 + 2)) goto LAB_001048fc;
LAB_001049cc:
                uVar19 = 0;
                if ((long)pbVar2 - (long)(__src_00 + 3) < 1) goto LAB_001049e0;
LAB_00104914:
                uVar21 = (uint)__src_00[3] << 8;
                if (0 < (long)pbVar2 - (long)(__src_00 + 4)) goto LAB_0010492c;
LAB_001049f4:
                uVar13 = 0;
              }
              if ((long)pbVar2 - (long)(__src_00 + 5) < 1) {
                uVar15 = 0;
              }
              else {
                uVar15 = (uint)__src_00[5] << 0x18;
              }
              if ((long)pbVar2 - (long)(__src_00 + 6) < 1) {
                uVar20 = 0;
              }
              else {
                uVar20 = (uint)__src_00[6] << 0x10;
              }
              if ((long)pbVar2 - (long)(__src_00 + 7) < 1) {
                uVar22 = 0;
              }
              else {
                uVar22 = (uint)__src_00[7] << 8;
              }
              uVar13 = (ulong)(uVar20 | uVar15 | uVar22) |
                       (uVar13 | (uVar19 | uVar25 | uVar21)) << 0x20;
            }
            else {
              uVar13 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
            }
            local_70 = uVar16 << 0x38 | uVar13 >> 8;
            local_68 = 7;
            uVar13 = (long)param_1 + 0xa7U & 0xfffffffffffffff0;
            local_80 = __src_00 + 7;
            pbStack_78 = pbVar2;
            uVar16 = FUN_0010b800(0x244,10,uVar13);
            param_1[0xc] = uVar16;
            iVar7 = FUN_0010b7b0(0x244,10);
            lVar4 = uVar13 + (long)iVar7;
            uVar16 = FUN_0010b800(0xa0,10,lVar4);
            param_1[0xd] = uVar16;
            iVar7 = FUN_0010b7b0(0xa0,10);
            uVar16 = FUN_0010b800(0x80,10,lVar4 + iVar7);
            param_1[0xe] = uVar16;
            iVar7 = FUN_0010bf50(param_1[0xc],&local_80);
            if (iVar7 == 0) {
              FUN_0010a430();
              pcVar14 = *(code **)PTR_PTR_043722f8;
              if (pcVar14 != (code *)0x0) {
                pcVar11 = "OODLE ERROR : LZ corruption : invalid huffmans..\n";
                uVar9 = 0x22a;
LAB_00104e44:
                (*pcVar14)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar9,
                           pcVar11);
              }
            }
            else {
              iVar7 = FUN_0010bf50(param_1[0xd],&local_80);
              if (iVar7 == 0) {
                FUN_0010a430();
                pcVar14 = *(code **)PTR_PTR_043722f8;
                if (pcVar14 != (code *)0x0) {
                  pcVar11 = "OODLE ERROR : LZ corruption : invalid huffmans..\n";
                  uVar9 = 0x230;
                  goto LAB_00104e44;
                }
              }
              else {
                iVar7 = FUN_0010bf50(param_1[0xe],&local_80);
                if (iVar7 == 0) {
                  FUN_0010a430();
                  pcVar14 = *(code **)PTR_PTR_043722f8;
                  if (pcVar14 != (code *)0x0) {
                    pcVar11 = "OODLE ERROR : LZ corruption : invalid huffmans..\n";
                    uVar9 = 0x236;
                    goto LAB_00104e44;
                  }
                }
                else {
                  uVar16 = param_1[0xc];
                  if ((*(int *)(uVar16 + 0x288) < 2) && (*(int *)(uVar16 + 0x290) < 0x100)) {
LAB_00104d08:
                    uVar16 = 0x46 - local_68;
                    if (-1 < (long)(0x3fU - local_68)) {
                      uVar16 = 0x3fU - local_68;
                    }
                    uVar25 = ((int)local_80 - (int)(uVar16 >> 3)) - (int)__src_00;
                    break;
                  }
                  iVar7 = FUN_0010bc10(uVar16,0);
                  if (iVar7 == 0) {
                    FUN_0010a430();
                    pcVar14 = *(code **)PTR_PTR_043722f8;
                    if (pcVar14 != (code *)0x0) {
                      pcVar11 = "OODLE ERROR : LZ corruption : build huffman decode failed..\n";
                      uVar9 = 0x245;
                      goto LAB_00104e44;
                    }
                  }
                  else {
                    iVar7 = FUN_0010bc10(param_1[0xd],0);
                    if (iVar7 == 0) {
                      FUN_0010a430();
                      pcVar14 = *(code **)PTR_PTR_043722f8;
                      if (pcVar14 != (code *)0x0) {
                        pcVar11 = "OODLE ERROR : LZ corruption : build huffman decode failed..\n";
                        uVar9 = 0x24c;
                        goto LAB_00104e44;
                      }
                    }
                    else {
                      iVar7 = FUN_0010bc10(param_1[0xe],0);
                      if (iVar7 != 0) goto LAB_00104d08;
                      FUN_0010a430();
                      pcVar14 = *(code **)PTR_PTR_043722f8;
                      if (pcVar14 != (code *)0x0) {
                        pcVar11 = "OODLE ERROR : LZ corruption : build huffman decode failed..\n";
                        uVar9 = 0x252;
                        goto LAB_00104e44;
                      }
                    }
                  }
                }
              }
            }
            FUN_0010a450();
            FUN_0010a430();
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = "OODLE ERROR : LZ corruption : invalid huffmans..\n";
              uVar9 = 0x4fb;
              goto LAB_00103f24;
            }
            goto LAB_00103f28;
          case 4:
          case 5:
          case 0xb:
            uVar25 = 0;
            *(undefined1 *)(param_1 + 0xf) = 1;
            break;
          case 7:
            if ((long)pbVar2 - (long)__src_00 < 1) {
              local_70 = 0;
            }
            else {
              local_70 = (ulong)*__src_00 << 0x38;
            }
            puVar1 = (ulong *)(__src_00 + 1);
            if ((long)pbVar2 - (long)puVar1 < 8) {
              if ((long)pbVar2 - (long)puVar1 < 1) {
                uVar25 = 0;
                if ((long)pbVar2 - (long)(__src_00 + 2) < 1) goto LAB_00104a30;
LAB_00104980:
                uVar19 = (uint)__src_00[2] << 0x10;
                if (0 < (long)pbVar2 - (long)(__src_00 + 3)) goto LAB_00104998;
LAB_00104a44:
                uVar21 = 0;
                if ((long)pbVar2 - (long)(__src_00 + 4) < 1) goto LAB_00104a58;
LAB_001049b0:
                uVar16 = (ulong)__src_00[4];
              }
              else {
                uVar25 = (uint)(byte)*puVar1 << 0x18;
                if (0 < (long)pbVar2 - (long)(__src_00 + 2)) goto LAB_00104980;
LAB_00104a30:
                uVar19 = 0;
                if ((long)pbVar2 - (long)(__src_00 + 3) < 1) goto LAB_00104a44;
LAB_00104998:
                uVar21 = (uint)__src_00[3] << 8;
                if (0 < (long)pbVar2 - (long)(__src_00 + 4)) goto LAB_001049b0;
LAB_00104a58:
                uVar16 = 0;
              }
              if ((long)pbVar2 - (long)(__src_00 + 5) < 1) {
                uVar15 = 0;
              }
              else {
                uVar15 = (uint)__src_00[5] << 0x18;
              }
              if ((long)pbVar2 - (long)(__src_00 + 6) < 1) {
                uVar20 = 0;
              }
              else {
                uVar20 = (uint)__src_00[6] << 0x10;
              }
              if ((long)pbVar2 - (long)(__src_00 + 7) < 1) {
                uVar22 = 0;
              }
              else {
                uVar22 = (uint)__src_00[7] << 8;
              }
              uVar16 = (ulong)(uVar20 | uVar15 | uVar22) |
                       (uVar16 | (uVar19 | uVar25 | uVar21)) << 0x20;
            }
            else {
              uVar16 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
            }
            local_70 = local_70 | uVar16 >> 8;
            local_80 = __src_00 + 7;
            local_68 = 7;
            pbStack_78 = pbVar2;
            uVar16 = FUN_0010b800(0x2c9,10,(long)param_1 + 0xa7U & 0xfffffffffffffff0);
            param_1[0xc] = uVar16;
            iVar7 = FUN_0010bf50(uVar16,&local_80);
            if (iVar7 == 0) {
              FUN_0010a430();
              pcVar14 = *(code **)PTR_PTR_043722f8;
              if (pcVar14 != (code *)0x0) {
                pcVar11 = "OODLE ERROR : LZ corruption : invalid huffmans..\n";
                uVar9 = 0x27c;
LAB_00104db8:
                (*pcVar14)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar9,
                           pcVar11);
              }
            }
            else {
              if ((*(int *)(param_1[0xc] + 0x288) < 2) ||
                 (iVar7 = FUN_0010bc10(param_1[0xc],0), iVar7 != 0)) goto LAB_00104d08;
              FUN_0010a430();
              pcVar14 = *(code **)PTR_PTR_043722f8;
              if (pcVar14 != (code *)0x0) {
                pcVar11 = "OODLE ERROR : LZ corruption : build huffman decode failed..\n";
                uVar9 = 0x289;
                goto LAB_00104db8;
              }
            }
            FUN_0010a450();
            FUN_0010a430();
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = "OODLE ERROR : LZ corruption : invalid huffmans..\n";
              uVar9 = 0x504;
              goto LAB_00103f24;
            }
            goto LAB_00103f28;
          }
          __src_00 = __src_00 + (int)uVar25;
          if (local_a0 == uVar12) goto LAB_00104600;
LAB_00103d3c:
          sVar23 = (size_t)(int)uVar12;
          uVar16 = *param_1;
          if (local_a0 == uVar25) {
            if ((long)param_1[1] < (long)(uVar16 + sVar23)) {
              FUN_0010a430();
              pcVar14 = *(code **)PTR_PTR_043722f8;
              if (pcVar14 != (code *)0x0) {
                pcVar11 = "OODLE ERROR : LZ corruption : overrun!\n";
                uVar9 = 0x558;
                goto LAB_00103f24;
              }
              goto LAB_00103f28;
            }
            if (local_98 == 0) {
              if (uVar25 != 0) {
                uVar16 = param_1[0xc];
                if ((uVar16 == 0) || (*(int *)(uVar16 + 0x288) != 1)) {
                  FUN_0010a430();
                  pcVar14 = *(code **)PTR_PTR_043722f8;
                  if (pcVar14 != (code *)0x0) {
                    pcVar11 = "OODLE ERROR : LZ corruption : huffman->gotNumSymbols != 1!\n";
                    uVar9 = 0x599;
                    goto LAB_00103f24;
                  }
                  goto LAB_00103f28;
                }
                local_9c = *(int *)(uVar16 + 0x290);
              }
              if ((param_12 & 1) != 0) {
                memset(__dest,local_9c,sVar23);
              }
LAB_00104740:
              *(undefined4 *)(param_1 + 5) = 0;
              *param_1 = *param_1 + sVar23;
              *param_2 = uVar12;
              param_2[1] = (int)__src_00 - iVar24;
              goto LAB_00104040;
            }
            if ((param_12 >> 1 & 1) == 0) goto LAB_00104740;
            if (local_90 < 2) {
              FUN_0010a430();
              pcVar14 = *(code **)PTR_PTR_043722f8;
              if (pcVar14 == (code *)0x0) goto LAB_00103f28;
              pcVar11 = "OODLE ERROR : corruption : matchOff > 1\n";
              uVar9 = 0x567;
              goto LAB_00103f24;
            }
            if (local_90 <= (long)(uVar16 - param_1[3])) {
              if (local_90 < (long)sVar23) {
                FUN_0010a470(__dest,local_90,sVar23);
              }
              else {
                memcpy(__dest,(void *)((long)__dest - local_90),sVar23);
              }
              goto LAB_00104740;
            }
            FUN_0010a430();
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = "OODLE ERROR : LZ corruption : wholematch offset too large!\n";
              uVar9 = 0x573;
              goto LAB_00103f24;
            }
          }
          else if ((uint)iVar8 < 0xd) {
            lVar4 = (long)__dest + sVar23;
            lVar26 = uVar16 - param_1[3];
            switch(iVar8) {
            case 0:
              uVar16 = param_1[0xc];
              if (uVar16 == 0) {
                FUN_0010a430();
                pcVar14 = *(code **)PTR_PTR_043722f8;
                if (pcVar14 != (code *)0x0) {
                  pcVar11 = "OODLE ERROR : LZ corruption : LZHLW no Huff before data\n";
                  uVar9 = 0x5ec;
                  goto LAB_00103f24;
                }
                goto LAB_00103f28;
              }
              if (((long)pbVar2 - (long)pbVar3 < 0x10) &&
                 ((long)(((ulong)(pbVar2 + 0xfff) & 0xfffffffffffff000) - (long)pbVar3) < 0x10)) {
                iVar8 = FUN_001410a0(__dest,lVar4,__src_00,pbVar2,param_3,param_5,uVar16,
                                     param_1[0xd],param_1[0xe]);
              }
              else {
                iVar8 = FUN_0013fad0(__dest,lVar4,__src_00,pbVar2,param_3,param_5,uVar16,
                                     param_1[0xd],param_1[0xe]);
              }
              break;
            case 1:
              iVar8 = FUN_001308a0(__dest,lVar4,__src_00,pbVar2,&local_a0,param_3,param_5,uVar18);
              break;
            case 2:
              iVar8 = FUN_0010e650(__dest,lVar4,__src_00,pbVar2,&local_a0,param_3,param_5,uVar18,
                                   (long)__dest - lVar26);
              break;
            case 3:
              iVar8 = FUN_001302a0(__dest,lVar4,__src_00,pbVar2,&local_a0,param_3,param_5,uVar18);
              break;
            case 4:
              if ((char)param_1[0xf] != '\0') {
                param_1[0x10] = (long)param_1 + 0xa7U & 0xfffffffffffffff0;
                thunk_FUN_001094c0();
                *(undefined1 *)(param_1 + 0xf) = 0;
              }
              uVar16 = param_1[0x10];
              if (uVar16 == 0) {
                FUN_0010a430();
                pcVar14 = *(code **)PTR_PTR_043722f8;
                if (pcVar14 != (code *)0x0) {
                  pcVar11 = "OODLE ERROR : LZ corruption : no LZA reset before data\n";
                  uVar9 = 0x621;
                  goto LAB_00103f24;
                }
                goto LAB_00103f28;
              }
              if (((long)pbVar2 - (long)pbVar3 < 0x10) &&
                 ((long)(((ulong)(pbVar2 + 0xfff) & 0xfffffffffffff000) - (long)pbVar3) < 0x10)) {
                iVar8 = FUN_00147f40(__dest,lVar4,__src_00,pbVar2,param_3,param_5,uVar16,0,lVar26,
                                     uVar18);
              }
              else {
                iVar8 = FUN_00147f60(__dest,lVar4,__src_00,pbVar2,param_3,param_5,uVar16,0,lVar26,
                                     uVar18);
              }
              break;
            case 5:
              if ((char)param_1[0xf] != '\0') {
                param_1[0x11] = (long)param_1 + 0xa7U & 0xfffffffffffffff0;
                thunk_FUN_00112a90();
                *(undefined1 *)(param_1 + 0xf) = 0;
              }
              if (param_1[0x11] == 0) {
                FUN_0010a430();
                pcVar14 = *(code **)PTR_PTR_043722f8;
                if (pcVar14 != (code *)0x0) {
                  pcVar11 = "OODLE ERROR : LZ corruption : no LZNA reset before data\n";
                  uVar9 = 0x640;
                  goto LAB_00103f24;
                }
                goto LAB_00103f28;
              }
              iVar8 = FUN_00117f30(__dest,lVar4,__src_00,__src_00 + (int)local_a0,param_3,param_5,
                                   param_1[0x11],0,lVar26,uVar18);
              break;
            case 6:
              iVar8 = FUN_00118120(__dest,lVar4,__src_00,local_a0,pbVar2,lVar26,param_1[10],
                                   param_1[0xb],CONCAT44(uVar28,param_12));
              break;
            case 7:
              uVar16 = param_1[0xc];
              if (uVar16 == 0) {
                FUN_0010a430();
                pcVar14 = *(code **)PTR_PTR_043722f8;
                if (pcVar14 != (code *)0x0) {
                  pcVar11 = "OODLE ERROR : LZ corruption : LZH no Huff before data\n";
                  uVar9 = 0x604;
                  goto LAB_00103f24;
                }
                goto LAB_00103f28;
              }
              if (((long)pbVar2 - (long)pbVar3 < 0x10) &&
                 ((long)(((ulong)(pbVar2 + 0xfff) & 0xfffffffffffff000) - (long)pbVar3) < 0x10)) {
                iVar8 = FUN_001338c0(__dest,lVar4,__src_00,pbVar2,param_3,param_5,
                                     (long)(int)param_1[7],uVar16,0);
              }
              else {
                iVar8 = FUN_00139bb0(__dest,lVar4,__src_00,pbVar2,param_3,param_5,
                                     (long)(int)param_1[7],uVar16,0);
              }
              break;
            default:
              goto switchD_00103d78_caseD_8;
            case 10:
              iVar8 = FUN_00125e50(__dest,lVar4,__src_00,local_a0,pbVar2,lVar26,param_1[10],
                                   param_1[0xb],CONCAT44(uVar28,param_12));
              break;
            case 0xb:
              if ((char)param_1[0xf] != '\0') {
                if (param_1[0x12] == 0) {
                  param_1[0x12] = (long)param_1 + 0xa7U & 0xfffffffffffffff0;
                }
                *(undefined1 *)(param_1 + 0xf) = 0;
                FUN_0013e2e0();
              }
              if (param_1[0x12] == 0) {
                FUN_0010a430();
                pcVar14 = *(code **)PTR_PTR_043722f8;
                if (pcVar14 != (code *)0x0) {
                  pcVar11 = "OODLE ERROR : LZ corruption : no BitKnit reset before data\n";
                  uVar9 = 0x660;
                  goto LAB_00103f24;
                }
                goto LAB_00103f28;
              }
              iVar8 = FUN_0013e890(param_1[0x12],__dest,lVar4,__src_00,local_a0,pbVar2,lVar26);
              break;
            case 0xc:
              iVar8 = FUN_001270c0(__dest,lVar4,__src_00,local_a0,pbVar2,lVar26,param_1[10],
                                   param_1[0xb],CONCAT44(uVar28,param_12));
            }
            if (iVar8 < 0) {
              FUN_0010a430();
              pcVar14 = *(code **)PTR_PTR_043722f8;
              if (pcVar14 != (code *)0x0) {
                pcVar11 = "OODLE ERROR : LZ corruption : DecodeOneQuantum fail!\n";
                uVar9 = 0x674;
                goto LAB_00103f24;
              }
            }
            else {
              uVar16 = *param_1;
              *param_1 = uVar16 + sVar23;
              if ((long)param_1[1] < (long)(uVar16 + sVar23)) {
                FUN_0010a430();
                pcVar14 = *(code **)PTR_PTR_043722f8;
                if (pcVar14 != (code *)0x0) {
                  pcVar11 = "OODLE ERROR : LZ corruption : overrun!\n";
                  uVar9 = 0x682;
                  goto LAB_00103f24;
                }
              }
              else {
                if (iVar8 + uVar25 == local_a0) {
                  uVar25 = iVar8 + ((int)__src_00 - iVar24);
                  goto LAB_00104038;
                }
                FUN_0010a430();
                pcVar14 = *(code **)PTR_PTR_043722f8;
                if (pcVar14 != (code *)0x0) {
                  pcVar11 = "OODLE ERROR : LZ corruption : not complen!\n";
                  uVar9 = 0x689;
                  goto LAB_00103f24;
                }
              }
            }
          }
          else {
switchD_00103d78_caseD_8:
            FUN_0010a430();
            pcVar14 = *(code **)PTR_PTR_043722f8;
            if (pcVar14 != (code *)0x0) {
              pcVar11 = "OODLE ERROR : LZ corruption : DecodeOneQ invalid decodeType!\n";
              uVar9 = 0x66e;
LAB_00103f24:
              (*pcVar14)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar9,pcVar11
                        );
            }
          }
LAB_00103f28:
          FUN_0010a450();
          goto LAB_00103f2c;
        }
        if (0xf < (long)pbVar2 - (long)__src) goto LAB_00103f2c;
      }
      else {
        sVar23 = (size_t)(int)uVar12;
        param_2[2] = uVar12;
        param_2[3] = uVar12;
        if ((byte *)((long)__src + sVar23) <= pbVar2) {
          if ((2 < param_11) && (*(code **)PTR_PTR_043722f8 != (code *)0x0)) {
            (**(code **)PTR_PTR_043722f8)
                      (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x43c,
                       " decoder memcpy %d\n",uVar16 & 0xffffffff);
          }
          if ((param_12 & 1) != 0) {
            memmove(__dest,__src,sVar23);
          }
          *(undefined4 *)(param_1 + 5) = 0;
          *param_1 = *param_1 + sVar23;
          *param_2 = uVar12;
          param_2[1] = (int)(byte *)((long)__src + sVar23) - iVar24;
          *(undefined1 *)(param_1 + 0xf) = 1;
          return 1;
        }
      }
LAB_00103ea0:
      *param_2 = 0;
      param_2[1] = (int)__src - iVar24;
    }
LAB_00104040:
    uVar9 = 1;
  }
  return uVar9;
}


