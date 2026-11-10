/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029dba1c; name: FUN_029dba1c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_029dba1c(long param_1,char *param_2,char *param_3)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined **ppuVar21;
  long lVar22;
  long lVar23;
  byte bVar24;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined2 uStack_98;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  undefined1 uStack_93;
  char local_90 [8];
  undefined **local_88;
  long local_80;
  long local_78;
  undefined2 local_70;
  char local_6e;
  
  *param_2 = '\0';
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  if ((param_3[0x42] != '\0') && (*param_3 != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*param_3,0);
  }
  uVar13 = *(uint *)(param_3 + 4);
  uVar20 = (ulong)uVar13;
  if (uVar13 == 8) {
    local_88 = *(undefined ***)(param_3 + 0x10);
    FUN_02988cfc(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[8],&local_88);
    local_f0._0_2_ = CONCAT11(param_3[8],*param_3);
    local_e8 = local_88;
    local_e0 = CONCAT71(local_e0._1_7_,param_3[9]);
    FUN_029d2944(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1c0),local_90,&local_f0);
    bVar10 = local_90[0] != '\0';
    local_f8 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    if ((byte)param_3[8] - 1 < 4) {
      puVar8 = &DAT_03a805d4;
      if (param_3[9] != '\x01') {
        puVar8 = &DAT_03a805d0;
      }
      if (-1 < *(int *)(puVar8 + ((ulong)((byte)param_3[8] - 1) & 0xff) * 0xc)) {
        local_118 = (ulong)CONCAT22(1,(short)*(int *)(puVar8 + ((ulong)((byte)param_3[8] - 1) & 0xff
                                                               ) * 0xc));
        cVar6 = param_3[0x42];
        goto joined_r0x029dbbf8;
      }
    }
LAB_029dbc9c:
    cVar6 = param_3[0x42];
  }
  else {
    cVar6 = param_3[0x41];
    puVar1 = (ulong *)(param_3 + 0x10);
    if (((9 < (int)uVar13) ||
        (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + uVar20 * 4 + 0x1a8) == 0)) &&
       (uVar15 = FUN_02a3ce7c(*(undefined8 *)(param_1 + 0x20),uVar13,0), (uVar15 & 1) != 0)) {
      lVar23 = *(long *)(param_1 + 0x20);
      FUN_02941324(*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0x10) + 0x28),uVar13,puVar1)
      ;
      FUN_02a3e6b8(*(undefined8 *)(lVar23 + 0x18),0x2e,uVar13 & 0xff,*(undefined4 *)(param_3 + 0x14)
                   ,(int)*puVar1);
LAB_029dbc98:
      bVar10 = true;
      goto LAB_029dbc9c;
    }
    bVar10 = false;
    if (cVar6 == '\0') goto LAB_029dbc9c;
    uVar3 = (uint)*puVar1 & 7;
    if (uVar3 == 3) {
      lVar23 = 8;
LAB_029dbbe0:
      uVar3 = (uint)(*puVar1 >> lVar23) & 0x3f;
      if (uVar3 != 0x1f) {
        lVar23 = *(long *)(param_1 + 0x20);
        if ((int)uVar13 < 10) {
          lVar22 = *(long *)(*(long *)(*(long *)(lVar23 + 0x20) + 0x10) + 0x28);
          lVar2 = lVar22 + uVar20 * 4;
          if (*(int *)(lVar2 + 0x1a8) != 0) {
            uVar5 = *(uint *)(lVar2 + 0x180);
            uVar15 = (ulong)uVar5;
            if (uVar5 < 6) {
              if (uVar5 == 0) {
                uVar15 = 0;
              }
              else {
                puVar18 = (uint *)(lVar22 + uVar20 * 0x18 + 0x90);
                uVar19 = uVar15;
                do {
                  if (*puVar18 == uVar3) goto LAB_029dbc88;
                  uVar19 = uVar19 - 1;
                  puVar18 = puVar18 + 1;
                } while (uVar19 != 0);
              }
              *(uint *)(lVar22 + uVar20 * 0x18 + uVar15 * 4 + 0x90) = uVar3;
              *(uint *)(lVar2 + 0x180) = uVar5 + 1;
            }
          }
        }
LAB_029dbc88:
        FUN_02a3e6b8(*(undefined8 *)(lVar23 + 0x18),0x2f,uVar13 & 0xff);
        goto LAB_029dbc98;
      }
    }
    else if (uVar3 == 4) {
      lVar23 = 0xe;
      goto LAB_029dbbe0;
    }
    bVar10 = false;
    cVar6 = param_3[0x42];
  }
