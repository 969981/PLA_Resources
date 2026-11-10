/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a06110; name: FUN_02a06110
 */


void FUN_02a06110(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong *puVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined4 local_90;
  undefined1 local_8c;
  ulong local_88;
  undefined4 *local_80;
  ulong *local_78;
  ulong local_70;
  undefined8 local_68;
  
  *param_2 = 0;
  FUN_029983fc(param_3[3],*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8));
  plVar15 = (long *)param_3[3];
  if ((((((*(char *)((long)plVar15 + 0x5b) == '\x01') && (*(char *)((long)plVar15 + 0x5a) != '\0'))
        && (lVar16 = *plVar15, lVar16 != 0)) &&
       ((lVar10 = param_3[2], *(char *)(lVar16 + 0x7d) == *(char *)(lVar10 + 0x7d) &&
        (((undefined4 *)param_3[1])[5] != 7)))) &&
      (((*(byte *)(lVar10 + 0x385) >> 4 & 1) != 0 ||
       ((uVar8 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),lVar10,*(undefined4 *)param_3[1]),
        uVar8 < 9 && ((1 << (ulong)(uVar8 & 0x1f) & 0x1d1U) != 0)))))) &&
     (uVar11 = (ulong)*(byte *)((long)plVar15 + 0x5a), uVar11 != 0)) {
    uVar13 = 0;
    do {
      if (plVar15[uVar13] == lVar16) goto LAB_02a06200;
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
  }
LAB_02a06220:
  local_78 = (ulong *)param_3[3];
  lVar16 = *(long *)(param_1 + 0x60);
  local_88 = param_3[1];
  local_80 = (undefined4 *)param_3[2];
  if (((*(char *)((long)local_78 + 0x5b) != '\0') || (*(char *)((long)local_78 + 0x5d) != '\0')) &&
     (*(char *)((long)local_78 + 0x5a) == '\0')) {
    uVar11 = FUN_0297c790(*(undefined8 *)(*(long *)(lVar16 + 0x280) + 0x38));
    if ((uVar11 & 1) == 0) {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
      goto LAB_02a06848;
    }
    local_88 = param_3[1];
    local_80 = (undefined4 *)param_3[2];
    local_78 = (ulong *)param_3[3];
    lVar16 = *(long *)(param_1 + 0x60);
  }
  FUN_029d88f0(*(undefined8 *)(lVar16 + 0x4c0),&local_90,&local_88);
  lVar16 = param_3[6];
  uVar20 = param_3[1];
  uVar11 = param_3[2];
  plVar15 = (long *)param_3[3];
  lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0x480);
  FUN_029990f0(lVar16);
  *(undefined1 *)((long)plVar15 + 0x5c) = 0;
  if (*(char *)((long)plVar15 + 0x5a) != '\0') {
    lVar21 = *plVar15;
    *(undefined1 *)((long)plVar15 + 0x5c) = 1;
    while (lVar21 != 0) {
      local_70 = local_70 & 0xffffffffffffff00;
      local_88 = uVar11;
      local_80 = (undefined4 *)lVar21;
      local_78 = (ulong *)uVar20;
      FUN_029d8c00(*(undefined8 *)(*(long *)(lVar10 + 0x60) + 0x4e0),&local_90,&local_88);
      if ((ulong)*(byte *)(lVar21 + 0x7d) < 0x1e) {
        puVar1 = (undefined4 *)(lVar16 + (ulong)*(byte *)(lVar21 + 0x7d) * 8);
        *puVar1 = local_90;
        *(undefined1 *)(puVar1 + 1) = local_8c;
      }
      bVar6 = *(byte *)((long)plVar15 + 0x5c);
      if (*(byte *)((long)plVar15 + 0x5a) <= bVar6) break;
      *(byte *)((long)plVar15 + 0x5c) = bVar6 + 1;
      lVar21 = plVar15[bVar6];
    }
  }
  local_80 = (undefined4 *)param_3[1];
  local_88 = param_3[2];
  local_70 = param_3[3];
  local_68 = param_3[5];
  local_78 = (ulong *)param_3[6];
  FUN_029d66bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x400),&local_90,&local_88);
  local_80 = (undefined4 *)param_3[1];
  local_88 = param_3[2];
  local_70 = param_3[3];
  local_68 = param_3[5];
  local_78 = (ulong *)param_3[6];
  FUN_029d6c80(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x420),&local_90,&local_88);
  puVar1 = (undefined4 *)param_3[1];
  uVar11 = param_3[2];
  uVar18 = param_3[3];
  uVar20 = param_3[5];
  uVar17 = param_3[6];
  cVar4 = *(char *)((long)param_3 + 0x21);
  uVar8 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),uVar11,*puVar1);
  if (((uVar8 < 10) && ((1 << (ulong)(uVar8 & 0x1f) & 0x3d1U) != 0)) ||
     ((uVar13 = FUN_0297cb50(*(undefined8 *)(param_1 + 0x38),puVar1,uVar11), cVar4 != '\0' ||
      ((uVar13 & 1) != 0)))) {
    local_88 = uVar11;
    local_80 = puVar1;
    local_78 = (ulong *)uVar17;
    local_70 = uVar18;
    local_68 = uVar20;
    FUN_029d5cc4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x3c0),&local_90,&local_88);
  }
  uVar11 = param_3[1];
  puVar1 = (undefined4 *)param_3[2];
  puVar19 = (ulong *)param_3[3];
  uVar20 = param_3[6];
  lVar16 = *(long *)(*(long *)(param_1 + 0x60) + 0x3e0);
  local_68._0_3_ = 0x10036;
  local_88 = uVar11;
  local_80 = puVar1;
  local_78 = puVar19;
  local_70 = uVar20;
  FUN_029d59d0(*(undefined8 *)(*(long *)(lVar16 + 0x60) + 0x3a0),&local_90,&local_88);
  local_68 = CONCAT53(local_68._3_5_,0x37);
  local_88 = uVar11;
  local_80 = puVar1;
  local_78 = puVar19;
  local_70 = uVar20;
  FUN_029d59d0(*(undefined8 *)(*(long *)(lVar16 + 0x60) + 0x3a0),&local_90,&local_88);
  FUN_029d60a8(lVar16,puVar1,uVar11,puVar19);
  puVar1 = (undefined4 *)param_3[1];
  uVar20 = param_3[2];
  uVar17 = param_3[3];
  iVar9 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),uVar20,*puVar1);
  if (iVar9 == 1) {
    lVar16 = *(long *)(*(long *)(param_1 + 0x60) + 0x380);
    uVar11 = FUN_029d56c0(lVar16,puVar1,uVar20,uVar17);
    if ((((uVar11 & 1) == 0) &&
        (lVar10 = *(long *)(*(long *)(lVar16 + 0x40) + 8),
        lVar10 = lVar10 + (ulong)*(byte *)(lVar10 + 0x1c8) * 0x40, *(char *)(lVar10 + 0x43) == '\0')
        ) && (*(char *)(lVar10 + 0x44) != '\0')) {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(lVar16 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
    }
  }
  uVar20 = *param_3;
  puVar1 = (undefined4 *)param_3[1];
  uVar17 = param_3[2];
  lVar16 = param_3[3];
  iVar9 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),uVar17,*puVar1);
  if (iVar9 == 2) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0x360);
    bVar6 = *(byte *)(lVar16 + 0x5a);
    FUN_029d52d0(lVar10,uVar20,puVar1,uVar17,lVar16);
    if ((1 < bVar6) &&
       (((*(char *)(lVar16 + 0x5b) != '\0' || (*(char *)(lVar16 + 0x5d) != '\0')) &&
        (*(char *)(lVar16 + 0x5a) == '\0')))) {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(lVar10 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
      lVar16 = *(long *)(*(long *)(lVar10 + 0x40) + 8);
      *(undefined1 *)(lVar16 + (ulong)*(byte *)(lVar16 + 0x1c8) * 0x40 + 0x43) = 1;
    }
  }
  puVar1 = (undefined4 *)param_3[1];
  uVar11 = param_3[2];
  puVar19 = (ulong *)param_3[3];
  uVar20 = param_3[5];
  uVar5 = *(undefined1 *)((long)param_3 + 0x22);
  iVar9 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),uVar11,*puVar1);
  if (iVar9 == 9) {
    if ((*(char *)((long)puVar19 + 0x5a) != '\0') &&
       ((*(char *)((long)puVar19 + 0x5b) != '\x01' || (*puVar19 != uVar11)))) {
      bVar6 = FUN_029506a8(uVar11,0xf);
      uVar13 = (ulong)*(byte *)((long)puVar19 + 0x5a);
      *(undefined1 *)((long)puVar19 + 0x5c) = 0;
      if (*(byte *)((long)puVar19 + 0x5a) != 0) {
        uVar22 = *puVar19;
        *(undefined1 *)((long)puVar19 + 0x5c) = 1;
        if (uVar22 != 0) {
LAB_02a065c8:
          bVar7 = FUN_029506a8(uVar22,0xf);
          if (bVar7 <= bVar6) {
            local_88 = local_88 & 0xffffffffffffff00;
            uVar13 = FUN_029723a8(*(undefined8 *)(param_1 + 0x38),&local_88,uVar11,uVar22,puVar1);
            if ((uVar13 & 1) == 0) {
              if ((char)local_88 == '\0') {
                FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x49,
                             *(undefined1 *)(uVar22 + 0x7d),0xffff0000);
              }
              uVar13 = (ulong)*(byte *)((long)puVar19 + 0x5a);
              if (uVar13 != 0) {
                uVar14 = 0;
                do {
                  if (puVar19[uVar14] == uVar22) goto LAB_02a066cc;
                  uVar14 = uVar14 + 1;
                } while (uVar13 != uVar14);
              }
            }
            else {
              uVar13 = (ulong)*(byte *)((long)puVar19 + 0x5a);
            }
            goto LAB_02a066ec;
          }
          FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x4a,
                       *(undefined1 *)(uVar22 + 0x7d),0xffff0000);
          uVar13 = (ulong)*(byte *)((long)puVar19 + 0x5a);
          if (uVar13 == 0) goto LAB_02a06708;
          uVar14 = 0;
          do {
            if (puVar19[uVar14] == uVar22) goto LAB_02a06634;
            uVar14 = uVar14 + 1;
          } while (uVar13 != uVar14);
          goto LAB_02a066ec;
        }
      }
