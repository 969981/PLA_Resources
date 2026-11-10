/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00540470; name: FUN_00540470
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong * FUN_00540470(long *param_1,ulong *param_2,long param_3,byte **param_4)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  code *pcVar5;
  undefined8 *******pppppppuVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong *extraout_x1;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  byte **ppbVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  byte *pbVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 local_c0;
  ulong uStack_b8;
  byte **local_b0 [2];
  byte *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  byte *local_78;
  byte *pbStack_70;
  
  puVar11 = (ulong *)*param_1;
  puVar10 = param_2;
  if (param_2 < puVar11) {
    bVar1 = (byte)*param_2;
    ppbVar13 = param_4;
    if (-1 < (char)bVar1) goto LAB_00540520;
LAB_00540dc4:
    ppbVar13 = &local_a0;
    auVar26 = FUN_00540f60(param_1,puVar10);
    pbVar16 = local_c0;
    if ((ulong)local_a0 >> 0x20 == 0) {
      uVar20 = (ulong)local_a0 >> 3 & 0x1fffffff;
      uVar23 = (ulong)((uint)local_a0 & 7);
      if (param_4 != (byte **)0x0) goto LAB_00540538;
LAB_00540df0:
      pbVar25 = (byte *)&DAT_03a2b29c;
LAB_00540df8:
      uVar21 = (uint)uVar23;
      puVar7 = puVar10;
      pbVar16 = local_c0;
      while (uVar21 < 6) {
        puVar9 = auVar26._8_8_;
        puVar10 = auVar26._0_8_;
        uVar14 = (ulong)(&switchD_00540578::switchdataD_03a2b234)[uVar23] * 4 + 0x54057c;
        iVar19 = (int)uVar20;
        local_c0._4_4_ = (undefined4)((ulong)pbVar16 >> 0x20);
        local_c0 = pbVar16;
        uVar20 = uStack_b8;
        switch(uVar23) {
        default:
          if ((puVar10 < (ulong *)*param_1) && (-1 < (char)(byte)*puVar10)) {
            local_c0 = (byte *)(ulong)(byte)*puVar10;
            auVar26._8_8_ = puVar9;
            auVar26._0_8_ = (byte *)((long)puVar10 + 1);
          }
          else {
            ppbVar13 = (byte **)&local_c0;
            auVar26 = FUN_00540f60(param_1,puVar10);
          }
          puVar10 = auVar26._0_8_;
          bVar1 = pbVar25[10];
          cVar3 = (&DAT_03a2b264)[bVar1];
          lVar24 = (long)cVar3;
          if (bVar1 == 0x12) {
            local_c0 = (byte *)(-((ulong)local_c0 & 1) ^ (ulong)local_c0 >> 1);
          }
          else {
            if (bVar1 == 0x11) {
              local_c0 = (byte *)CONCAT44(local_c0._4_4_,-((uint)local_c0 & 1) ^ (uint)local_c0 >> 1
                                         );
              if (-1 < cVar3) goto LAB_0054064c;
              break;
            }
            if (bVar1 != 8) goto LAB_00540648;
            local_c0 = (byte *)CONCAT71(local_c0._1_7_,local_c0 != (byte *)0x0);
          }
          if (cVar3 < '\0') break;
LAB_0054064c:
          bVar1 = pbVar25[0xb];
          pbVar8 = local_c0;
          uVar20 = uStack_b8;
joined_r0x005406e8:
          uVar21 = (uint)lVar24;
          local_c0 = pbVar8;
          uStack_b8 = uVar20;
          if (bVar1 != 7) {
            if (bVar1 != 4) {
              if (bVar1 != 3) {
                sVar4 = *(short *)(pbVar25 + 6);
                uVar20 = (ulong)sVar4;
                if ((long)uVar20 < 0) {
                  lVar17 = (long)~(int)sVar4;
                  if ((uVar21 == 5) && (*(int *)(param_3 + lVar17) != *(int *)pbVar25)) {
                    *(undefined8 *)(param_3 + (ulong)*(ushort *)(pbVar25 + 4)) = 0;
                  }
                  *(int *)(param_3 + lVar17) = *(int *)pbVar25;
                }
                else if ((int)sVar4 != 0) {
                  *(byte *)(param_3 + (uVar20 >> 3)) =
                       *(byte *)(param_3 + (uVar20 >> 3)) | (byte)(1 << (uVar20 & 7));
                }
                if (5 < uVar21) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("0","external/upb/upb/decode.c",0x1c1,"decode_tomsg");
                }
                    /* WARNING: Could not recover jumptable at 0x005408ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar11 = (ulong *)(*(code *)(&UNK_005408b0 +
                                             (ulong)*(ushort *)(&UNK_03a2b258 + lVar24 * 2) * 4))();
                return puVar11;
              }
              goto LAB_00540668;
            }
            uVar2 = *(ushort *)(pbVar25 + 4);
            pbVar18 = *(byte **)(param_3 + (ulong)uVar2);
            puVar22 = *(undefined8 **)(*param_4 + (ulong)*(ushort *)(pbVar25 + 8) * 8);
            if (pbVar18 == (byte *)0x0) {
              lVar24 = puVar22[1];
              if (*(short *)(lVar24 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("key_field->offset == 0","external/upb/upb/decode.c",0x17c,
                              "decode_tomap");
              }
              if (*(short *)(lVar24 + 0x10) != 0x10) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("val_field->offset == sizeof(upb_strview)","external/upb/upb/decode.c"
                              ,0x17d,"decode_tomap");
              }
              pbVar18 = (byte *)FUN_0053f280(param_1[1],(&DAT_03a2b2bb)[*(byte *)(lVar24 + 10)],
                                             (&DAT_03a2b2bb)[*(byte *)(lVar24 + 0x16)]);
              *(byte **)(param_3 + (ulong)uVar2) = pbVar18;
            }
            pbStack_70 = (byte *)0x0;
            pppppppuStack_88 = (undefined8 *******)0x0;
            local_90 = 0;
            local_78 = (byte *)0x0;
            uStack_80 = 0;
            uStack_98 = 0;
            local_a0 = (byte *)0x0;
            if ((*(byte *)(puVar22[1] + 0x16) & 0xfe) == 10) {
              local_78 = (byte *)FUN_0053ee00(*(undefined8 *)*puVar22,param_1[1]);
            }
            lVar17 = *param_1;
            uVar12 = *(undefined8 *)(*param_4 + (ulong)*(ushort *)(pbVar25 + 8) * 8);
            lVar24 = param_1[2];
            *(int *)(param_1 + 2) = (int)lVar24 + -1;
            pbVar16 = local_c0;
            if (0 < (int)lVar24) {
              *param_1 = (long)(pbVar8 + uVar20);
              FUN_00540470(param_1,pbVar8,&pppppppuStack_88,uVar12);
              *param_1 = lVar17;
              pbVar16 = local_c0;
              if (*(int *)((long)param_1 + 0x14) == 0) {
                *(int *)(param_1 + 2) = (int)param_1[2] + 1;
                lVar24 = param_1[1];
                local_b0[0] = (byte **)0x0;
                uVar20 = uStack_80;
                pppppppuVar6 = pppppppuStack_88;
                if (*pbVar18 != 0) {
                  uVar20 = (ulong)*pbVar18;
                  pppppppuVar6 = &pppppppuStack_88;
                }
                if ((ulong)pbVar18[1] == 0) {
                  ppbVar13 = *(byte ***)(lVar24 + 8);
                  if ((ulong)(*(long *)(lVar24 + 0x10) - (long)ppbVar13) < 0x10) {
                    ppbVar13 = (byte **)FUN_0053f330(lVar24,0x10);
                  }
                  else {
                    *(byte ***)(lVar24 + 8) = ppbVar13 + 2;
                  }
                  ppbVar13[1] = pbStack_70;
                  *ppbVar13 = local_78;
                  local_b0[0] = ppbVar13;
                }
                else {
                  memcpy(local_b0,&local_78,(ulong)pbVar18[1]);
                }
                ppbVar13 = local_b0[0];
                FUN_00540250(pbVar18 + 8,pppppppuVar6,uVar20,0,lVar24);
                FUN_0053fb10(pbVar18 + 8,pppppppuVar6,uVar20,ppbVar13,lVar24);
                puVar11 = (ulong *)*param_1;
                param_2 = extraout_x1;
                if (puVar10 < puVar11) goto LAB_00540518;
                goto LAB_005404d0;
              }
            }
            goto LAB_00540ec0;
          }
LAB_00540668:
          uVar2 = *(ushort *)(pbVar25 + 4);
          lVar17 = *(long *)(param_3 + (ulong)uVar2);
          local_a0 = pbVar8;
          uStack_98 = uVar20;
          if (lVar17 == 0) {
            lVar17 = FUN_0053ef60(param_1[1],(&DAT_03a2b2a8)[pbVar25[10]]);
            pbVar16 = local_c0;
            if (lVar17 == 0) goto LAB_00540ec0;
            *(long *)(param_3 + (ulong)uVar2) = lVar17;
            lVar15 = *(long *)(lVar17 + 0x10);
            if (lVar15 == *(long *)(lVar17 + 8)) goto LAB_005408f8;
          }
          else {
            lVar15 = *(long *)(lVar17 + 0x10);
            if (lVar15 == *(long *)(lVar17 + 8)) {
LAB_005408f8:
              uVar20 = FUN_0053efc0(lVar17,lVar15 + 1,param_1[1]);
              pbVar16 = local_c0;
              if ((uVar20 & 1) == 0) goto LAB_00540ec0;
            }
          }
          if (uVar21 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x00540928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar11 = (ulong *)(*(code *)(&UNK_005404dc + (ulong)(&USHORT_03a2b240)[lVar24] * 4))();
            return puVar11;
          }
          goto LAB_00540ec8;
        case 1:
          if (*param_1 - (long)puVar10 < 8) goto LAB_00540ec0;
          auVar26._8_8_ = puVar9;
          auVar26._0_8_ = puVar10 + 1;
          local_c0 = (byte *)*puVar10;
          if ((1 << (ulong)(pbVar25[10] & 0x1f) & 0x10042U) != 0) {
            lVar24 = 3;
            bVar1 = pbVar25[0xb];
            puVar10 = puVar10 + 1;
            pbVar8 = local_c0;
            goto joined_r0x005406e8;
          }
          break;
        case 2:
          uVar21 = pbVar25[10] + 0x12;
          if (((pbVar25[0xb] ^ 0xff) & 3) != 0) {
            uVar21 = (uint)pbVar25[10];
          }
          if ((puVar10 < (ulong *)*param_1) && (-1 < (char)(byte)*puVar10)) {
            local_a0 = (byte *)(ulong)(byte)*puVar10;
            auVar27._8_8_ = puVar9;
            auVar27._0_8_ = (byte *)((long)puVar10 + 1);
          }
          else {
            ppbVar13 = &local_a0;
            auVar27 = FUN_00540f60(param_1,puVar10);
            pbVar16 = local_c0;
            if ((ulong)local_a0 >> 0x20 != 0) goto LAB_00540ec0;
          }
          pbVar8 = auVar27._0_8_;
          pbVar16 = local_c0;
          if ((0x7ffffffe < (uint)local_a0) ||
             (uVar20 = (ulong)local_a0 & 0xffffffff, (ulong)(*param_1 - (long)pbVar8) < uVar20))
          goto LAB_00540ec0;
          auVar26._8_8_ = auVar27._8_8_;
          auVar26._0_8_ = pbVar8 + uVar20;
          lVar24 = (long)(char)(&DAT_03a2b277)[uVar21];
          local_c0 = pbVar8;
          uStack_b8 = uVar20;
LAB_00540648:
          puVar10 = auVar26._0_8_;
          if (-1 < (int)lVar24) goto LAB_0054064c;
          break;
        case 3:
          local_c0 = (byte *)CONCAT44(local_c0._4_4_,iVar19);
          lVar24 = 5;
          if (pbVar25[10] == 10) goto LAB_0054064c;
          break;
        case 4:
          *(int *)((long)param_1 + 0x14) = iVar19;
          return puVar10;
        case 5:
          if (*param_1 - (long)puVar10 < 4) goto LAB_00540ec0;
          auVar26._8_8_ = puVar9;
          auVar26._0_8_ = (ulong *)((long)puVar10 + 4);
          local_c0 = (byte *)CONCAT44(local_c0._4_4_,(int)*puVar10);
          if ((1 << (ulong)(pbVar25[10] & 0x1f) & 0x8084U) != 0) {
            lVar24 = 2;
            bVar1 = pbVar25[0xb];
            puVar10 = (ulong *)((long)puVar10 + 4);
            pbVar8 = local_c0;
            goto joined_r0x005406e8;
          }
          break;
        case 7:
          pbVar16 = (byte *)0x0;
          while ((puVar11 != puVar9 && (uVar14 < 0x46))) {
            puVar10 = (ulong *)((long)puVar9 + 1);
            uVar23 = *puVar9;
            uVar20 = uVar14 & 0x3f;
            uVar14 = uVar14 + 7;
            pbVar16 = (byte *)(((ulong)(byte)uVar23 & 0x7f) << uVar20 | (ulong)pbVar16);
            puVar9 = puVar10;
            if (-1 < (char)(byte)uVar23) {
              *ppbVar13 = pbVar16;
              return puVar10;
            }
          }
          FUN_00540f50();
                    /* WARNING: Does not return */
          pcVar5 = (code *)UndefinedInstructionException(0,0x540fa8);
          (*pcVar5)();
        }
        pbVar16 = local_c0;
        if (iVar19 == 0) break;
        if ((int)uVar23 == 3) {
          lVar24 = param_1[2];
          *(int *)(param_1 + 2) = (int)lVar24 + -1;
          if ((int)lVar24 < 1) break;
          ppbVar13 = (byte **)0x0;
          auVar26 = FUN_00540470(param_1,auVar26._0_8_,0);
          pbVar16 = local_c0;
          if (*(int *)((long)param_1 + 0x14) != iVar19) break;
          *(int *)(param_1 + 2) = (int)param_1[2] + 1;
          *(undefined4 *)((long)param_1 + 0x14) = 0;
        }
        param_2 = auVar26._8_8_;
        puVar10 = auVar26._0_8_;
        if (param_3 != 0) {
          ppbVar13 = (byte **)param_1[1];
          auVar26 = FUN_0053ee90(param_3,puVar7,(long)puVar10 - (long)puVar7);
          param_2 = auVar26._8_8_;
          pbVar16 = local_c0;
          if ((auVar26._0_8_ & 1) == 0) break;
        }
        puVar11 = (ulong *)*param_1;
        if (puVar11 <= puVar10) goto LAB_005404d0;
LAB_00540518:
        bVar1 = (byte)*puVar10;
        if ((char)bVar1 < '\0') goto LAB_00540dc4;
LAB_00540520:
        local_a0 = (byte *)(ulong)bVar1;
        auVar26._8_8_ = param_2;
        auVar26._0_8_ = (byte *)((long)puVar10 + 1);
        uVar20 = (ulong)(bVar1 >> 3);
        uVar23 = (ulong)(bVar1 & 7);
        if (param_4 == (byte **)0x0) goto LAB_00540df0;
LAB_00540538:
        uVar14 = (ulong)*(ushort *)((long)param_4 + 0x12);
        if (uVar14 != 0) {
          pbVar25 = param_4[1];
          do {
            if (*(int *)pbVar25 == (int)uVar20) goto LAB_00540df8;
            uVar14 = uVar14 - 1;
            pbVar25 = pbVar25 + 0xc;
          } while (uVar14 != 0);
        }
        pbVar25 = (byte *)&DAT_03a2b29c;
        puVar7 = puVar10;
        pbVar16 = local_c0;
        uVar21 = (uint)uVar23;
      }
    }
  }
  else {
LAB_005404d0:
    pbVar16 = local_c0;
    if (puVar10 == puVar11) {
      return puVar10;
    }
  }
LAB_00540ec0:
  local_c0 = pbVar16;
  FUN_00540f50(param_1);
LAB_00540ec8:
                    /* WARNING: Subroutine does not return */
  __assert_fail("0","external/upb/upb/decode.c",0x169,"decode_toarray");
}