joined_r0x029dbbf8:
  if ((cVar6 != '\0') && (*param_3 != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
  }
  if (bVar10 != false) {
    if (param_3[0x40] == '\0') {
      if (*(short *)(param_3 + 0x18) != 0xa7) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x89);
      }
      pcVar4 = (char *)&local_118;
      if ((*(ushort *)(param_3 + 0x1e) & 0x7f) != 0) {
        pcVar4 = param_3 + 0x1c;
      }
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),pcVar4);
    }
    if ((*(int *)(param_3 + 4) != 8) ||
       (FUN_0298915c(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[8]),
       *(int *)(param_3 + 4) != 8)) {
      FUN_02989830(*(undefined8 *)(param_1 + 0x38),*param_3);
      iVar14 = *(int *)(param_3 + 4);
      if (iVar14 == 9) {
        local_78 = *(long *)(param_1 + 0x10);
        if ((*(int *)(*(long *)(local_78 + 0x28) + 0x1cc) == 0) ||
           (*(int *)(*(long *)(local_78 + 0x28) + 0x1a4) != 1)) goto LAB_029dbdd4;
        uStack_98 = 0;
        bStack_96 = 0;
        bStack_95 = 0;
        bStack_94 = 0;
        uStack_93 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_9a = 0;
        local_f0 = (undefined **)0x0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = (undefined **)0x0;
        local_e0 = 0;
        local_80 = *(long *)(param_1 + 8);
        local_70 = 0;
        local_6e = '\x01';
        local_88 = &PTR_LAB_04277078;
        FUN_0299d494(&local_88);
        lVar2 = local_78;
        lVar23 = local_80;
        if (local_6e == '\0') {
          uVar20 = (ulong)(byte)local_70;
          if (local_70._1_1_ < *(byte *)(*(long *)(local_78 + 8) + uVar20 * 0x38 + 0x38)) {
            lVar22 = *(long *)(*(long *)(local_78 + 8) + uVar20 * 0x38 + (ulong)local_70._1_1_ * 8 +
                              8);
          }
          else {
            lVar22 = 0;
          }
          bVar24 = local_70._1_1_ + 1;
          local_70 = CONCAT11(bVar24,(byte)local_70);
          if ((byte)local_70 < 5) {
            do {
              bVar11 = FUN_0294da60(*(undefined4 *)(lVar23 + 0x110),
                                    *(undefined1 *)(*(long *)(lVar23 + 0x58) + 0x55),
                                    uVar20 & 0xffffffff);
              if (bVar24 < bVar11) {
                do {
                  if (((bVar24 < *(byte *)(*(long *)(lVar2 + 8) + uVar20 * 0x38 + 0x38)) &&
                      (lVar17 = *(long *)(*(long *)(lVar2 + 8) + uVar20 * 0x38 + (ulong)bVar24 * 8 +
                                         8), lVar17 != 0)) && (*(short *)(lVar17 + 0x74) != 0)) {
                    bVar7 = false;
                    local_70 = CONCAT11(bVar24,(char)uVar20);
                    goto LAB_029dbee8;
                  }
                  bVar24 = bVar24 + 1;
                } while (bVar24 < bVar11);
              }
              uVar20 = uVar20 + 1;
              bVar24 = 0;
            } while (uVar20 != 5);
            bVar24 = 0;
            local_70 = 5;
          }
          bVar7 = true;
          local_6e = '\x01';
LAB_029dbee8:
          bVar11 = 0;
LAB_029dbef0:
          do {
            uVar20 = uVar20 & 0xff;
            do {
              uVar13 = FUN_029506a8(lVar22,0x10);
              switch(uVar13 & 0xffff) {
              case 0xa2:
              case 0xa3:
              case 0xa4:
              case 0xa5:
              case 0xa6:
              case 0xa7:
              case 0xa8:
              case 0xa9:
              case 0xaa:
              case 0xab:
              case 0xac:
              case 0xad:
              case 0xae:
              case 0xaf:
              case 0xb1:
              case 0xb2:
              case 0xb3:
              case 0xb4:
              case 0xb5:
              case 0xb6:
              case 0xb7:
              case 0xb8:
              case 0xb9:
              case 0xba:
              case 0xbb:
              case 0xbc:
              case 0xbd:
              case 0xbe:
              case 0xbf:
              case 0xc0:
              case 0xc1:
              case 0xc2:
              case 0xc3:
              case 0xc4:
              case 0xc6:
              case 199:
              case 200:
              case 0xc9:
              case 0xca:
              case 0xcb:
              case 0xcc:
              case 0xcd:
              case 0xce:
              case 0xcf:
              case 0xd4:
              case 0xd6:
              case 0xd7:
              case 0xd8:
              case 0xd9:
              case 0xda:
              case 0xdb:
              case 0xdc:
              case 0xdd:
              case 0xde:
              case 0xdf:
              case 0xe0:
              case 0xe2:
              case 0xe3:
              case 0xe4:
              case 0xe5:
              case 0xe6:
              case 0xe7:
              case 0xe8:
              case 0xe9:
              case 0xea:
              case 0xeb:
              case 0xec:
              case 0xed:
              case 0xee:
              case 0xef:
              case 0xf0:
              case 0xf2:
              case 0xf3:
              case 0xf4:
              case 0xf5:
              case 0xf6:
              case 0xf7:
              case 0xf9:
              case 0xfa:
              case 0xfb:
              case 0xfc:
              case 0xfd:
              case 0xfe:
              case 0xff:
              case 0x100:
              case 0x101:
              case 0x102:
              case 0x103:
              case 0x104:
              case 0x105:
              case 0x106:
              case 0x107:
              case 0x108:
              case 0x109:
switchD_029dbf44_caseD_a2:
                if (((uVar13 == 0x100) || ((*(ulong *)(lVar22 + 0x120) & 7) != 0)) || (5 < bVar11))
                goto switchD_029dbf44_caseD_a1;
                if (bVar11 != 0) {
                  plVar16 = &local_f0;
                  uVar15 = (ulong)bVar11;
                  do {
                    if (*plVar16 == lVar22) goto switchD_029dbf44_caseD_a1;
                    uVar15 = uVar15 - 1;
                    plVar16 = plVar16 + 1;
                  } while (uVar15 != 0);
                }
                *(long *)(local_90 + (ulong)bVar11 * 8 + -0x60) = lVar22;
                local_90[(ulong)bStack_96 - 0x18] = '\0';
                uVar15 = (ulong)bStack_96;
                (local_90 + uVar15 * 2 + -0x30)[0] = '\0';
                (local_90 + uVar15 * 2 + -0x30)[1] = '\0';
                uVar15 = (ulong)bStack_96;
                (local_90 + uVar15 * 2 + -0x24)[0] = '\0';
                (local_90 + uVar15 * 2 + -0x24)[1] = '\0';
                bVar11 = bStack_96 + 1;
                bVar12 = bStack_96 + 1;
                bStack_96 = bVar11;
                bVar9 = bVar11;
                if (bVar12 <= bStack_95) goto switchD_029dbf44_caseD_a1;
                break;
              default:
                if ((uVar13 & 0xffff) != 0x79) goto switchD_029dbf44_caseD_a2;
              case 0xa1:
              case 0xb0:
              case 0xc5:
              case 0xd0:
              case 0xd1:
              case 0xd2:
              case 0xd3:
              case 0xd5:
              case 0xe1:
              case 0xf1:
              case 0xf8:
              case 0x10a:
              case 0x10b:
switchD_029dbf44_caseD_a1:
                bVar9 = bStack_95;
              }
              bStack_95 = bVar9;
              if (bVar7) {
                if (bVar11 == 0) goto LAB_029dbdac;
                local_88 = (undefined **)&local_f0;
                FUN_029f7874(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x17e0),local_90,&local_88)
                ;
                bStack_94 = 0;
                if (bStack_96 == 0) goto LAB_029dbdac;
                bStack_94 = 1;
                ppuVar21 = local_f0;
                goto joined_r0x029dc0ec;
              }
              if (bVar24 < *(byte *)(*(long *)(lVar2 + 8) + uVar20 * 0x38 + 0x38)) {
                lVar22 = *(long *)(*(long *)(lVar2 + 8) + uVar20 * 0x38 + (ulong)bVar24 * 8 + 8);
              }
              else {
                lVar22 = 0;
              }
              bVar24 = bVar24 + 1;
              bVar7 = true;
            } while (4 < (uint)uVar20);
            do {
              bVar12 = FUN_0294da60(*(undefined4 *)(lVar23 + 0x110),
                                    *(undefined1 *)(*(long *)(lVar23 + 0x58) + 0x55),
                                    uVar20 & 0xffffffff);
              if (bVar24 < bVar12) {
                do {
                  if (((bVar24 < *(byte *)(*(long *)(lVar2 + 8) + uVar20 * 0x38 + 0x38)) &&
                      (lVar17 = *(long *)(*(long *)(lVar2 + 8) + uVar20 * 0x38 + (ulong)bVar24 * 8 +
                                         8), lVar17 != 0)) && (*(short *)(lVar17 + 0x74) != 0)) {
                    bVar7 = false;
                    goto LAB_029dbef0;
                  }
                  bVar24 = bVar24 + 1;
                } while (bVar24 < bVar12);
              }
              uVar20 = uVar20 + 1;
              bVar24 = 0;
            } while (uVar20 != 5);
            bVar7 = true;
            uVar20 = 5;
          } while( true );
        }
LAB_029dbdac:
        iVar14 = *(int *)(param_3 + 4);
      }
      if (iVar14 == 2) {
        local_f0 = (undefined **)CONCAT71(local_f0._1_7_,*param_3);
        FUN_029e1fac(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xae0),&local_88,&local_f0);
      }
    }
  }
LAB_029dbdd4:
  *param_2 = bVar10;
  return;
joined_r0x029dc0ec:
  if (ppuVar21 == (undefined **)0x0) goto LAB_029dbdac;
  lVar23 = *(long *)(*(long *)(param_1 + 0x60) + 0x1880);
  FUN_02987998(*(undefined8 *)(lVar23 + 0x38),ppuVar21);
  iVar14 = FUN_029506a8(ppuVar21,0x10);
  if (iVar14 == 0x7f) {
    local_88 = ppuVar21;
    FUN_029ea38c(*(undefined8 *)(*(long *)(lVar23 + 0x60) + 0x1360),local_90,&local_88);
  }
  uVar20 = (ulong)bStack_94;
  if (bStack_96 <= bStack_94) goto LAB_029dbdac;
  bStack_94 = bStack_94 + 1;
  ppuVar21 = *(undefined ***)(local_90 + uVar20 * 8 + -0x60);
  goto joined_r0x029dc0ec;
}