LAB_02a06708:
      if (*(char *)((long)puVar19 + 0x5b) == '\0') {
        if (((uVar13 & 0xff) == 0) && (*(char *)((long)puVar19 + 0x5d) != '\0')) goto LAB_02a0689c;
      }
      else if ((uVar13 & 0xff) == 0) {
LAB_02a0689c:
        uVar11 = (ulong)*(byte *)(uVar11 + 0x7d);
        lVar16 = *(long *)(param_1 + 0x20);
        if (uVar11 < 0x1e) {
          lVar10 = *(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0x10) + 0x128) + uVar11 * 4;
          *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) | 2;
        }
        FUN_02a3e6b8(*(undefined8 *)(lVar16 + 0x18),0x4f,uVar11,1);
      }
    }
  }
  else {
    local_68 = CONCAT71(local_68._1_7_,uVar5);
    local_88 = uVar11;
    local_80 = puVar1;
    local_78 = puVar19;
    local_70 = uVar20;
    FUN_029d84d4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x4a0),&local_90,&local_88);
  }
  lVar16 = param_3[3];
  if ((((*(char *)(lVar16 + 0x5b) == '\0') && (*(char *)(lVar16 + 0x5d) == '\0')) ||
      (*(char *)(lVar16 + 0x5a) != '\0')) ||
     (uVar11 = FUN_0297c790(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x280) + 0x38),
                            param_3[2],param_3[1]), (uVar11 & 1) != 0)) {
    if (*(char *)(param_3 + 4) != '\0') {
      return;
    }
    puVar3 = (uint *)param_3[1];
    lVar16 = param_3[2];
    plVar15 = (long *)param_3[3];
    uVar8 = FUN_02971598(*(undefined8 *)(param_1 + 0x38),lVar16,*puVar3);
    if ((9 < uVar8) || ((1 << (ulong)(uVar8 & 0x1f) & 0x3d1U) == 0)) {
      lVar10 = (&DAT_0428af30)[(ulong)*puVar3 * 6];
      if (lVar10 == 0) {
        plVar12 = &DAT_0428af30;
      }
      else {
        plVar12 = &DAT_0428af30;
        if (*(char *)(lVar10 + 0x1e1) != '\0') {
          plVar12 = &DAT_0428af30 + (ulong)*puVar3 * 6;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar12 + 0x250) + (ulong)**(uint **)(*plVar12 + 0x250));
      if (((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x65) ||
          (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x32], uVar11 == 0)) ||
         (*(char *)((long)piVar2 + uVar11) == '\0')) {
        uVar11 = (ulong)*(byte *)((long)plVar15 + 0x5a);
        *(undefined1 *)((long)plVar15 + 0x5c) = 0;
        if (*(byte *)((long)plVar15 + 0x5a) != 0) {
          lVar10 = *plVar15;
          *(undefined1 *)((long)plVar15 + 0x5c) = 1;
          if (lVar10 != 0) {
LAB_02a0695c:
            if ((lVar10 != lVar16) && (*(short *)(lVar10 + 0x496) != 0)) {
              uVar11 = FUN_02969474(*(undefined8 *)(param_1 + 0x38),lVar16,lVar10,*puVar3);
              if ((uVar11 & 1) == 0) {
                FUN_0296992c(*(undefined8 *)(param_1 + 0x38),lVar16,lVar10);
                uVar11 = (ulong)*(byte *)((long)plVar15 + 0x5a);
                if (uVar11 != 0) {
                  uVar13 = 0;
                  do {
                    if (plVar15[uVar13] == lVar10) goto LAB_02a069d8;
                    uVar13 = uVar13 + 1;
                  } while (uVar11 != uVar13);
                  goto LAB_02a069f8;
                }
                goto LAB_02a067ac;
              }
              uVar11 = (ulong)*(byte *)((long)plVar15 + 0x5a);
            }
LAB_02a069f8:
            bVar6 = *(byte *)((long)plVar15 + 0x5c);
            if (((uint)uVar11 & 0xff) <= (uint)bVar6) goto LAB_02a067ac;
            *(byte *)((long)plVar15 + 0x5c) = bVar6 + 1;
            lVar10 = plVar15[bVar6];
            if (lVar10 == 0) goto LAB_02a067ac;
            goto LAB_02a0695c;
          }
        }
      }
    }
