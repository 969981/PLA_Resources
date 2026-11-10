/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f0154; name: FUN_003f0154
 */


void FUN_003f0154(long param_1,byte *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  
  puVar14 = (ulong *)(param_1 + 0x10);
  bVar3 = *(byte *)puVar14;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0x16) goto LAB_003f0194;
  }
  else if ((*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe) - 1 == *(long *)(param_1 + 0x18)) {
LAB_003f0194:
    if ((bVar3 & 1) == 0) {
      lVar8 = 0x116;
    }
    else {
      lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
    }
    FUN_0030ff7c(puVar14,lVar8);
  }
  FUN_002e6a9c(puVar14,0x22);
  bVar3 = *param_2;
  bVar7 = (bVar3 & 1) == 0;
  uVar11 = *(ulong *)(param_2 + 8);
  uVar16 = (ulong)(bVar3 >> 1);
  if (!bVar7) {
    uVar16 = uVar11;
  }
  if (uVar16 != 0) {
    uVar16 = 0;
    puVar1 = (ulong *)(param_1 + 0x18);
    do {
      pbVar2 = param_2 + 1;
      if (!bVar7) {
        pbVar2 = *(byte **)(param_2 + 0x10);
      }
      bVar4 = pbVar2[uVar16];
      uVar19 = (ulong)bVar4;
      if (bVar4 == 0) break;
      uVar18 = (uint)bVar4;
      if (bVar4 - 0x20 < 0x5f) {
        if ((bVar4 == 0x5c) || (uVar18 == 0x22)) {
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x16) goto LAB_003f0298;
          }
          else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f0298:
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x116;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
            }
            FUN_0030ff7c(puVar14,lVar8);
          }
          FUN_002e6a9c(puVar14,0x5c);
        }
        bVar3 = *(byte *)puVar14;
        if ((bVar3 & 1) == 0) {
          if (bVar3 >> 1 == 0x16) goto LAB_003f0390;
        }
        else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f0390:
          if ((bVar3 & 1) == 0) {
            lVar8 = 0x116;
          }
          else {
            lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
          }
          FUN_0030ff7c(puVar14,lVar8);
        }
