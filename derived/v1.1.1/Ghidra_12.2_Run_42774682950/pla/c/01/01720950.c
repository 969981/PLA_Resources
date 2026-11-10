/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01720950; name: FUN_01720950
 */


/* WARNING: Removing unreachable block (ram,0x0172116c) */

undefined8 FUN_01720950(ulong param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined *puVar3;
  byte bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong *puVar16;
  long *plVar17;
  char *pcVar18;
  char *pcVar19;
  void *pvVar20;
  long *plVar21;
  char *pcVar22;
  ulong uVar23;
  byte *pbVar24;
  char *pcVar25;
  void *__src;
  char *pcVar26;
  char *pcVar27;
  long lVar28;
  ulong local_b8;
  size_t local_b0;
  char *local_a8;
  ulong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  char local_90;
  ulong local_88;
  char *local_80;
  char *local_78;
  long local_70;
  ulong *puStack_68;
  
  local_88 = local_88 & 0xffffffff00000000;
  lVar8 = FUN_00150ba0(param_1,0xfff0b9d3,&local_88);
  if ((lVar8 != 0xccc2ccc1) || ((int)local_88 == 0)) {
    local_a0 = 0;
    FUN_008e8bd0(&local_88,param_1,0xfffffffe,PTR_LAB_04379768,&local_a0);
    pcVar27 = "(unknown)";
    if ((char)local_78 != '\0') {
      pcVar27 = local_80;
    }
    uVar11 = FUN_00154110(param_1,
                          "sol: attempt to index (set) nil value \"%s\" on userdata (bad (misspelled?) key name or does not exist)"
                          ,pcVar27);
    return uVar11;
  }
  plVar9 = (long *)FUN_001511d0(param_1,0xfff0b9d5);
  if ((char)plVar9[10] == '\0') goto LAB_0172114c;
  local_88 = 0;
  FUN_008e8bd0(&local_a0,param_1,2,PTR_LAB_04379768,&local_88);
  if (local_90 == '\0') goto LAB_0172114c;
  plVar13 = plVar9 + 7;
  lVar8 = *plVar13;
  __src = (void *)CONCAT44(uStack_94,local_98);
  lVar28 = plVar9[8];
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (char *)0x0;
  if (0xffffffffffffffef < local_a0) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  uVar14 = local_a0;
  if (0x16 < local_a0) goto LAB_01720b84;
  local_b8 = (ulong)(byte)((int)local_a0 << 1);
  pcVar27 = (char *)((ulong)&local_b8 | 1);
  if (local_a0 == 0) goto LAB_01720a30;
  while( true ) {
    memcpy(pcVar27,__src,uVar14);
LAB_01720a30:
    pcVar27[uVar14] = '\0';
    lVar10 = FUN_008e8c90(plVar9,&local_b8);
    plVar21 = DAT_043f1798;
    if (lVar10 != 0) {
      iVar7 = *(int *)(lVar10 + 0x38);
      local_88 = param_1;
      FUN_00150260(param_1,3);
      uVar6 = FUN_00155070(param_1,0xfff0b9d8);
      local_80 = (char *)CONCAT44(local_80._4_4_,uVar6);
      FUN_008ea1e4(*plVar13 + (long)iVar7 * 0x10,&local_88);
      if ((local_88 != 0) && ((int)local_80 != -2)) {
        FUN_00155150(local_88,0xfff0b9d8);
      }
      puVar3 = PTR_LAB_04379b08;
      *(undefined **)(lVar10 + 0x28) = PTR_LAB_04379b00;
      *(undefined **)(lVar10 + 0x30) = puVar3;
      *(int *)(lVar10 + 0x38) = iVar7;
      plVar13 = DAT_043f1798;
      pcVar18 = local_a8;
      goto joined_r0x01720ab4;
    }
    puVar16 = (ulong *)(plVar9 + 9);
    uVar14 = plVar9[8];
    if (uVar14 < *puVar16) {
      FUN_008e8b84(uVar14,param_1,3);
      plVar9[8] = plVar9[8] + 0x10;
      goto LAB_01720c90;
    }
    uVar14 = (long)(uVar14 - *plVar13) >> 4;
    __src = (void *)(uVar14 + 1);
    if ((ulong)__src >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = *puVar16 - *plVar13;
    puStack_68 = puVar16;
    if (0x7fffffffffffffe < (ulong)(lVar10 >> 4)) break;
    pvVar20 = (void *)(lVar10 >> 3);
    if (__src <= pvVar20) {
      __src = pvVar20;
    }
    local_70 = 0;
    if (__src == (void *)0x0) {
      local_88 = 0;
      goto LAB_01720c54;
    }
    if ((ulong)__src >> 0x3c == 0) goto LAB_01720c00;
    FUN_017244d0();
LAB_01720b84:
    plVar21 = DAT_043f1798;
    uVar23 = uVar14 + 0x10 & 0xfffffffffffffff0;
    lVar10 = tpidr_el0;
    plVar17 = *(long **)(lVar10 + 0x20);
    if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
      *(long **)(lVar10 + 0x20) = DAT_043f1798;
      plVar17 = plVar21;
    }
    pcVar27 = (char *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar23,8);
    local_b8 = uVar23 | 1;
    local_b0 = uVar14;
    local_a8 = pcVar27;
  }
  __src = (void *)0xfffffffffffffff;
LAB_01720c00:
  local_70 = 0;
  lVar10 = tpidr_el0;
  plVar17 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar17 = plVar21;
  }
  local_88 = (**(code **)(*plVar17 + 0x10))(plVar17,(long)__src << 4,8);