LAB_02a067ac:
    lVar16 = param_3[3];
    if ((*(char *)(lVar16 + 0x5b) == '\0') && (*(char *)(lVar16 + 0x5d) == '\0')) {
      return;
    }
    if (*(char *)(lVar16 + 0x5a) != '\0') {
      return;
    }
    uVar11 = FUN_0297c790(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x280) + 0x38),
                          param_3[2],param_3[1]);
    if ((uVar11 & 1) != 0) {
      return;
    }
    uVar11 = FUN_02969c44(*(undefined8 *)(param_1 + 0x38),param_3[2]);
    if ((uVar11 & 1) != 0) {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
    }
  }
  FUN_02973fa8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0x1ba0) + 0x38),
               *(undefined1 *)(param_3[2] + 0x7d),*(undefined4 *)param_3[1],*param_3,0x28);
LAB_02a06848:
  *param_2 = 1;
  return;
LAB_02a06200:
  for (; (int)uVar13 + 1U < (uint)uVar11; uVar13 = uVar13 + 1) {
    plVar15[uVar13] = (plVar15 + uVar13)[1];
    uVar11 = (ulong)*(byte *)((long)plVar15 + 0x5a);
  }
  *(char *)((long)plVar15 + 0x5a) = (char)uVar11 + -1;
  *(char *)((long)plVar15 + 0x5c) = *(char *)((long)plVar15 + 0x5c) + -1;
  goto LAB_02a06220;
