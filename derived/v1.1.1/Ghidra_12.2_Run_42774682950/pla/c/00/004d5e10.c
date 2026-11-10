/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d5e10; name: FUN_004d5e10
 */


/* WARNING: Removing unreachable block (ram,0x004d6db0) */
/* WARNING: Type propagation algorithm not settling */

long FUN_004d5e10(int *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  code *pcVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  void *__s2;
  uint *puVar20;
  undefined8 uVar21;
  int local_6c;
  long local_68;
  undefined4 local_5c;
  long local_58;
  ulong local_50;
  undefined4 local_44;
  
  if (param_1[0x17] != 0x14) {
    if (param_1[0x17] != 0x1c) {
      FUN_004c99a0(param_1,0x50,0x259,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x4c4);
      return 0;
    }
    if ((param_1[0x1d] == 0) && (*(long *)(*(long *)(param_1 + 0x142) + 0x1b8) != 0)) {
      if (*(long *)(*(long *)(param_1 + 0x2a) + 0xe0) == 0) {
        FUN_004c99a0(param_1,0x50,0x180,0x44,"external/openssl/ssl/statem/statem_srvr.c",0xde4);
        return 0;
      }
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    iVar5 = FUN_004e77f0(param_1,uVar10);
    return (ulong)(iVar5 != 0) << 1;
  }
  if (param_2 != 5) {
    if (param_2 != 4) {
      if (param_2 != 3) {
        return 1;
      }
      local_44 = 0x50;
      local_58 = 0;
      local_50 = 0;
      piVar18 = *(int **)(param_1 + 0x1c6);
      local_5c = 0;
      pcVar13 = *(code **)(*(long *)(param_1 + 0x166) + 0x1d0);
      if ((pcVar13 == (code *)0x0) ||
         (iVar5 = (*pcVar13)(param_1,&local_44,*(undefined8 *)(*(long *)(param_1 + 0x166) + 0x1d8)),
         iVar5 == 1)) {
        uVar19 = *(undefined8 *)(piVar18 + 4);
        uVar10 = *(undefined8 *)(piVar18 + 2);
        uVar21 = *(undefined8 *)(piVar18 + 6);
        lVar9 = *(long *)(param_1 + 0x2a);
        *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)(piVar18 + 8);
        *(undefined8 *)(lVar9 + 200) = uVar21;
        *(undefined8 *)(lVar9 + 0xc0) = uVar19;
        *(undefined8 *)(lVar9 + 0xb8) = uVar10;
        if (*piVar18 != 0) {
          uVar6 = piVar18[1];
          if ((uVar6 == 2) || ((uVar6 & 0xff00) != 0x300)) {
            uVar12 = 0x46;
            uVar10 = 0x66a;
            iVar5 = 0xfc;
            goto LAB_004d62c0;
          }
          param_1[0x17b] = uVar6;
        }
        piVar14 = *(int **)(param_1 + 2);
        uVar6 = *(uint *)(*(long *)(piVar14 + 0x30) + 0x60);
        if ((uVar6 >> 3 & 1) == 0) {
          iVar5 = FUN_004daec0(param_1,piVar18,&local_5c);
          if (iVar5 != 0) {
LAB_004d6208:
            if ((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) == 0) ||
               (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) == 0)) {
              iVar7 = piVar18[1];
              param_1[0x17b] = iVar7;
              *param_1 = iVar7;
            }
            uVar12 = 0x46;
            uVar10 = 0x683;
            goto LAB_004d62c0;
          }
          piVar14 = *(int **)(param_1 + 2);
          uVar6 = *(uint *)(*(long *)(piVar14 + 0x30) + 0x60);
        }
        else if (*piVar14 != 0x1ffff) {
          iVar5 = 0xff00;
          if (piVar18[1] != 0x100) {
            iVar5 = piVar18[1];
          }
          iVar7 = 0xff00;
          if (*param_1 != 0x100) {
            iVar7 = *param_1;
          }
          if (iVar7 < iVar5) {
            iVar5 = 0x18c;
            goto LAB_004d6208;
          }
        }
        if ((uVar6 >> 3 & 1) != 0) {
LAB_004d6438:
          uVar6 = FUN_004c5320(param_1);
          if ((uVar6 >> 0xd & 1) == 0) {
LAB_004d6470:
            if ((**(int **)(param_1 + 2) != 0x1ffff) ||
               (iVar5 = FUN_004daec0(param_1,piVar18,&local_5c), iVar5 == 0)) goto LAB_004d64c0;
            uVar12 = 0x46;
            *param_1 = param_1[0x17b];
            uVar10 = 0x6ab;
          }
          else if (*(code **)(*(long *)(param_1 + 0x166) + 0xd0) == (code *)0x0) {
            __s2 = *(void **)(param_1 + 0x2c);
            if ((*(size_t *)((long)__s2 + 0x100) == *(size_t *)(piVar18 + 0x14)) &&
               (iVar5 = memcmp(piVar18 + 0x16,__s2,*(size_t *)((long)__s2 + 0x100)), iVar5 == 0))
            goto LAB_004d6468;
            uVar12 = 0x28;
            iVar5 = 0x134;
            uVar10 = 0x6a1;
          }
          else {
            iVar5 = (**(code **)(*(long *)(param_1 + 0x166) + 0xd0))
                              (param_1,piVar18 + 0x16,piVar18[0x14]);
            if (iVar5 != 0) {
              __s2 = *(void **)(param_1 + 0x2c);
LAB_004d6468:
              *(undefined4 *)((long)__s2 + 0x108) = 1;
              goto LAB_004d6470;
            }
            uVar12 = 0x28;
            iVar5 = 0x134;
            uVar10 = 0x697;
          }
          goto LAB_004d62c0;
        }
        if ((0x303 < *piVar14) && (*piVar14 != 0x10000)) {
          iVar5 = FUN_004c5d60(param_1 + 0x1fe);
          if (iVar5 != 0) {
            uVar12 = 10;
            iVar5 = 0xb6;
            uVar10 = 0x68b;
            goto LAB_004d62c0;
          }
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) != 0)
          goto LAB_004d6438;
        }