LAB_01720c54:
  pcVar18 = (char *)(local_88 + uVar14 * 0x10);
  local_70 = local_88 + (long)__src * 0x10;
  local_80 = pcVar18;
  FUN_008e8b84(pcVar18,param_1,3);
  local_78 = pcVar18 + 0x10;
  FUN_008e9468(plVar13,&local_88);
  FUN_008e94e8(&local_88);
LAB_01720c90:
  sVar1 = local_b8 >> 1 & 0x7f;
  pcVar18 = (char *)((ulong)&local_b8 | 1);
  if ((local_b8 & 1) != 0) {
    sVar1 = local_b0;
    pcVar18 = local_a8;
  }
  pcVar12 = (char *)FUN_008e8ed4(&local_88,pcVar18,sVar1);
  pcVar26 = (char *)plVar9[1];
  if (pcVar26 != (char *)0x0) {
    uVar14 = (long)pcVar26 - ((ulong)pcVar26 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      pcVar27 = (char *)((ulong)(pcVar26 + -1) & (ulong)pcVar12);
    }
    else {
      pcVar27 = pcVar12;
      if (pcVar26 <= pcVar12) {
        uVar23 = 0;
        if (pcVar26 != (char *)0x0) {
          uVar23 = (ulong)pcVar12 / (ulong)pcVar26;
        }
        pcVar27 = pcVar12 + -(uVar23 * (long)pcVar26);
      }
    }
    plVar21 = *(long **)(*plVar9 + (long)pcVar27 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      pcVar19 = (char *)((ulong)&local_b8 | 1);
      sVar1 = local_b8 >> 1 & 0x7f;
      if ((local_b8 & 1) != 0) {
        pcVar19 = local_a8;
        sVar1 = local_b0;
      }
      plVar13 = DAT_043f1798;
      pcVar18 = local_a8;
      if (uVar14 < 2) {
        if (sVar1 == 0) {
          do {
            if ((char *)plVar21[1] != pcVar12 &&
                (char *)((ulong)plVar21[1] & (ulong)(pcVar26 + -1)) != pcVar27) break;
            uVar14 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
            if ((*(byte *)(plVar21 + 2) & 1) != 0) {
              uVar14 = plVar21[3];
            }
            if (uVar14 == 0) goto joined_r0x01720ab4;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            if ((char *)plVar21[1] != pcVar12 &&
                (char *)((ulong)plVar21[1] & (ulong)(pcVar26 + -1)) != pcVar27) break;
            bVar4 = *(byte *)(plVar21 + 2);
            uVar14 = (ulong)(bVar4 >> 1);
            sVar2 = uVar14;
            if ((bVar4 & 1) != 0) {
              sVar2 = plVar21[3];
            }
            if (sVar2 == sVar1) {
              if ((bVar4 & 1) == 0) {
                pcVar22 = (char *)((long)plVar21 + 0x11);
                pcVar25 = pcVar19;
                while (*pcVar22 == *pcVar25) {
                  uVar14 = uVar14 - 1;
                  pcVar22 = pcVar22 + 1;
                  pcVar25 = pcVar25 + 1;
                  plVar13 = DAT_043f1798;
                  pcVar18 = local_a8;
                  if (uVar14 == 0) goto joined_r0x01720ab4;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar21[4],pcVar19,sVar1);
                plVar13 = DAT_043f1798;
                pcVar18 = local_a8;
                if (iVar7 == 0) goto joined_r0x01720ab4;
              }
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
      else if (sVar1 == 0) {
        do {
          pcVar19 = (char *)plVar21[1];
          if (pcVar19 != pcVar12) {
            if (pcVar26 <= pcVar19) {
              uVar14 = 0;
              if (pcVar26 != (char *)0x0) {
                uVar14 = (ulong)pcVar19 / (ulong)pcVar26;
              }
              pcVar19 = pcVar19 + -(uVar14 * (long)pcVar26);
            }
            if (pcVar19 != pcVar27) break;
          }
          uVar14 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
          if ((*(byte *)(plVar21 + 2) & 1) != 0) {
            uVar14 = plVar21[3];
          }
          if (uVar14 == 0) goto joined_r0x01720ab4;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          pcVar18 = (char *)plVar21[1];
          if (pcVar18 != pcVar12) {
            if (pcVar26 <= pcVar18) {
              uVar14 = 0;
              if (pcVar26 != (char *)0x0) {
                uVar14 = (ulong)pcVar18 / (ulong)pcVar26;
              }
              pcVar18 = pcVar18 + -(uVar14 * (long)pcVar26);
            }
            if (pcVar18 != pcVar27) break;
          }
          bVar4 = *(byte *)(plVar21 + 2);
          uVar14 = (ulong)(bVar4 >> 1);
          sVar2 = uVar14;
          if ((bVar4 & 1) != 0) {
            sVar2 = plVar21[3];
          }
          if (sVar2 == sVar1) {
            if ((bVar4 & 1) == 0) {
              pcVar22 = (char *)((long)plVar21 + 0x11);
              pcVar25 = pcVar19;
              while (*pcVar22 == *pcVar25) {
                uVar14 = uVar14 - 1;
                pcVar22 = pcVar22 + 1;
                pcVar25 = pcVar25 + 1;
                plVar13 = DAT_043f1798;
                pcVar18 = local_a8;
                if (uVar14 == 0) goto joined_r0x01720ab4;
              }
            }
            else {
              iVar7 = memcmp((void *)plVar21[4],pcVar19,sVar1);
              plVar13 = DAT_043f1798;
              pcVar18 = local_a8;
              if (iVar7 == 0) goto joined_r0x01720ab4;
            }
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  plVar13 = DAT_043f1798;
  lVar10 = tpidr_el0;
  plVar21 = *(long **)(lVar10 + 0x20);
  if (*(long **)(lVar10 + 0x20) == (long *)0x0) {
    *(long **)(lVar10 + 0x20) = DAT_043f1798;
    plVar21 = plVar13;
  }
  plVar13 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x40,8);
  plVar13[2] = local_b8;
  plVar13[3] = local_b0;
  plVar13[4] = (long)local_a8;
  puVar5 = PTR_LAB_04379b08;
  puVar3 = PTR_LAB_04379b00;
  local_b0 = 0;
  local_a8 = (char *)0x0;
  local_b8 = 0;
  *(int *)(plVar13 + 7) = (int)((ulong)(lVar28 - lVar8) >> 4);
  plVar13[5] = (long)puVar3;
  plVar13[6] = (long)puVar5;
  *plVar13 = 0;
  plVar13[1] = (long)pcVar12;
  if ((pcVar26 == (char *)0x0) || (*(float *)(plVar9 + 4) * (float)pcVar26 < (float)(plVar9[3] + 1))
     ) {
    uVar14 = (ulong)(pcVar26 < (char *)0x3 || ((ulong)pcVar26 & (ulong)(pcVar26 + -1)) != 0) |
             (long)pcVar26 << 1;
    uVar23 = (ulong)((float)(plVar9[3] + 1) / *(float *)(plVar9 + 4));
    if (uVar23 <= uVar14) {
      uVar23 = uVar14;
    }
    FUN_008e9ae4(plVar9,uVar23);
    pcVar26 = (char *)plVar9[1];
    if (((ulong)pcVar26 & (ulong)(pcVar26 + -1)) == 0) {
      pcVar27 = (char *)((ulong)(pcVar26 + -1) & (ulong)pcVar12);
    }
    else if (pcVar12 < pcVar26) {
      pcVar27 = pcVar12;
    }
    else {
      uVar14 = 0;
      if (pcVar26 != (char *)0x0) {
        uVar14 = (ulong)pcVar12 / (ulong)pcVar26;
      }
      pcVar27 = pcVar12 + -(uVar14 * (long)pcVar26);
    }
  }
  lVar8 = *plVar9;
  plVar21 = *(long **)(lVar8 + (long)pcVar27 * 8);
  if (plVar21 == (long *)0x0) {
    plVar21 = plVar9 + 2;
    *plVar13 = *plVar21;
    *plVar21 = (long)plVar13;
    *(long **)(lVar8 + (long)pcVar27 * 8) = plVar21;
    if (*plVar13 != 0) {
      pcVar27 = *(char **)(*plVar13 + 8);
      if (((ulong)pcVar26 & (ulong)(pcVar26 + -1)) == 0) {
        pcVar27 = (char *)((ulong)pcVar27 & (ulong)(pcVar26 + -1));
      }
      else if (pcVar26 <= pcVar27) {
        uVar14 = 0;
        if (pcVar26 != (char *)0x0) {
          uVar14 = (ulong)pcVar27 / (ulong)pcVar26;
        }
        pcVar27 = pcVar27 + -(uVar14 * (long)pcVar26);
      }
      plVar21 = (long *)(*plVar9 + (long)pcVar27 * 8);
      goto LAB_01721084;
    }
  }
  else {
    *plVar13 = *plVar21;
LAB_01721084:
    *plVar21 = (long)plVar13;
  }
  plVar9[3] = plVar9[3] + 1;
  plVar13 = DAT_043f1798;
  pcVar18 = local_a8;
joined_r0x01720ab4:
  DAT_043f1798 = plVar13;
  local_a8 = pcVar18;
  if (((local_b8 & 1) != 0) && (pcVar18 != (char *)0x0)) {
    lVar8 = tpidr_el0;
    plVar9 = *(long **)(lVar8 + 0x20);
    if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
      *(long **)(lVar8 + 0x20) = plVar13;
      plVar9 = plVar13;
    }
    uVar14 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar14 & 1) != 0) {
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar8 + 0x38d480)) {
        FUN_02bcc824(plVar9,pcVar18,0,8);
        goto LAB_0172114c;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,pcVar18,0,8);
  }
LAB_0172114c:
  lVar8 = 0;
  while( true ) {
    if (lVar8 == 1) {
      pbVar15 = (byte *)FUN_00dfaaa8();
      goto LAB_017211b0;
    }
    if (lVar8 == 0) break;
    FUN_01724278();
    puVar3 = DAT_043ce228;
    if ((DAT_043ce218 & 1) == 0) {
      puVar3 = &DAT_043ce219;
    }
    FUN_00151a70(param_1,0xfff0b9d8,puVar3);
    FUN_00152090(param_1,0xffffffff);
    while( true ) {
      uVar6 = FUN_0014fef0(param_1);
      iVar7 = FUN_00150310(param_1,uVar6);
      if (iVar7 != 0) {
        local_80 = (char *)CONCAT44(local_80._4_4_,2);
        local_98 = 3;
        local_a0 = param_1;
        local_88 = param_1;
        FUN_008ea660(&local_b8,param_1,&local_88,&local_a0,uVar6);
      }
      FUN_0014ff10(param_1,3);
      lVar8 = lVar8 + 1;
      if (lVar8 == 4) {
        FUN_0014ff10(param_1,0);
        return 0;
      }
      if (lVar8 != 2) break;
      pbVar15 = (byte *)FUN_00dfa238();
LAB_017211b0:
      pbVar24 = *(byte **)(pbVar15 + 0x10);
      if ((*pbVar15 & 1) == 0) {
        pbVar24 = pbVar15 + 1;
      }
      FUN_00151a70(param_1,0xfff0b9d8,pbVar24);
    }
  }
  pbVar15 = (byte *)FUN_00df9074();
  goto LAB_017211b0;
}


