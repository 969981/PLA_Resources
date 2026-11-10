/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a07d10; name: FUN_02a07d10
 */


void FUN_02a07d10(long param_1,long param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_38;
  
  uVar1 = (uint)param_4 & 0xff;
  if ((uVar1 < 0x25) && ((1L << (param_4 & 0x3f) & 0x1008040002U) != 0)) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    lVar7 = lVar7 + (ulong)*(byte *)(lVar7 + 0x1c8) * 0x40;
    *(undefined1 *)(lVar7 + 0x14) = *(undefined1 *)(param_2 + 0x7d);
    *(undefined4 *)(lVar7 + 0x10) = param_3;
    *(undefined2 *)(lVar7 + 0x15) = 0x106;
    if (*(char *)(lVar7 + 8) == '\0') {
      FUN_02a3ff18(*(undefined8 *)(param_1 + 0x28),(char *)(lVar7 + 8),lVar7 + 0x18);
    }
  }
  FUN_02a3afc0(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4 & 0xffffffff);
  lVar7 = DAT_043ecde0;
  switch(uVar1) {
  case 2:
    lVar7 = *(long *)(param_1 + 0x20);
    pcVar9 = *(char **)(*(long *)(lVar7 + 0x10) + 0xa8);
    cVar4 = *(char *)(param_2 + 0x7d);
    if ((*pcVar9 == '\0') || (pcVar9[2] != cVar4)) {
      if ((pcVar9[3] == '\0') || (pcVar9[5] != cVar4)) {
        if ((pcVar9[6] == '\0') || (pcVar9[8] != cVar4)) {
          if ((pcVar9[9] == '\0') || (pcVar9[0xb] != cVar4)) {
            if ((pcVar9[0xc] == '\0') || (pcVar9[0xe] != cVar4)) {
              if (pcVar9[0xf] == '\0') {
                return;
              }
              if (pcVar9[0x11] != cVar4) {
                return;
              }
              uVar5 = 5;
            }
            else {
              uVar5 = 4;
            }
          }
          else {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
    uVar6 = 0x2a;
    break;
  case 3:
    lVar7 = *(long *)(param_1 + 0x20);
    pcVar9 = *(char **)(*(long *)(lVar7 + 0x10) + 0xa8);
    cVar4 = *(char *)(param_2 + 0x7d);
    if ((*pcVar9 == '\0') || (pcVar9[2] != cVar4)) {
      if ((pcVar9[3] == '\0') || (pcVar9[5] != cVar4)) {
        if ((pcVar9[6] == '\0') || (pcVar9[8] != cVar4)) {
          if ((pcVar9[9] == '\0') || (pcVar9[0xb] != cVar4)) {
            if ((pcVar9[0xc] == '\0') || (pcVar9[0xe] != cVar4)) {
              if (pcVar9[0xf] == '\0') {
                return;
              }
              if (pcVar9[0x11] != cVar4) {
                return;
              }
              uVar5 = 5;
            }
            else {
              uVar5 = 4;
            }
          }
          else {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
    uVar6 = 0x94;
    break;
  case 4:
    lVar7 = *(long *)(param_1 + 0x20);
    pcVar9 = *(char **)(*(long *)(lVar7 + 0x10) + 0xa8);
    cVar4 = *(char *)(param_2 + 0x7d);
    if ((*pcVar9 == '\0') || (pcVar9[2] != cVar4)) {
      if ((pcVar9[3] == '\0') || (pcVar9[5] != cVar4)) {
        if ((pcVar9[6] == '\0') || (pcVar9[8] != cVar4)) {
          if ((pcVar9[9] == '\0') || (pcVar9[0xb] != cVar4)) {
            if ((pcVar9[0xc] == '\0') || (pcVar9[0xe] != cVar4)) {
              if (pcVar9[0xf] == '\0') {
                return;
              }
              if (pcVar9[0x11] != cVar4) {
                return;
              }
              uVar5 = 5;
            }
            else {
              uVar5 = 4;
            }
          }
          else {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
    uVar6 = 0x96;
    break;
  case 5:
    lVar7 = *(long *)(param_1 + 0x20);
    pcVar9 = *(char **)(*(long *)(lVar7 + 0x10) + 0xa8);
    cVar4 = *(char *)(param_2 + 0x7d);
    if ((*pcVar9 == '\0') || (pcVar9[2] != cVar4)) {
      if ((pcVar9[3] == '\0') || (pcVar9[5] != cVar4)) {
        if ((pcVar9[6] == '\0') || (pcVar9[8] != cVar4)) {
          if ((pcVar9[9] == '\0') || (pcVar9[0xb] != cVar4)) {
            if ((pcVar9[0xc] == '\0') || (pcVar9[0xe] != cVar4)) {
              if (pcVar9[0xf] == '\0') {
                return;
              }
              if (pcVar9[0x11] != cVar4) {
                return;
              }
              uVar5 = 5;
            }
            else {
              uVar5 = 4;
            }
          }
          else {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
    uVar6 = 0x2d;
    break;
  default:
    return;
  case 0x17:
    lVar7 = *(long *)(param_1 + 0x20);
    pcVar9 = *(char **)(*(long *)(lVar7 + 0x10) + 0xa8);
    cVar4 = *(char *)(param_2 + 0x7d);
    if ((*pcVar9 == '\0') || (pcVar9[2] != cVar4)) {
      if ((pcVar9[3] == '\0') || (pcVar9[5] != cVar4)) {
        if ((pcVar9[6] == '\0') || (pcVar9[8] != cVar4)) {
          if ((pcVar9[9] == '\0') || (pcVar9[0xb] != cVar4)) {
            if ((pcVar9[0xc] == '\0') || (pcVar9[0xe] != cVar4)) {
              if (pcVar9[0xf] == '\0') {
                return;
              }
              if (pcVar9[0x11] != cVar4) {
                return;
              }
              uVar5 = 5;
            }
            else {
              uVar5 = 4;
            }
          }
          else {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
    uVar6 = 0x9d;
    break;
  case 0x18:
    bVar2 = *(byte *)(param_2 + 0x7d);
    uVar8 = *(ulong *)(DAT_043ecde0 + 8);
    uVar11 = *(ulong *)(DAT_043ecde0 + 0x10);
    do {
      uVar13 = uVar8 ^ uVar11;
      iVar10 = (int)uVar11;
      uVar11 = uVar13 >> 0x1b | uVar13 << 0x25;
      uVar12 = (ulong)(uint)((int)uVar8 + iVar10) & 3;
      uVar8 = uVar13 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar13 << 0x10;
    } while (uVar12 == 3);
    *(ulong *)(DAT_043ecde0 + 8) = uVar8;
    *(ulong *)(lVar7 + 0x10) = uVar11;
    local_38 = ((ulong)((uint)bVar2 << 3 | 2) & 0xff | uVar12 << 8) + 0x200;
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6f,
                 *(undefined1 *)(param_2 + 0x7d),0);
    lVar7 = *(long *)(param_1 + 0x20);
    uVar3 = *(undefined1 *)(param_2 + 0x7d);
    FUN_02951ca0(param_2,2,&local_38);
    FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x13,uVar3,2,local_38._4_4_,local_38 & 0xffffffff);
    FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x73,uVar3,2);
    pcVar9 = *(char **)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0xa8);
    cVar4 = *(char *)(param_2 + 0x7d);
    if ((*pcVar9 == '\0') || (pcVar9[2] != cVar4)) {
      if ((pcVar9[3] == '\0') || (pcVar9[5] != cVar4)) {
        if ((pcVar9[6] == '\0') || (pcVar9[8] != cVar4)) {
          if ((pcVar9[9] == '\0') || (pcVar9[0xb] != cVar4)) {
            if ((pcVar9[0xc] == '\0') || (pcVar9[0xe] != cVar4)) {
              if (pcVar9[0xf] == '\0') {
                return;
              }
              if (pcVar9[0x11] != cVar4) {
                return;
              }
              uVar5 = 5;
            }
            else {
              uVar5 = 4;
            }
          }
          else {
            uVar5 = 3;
          }
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x8a,uVar5,0x2a);
    return;
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x8a,uVar5,uVar6);
  return;
}