LAB_004d64c0:
        param_1[0x32] = 0;
        iVar5 = FUN_004c5560(param_1,piVar18 + 0x56,*piVar18);
        if ((iVar5 == 0) ||
           (iVar5 = FUN_004c5780(param_1,piVar18 + 0x56,&local_50,&local_58,*piVar18,1), iVar5 == 0)
           ) goto LAB_004d62c4;
        *(undefined4 *)(*(long *)(param_1 + 0x2a) + 0x3d8) = 0;
        if ((local_58 != 0) && (iVar5 = FUN_00407950(), 0 < iVar5)) {
          iVar5 = 0;
          do {
            uVar10 = FUN_00407970(local_58,iVar5);
            iVar7 = FUN_004bf600();
            if (iVar7 == 0x30000ff) {
              if (param_1[0x1d0] != 0) {
                uVar12 = 0x28;
                iVar5 = 0x159;
                uVar10 = 0x6c5;
                goto LAB_004d62c0;
              }
              *(undefined4 *)(*(long *)(param_1 + 0x2a) + 0x3d8) = 1;
            }
            else {
              iVar7 = FUN_004bf600(uVar10);
              if ((iVar7 == 0x3005600) && (iVar7 = FUN_004daca0(param_1), iVar7 == 0)) {
                uVar12 = 0x56;
                iVar5 = 0x175;
                uVar10 = 0x6d4;
                goto LAB_004d62c0;
              }
            }
            iVar5 = iVar5 + 1;
            iVar7 = FUN_00407950(local_58);
          } while (iVar5 < iVar7);
        }
        uVar11 = local_50;
        if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
            (iVar5 = **(int **)(param_1 + 2), 0x303 < iVar5)) && (iVar5 != 0x10000)) {
          uVar10 = FUN_004c40f0(param_1);
          lVar9 = FUN_004c1170(param_1,uVar11,uVar10);
          if (lVar9 == 0) {
            uVar12 = 0x28;
            iVar5 = 0xc1;
            uVar10 = 0x6e2;
          }
          else {
            if ((param_1[0x136] != 1) ||
               ((lVar15 = *(long *)(*(long *)(param_1 + 0x2a) + 0x238), lVar15 != 0 &&
                (*(int *)(lVar15 + 0x18) == *(int *)(lVar9 + 0x18))))) {
              *(long *)(*(long *)(param_1 + 0x2a) + 0x238) = lVar9;
              goto LAB_004d6624;
            }
            uVar12 = 0x2f;
            iVar5 = 0xba;
            uVar10 = 0x6ee;
          }
        }
        else {
LAB_004d6624:
          iVar5 = FUN_004e4880(param_1,0xd,0x80,*(undefined8 *)(piVar18 + 0xa2),0,0);
          if (iVar5 == 0) goto LAB_004d62c4;
          if ((*piVar18 == 0) &&
             ((param_1[0xf] == 0 || ((*(byte *)((long)param_1 + 0x5ce) & 1) == 0)))) {
            iVar5 = FUN_003ff960(param_1,piVar18);
            if (iVar5 == -1) goto LAB_004d62c4;
            if (iVar5 != 1) goto LAB_004d664c;
            param_1[0x32] = 1;
            piVar14 = *(int **)(param_1 + 2);
            uVar6 = *(uint *)(*(long *)(piVar14 + 0x30) + 0x60);
            if ((uVar6 >> 3 & 1) == 0) goto LAB_004d666c;
            goto LAB_004d6758;
          }
LAB_004d664c:
          iVar5 = FUN_003ff410(param_1,1);
          if (iVar5 == 0) goto LAB_004d62c4;
          piVar14 = *(int **)(param_1 + 2);
          uVar6 = *(uint *)(*(long *)(piVar14 + 0x30) + 0x60);
          if ((uVar6 >> 3 & 1) == 0) {
LAB_004d666c:
            if ((*piVar14 < 0x304) || (*piVar14 == 0x10000)) goto LAB_004d6758;
            memcpy(param_1 + 0x14c,(void *)(*(long *)(param_1 + 0x1c6) + 0x30),
                   *(size_t *)(*(long *)(param_1 + 0x1c6) + 0x28));
            *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(*(long *)(param_1 + 0x1c6) + 0x28);
            if ((*(uint *)(*(long *)(piVar14 + 0x30) + 0x60) >> 3 & 1) == 0) goto LAB_004d675c;
LAB_004d6770:
            if (param_1[0x32] != 0) {
              iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x142) + 0x1f8) + 0x18);
              iVar7 = FUN_00407950(local_50);
              if (0 < iVar7) {
                iVar7 = 0;
                do {
                  lVar9 = FUN_00407970(local_50,iVar7);
                  if (*(int *)(lVar9 + 0x18) == iVar5) goto LAB_004d67e4;
                  iVar7 = iVar7 + 1;
                  iVar8 = FUN_00407950(local_50);
                } while (iVar7 < iVar8);
              }
              uVar12 = 0x2f;
              iVar5 = 0xd7;
              uVar10 = 0x747;
              goto LAB_004d62c0;
            }
          }
          else {
LAB_004d6758:
            if ((uVar6 >> 3 & 1) != 0) goto LAB_004d6770;
LAB_004d675c:
            if ((*piVar14 < 0x304) || (*piVar14 == 0x10000)) goto LAB_004d6770;
          }
