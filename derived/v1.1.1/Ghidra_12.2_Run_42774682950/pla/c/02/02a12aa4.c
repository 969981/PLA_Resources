/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a12aa4; name: FUN_02a12aa4
 */


void FUN_02a12aa4(long param_1,long *param_2,uint *param_3,undefined1 param_4)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  void *__src;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined2 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined2 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  undefined1 auStack_c0 [128];
  undefined1 in_stack_ffffffffffffffc0;
  
  *param_2 = 0;
  *param_3 = 0;
  switch(param_4) {
  case 4:
    lVar7 = *(long *)(param_1 + 0x18);
    bVar5 = *(byte *)(lVar7 + 0xe);
    *(byte *)(param_1 + 0x54) = bVar5;
    if ((ulong)bVar5 != 0) {
      uVar9 = 0;
      do {
        if (((uint)uVar9 & 0xff) < (uint)*(byte *)(lVar7 + 0xe)) {
          uVar14 = *(undefined1 *)(lVar7 + 8 + uVar9);
        }
        else {
          uVar14 = 6;
        }
        *(undefined1 *)(param_1 + 0x55 + uVar9) = uVar14;
        uVar9 = uVar9 + 1;
      } while (bVar5 != uVar9);
    }
    goto LAB_02a12b9c;
  case 5:
    lVar7 = *(long *)(param_1 + 0x18);
    bVar5 = *(byte *)(lVar7 + 0xe);
    *(byte *)(param_1 + 0x54) = bVar5;
    if ((ulong)bVar5 != 0) {
      uVar9 = 0;
      do {
        if (((uint)uVar9 & 0xff) < (uint)*(byte *)(lVar7 + 0xe)) {
          uVar14 = *(undefined1 *)(lVar7 + 8 + uVar9);
        }
        else {
          uVar14 = 6;
        }
        *(undefined1 *)(param_1 + 0x55 + uVar9) = uVar14;
        uVar9 = uVar9 + 1;
      } while (bVar5 != uVar9);
    }
LAB_02a12b9c:
    *param_2 = param_1 + 0x54;
    uVar6 = 7;
    break;
  case 6:
    *param_2 = param_1 + 0x48;
    uVar6 = 1;
    break;
  case 7:
    lVar7 = *(long *)(param_1 + 8);
    **(undefined8 **)(lVar7 + 0x10) = 0;
    FUN_029f35f4(*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x1700),auStack_c0 + 0x80,
                 auStack_c0 + 0x88);
    *param_2 = *(long *)(param_1 + 0x10) + 8;
    *param_3 = **(uint **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x5d) = in_stack_ffffffffffffffc0;
    *(undefined1 *)(param_1 + 0x5b) = 0;
    return;
  case 8:
    FUN_029f43d4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + 0x1740),
                 auStack_c0 + 0x80,auStack_c0 + 0x88);
    goto LAB_02a12c8c;
  case 9:
    FUN_029f4bac(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + 0x1760),
                 auStack_c0 + 0x80,auStack_c0 + 0x88);
    goto LAB_02a12c8c;
  case 10:
    FUN_029f3164(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + 0x16c0),
                 auStack_c0 + 0x80,auStack_c0 + 0x88);
    goto LAB_02a12c8c;
  case 0xb:
    FUN_029f3b18(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + 0x1720),
                 auStack_c0 + 0x80,auStack_c0 + 0x88);