LAB_003f0228:
        FUN_002e6a9c(puVar14,uVar19);
      }
      else {
        if ((0x1f < uVar18) && (uVar18 != 0x7f)) {
          if ((uVar18 & 0xe0) == 0xc0) {
            iVar12 = 1;
            uVar13 = 0x1f;
          }
          else if ((uVar18 & 0xf0) == 0xe0) {
            iVar12 = 2;
            uVar13 = 0xf;
          }
          else {
            if ((uVar18 & 0xf8) != 0xf0) break;
            iVar12 = 3;
            uVar13 = 7;
          }
          uVar19 = (ulong)(bVar3 >> 1);
          if (!bVar7) {
            uVar19 = uVar11;
          }
          uVar11 = uVar16 + 1;
          if (uVar11 == uVar19) break;
          bVar3 = pbVar2[uVar11];
          uVar17 = (uint)bVar3;
          if ((uVar17 & 0xc0) != 0x80) break;
          uVar13 = uVar13 & uVar18;
          uVar20 = (ulong)uVar13;
          iVar12 = iVar12 + (int)uVar16;
          uVar18 = uVar17 & 0x3f | uVar13 << 6;
          if (iVar12 == (int)uVar11) {
            uVar15 = (ulong)uVar18;
          }
          else {
            uVar11 = uVar16 + 2;
            if (uVar11 == uVar19) break;
            bVar3 = pbVar2[uVar11];
            if ((bVar3 & 0xc0) != 0x80) break;
            uVar6 = bVar3 & 0x3f | uVar18 << 6;
            uVar15 = (ulong)uVar6;
            if (iVar12 == (int)uVar11) {
              uVar20 = (ulong)uVar18;
            }
            else {
              uVar11 = uVar16 + 3;
              if (uVar11 == uVar19) break;
              bVar3 = pbVar2[uVar11];
              if ((bVar3 & 0xc0) != 0x80) break;
              uVar13 = uVar17 & 0x30 | uVar13 << 6;
              uVar20 = uVar15;
              uVar15 = (ulong)(bVar3 & 0x3f | uVar6 << 6);
            }
            if (0x10 < uVar13 >> 4) break;
          }
          if (((uint)uVar20 & 0x1ffe0) != 0x360) {
            uVar18 = (uint)uVar15 - 0x10000;
            if ((uint)uVar15 < 0x10000) {
              bVar4 = *(byte *)puVar14;
              if ((bVar4 & 1) == 0) {
                uVar16 = 0x16 - (ulong)(bVar4 >> 1);
              }
              else {
                uVar16 = ((*puVar14 & 0xfffffffffffffffe) - 1) - *puVar1;
              }
              if (uVar16 < 2) {
                if ((bVar4 & 1) == 0) {
                  lVar8 = 0x16;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) - 1;
                }
                FUN_0030ff7c(puVar14,lVar8 + ((ulong)(0x101 - (int)uVar16) & 0xffffff00));
              }
              FUN_002e4094(puVar14,&DAT_038c872d,2);
              cVar5 = "0123456789abcdef"[uVar20 >> 6 & 0xf];
              bVar4 = *(byte *)puVar14;
              if ((bVar4 & 1) == 0) {
                if (bVar4 >> 1 == 0x16) goto LAB_003f06bc;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f06bc:
                if ((bVar4 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,cVar5);
              cVar5 = "0123456789abcdef"[uVar20 >> 2 & 0xf];
              bVar4 = *(byte *)puVar14;
              if ((bVar4 & 1) == 0) {
                if (bVar4 >> 1 == 0x16) goto LAB_003f07ac;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f07ac:
                if ((bVar4 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,cVar5);
              cVar5 = "0123456789abcdef"[uVar15 >> 4 & 0xf];
              bVar4 = *(byte *)puVar14;
              if ((bVar4 & 1) == 0) {
                if (bVar4 >> 1 == 0x16) goto LAB_003f087c;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f087c:
                if ((bVar4 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,cVar5);
              bVar4 = "0123456789abcdef"[(ulong)bVar3 & 0xf];
              bVar3 = *(byte *)puVar14;
            }
            else {
              bVar3 = *(byte *)puVar14;
              if ((bVar3 & 1) == 0) {
                uVar16 = (ulong)(bVar3 >> 1);
                lVar8 = 0x16;
              }
              else {
                lVar8 = (*puVar14 & 0xfffffffffffffffe) - 1;
                uVar16 = *puVar1;
              }
              if (lVar8 - uVar16 < 2) {
                if ((bVar3 & 1) == 0) {
                  lVar10 = 0x16;
                }
                else {
                  lVar10 = (*puVar14 & 0xfffffffffffffffe) - 1;
                }
                FUN_0030ff7c(puVar14,lVar10 + ((ulong)(0x101 - (int)(lVar8 - uVar16)) & 0xffffff00))
                ;
              }
              FUN_002e4094(puVar14,&DAT_038c872d,2);
              uVar13 = uVar18 >> 10 & 0xffff | 0xd800;
              cVar5 = "0123456789abcdef"[uVar13 >> 0xc];
              bVar3 = *(byte *)puVar14;
              if ((bVar3 & 1) == 0) {
                if (bVar3 >> 1 == 0x16) goto LAB_003f073c;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f073c:
                if ((bVar3 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,cVar5);
              cVar5 = "0123456789abcdef"[(ulong)(uVar13 >> 8) & 0xf];
              bVar3 = *(byte *)puVar14;
              if ((bVar3 & 1) == 0) {
                if (bVar3 >> 1 == 0x16) goto LAB_003f0814;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f0814:
                if ((bVar3 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,cVar5);
              cVar5 = "0123456789abcdef"[(ulong)(uVar18 >> 0xe) & 0xf];
              bVar3 = *(byte *)puVar14;
              if ((bVar3 & 1) == 0) {
                if (bVar3 >> 1 == 0x16) goto LAB_003f08e4;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f08e4:
                if ((bVar3 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,cVar5);
              cVar5 = "0123456789abcdef"[(ulong)(uVar18 >> 10) & 0xf];
              bVar3 = *(byte *)puVar14;
              if ((bVar3 & 1) == 0) {
                if (bVar3 >> 1 == 0x16) goto LAB_003f09b8;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f09b8:
                if ((bVar3 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,cVar5);
              bVar3 = *(byte *)puVar14;
              if ((bVar3 & 1) == 0) {
                uVar16 = 0x16 - (ulong)(bVar3 >> 1);
              }
              else {
                uVar16 = ((*puVar14 & 0xfffffffffffffffe) - 1) - *puVar1;
              }
              if (uVar16 < 2) {
                if ((bVar3 & 1) == 0) {
                  lVar8 = 0x16;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) - 1;
                }
                FUN_0030ff7c(puVar14,lVar8 + ((ulong)(0x101 - (int)uVar16) & 0xffffff00));
              }
              FUN_002e4094(puVar14,&DAT_038c872d,2);
              bVar3 = *(byte *)puVar14;
              if ((bVar3 & 1) == 0) {
                if (bVar3 >> 1 == 0x16) goto LAB_003f0a98;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f0a98:
                if ((bVar3 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,100);
              cVar5 = "0123456789abcdef"[(ulong)(uVar18 >> 8 & 3) | 0xc];
              bVar3 = *(byte *)puVar14;
              if ((bVar3 & 1) == 0) {
                if (bVar3 >> 1 == 0x16) goto LAB_003f0b04;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f0b04:
                if ((bVar3 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,cVar5);
              cVar5 = "0123456789abcdef"[(ulong)(uVar18 >> 4) & 0xf];
              bVar3 = *(byte *)puVar14;
              if ((bVar3 & 1) == 0) {
                if (bVar3 >> 1 == 0x16) goto LAB_003f0b6c;
              }
              else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f0b6c:
                if ((bVar3 & 1) == 0) {
                  lVar8 = 0x116;
                }
                else {
                  lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
                }
                FUN_0030ff7c(puVar14,lVar8);
              }
              FUN_002e6a9c(puVar14,cVar5);
              bVar4 = "0123456789abcdef"[(ulong)uVar18 & 0xf];
              bVar3 = *(byte *)puVar14;
            }
            uVar20 = (ulong)bVar3;
            uVar19 = (ulong)bVar4;
            uVar16 = uVar11;
            if ((bVar3 & 1) == 0) goto LAB_003f093c;
LAB_003f0bc4:
            if ((*puVar14 & 0xfffffffffffffffe) - 1 != *puVar1) goto LAB_003f0228;
LAB_003f094c:
            if ((uVar20 & 1) == 0) {
              lVar8 = 0x116;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
            }
            FUN_0030ff7c(puVar14,lVar8);
            goto LAB_003f0228;
          }
          break;
        }
        switch(bVar4) {
        case 8:
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            uVar11 = 0x16 - (ulong)(bVar3 >> 1);
          }
          else {
            uVar11 = ((*puVar14 & 0xfffffffffffffffe) - 1) - *puVar1;
          }
          if (uVar11 < 2) {
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x16;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) - 1;
            }
            FUN_0030ff7c(puVar14,lVar8 + ((ulong)(0x101 - (int)uVar11) & 0xffffff00));
          }
          puVar9 = &DAT_0391010b;
          break;
        case 9:
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            uVar11 = 0x16 - (ulong)(bVar3 >> 1);
          }
          else {
            uVar11 = ((*puVar14 & 0xfffffffffffffffe) - 1) - *puVar1;
          }
          if (uVar11 < 2) {
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x16;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) - 1;
            }
            FUN_0030ff7c(puVar14,lVar8 + ((ulong)(0x101 - (int)uVar11) & 0xffffff00));
          }
          puVar9 = &DAT_03949f0b;
          break;
        case 10:
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            uVar11 = 0x16 - (ulong)(bVar3 >> 1);
          }
          else {
            uVar11 = ((*puVar14 & 0xfffffffffffffffe) - 1) - *puVar1;
          }
          if (uVar11 < 2) {
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x16;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) - 1;
            }
            FUN_0030ff7c(puVar14,lVar8 + ((ulong)(0x101 - (int)uVar11) & 0xffffff00));
          }
          puVar9 = &DAT_039ba48f;
          break;
        default:
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            uVar11 = 0x16 - (ulong)(bVar3 >> 1);
          }
          else {
            uVar11 = ((*puVar14 & 0xfffffffffffffffe) - 1) - *puVar1;
          }
          if (uVar11 < 2) {
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x16;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) - 1;
            }
            FUN_0030ff7c(puVar14,lVar8 + ((ulong)(0x101 - (int)uVar11) & 0xffffff00));
          }
          FUN_002e4094(puVar14,&DAT_038c872d,2);
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x16) goto LAB_003f0d64;
          }
          else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f0d64:
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x116;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
            }
            FUN_0030ff7c(puVar14,lVar8);
          }
          FUN_002e6a9c(puVar14,0x30);
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x16) goto LAB_003f0e1c;
          }
          else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f0e1c:
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x116;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
            }
            FUN_0030ff7c(puVar14,lVar8);
          }
          FUN_002e6a9c(puVar14,0x30);
          cVar5 = "0123456789abcdef"[bVar4 >> 4];
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x16) goto LAB_003f0e8c;
          }
          else if ((*puVar14 & 0xfffffffffffffffe) - 1 == *puVar1) {
LAB_003f0e8c:
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x116;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
            }
            FUN_0030ff7c(puVar14,lVar8);
          }
          FUN_002e6a9c(puVar14,cVar5);
          uVar19 = (ulong)(byte)"0123456789abcdef"[uVar19 & 0xf];
          uVar20 = (ulong)*(byte *)puVar14;
          if ((*(byte *)puVar14 & 1) != 0) goto LAB_003f0bc4;