LAB_004d67e4:
          lVar9 = *(long *)(piVar18 + 0x5a);
          if (lVar9 != 0) {
            piVar14 = piVar18 + 0x5c;
            do {
              if ((char)*piVar14 == '\0') {
                if ((((*(byte *)(param_1 + 0x173) >> 6 & 1) != 0) &&
                    (uVar11 = *(ulong *)(piVar18 + 0x9e), 3 < uVar11)) &&
                   ((uVar11 & 0xfffffffffffffffe) != 4)) {
                  lVar15 = *(long *)(piVar18 + 0x9c);
                  uVar17 = (ulong)CONCAT11(*(undefined1 *)(lVar15 + 4),*(undefined1 *)(lVar15 + 5));
                  lVar9 = (uVar11 - 6) - uVar17;
                  if ((uVar17 <= uVar11 - 6) &&
                     (CONCAT11(*(undefined1 *)(lVar15 + 2),*(undefined1 *)(lVar15 + 3)) == 0)) {
                    uVar6 = FUN_004c5040(param_1);
                    if ((uVar6 & 0xffffff00) == 0x300) {
                      iVar5 = FUN_004c5040(param_1);
                      lVar1 = 0x22;
                      if (iVar5 < 0x303) {
                        lVar1 = 0x12;
                      }
                      if (lVar9 == lVar1) goto LAB_004d68e4;
LAB_004d6934:
                      bVar4 = false;
                    }
                    else {
                      if (lVar9 != 0x12) goto LAB_004d6934;
LAB_004d68e4:
                      iVar5 = FUN_00404df0(lVar15 + uVar17 + 6,&DAT_03a27107,lVar9);
                      bVar4 = iVar5 == 0;
                    }
                    *(bool *)(*(long *)(param_1 + 0x2a) + 0x404) = bVar4;
                  }
                }
                iVar5 = FUN_004e49f0(param_1,0x80,*(undefined8 *)(piVar18 + 0xa2),0,0,1);
                if (iVar5 == 0) goto LAB_004d62c4;
                iVar5 = FUN_004c1b80(param_1,1,*(long *)(param_1 + 0x2a) + 0x98,0x20,local_5c);
                if (iVar5 < 1) {
                  uVar12 = 0x50;
                  iVar5 = 0x44;
                  uVar10 = 0x771;
                  goto LAB_004d62c0;
                }
                if (((param_1[0x32] == 0) && (0x300 < *param_1)) &&
                   (((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0 &&
                    (((iVar5 = **(int **)(param_1 + 2), iVar5 < 0x304 || (iVar5 == 0x10000)) &&
                     (*(code **)(param_1 + 0x1ae) != (code *)0x0)))))) {
                  local_68 = 0;
                  local_6c = 0x100;
                  iVar5 = (**(code **)(param_1 + 0x1ae))
                                    (param_1,*(long *)(param_1 + 0x142) + 0x50,&local_6c,local_50,
                                     &local_68,*(undefined8 *)(param_1 + 0x1b0));
                  uVar11 = local_50;
                  if ((iVar5 != 0) && (0 < local_6c)) {
                    lVar9 = *(long *)(param_1 + 0x142);
                    *(long *)(lVar9 + 8) = (long)local_6c;
                    param_1[0x32] = 1;
                    *(ulong *)(lVar9 + 0x208) = local_50;
                    *(undefined8 *)(lVar9 + 0x1d0) = 0;
                    local_50 = 0;
                    if (local_68 == 0) {
                      uVar10 = FUN_004c40f0(param_1);
                      local_68 = FUN_004c1170(param_1,uVar11,uVar10);
                      if (local_68 == 0) {
                        uVar12 = 0x28;
                        iVar5 = 0xc1;
                        uVar10 = 0x796;
                        goto LAB_004d62c0;
                      }
                      lVar9 = *(long *)(param_1 + 0x142);
                    }
                    *(long *)(lVar9 + 0x1f8) = local_68;
                    FUN_00407010(*(undefined8 *)(param_1 + 0x46));
                    uVar10 = FUN_00406f10(*(undefined8 *)(*(long *)(param_1 + 0x142) + 0x208));
                    *(undefined8 *)(param_1 + 0x46) = uVar10;
                    FUN_00407010(*(undefined8 *)(param_1 + 0x48));
                    uVar10 = FUN_00406f10(*(undefined8 *)(*(long *)(param_1 + 0x142) + 0x208));
                    *(undefined8 *)(param_1 + 0x48) = uVar10;
                  }
                }
                *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x298) = 0;
                piVar14 = *(int **)(param_1 + 2);
                uVar6 = *(uint *)(*(long *)(piVar14 + 0x30) + 0x60);
                if ((((uVar6 >> 3 & 1) == 0) && (0x303 < *piVar14)) && (*piVar14 != 0x10000)) {
                  if (*(long *)(piVar18 + 0x5a) != 1) {
                    uVar12 = 0x2f;
                    iVar5 = 0x155;
                    uVar10 = 0x7b1;
                    goto LAB_004d62c0;
                  }
                }
                else {
                  uVar2 = *(uint *)(*(long *)(param_1 + 0x142) + 0x1f0);
                  if (uVar2 != 0) {
                    iVar5 = FUN_004da9e0(param_1);
                    if (iVar5 == 0) {
                      uVar12 = 0x28;
                      iVar5 = 0x154;
                      uVar10 = 0x7bf;
                      goto LAB_004d62c0;
                    }
                    iVar5 = FUN_00407950(*(undefined8 *)(*(long *)(param_1 + 0x166) + 0x108));
                    if (0 < iVar5) {
                      iVar5 = 0;
                      goto LAB_004d6b0c;
                    }
                    puVar20 = (uint *)0x0;
                    lVar9 = *(long *)(*(long *)(param_1 + 0x2a) + 0x298);
                    goto joined_r0x004d6ba8;
                  }
                  if (param_1[0x32] != 0) {
                    puVar20 = (uint *)0x0;
                    goto joined_r0x004d6b74;
                  }
                  iVar5 = FUN_004da9e0(param_1);
                  if ((iVar5 != 0) && (*(long *)(*(long *)(param_1 + 0x166) + 0x108) != 0)) {
                    iVar5 = FUN_00407950();
                    if (iVar5 < 1) {
                      puVar20 = (uint *)0x0;
                    }
                    else {
                      iVar7 = 0;
                      do {
                        puVar20 = (uint *)FUN_00407970(*(undefined8 *)
                                                        (*(long *)(param_1 + 0x166) + 0x108),iVar7);
                        if (*(ulong *)(piVar18 + 0x5a) != 0) {
                          uVar11 = 1;
                          uVar17 = 0;
                          do {
                            uVar16 = uVar11;
                            if (*puVar20 == (uint)*(byte *)((long)piVar18 + uVar17 + 0x170)) {
                              *(uint **)(*(long *)(param_1 + 0x2a) + 0x298) = puVar20;
                              iVar5 = param_1[0x32];
                              goto joined_r0x004d6ce8;
                            }
                            uVar11 = (ulong)((int)uVar16 + 1);
                            uVar17 = uVar16;
                          } while (uVar16 < *(ulong *)(piVar18 + 0x5a));
                        }
                        iVar7 = iVar7 + 1;
                        puVar20 = (uint *)0x0;
                      } while (iVar7 != iVar5);
                    }
                    goto LAB_004d6ce4;
                  }
                }
                puVar20 = (uint *)0x0;
                iVar5 = param_1[0x32];
                goto joined_r0x004d6ce8;
              }
              lVar9 = lVar9 + -1;
              piVar14 = (int *)((long)piVar14 + 1);
            } while (lVar9 != 0);
          }
          uVar12 = 0x32;
          iVar5 = 0xbb;
          uVar10 = 0x755;
        }
        goto LAB_004d62c0;
      }
      if (iVar5 != -1) {
        iVar5 = 0xea;
        uVar10 = 0x656;
        uVar12 = local_44;
        goto LAB_004d62c0;
      }
      param_1[10] = 7;
      iVar5 = -1;
      goto LAB_004d5f50;
    }
    goto LAB_004d5f54;
  }
  goto LAB_004d6138;
  while( true ) {
    iVar5 = iVar5 + 1;
    iVar7 = FUN_00407950(*(undefined8 *)(*(long *)(param_1 + 0x166) + 0x108));
    if (iVar7 <= iVar5) break;
LAB_004d6b0c:
    puVar20 = (uint *)FUN_00407970(*(undefined8 *)(*(long *)(param_1 + 0x166) + 0x108),iVar5);
    if (uVar2 == *puVar20) {
      *(uint **)(*(long *)(param_1 + 0x2a) + 0x298) = puVar20;
      break;
    }
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x2a) + 0x298);
joined_r0x004d6ba8:
  if (lVar9 == 0) {
    uVar12 = 0x28;
    iVar5 = 0x155;
    uVar10 = 0x7cd;
  }
  else {
    if (*(ulong *)(piVar18 + 0x5a) != 0) {
      uVar11 = 1;
      uVar17 = 0;
      do {
        uVar16 = uVar11;
        if (uVar2 == *(byte *)((long)piVar18 + uVar17 + 0x170)) goto LAB_004d6ce4;
        uVar11 = (ulong)((int)uVar16 + 1);
        uVar17 = uVar16;
      } while (uVar16 < *(ulong *)(piVar18 + 0x5a));
    }
    uVar12 = 0x2f;
    iVar5 = 0x156;
    uVar10 = 0x7d8;
  }
  goto LAB_004d62c0;