LAB_02a12c8c:
    *param_2 = *(long *)(param_1 + 0x10) + 8;
    *param_3 = **(uint **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x5d) = in_stack_ffffffffffffffc0;
    return;
  case 0xc:
    lVar7 = *(long *)(param_1 + 8);
    **(undefined8 **)(lVar7 + 0x10) = 0;
    FUN_029f33f8(*(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x16e0),auStack_c0 + 0x80,
                 auStack_c0 + 0x88);
    *(undefined1 *)(param_1 + 0x5c) = in_stack_ffffffffffffffc0;
    *param_2 = *(long *)(param_1 + 0x10) + 8;
    uVar6 = **(uint **)(param_1 + 0x10);
    break;
  case 0xd:
    puVar15 = *(undefined4 **)(param_1 + 0x28);
    *puVar15 = 0;
    memset((void *)((long)puVar15 + 5),0,0x3e9);
    *(undefined1 *)(puVar15 + 1) = 1;
    lVar7 = *(long *)(param_1 + 0x28);
    uVar11 = 4;
    goto LAB_02a12de0;
  case 0xe:
    puVar15 = *(undefined4 **)(param_1 + 0x28);
    *puVar15 = 0;
    memset((void *)((long)puVar15 + 5),0,0x3e9);
    *(undefined1 *)(puVar15 + 1) = 1;
    lVar7 = *(long *)(param_1 + 0x28);
    cVar2 = *(char *)(param_1 + 0x5b);
    puVar13 = (undefined1 *)(lVar7 + 6);
    *puVar13 = 0x80;
    *(byte *)(lVar7 + 7) = cVar2 << 7 | 0x20;
    *param_3 = 2;
    *param_2 = (long)puVar13;
    return;
  case 0xf:
    bVar5 = 5;
    goto LAB_02a12dc0;
  case 0x10:
    bVar5 = 1;
    uVar14 = 1;
    goto LAB_02a12dc4;
  case 0x11:
    bVar5 = 2;
    goto LAB_02a12dc0;
  case 0x12:
    bVar5 = 3;
LAB_02a12dc0:
    uVar14 = 0;