LAB_003f093c:
          if (uVar20 >> 1 != 0x16) goto LAB_003f0228;
          goto LAB_003f094c;
        case 0xc:
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            uVar11 = 0x16 - (ulong)(bVar3 >> 1);
          }
          else {
            uVar11 = ((*puVar14 & 0xfffffffffffffffe) - 1) - *puVar1;
          }
          if (uVar11 < 2) {
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x16;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) - 1;
            }
            FUN_0030ff7c(puVar14,lVar8 + ((ulong)(0x101 - (int)uVar11) & 0xffffff00));
          }
          puVar9 = &DAT_03904d2f;
          break;
        case 0xd:
          bVar3 = *(byte *)puVar14;
          if ((bVar3 & 1) == 0) {
            uVar11 = 0x16 - (ulong)(bVar3 >> 1);
          }
          else {
            uVar11 = ((*puVar14 & 0xfffffffffffffffe) - 1) - *puVar1;
          }
          if (uVar11 < 2) {
            if ((bVar3 & 1) == 0) {
              lVar8 = 0x16;
            }
            else {
              lVar8 = (*puVar14 & 0xfffffffffffffffe) - 1;
            }
            FUN_0030ff7c(puVar14,lVar8 + ((ulong)(0x101 - (int)uVar11) & 0xffffff00));
          }
          puVar9 = &DAT_0391853c;
        }
        FUN_002e4094(puVar14,puVar9,2);
      }
      bVar3 = *param_2;
      bVar7 = (bVar3 & 1) == 0;
      uVar11 = *(ulong *)(param_2 + 8);
      uVar16 = uVar16 + 1;
      uVar19 = (ulong)(bVar3 >> 1);
      if (!bVar7) {
        uVar19 = uVar11;
      }
    } while (uVar16 < uVar19);
  }
  bVar3 = *(byte *)puVar14;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0x16) goto LAB_003f0f44;
  }
  else if ((*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe) - 1 != *(long *)(param_1 + 0x18))
  goto LAB_003f0f44;
  if ((bVar3 & 1) == 0) {
    lVar8 = 0x116;
  }
  else {
    lVar8 = (*puVar14 & 0xfffffffffffffffe) + 0xff;
  }
  FUN_0030ff7c(puVar14,lVar8);
LAB_003f0f44:
  FUN_002e6a9c(puVar14,0x22);
  return;
}


