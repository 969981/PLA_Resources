/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00843c64; name: FUN_00843c64
 */


void FUN_00843c64(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined4 local_90;
  uint local_88 [2];
  undefined8 *local_80;
  undefined4 local_78;
  long local_70;
  undefined4 local_68;
  
  bVar5 = (int)param_1[1] != 1;
  if (bVar5) {
    local_70 = 0;
    local_68 = 0;
  }
  else {
    local_70 = (long)param_1 + 0xc;
    local_68 = 0x10;
  }
  local_88[0] = (uint)!bVar5;
  lVar8 = FUN_00845d68(param_1[9],0);
  if (lVar8 != 0) {
    iVar14 = 0;
    plVar1 = param_1 + 10;
    puVar12 = (undefined8 *)PTR_DAT_043773c0;
    do {
      lVar8 = FUN_00845d68(param_1[9],iVar14);
      if (*(char *)(lVar8 + 0xc) < '\0') {
        if (*(char *)(lVar8 + 0x648) == '\0') {
          local_90 = 0;
          local_98 = 0x20000000;
          FUN_00845e68(param_1[9],&local_98);
          local_90 = 0;
          local_98 = 0x20000000;
          FUN_008439a4(param_1,&local_98,lVar8,0,"<Packet invalid>");
          local_90 = 0;
          local_98 = 0x20000000;
          FUN_008439a8(param_1,&local_98,lVar8);
          local_90 = 0;
          local_98 = 0x20000000;
          FUN_00845e68(param_1[9],&local_98);
        }
        else {
          uVar9 = FUN_007f07d0(lVar8);
          if ((uVar9 & 1) == 0) {
            *(undefined1 *)(lVar8 + 0x648) = 0;
          }
          else {
            plVar10 = (long *)FUN_00854f34(*puVar12);
            (**(code **)(*plVar10 + 0x20))(&local_98,plVar10,lVar8,0x22);
            iVar13 = (int)local_98;
            local_98 = 0x400000000;
            local_90 = 0;
            FUN_008439a4(param_1,&local_98,lVar8,0,&DAT_03996322);
            if (*(char *)(lVar8 + 0xc) < '\0') {
              memset(local_a8,0,0xc);
              if ((int)param_1[1] == 1) {
                plVar10 = (long *)param_1[0x17];
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x18))(&local_98,plVar10,local_a8,0xc,lVar8);
                  if ((int)local_98 == 0) {
                    local_80 = local_a8;
                    local_78 = 0xc;
                    goto LAB_00843ff4;
                  }
                  *(undefined1 *)(lVar8 + 0x648) = 0;
                  local_b8 = 0x20000000;
                  goto LAB_0084401c;
                }
                *(undefined1 *)(lVar8 + 0x648) = 0;
                puVar11 = &local_98;
                local_90 = 0;
                local_98 = 0x20000000;
              }
              else {
LAB_00843ff4:
                FUN_007f0b74(&local_98,lVar8,local_88);
                if ((int)local_98 == 0) goto LAB_00843dc4;
                *(undefined1 *)(lVar8 + 0x648) = 0;
                local_b8 = 0x400000000;
LAB_0084401c:
                local_b0 = 0;
                puVar11 = &local_b8;
              }
              FUN_008439a8(param_1,puVar11,lVar8);
            }
            else {
LAB_00843dc4:
              if (iVar13 == 0) {
                uVar9 = (**(code **)(*param_1 + 0x98))(param_1,lVar8);
                if ((uVar9 & 1) == 0) {
                  *(undefined1 *)(lVar8 + 0x648) = 0;
                }
                else {
                  uVar16 = 0;
                  if (*(uint *)(lVar8 + 0x5f8) < 0x5c1) {
                    uVar16 = *(uint *)(lVar8 + 0x5f8);
                  }
                  bVar15 = 0;
                  *(uint *)(lVar8 + 0x5f8) = uVar16;
                  if (uVar16 - 0x1c == (uint)*(byte *)(lVar8 + 0x14)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = false;
                    if (*(byte *)(lVar8 + 0x14) + 0x1c <= uVar16) {
                      uVar16 = 0;
                      bVar5 = false;
                      bVar15 = 0;
                      do {
                        FUN_008484cc(plVar1,lVar8,uVar16);
                        if (*plVar1 == 0) {
                          if ((char)param_1[0x11] == '\0') {
                            puVar12 = &local_98;
LAB_008441a0:
                            *(undefined8 *)((long)puVar12 + 4) = 0;
                            *(undefined4 *)puVar12 = 0x20000000;
                            FUN_008439a8(param_1,puVar12,lVar8);
                            *(undefined1 *)(lVar8 + 0x648) = 0;
                            puVar12 = (undefined8 *)PTR_DAT_043773c0;
                            goto LAB_00843d30;
                          }
                          break;
                        }
                        bVar7 = *(byte *)(param_1 + 0xf);
                        iVar13 = 1;
                        if ((bVar7 & 1) != 0) {
                          iVar13 = 2;
                        }
                        if ((bVar7 & 2) != 0) {
                          iVar13 = iVar13 + 2;
                        }
                        if ((bVar7 & 4) != 0) {
                          iVar13 = iVar13 + 4;
                        }
                        if ((bVar7 & 8) != 0) {
                          iVar13 = iVar13 + 8;
                        }
                        uVar3 = *(ushort *)((long)param_1 + 0x7a);
                        lVar4 = param_1[7];
                        bVar7 = (**(code **)(*param_1 + 0xa0))(param_1,plVar1);
                        if ((char)lVar4 == '\0') {
                          if ((bVar7 & 1) == 0) {
                            puVar12 = local_a8;
                            goto LAB_008441a0;
                          }
                        }
                        else {
                          bVar15 = bVar15 | bVar7;
                        }
                        uVar16 = uVar16 + uVar3 + iVar13;
                        bVar5 = (bool)(bVar5 | (*(byte *)((long)param_1 + 0x79) & 6) != 0);
                        uVar2 = 0;
                        if (*(byte *)(lVar8 + 0x14) + 0x1c <= *(uint *)(lVar8 + 0x5f8)) {
                          uVar2 = (*(uint *)(lVar8 + 0x5f8) - (uint)*(byte *)(lVar8 + 0x14)) - 0x1c;
                        }
                      } while (uVar16 < uVar2);
                    }
                  }
                  bVar6 = (char)param_1[7] == '\0';
                  *(byte *)(lVar8 + 0x648) = bVar15 & 1 | bVar6;
                  puVar12 = (undefined8 *)PTR_DAT_043773c0;
                  if ((bVar15 & 1) != 0 || bVar6) {
                    if (bVar5) {
                      if ((*(uint *)(lVar8 + 0x5f8) - 0x1c != (uint)*(byte *)(lVar8 + 0x14)) &&
                         (*(byte *)(lVar8 + 0x14) + 0x1c <= *(uint *)(lVar8 + 0x5f8))) {
                        uVar16 = 0;
                        do {
                          FUN_008484cc(plVar1,lVar8,uVar16);
                          if (*plVar1 == 0) break;
                          if ((*(byte *)((long)param_1 + 0x79) & 6) != 0) {
                            (**(code **)(*param_1 + 0x60))(param_1,plVar1);
                          }
                          bVar15 = *(byte *)(param_1 + 0xf);
                          iVar13 = 1;
                          if ((bVar15 & 1) != 0) {
                            iVar13 = 2;
                          }
                          if ((bVar15 & 2) != 0) {
                            iVar13 = iVar13 + 2;
                          }
                          if ((bVar15 & 4) != 0) {
                            iVar13 = iVar13 + 4;
                          }
                          if ((bVar15 & 8) != 0) {
                            iVar13 = iVar13 + 8;
                          }
                          uVar16 = uVar16 + *(ushort *)((long)param_1 + 0x7a) + iVar13;
                          uVar2 = 0;
                          if (*(byte *)(lVar8 + 0x14) + 0x1c <= *(uint *)(lVar8 + 0x5f8)) {
                            uVar2 = (*(uint *)(lVar8 + 0x5f8) - (uint)*(byte *)(lVar8 + 0x14)) -
                                    0x1c;
                          }
                        } while (uVar16 < uVar2);
                      }
                    }
                    local_98 = 0x400000000;
                    local_90 = 0;
                    FUN_008439a8(param_1,&local_98,lVar8);
                    FUN_00844d04(&local_98,*(undefined8 *)(*puVar12 + 0x90),lVar8,1,
                                 *(undefined1 *)(lVar8 + 0x14),0,0);
                  }
                }
              }
              else {
                local_98 = 0x400000000;
                local_90 = 0;
                FUN_008439a8(param_1,&local_98,lVar8);
                *(undefined1 *)(lVar8 + 0x648) = 0;
              }
            }
          }
        }
      }
      else {
        *(undefined1 *)(lVar8 + 0x648) = 0;
        local_90 = 0;
        local_98 = 0x20000000;
        FUN_008439a4(param_1,&local_98,lVar8,0,"<IsEncrypted() == false>");
        local_90 = 0;
        local_98 = 0x20000000;
        FUN_008439a8(param_1,&local_98,lVar8);
      }
LAB_00843d30:
      iVar14 = iVar14 + 1;
      lVar8 = FUN_00845d68(param_1[9],iVar14);
    } while (lVar8 != 0);
  }
  FUN_00844200(param_1,param_2);
  return;
}