LAB_02a06634:
  for (; uVar8 = (uint)uVar13, (int)uVar14 + 1U < uVar8; uVar14 = uVar14 + 1) {
    puVar19[uVar14] = (puVar19 + uVar14)[1];
    uVar13 = (ulong)*(byte *)((long)puVar19 + 0x5a);
  }
  goto LAB_02a066d8;
LAB_02a066cc:
  for (; uVar8 = (uint)uVar13, (int)uVar14 + 1U < uVar8; uVar14 = uVar14 + 1) {
    puVar19[uVar14] = (puVar19 + uVar14)[1];
    uVar13 = (ulong)*(byte *)((long)puVar19 + 0x5a);
  }
LAB_02a066d8:
  uVar13 = (ulong)(uVar8 - 1);
  *(char *)((long)puVar19 + 0x5a) = (char)(uVar8 - 1);
  *(char *)((long)puVar19 + 0x5c) = *(char *)((long)puVar19 + 0x5c) + -1;
LAB_02a066ec:
  bVar7 = *(byte *)((long)puVar19 + 0x5c);
  if (((uint)uVar13 & 0xff) <= (uint)bVar7) goto LAB_02a06708;
  *(byte *)((long)puVar19 + 0x5c) = bVar7 + 1;
  uVar22 = puVar19[bVar7];
  if (uVar22 == 0) goto LAB_02a06708;
  goto LAB_02a065c8;
LAB_02a069d8:
  for (; (int)uVar13 + 1U < (uint)uVar11; uVar13 = uVar13 + 1) {
    plVar15[uVar13] = (plVar15 + uVar13)[1];
    uVar11 = (ulong)*(byte *)((long)plVar15 + 0x5a);
  }
  uVar8 = (uint)uVar11 - 1;
  uVar11 = (ulong)uVar8;
  *(char *)((long)plVar15 + 0x5a) = (char)uVar8;
  *(char *)((long)plVar15 + 0x5c) = *(char *)((long)plVar15 + 0x5c) + -1;
  goto LAB_02a069f8;
}


