/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087d8bc; name: FUN_0087d8bc
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0087d8bc(long param_1,uint param_2,uint param_3,char *param_4)

{
  long lVar1;
  int *piVar2;
  size_t __n;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  
  lVar12 = *(long *)(param_1 + 0xd8);
  uVar11 = (ulong)param_3;
  if (lVar12 != 0) {
    lVar15 = *(long *)(lVar12 + 0x110);
    uVar17 = (ulong)*(uint *)(*(long *)(lVar12 + 0x188) + 4);
    uVar10 = *(uint *)(*(long *)(lVar12 + 0x188) + 0x68);
    uVar5 = FUN_0087c018(param_2);
    if (5 < param_3) {
      return 0xffffffff;
    }
    lVar14 = lVar15 + uVar17;
    lVar1 = lVar14 + (ulong)uVar10;
    switch(uVar11) {
    case 0:
      uVar10 = *(uint *)(*(long *)(lVar12 + 0x188) + 0x3c);
      uVar13 = (ulong)uVar10;
      if ((int)uVar10 < 1) {
        return 0xffffffff;
      }
      puVar16 = (uint *)(*(uint *)(*(long *)(lVar12 + 0x188) + 0x40) + uVar17 + lVar15 + 0x34);
      uVar10 = *puVar16;
      do {
        if (((uVar10 & 1 << (ulong)(uVar5 & 0x1f)) != 0) &&
           (iVar6 = strncmp(param_4,(char *)(lVar1 + (ulong)puVar16[-0xd]),(ulong)puVar16[-0xc]),
           iVar6 == 0)) {
          uVar3 = puVar16[-1];
          uVar10 = uVar3;
          if ((int)uVar3 < 0) {
            uVar10 = (uint)uVar11;
          }
          uVar11 = (ulong)uVar10;
          if (-1 < (int)uVar3) {
            return uVar11;
          }
        }
        puVar16 = puVar16 + 0x17;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          return 0xffffffff;
        }
        uVar10 = *puVar16;
      } while( true );
    case 1:
      uVar10 = *(uint *)(*(long *)(lVar12 + 0x188) + 0x44);
      uVar17 = (ulong)uVar10;
      if ((int)uVar10 < 1) {
        return 0xffffffff;
      }
      puVar16 = (uint *)(lVar14 + (ulong)*(uint *)(*(long *)(lVar12 + 0x188) + 0x48));
      uVar10 = puVar16[0xe];
      break;
    case 2:
      uVar10 = *(uint *)(*(long *)(lVar12 + 0x188) + 0x34);
      uVar17 = (ulong)uVar10;
      if ((int)uVar10 < 1) {
        return 0xffffffff;
      }
      puVar16 = (uint *)(lVar14 + (ulong)*(uint *)(*(long *)(lVar12 + 0x188) + 0x38));
      cVar4 = (char)puVar16[0x19];
      do {
        if (((cVar4 == '\0') && ((puVar16[0x11] & 1 << (ulong)(uVar5 & 0x1f)) != 0)) &&
           (iVar6 = strncmp(param_4,(char *)(lVar1 + (ulong)*puVar16),(ulong)puVar16[1]), iVar6 == 0
           )) {
          uVar3 = puVar16[(ulong)uVar5 + 0x12];
          uVar10 = uVar3;
          if ((int)uVar3 < 0) {
            uVar10 = (uint)uVar11;
          }
          uVar11 = (ulong)uVar10;
          if (-1 < (int)uVar3) {
            return uVar11;
          }
        }
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          return 0xffffffff;
        }
        cVar4 = (char)puVar16[0x42];
        puVar16 = puVar16 + 0x29;
      } while( true );
    case 3:
      uVar10 = *(uint *)(*(long *)(lVar12 + 0x188) + 0x2c);
      uVar17 = (ulong)uVar10;
      if ((int)uVar10 < 1) {
        return 0xffffffff;
      }
      puVar16 = (uint *)(lVar14 + (ulong)*(uint *)(*(long *)(lVar12 + 0x188) + 0x30));
      uVar10 = puVar16[0xc];
      do {
        if (((uVar10 & 1 << (ulong)(uVar5 & 0x1f)) != 0) &&
           (iVar6 = strncmp(param_4,(char *)(lVar1 + (ulong)*puVar16),(ulong)puVar16[1]), iVar6 == 0
           )) {
          uVar3 = puVar16[(ulong)uVar5 + 0xd];
          uVar10 = uVar3;
          if ((int)uVar3 < 0) {
            uVar10 = (uint)uVar11;
          }
          uVar11 = (ulong)uVar10;
          if (-1 < (int)uVar3) {
            return uVar11;
          }
        }
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          return 0xffffffff;
        }
        uVar10 = puVar16[0x27];
        puVar16 = puVar16 + 0x1b;
      } while( true );
    case 4:
      uVar10 = *(uint *)(*(long *)(lVar12 + 0x188) + 0x4c);
      uVar17 = (ulong)uVar10;
      if ((int)uVar10 < 1) {
        return 0xffffffff;
      }
      puVar16 = (uint *)(lVar14 + (ulong)*(uint *)(*(long *)(lVar12 + 0x188) + 0x50));
      uVar10 = puVar16[0x12];
      do {
        if (((uVar10 & 1 << (ulong)(uVar5 & 0x1f)) != 0) &&
           (iVar6 = strncmp(param_4,(char *)(lVar1 + (ulong)*puVar16),(ulong)puVar16[1]), iVar6 == 0
           )) {
          uVar3 = puVar16[(ulong)uVar5 + 0xc];
          uVar10 = uVar3;
          if ((int)uVar3 < 0) {
            uVar10 = (uint)uVar11;
          }
          uVar11 = (ulong)uVar10;
          if (-1 < (int)uVar3) {
            return uVar11;
          }
        }
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          return 0xffffffff;
        }
        uVar10 = puVar16[0x2d];
        puVar16 = puVar16 + 0x1b;
      } while( true );
    case 5:
      uVar10 = *(uint *)(*(long *)(lVar12 + 0x188) + 0x34);
      uVar17 = (ulong)uVar10;
      if ((int)uVar10 < 1) {
        return 0xffffffff;
      }
      puVar16 = (uint *)(lVar14 + (ulong)*(uint *)(*(long *)(lVar12 + 0x188) + 0x38));
      cVar4 = (char)puVar16[0x19];
      do {
        if (((cVar4 == '\0') && ((puVar16[0x11] & 1 << (ulong)(uVar5 & 0x1f)) != 0)) &&
           (iVar6 = strncmp(param_4,(char *)(lVar1 + (ulong)*puVar16),(ulong)puVar16[1]), iVar6 == 0
           )) {
          uVar3 = puVar16[(ulong)uVar5 + 0x12];
          uVar10 = uVar3;
          if ((int)uVar3 < 0) {
            uVar10 = (uint)uVar11;
          }
          uVar11 = (ulong)uVar10;
          if (-1 < (int)uVar3) {
            return uVar11;
          }
        }
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) {
          return 0xffffffff;
        }
        cVar4 = (char)puVar16[0x42];
        puVar16 = puVar16 + 0x29;
      } while( true );
    }
    do {
      if (((uVar10 & 1 << (ulong)(uVar5 & 0x1f)) != 0) &&
         (iVar6 = strncmp(param_4,(char *)(lVar1 + (ulong)*puVar16),(ulong)puVar16[1]), iVar6 == 0))
      {
        uVar3 = puVar16[0xc];
        uVar10 = uVar3;
        if ((int)uVar3 < 0) {
          uVar10 = (uint)uVar11;
        }
        uVar11 = (ulong)uVar10;
        if (-1 < (int)uVar3) {
          return uVar11;
        }
      }
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) {
        return 0xffffffff;
      }
      uVar10 = puVar16[0x25];
      puVar16 = puVar16 + 0x17;
    } while( true );
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0xd0) + *(long *)(&DAT_03a75358 + (ulong)param_2 * 8));
  if (lVar12 == 0) {
    return 0xffffffff;
  }
  if ((int)param_3 < 6) {
    lVar14 = *(long *)(lVar12 + *(long *)(&DAT_03a75388 + uVar11 * 8));
    if (param_3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(lVar12 + *(long *)(&DAT_03a753b8 + uVar11 * 8));
    }
  }
  else {
    lVar15 = *(long *)(lVar12 + 0x58);
    if (lVar15 == 0) {
      return 0xffffffff;
    }
    uVar11 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
    lVar14 = *(long *)(lVar15 + *(long *)(&DAT_038897b0 + uVar11));
    iVar6 = *(int *)(lVar15 + *(long *)(&DAT_03889ba0 + uVar11));
  }
  if (lVar14 == 0) {
    return 0xffffffff;
  }
  if (param_4 == (char *)0x0) {
    sVar8 = 0;
  }
  else {
    sVar8 = strlen(param_4);
  }
  uVar11 = (ulong)*(ushort *)(lVar14 + 0xc);
  puVar16 = (uint *)((int *)(lVar14 + 8) + uVar11 * 4);
  uVar10 = *puVar16;
  if (*(int *)(lVar14 + 8) < (int)uVar10) {
    do {
      uVar17 = (long)((ulong)uVar10 << 0x20) >> 0x23;
      if (uVar17 < sVar8) {
        uVar17 = (ulong)((byte)param_4[sVar8 + ~uVar17] >> ((ulong)uVar10 & 7)) & 1;
      }
      else {
        uVar17 = 0;
      }
      piVar2 = (int *)(lVar14 + 8 + uVar11 * 0x10);
      uVar11 = (ulong)*(ushort *)((long)piVar2 + uVar17 * 2 + 4);
      puVar16 = (uint *)(lVar14 + 8 + uVar11 * 0x10);
      uVar10 = *puVar16;
    } while (*piVar2 < (int)uVar10);
  }
  uVar11 = (ulong)**(ushort **)(puVar16 + 2);
  __n = sVar8;
  if (uVar11 <= sVar8) {
    __n = uVar11;
  }
  if (__n == 0) {
    if (sVar8 < uVar11) {
      return 0xffffffff;
    }
  }
  else {
    iVar7 = memcmp(*(ushort **)(puVar16 + 2) + 1,param_4,__n);
    iVar9 = iVar7;
    if (iVar7 == 0) {
      iVar9 = 1;
    }
    if (sVar8 < uVar11 || iVar7 != 0) {
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      goto LAB_0087dd68;
    }
  }
  if (uVar11 < sVar8) {
    return 0xffffffff;
  }
LAB_0087dd68:
  iVar9 = (int)((ulong)((long)puVar16 + (-0x18 - lVar14)) >> 4);
  if (iVar9 < 0) {
    return 0xffffffff;
  }
  return (ulong)*(uint *)(*(long *)(lVar12 + 0x38) + (long)(iVar6 + iVar9) * 4);
}


