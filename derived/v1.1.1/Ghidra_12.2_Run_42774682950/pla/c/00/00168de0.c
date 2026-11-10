/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00168de0; name: FUN_00168de0
 */


void FUN_00168de0(long *param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  
  if (param_2 < 2) {
    iVar4 = FUN_00169190(param_1,param_2 + 0xc,param_3,&DAT_039c5fa8);
    if (iVar4 != 0) {
      return;
    }
LAB_00168e34:
    iVar4 = FUN_00168360(param_1,param_3);
    if (((*param_3 == 7) && (((uint)param_3[2] >> 8 & 1) == 0)) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_3[2])) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    iVar4 = FUN_001674a0(param_1,param_2 + 0x19 | iVar4 << 0x17);
    param_3[2] = iVar4;
    *param_3 = 0xc;
    *(undefined4 *)(*(long *)(*param_1 + 0x48) + (long)(int)param_1[4] * 4 + -4) = param_4;
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      return;
    }
    goto LAB_00168e34;
  }
  FUN_00167ad0(param_1,param_3);
  switch(*param_3) {
  case 1:
  case 3:
    iVar7 = 2;
    break;
  case 2:
  case 4:
  case 5:
  case 6:
    iVar7 = 3;
    break;
  case 7:
switchD_00168ed0_caseD_7:
    if ((((uint)param_3[2] >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_3[2])) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
    goto LAB_00168f90;
  default:
    goto switchD_00168ed0_caseD_8;
  case 0xb:
    puVar9 = (uint *)(*(long *)(*param_1 + 0x38) + (long)param_3[2] * 4);
    if (param_3[2] < 1) {
LAB_00168f18:
      uVar10 = (ulong)*puVar9;
      puVar6 = puVar9;
    }
    else {
      puVar6 = puVar9 + -1;
      uVar10 = (ulong)*puVar6;
      if (-1 < (char)(&DAT_039c5e39)[uVar10 & 0x3f]) goto LAB_00168f18;
    }
    *puVar6 = (uint)uVar10 & 0xffffc000 | (uint)uVar10 & 0x3f | (uint)((uVar10 & 0x3fc0) == 0) << 6;
    iVar4 = param_3[4];
    iVar7 = param_3[5];
    param_3[4] = iVar7;
    param_3[5] = iVar4;
    goto joined_r0x00169170;
  case 0xc:
    bVar3 = *(byte *)((long)param_1 + 0x3c);
    bVar5 = bVar3 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar3) {
      if (0xfd < bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0016a180(param_1[2],"function or expression needs too many registers");
      }
      *(byte *)(*param_1 + 0xc) = bVar5;
      bVar5 = *(char *)((long)param_1 + 0x3c) + 1;
    }
    *(byte *)((long)param_1 + 0x3c) = bVar5;
    FUN_00169ba0(param_1,param_3,bVar5 - 1);
    if (*param_3 == 7) goto switchD_00168ed0_caseD_7;
LAB_00168f90:
    iVar4 = FUN_001674a0(param_1,param_3[2] << 0x17 | 0x1b);
    iVar7 = 0xc;
    param_3[2] = iVar4;
  }
  *param_3 = iVar7;
switchD_00168ed0_caseD_8:
  iVar4 = param_3[4];
  iVar7 = param_3[5];
  param_3[4] = iVar7;
  param_3[5] = iVar4;
joined_r0x00169170:
  if (iVar4 != -1) {
    lVar8 = *param_1;
    puVar9 = (uint *)(*(long *)(lVar8 + 0x38) + (long)iVar4 * 4);
    if (0 < iVar4) goto LAB_00169018;
    do {
      uVar2 = *puVar9;
      uVar10 = (ulong)uVar2;
      puVar6 = puVar9;
      do {
        if ((uVar2 & 0x3f) == 0x23) {
          *puVar6 = (uint)uVar10 & 0x7fc000 | (uint)(uVar10 >> 0x11) & 0x7fc0 | 0x22;
          lVar8 = *param_1;
        }
        iVar7 = (*(uint *)(*(long *)(lVar8 + 0x38) + (long)iVar4 * 4) >> 0xe) - 0x1ffff;
        iVar1 = iVar4 + iVar7;
        iVar4 = -1;
        if (iVar7 != -1) {
          iVar4 = iVar1 + 1;
        }
        if (iVar4 == -1) {
          iVar7 = param_3[4];
          goto LAB_0016907c;
        }
        puVar9 = (uint *)(*(long *)(lVar8 + 0x38) + (long)iVar4 * 4);
        if (iVar4 < 1) break;
LAB_00169018:
        puVar6 = puVar9 + -1;
        uVar2 = *puVar6;
        uVar10 = (ulong)uVar2;
      } while ((char)(&DAT_039c5e39)[uVar10 & 0x3f] < '\0');
    } while( true );
  }
LAB_0016907c:
  if (iVar7 == -1) {
    return;
  }
  lVar8 = *param_1;
  puVar9 = (uint *)(*(long *)(lVar8 + 0x38) + (long)iVar7 * 4);
  if (0 < iVar7) goto LAB_001690dc;
  do {
    uVar2 = *puVar9;
    uVar10 = (ulong)uVar2;
    puVar6 = puVar9;
    do {
      if ((uVar2 & 0x3f) == 0x23) {
        *puVar6 = (uint)uVar10 & 0x7fc000 | (uint)(uVar10 >> 0x11) & 0x7fc0 | 0x22;
        lVar8 = *param_1;
      }
      iVar4 = (*(uint *)(*(long *)(lVar8 + 0x38) + (long)iVar7 * 4) >> 0xe) - 0x1ffff;
      iVar1 = iVar7 + iVar4;
      iVar7 = -1;
      if (iVar4 != -1) {
        iVar7 = iVar1 + 1;
      }
      if (iVar7 == -1) {
        return;
      }
      puVar9 = (uint *)(*(long *)(lVar8 + 0x38) + (long)iVar7 * 4);
      if (iVar7 < 1) break;
LAB_001690dc:
      puVar6 = puVar9 + -1;
      uVar2 = *puVar6;
      uVar10 = (ulong)uVar2;
    } while ((char)(&DAT_039c5e39)[uVar10 & 0x3f] < '\0');
  } while( true );
}