LAB_02a12dc4:
    puVar15 = *(undefined4 **)(param_1 + 0x28);
    *puVar15 = 0;
    memset((void *)((long)puVar15 + 5),0,0x3e9);
    *(undefined1 *)(puVar15 + 1) = uVar14;
    __src = *(void **)(param_1 + 0x30);
    bVar3 = *(byte *)((long)__src + 0xf0);
    uVar9 = (ulong)bVar3;
    if (uVar9 != 0) {
      pbVar16 = *(byte **)(param_1 + 0x28);
      uVar12 = (ulong)*pbVar16;
      if (*pbVar16 == 0) {
        pbVar16[3] = 1;
        uVar12 = 2;
        *pbVar16 = 2;
        bVar4 = pbVar16[1];
      }
      else {
        bVar4 = pbVar16[1];
      }
      if ((bVar4 & 1) == 0) {
        uVar1 = (uVar9 << 3 | 1) + uVar12;
        if (uVar1 < 0x3e9) {
          pbVar16[1] = bVar4 | 1;
          pbVar16[2] = pbVar16[2] + 1;
          pbVar16[uVar12 + 6] = bVar3;
          memcpy(pbVar16 + uVar12 + 7,__src,uVar9 << 3);
          *pbVar16 = (byte)uVar1;
        }
        else {
          pbVar16[5] = 1;
        }
      }
      __src = *(void **)(param_1 + 0x30);
    }
    bVar3 = *(byte *)((long)__src + 0xf1);
    uVar9 = (ulong)bVar3;
    if (uVar9 != 0) {
      pbVar16 = *(byte **)(param_1 + 0x28);
      uVar12 = (ulong)*pbVar16;
      if (*pbVar16 == 0) {
        pbVar16[3] = 1;
        uVar12 = 2;
        *pbVar16 = 2;
        bVar4 = pbVar16[1];
      }
      else {
        bVar4 = pbVar16[1];
      }
      if ((bVar4 >> 1 & 1) == 0) {
        uVar1 = (uVar9 << 3 | 1) + uVar12;
        if (uVar1 < 0x3e9) {
          pbVar16[1] = bVar4 | 2;
          pbVar16[2] = pbVar16[2] + 1;
          pbVar16[uVar12 + 6] = bVar3 | 0x20;
          memcpy(pbVar16 + uVar12 + 7,(void *)((long)__src + 0x30),uVar9 << 3);
          *pbVar16 = (byte)uVar1;
        }
        else {
          pbVar16[5] = 1;
        }
      }
      __src = *(void **)(param_1 + 0x30);
    }
    bVar3 = *(byte *)((long)__src + 0xf2);
    uVar9 = (ulong)bVar3;
    if (uVar9 != 0) {
      pbVar16 = *(byte **)(param_1 + 0x28);
      uVar12 = (ulong)*pbVar16;
      if (*pbVar16 == 0) {
        pbVar16[3] = 1;
        uVar12 = 2;
        *pbVar16 = 2;
        bVar4 = pbVar16[1];
      }
      else {
        bVar4 = pbVar16[1];
      }
      if ((bVar4 >> 2 & 1) == 0) {
        uVar1 = (uVar9 << 3 | 1) + uVar12;
        if (uVar1 < 0x3e9) {
          pbVar16[1] = bVar4 | 4;
          pbVar16[2] = pbVar16[2] + 1;
          pbVar16[uVar12 + 6] = bVar3 | 0x40;
          memcpy(pbVar16 + uVar12 + 7,(void *)((long)__src + 0x60),uVar9 << 3);
          *pbVar16 = (byte)uVar1;
        }
        else {
          pbVar16[5] = 1;
        }
      }
      __src = *(void **)(param_1 + 0x30);
    }
    bVar3 = *(byte *)((long)__src + 0xf3);
    uVar9 = (ulong)bVar3;
    if (uVar9 != 0) {
      pbVar16 = *(byte **)(param_1 + 0x28);
      uVar12 = (ulong)*pbVar16;
      if (*pbVar16 == 0) {
        pbVar16[3] = 1;
        uVar12 = 2;
        *pbVar16 = 2;
        bVar4 = pbVar16[1];
      }
      else {
        bVar4 = pbVar16[1];
      }
      if ((bVar4 >> 3 & 1) == 0) {
        uVar1 = (uVar9 << 3 | 1) + uVar12;
        if (uVar1 < 0x3e9) {
          pbVar16[1] = bVar4 | 8;
          pbVar16[2] = pbVar16[2] + 1;
          pbVar16[uVar12 + 6] = bVar3 | 0x60;
          memcpy(pbVar16 + uVar12 + 7,(void *)((long)__src + 0x90),uVar9 << 3);
          *pbVar16 = (byte)uVar1;
        }
        else {
          pbVar16[5] = 1;
        }
      }
      __src = *(void **)(param_1 + 0x30);
    }
    bVar3 = *(byte *)((long)__src + 0xf4);
    uVar9 = (ulong)bVar3;
    if (uVar9 != 0) {
      pbVar16 = *(byte **)(param_1 + 0x28);
      uVar12 = (ulong)*pbVar16;
      if (*pbVar16 == 0) {
        pbVar16[3] = 1;
        uVar12 = 2;
        *pbVar16 = 2;
        bVar4 = pbVar16[1];
      }
      else {
        bVar4 = pbVar16[1];
      }
      if ((bVar4 >> 4 & 1) == 0) {
        uVar1 = (uVar9 << 3 | 1) + uVar12;
        if (uVar1 < 0x3e9) {
          pbVar16[1] = bVar4 | 0x10;
          pbVar16[2] = pbVar16[2] + 1;
          pbVar16[uVar12 + 6] = bVar3 | 0x80;
          memcpy(pbVar16 + uVar12 + 7,(void *)((long)__src + 0xc0),uVar9 << 3);
          *pbVar16 = (byte)uVar1;
        }
        else {
          pbVar16[5] = 1;
        }
      }
    }
    pbVar16 = *(byte **)(param_1 + 0x28);
    if (pbVar16[5] == 0) {
      pbVar10 = pbVar16 + 6;
      *pbVar10 = bVar5 | 0x80;
      pbVar16[7] = pbVar16[2] & 0xf | (pbVar16[3] & 7) << 4 | pbVar16[4] << 7;
      *param_3 = (uint)*pbVar16;
    }
    else {
      pbVar10 = (byte *)0x0;
    }
    *param_2 = (long)pbVar10;
    return;
  case 0x13:
    lVar7 = *(long *)(param_1 + 0x28);
    uVar11 = 0x3080;
LAB_02a12de0:
    *(undefined2 *)(lVar7 + 6) = uVar11;
    *param_3 = 2;
    *param_2 = lVar7 + 6;
    return;
  default:
    goto switchD_02a12af0_caseD_14;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    *param_2 = *(long *)(param_1 + 0x38);
    uVar6 = 8;
    break;
  case 0x20:
    puVar8 = *(undefined2 **)(param_1 + 0x40);
    *(undefined2 *)(param_1 + 0x4a) = *puVar8;
    *(undefined2 *)(param_1 + 0x4c) = puVar8[1];
    *(undefined2 *)(param_1 + 0x4e) = puVar8[2];
    *(undefined2 *)(param_1 + 0x50) = puVar8[3];
    *(undefined2 *)(param_1 + 0x52) = puVar8[4];
    uVar6 = 10;
    *param_2 = param_1 + 0x4a;
  }
  *param_3 = uVar6;
switchD_02a12af0_caseD_14:
  return;
}