LAB_004d6ce4:
  iVar5 = param_1[0x32];
joined_r0x004d6ce8:
  if (iVar5 == 0) {
LAB_004d6d10:
    FUN_00407010(*(undefined8 *)(*(long *)(param_1 + 0x142) + 0x208));
    lVar9 = *(long *)(param_1 + 0x142);
    *(ulong *)(lVar9 + 0x208) = local_50;
    if (local_50 == 0) {
      uVar12 = 0x50;
      iVar5 = 0x44;
      uVar10 = 0x80b;
LAB_004d62c0:
      FUN_004c99a0(param_1,uVar12,0x209,iVar5,"external/openssl/ssl/statem/statem_srvr.c",uVar10);
LAB_004d62c4:
      FUN_00407010(local_50);
      FUN_00407010(local_58);
      FUN_00400420(*(undefined8 *)(piVar18 + 0xa2),"external/openssl/ssl/statem/statem_srvr.c",0x822
                  );
      FUN_00400420(*(undefined8 *)(param_1 + 0x1c6),"external/openssl/ssl/statem/statem_srvr.c",
                   0x823);
      param_1[0x1c6] = 0;
      param_1[0x1c7] = 0;
      return 0;
    }
    local_50 = 0;
    if (param_1[0x32] == 0) {
      if (puVar20 == (uint *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar20;
      }
      *(uint *)(lVar9 + 0x1f0) = uVar6;
    }
  }
  else {
    piVar14 = *(int **)(param_1 + 2);
    uVar6 = *(uint *)(*(long *)(piVar14 + 0x30) + 0x60);
joined_r0x004d6b74:
    if ((((uVar6 >> 3 & 1) == 0) && (0x303 < *piVar14)) && (*piVar14 != 0x10000)) goto LAB_004d6d10;
  }
  FUN_00407010(local_50);
  FUN_00407010(local_58);
  FUN_00400420(*(undefined8 *)(piVar18 + 0xa2),"external/openssl/ssl/statem/statem_srvr.c",0x81b);
  FUN_00400420(*(undefined8 *)(param_1 + 0x1c6),"external/openssl/ssl/statem/statem_srvr.c",0x81c);
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  iVar5 = 1;
LAB_004d5f50:
  if (iVar5 < 0) {
    return 3;
  }
LAB_004d5f54:
  if (param_1[0x32] == 0) {
    pcVar13 = *(code **)(*(long *)(param_1 + 0x122) + 0x1c8);
    if (pcVar13 != (code *)0x0) {
      iVar5 = (*pcVar13)(param_1,*(undefined8 *)(*(long *)(param_1 + 0x122) + 0x1d0));
      if (iVar5 == 0) {
        uVar11 = 0x50;
        uVar10 = 0x17a;
        uVar12 = 0x179;
        uVar19 = 0x8c4;
        goto LAB_004d63e0;
      }
      if (iVar5 < 0) {
        param_1[10] = 4;
        return 4;
      }
      param_1[10] = 1;
    }
    lVar9 = FUN_004dd720(param_1);
    if ((int)lVar9 == 0) {
      return lVar9;
    }
    piVar18 = *(int **)(param_1 + 2);
    uVar6 = *(uint *)(*(long *)(piVar18 + 0x30) + 0x60);
joined_r0x004d5f80:
    if ((((uVar6 >> 3 & 1) != 0) || (*piVar18 < 0x304)) || (*piVar18 == 0x10000)) {
      uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x142) + 0x208);
      uVar10 = FUN_004c40f0(param_1);
      lVar9 = FUN_004c1170(param_1,uVar19,uVar10);
      if (lVar9 == 0) {
        uVar11 = 0x28;
        uVar10 = 0x17a;
        uVar12 = 0xc1;
        uVar19 = 0x8db;
        goto LAB_004d63e0;
      }
      *(long *)(*(long *)(param_1 + 0x2a) + 0x238) = lVar9;
    }
    if (param_1[0x32] == 0) {
      lVar9 = FUN_004e0410(param_1,1);
      if ((int)lVar9 == 0) {
        return lVar9;
      }
      if (*(code **)(param_1 + 0x1fc) == (code *)0x0) {
        iVar5 = *(int *)(*(long *)(param_1 + 0x142) + 0x1b0);
      }
      else {
        iVar5 = (**(code **)(param_1 + 0x1fc))
                          (param_1,(*(uint *)(*(long *)(*(long *)(param_1 + 0x2a) + 0x238) + 0x1c) &
                                   6) != 0);
        *(int *)(*(long *)(param_1 + 0x142) + 0x1b0) = iVar5;
      }
      if (iVar5 != 0) {
        param_1[0x19e] = 0;
        iVar5 = param_1[400];
        param_1[0x195] = 0;
        goto joined_r0x004d5fb8;
      }
    }
    iVar5 = param_1[400];
    param_1[0x195] = 0;
  }
  else {
    piVar18 = *(int **)(param_1 + 2);
    uVar6 = *(uint *)(*(long *)(piVar18 + 0x30) + 0x60);
    if ((((uVar6 >> 3 & 1) == 0) && (0x303 < *piVar18)) && (*piVar18 != 0x10000))
    goto joined_r0x004d5f80;
    *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x238) =
         *(undefined8 *)(*(long *)(param_1 + 0x142) + 0x1f8);
    iVar5 = param_1[400];
    param_1[0x195] = 0;
  }
