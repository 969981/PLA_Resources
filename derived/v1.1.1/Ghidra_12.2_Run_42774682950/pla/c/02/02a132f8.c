/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a132f8; name: FUN_02a132f8
 */


/* WARNING: Type propagation algorithm not settling */

char FUN_02a132f8(long param_1,long param_2,byte *param_3,short *param_4,undefined4 *param_5)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int local_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  
  *param_5 = 0;
  local_64[0] = 0;
  local_64[1] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_6c[0] = 0;
  local_6c[1] = 0;
  uVar3 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                       *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),0);
  if ((uVar3 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x58);
  }
  else {
    uVar3 = (ulong)(2 < *(uint *)(param_1 + 0x110)) << 1;
    if (*(char *)(param_2 + 0x38) != '\0') {
      uVar9 = 0;
      cVar8 = '\0';
      do {
        lVar10 = *(long *)(param_2 + 8 + uVar9 * 8);
        lVar7 = *(long *)(lVar10 + 0x60);
        uVar4 = FUN_02c6cf3c(*(undefined8 *)(lVar7 + 0x98));
        bVar2 = false;
        if (((uVar4 & 1) == 0) &&
           ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
          bVar2 = *(short *)(lVar10 + 0x74) != 0;
        }
        cVar8 = cVar8 + bVar2;
        bVar1 = *(byte *)(param_2 + 0x38);
        uVar9 = uVar9 + 1;
      } while (uVar9 < bVar1);
      *(char *)((ulong)local_64 | uVar3) = *(char *)((ulong)local_64 | uVar3) + cVar8;
      *(char *)((ulong)local_68 | uVar3) = *(char *)((ulong)local_68 | uVar3) + bVar1;
    }
    lVar7 = *(long *)(param_1 + 0x58);
    if ((((*(byte *)(lVar7 + 0x1128) >> 4 & 1) == 0) && (*(short *)(param_1 + 0x124) != 0)) &&
       (*param_4 == 0)) {
      *(char *)((ulong)local_6c | uVar3) = *(char *)((ulong)local_6c | uVar3) + '\x01';
    }
  }
  uVar3 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),*(undefined1 *)(lVar7 + 0x55),1);
  if ((uVar3 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x58);
  }
  else {
    lVar10 = 1;
    if (2 < *(uint *)(param_1 + 0x110)) {
      lVar10 = 2;
    }
    if (*(char *)(param_2 + 0x70) != '\0') {
      uVar3 = 0;
      cVar8 = '\0';
      do {
        lVar11 = *(long *)(param_2 + 0x40 + uVar3 * 8);
        lVar7 = *(long *)(lVar11 + 0x60);
        uVar9 = FUN_02c6cf3c(*(undefined8 *)(lVar7 + 0x98));
        bVar2 = false;
        if (((uVar9 & 1) == 0) &&
           ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
          bVar2 = *(short *)(lVar11 + 0x74) != 0;
        }
        cVar8 = cVar8 + bVar2;
        bVar1 = *(byte *)(param_2 + 0x70);
        uVar3 = uVar3 + 1;
      } while (uVar3 < bVar1);
      local_64[lVar10] = local_64[lVar10] + cVar8;
      local_68[lVar10] = local_68[lVar10] + bVar1;
    }
    lVar7 = *(long *)(param_1 + 0x58);
    if ((((*(byte *)(lVar7 + 0x1128) >> 4 & 1) == 0) && (*(short *)(param_1 + 0x124) != 0)) &&
       (param_4[1] == 0)) {
      local_6c[lVar10] = local_6c[lVar10] + 1;
    }
  }
  uVar3 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),*(undefined1 *)(lVar7 + 0x55),2);
  if ((uVar3 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x58);
  }
  else {
    uVar3 = (ulong)(*(int *)(param_1 + 0x110) != 1) << 1;
    if (*(char *)(param_2 + 0xa8) != '\0') {
      uVar9 = 0;
      cVar8 = '\0';
      do {
        lVar10 = *(long *)(param_2 + 0x78 + uVar9 * 8);
        lVar7 = *(long *)(lVar10 + 0x60);
        uVar4 = FUN_02c6cf3c(*(undefined8 *)(lVar7 + 0x98));
        bVar2 = false;
        if (((uVar4 & 1) == 0) &&
           ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
          bVar2 = *(short *)(lVar10 + 0x74) != 0;
        }
        cVar8 = cVar8 + bVar2;
        bVar1 = *(byte *)(param_2 + 0xa8);
        uVar9 = uVar9 + 1;
      } while (uVar9 < bVar1);
      *(char *)((ulong)local_64 | uVar3) = *(char *)((ulong)local_64 | uVar3) + cVar8;
      *(char *)((ulong)local_68 | uVar3) = *(char *)((ulong)local_68 | uVar3) + bVar1;
    }
    lVar7 = *(long *)(param_1 + 0x58);
    if ((((*(byte *)(lVar7 + 0x1128) >> 4 & 1) == 0) && (*(short *)(param_1 + 0x124) != 0)) &&
       (param_4[2] == 0)) {
      *(char *)((ulong)local_6c | uVar3) = *(char *)((ulong)local_6c | uVar3) + '\x01';
    }
  }
  uVar3 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),*(undefined1 *)(lVar7 + 0x55),3);
  if ((uVar3 & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x58);
  }
  else {
    uVar5 = 1;
    if (*(int *)(param_1 + 0x110) != 1) {
      uVar5 = 2;
    }
    if (*(char *)(param_2 + 0xe0) != '\0') {
      uVar3 = 0;
      cVar8 = '\0';
      do {
        lVar10 = *(long *)(param_2 + 0xb0 + uVar3 * 8);
        lVar7 = *(long *)(lVar10 + 0x60);
        uVar9 = FUN_02c6cf3c(*(undefined8 *)(lVar7 + 0x98));
        bVar2 = false;
        if (((uVar9 & 1) == 0) &&
           ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
          bVar2 = *(short *)(lVar10 + 0x74) != 0;
        }
        cVar8 = cVar8 + bVar2;
        bVar1 = *(byte *)(param_2 + 0xe0);
        uVar3 = uVar3 + 1;
      } while (uVar3 < bVar1);
      local_64[uVar5] = local_64[uVar5] + cVar8;
      local_68[uVar5] = local_68[uVar5] + bVar1;
    }
    lVar7 = *(long *)(param_1 + 0x58);
    if ((((*(byte *)(lVar7 + 0x1128) >> 4 & 1) == 0) && (*(short *)(param_1 + 0x124) != 0)) &&
       (param_4[3] == 0)) {
      local_6c[uVar5] = local_6c[uVar5] + 1;
    }
  }
  uVar3 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),*(undefined1 *)(lVar7 + 0x55),4);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_2 + 0x118) != '\0') {
      uVar3 = 0;
      cVar8 = '\0';
      do {
        lVar10 = *(long *)(param_2 + 0xe8 + uVar3 * 8);
        lVar7 = *(long *)(lVar10 + 0x60);
        uVar9 = FUN_02c6cf3c(*(undefined8 *)(lVar7 + 0x98));
        bVar2 = false;
        if (((uVar9 & 1) == 0) &&
           ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
          bVar2 = *(short *)(lVar10 + 0x74) != 0;
        }
        cVar8 = cVar8 + bVar2;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(byte *)(param_2 + 0x118));
      local_64[2] = local_64[2] + cVar8;
      local_68[2] = local_68[2] + *(byte *)(param_2 + 0x118);
    }
    if ((((*(byte *)(*(long *)(param_1 + 0x58) + 0x1128) >> 4 & 1) == 0) &&
        (*(short *)(param_1 + 0x124) != 0)) && (param_4[4] == 0)) {
      local_6c[2] = local_6c[2] + '\x01';
    }
  }
  uVar5 = (uint)local_64[0];
  if (local_64[1] == 0) {
    if (uVar5 != 0) {
      cVar8 = '\0';
      goto LAB_02a137bc;
    }
  }
  else if (uVar5 == 0) {
    cVar8 = '\x01';
    goto LAB_02a137bc;
  }
  if ((((byte)(*(uint **)(param_1 + 0x58))[0x44a] >> 4 & 1) == 0) &&
     (*(short *)(param_1 + 0x124) != 0)) {
    if (local_6c[1] < local_6c[0]) {
      cVar8 = '\x01';
LAB_02a13834:
      *param_5 = 2;
      return cVar8;
    }
    if (local_6c[0] != local_6c[1]) {
      cVar8 = '\0';
      goto LAB_02a13834;
    }
  }
  if ((**(uint **)(param_1 + 0x58) | 1) != 3) {
    return '\x02';
  }
  if (local_64[0] == 0 && local_64[1] == 0) {
    uVar6 = (uint)*param_3;
    if (*param_3 == 0) {
      uVar6 = (uint)param_3[0x3d];
      if (param_3[0x3d] == 0) {
        uVar6 = (uint)param_3[0x7a];
        if (param_3[0x7a] == 0) {
          uVar6 = (uint)param_3[0xb7];
          if (param_3[0xb7] == 0) goto LAB_02a1388c;
          lVar7 = 3;
        }
        else {
          lVar7 = 2;
        }
      }
      else {
        lVar7 = 1;
      }
    }
    else {
      lVar7 = 0;
    }
    bVar1 = param_3[(ulong)(uVar6 - 1) + lVar7 * 0x3d + 0x1f];
    if (bVar1 != 0x1f) {
      if (bVar1 < 6) {
        lVar7 = 0;
      }
      else if (bVar1 < 0xc) {
        lVar7 = 2;
      }
      else if (bVar1 < 0x12) {
        lVar7 = 1;
      }
      else if (bVar1 < 0x18) {
        lVar7 = 3;
      }
      else {
        lVar7 = (ulong)(bVar1 < 0x1e) << 2;
      }
      if ((*(uint *)(param_1 + 0x110) < 3) &&
         (cVar8 = (&PTR_DAT_04279650)[(int)*(uint *)(param_1 + 0x110)][lVar7], cVar8 != '\x02')) {
LAB_02a137bc:
        *param_5 = 1;
        return cVar8;
      }
    }
  }
LAB_02a1388c:
  *param_5 = 2;
  if ((int)((uint)local_68[1] - (uint)local_64[1]) < (int)(local_68[0] - uVar5)) {
    return '\x01';
  }
  if ((uint)local_68[1] - (uint)local_64[1] == local_68[0] - uVar5) {
    FUN_02a139e0(&local_74,&local_7c,param_1,param_2,0);
    FUN_02a139e0(&iStack_70,&iStack_78,param_1,param_2,1);
    if (local_7c < iStack_78) {
      return '\x01';
    }
    if (iStack_78 == local_7c) {
      if (local_74 < iStack_70) {
        return '\x01';
      }
      return (iStack_70 == local_74) << 1;
    }
  }
  return '\0';
}