joined_r0x004d5fb8:
  if ((((iVar5 == -1) || (lVar9 = *(long *)(param_1 + 0x166), lVar9 == 0)) ||
      (pcVar13 = *(code **)(lVar9 + 0x210), pcVar13 == (code *)0x0)) ||
     (*(long *)(*(long *)(param_1 + 0x2a) + 0x2e0) == 0)) {
LAB_004d6108:
    piVar18 = *(int **)(param_1 + 2);
    bVar3 = *(byte *)(*(long *)(piVar18 + 0x30) + 0x60);
  }
  else {
    **(long **)(param_1 + 0x122) = *(long *)(*(long *)(param_1 + 0x2a) + 0x2e0);
    iVar5 = (*pcVar13)(param_1,*(undefined8 *)(lVar9 + 0x218));
    if (iVar5 == 0) {
      if (*(long *)(param_1 + 0x19a) == 0) goto LAB_004d6108;
      param_1[0x195] = 1;
      piVar18 = *(int **)(param_1 + 2);
      bVar3 = *(byte *)(*(long *)(piVar18 + 0x30) + 0x60);
    }
    else {
      if (iVar5 != 3) {
        uVar11 = 0x50;
        uVar10 = 0x233;
        uVar12 = 0xe2;
        uVar19 = 0x852;
        goto LAB_004d63e0;
      }
      param_1[0x195] = 0;
      piVar18 = *(int **)(param_1 + 2);
      bVar3 = *(byte *)(*(long *)(piVar18 + 0x30) + 0x60);
    }
  }
  if (((((bVar3 >> 3 & 1) != 0) || (*piVar18 < 0x304)) || (*piVar18 == 0x10000)) &&
     (lVar9 = FUN_004d6de0(param_1), (int)lVar9 == 0)) {
    return lVar9;
  }
LAB_004d6138:
  local_50 = CONCAT44(local_50._4_4_,0x70);
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x2a) + 0x238) + 0x1c) >> 5 & 1) == 0) ||
     (*(long *)(param_1 + 0x1de) == 0)) {
    return 1;
  }
  if (*(long *)(param_1 + 0x1e4) == 0) {
    uVar11 = 0x73;
    uVar10 = 0x25e;
    uVar12 = 0xdf;
    uVar19 = 0x4df;
  }
  else {
    iVar5 = FUN_004d7530(param_1,&local_50);
    if (iVar5 < 0) {
      param_1[10] = 4;
      return 5;
    }
    if (iVar5 != 2) {
      return 1;
    }
    uVar11 = local_50 & 0xffffffff;
    uVar12 = 0xdf;
    if ((int)local_50 != 0x73) {
      uVar12 = 0xe2;
    }
    uVar10 = 0x25e;
    uVar19 = 0x4e9;
  }
LAB_004d63e0:
  FUN_004c99a0(param_1,uVar11,uVar10,uVar12,"external/openssl/ssl/statem/statem_srvr.c",uVar19);
  return 0;
}


