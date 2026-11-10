/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023ef70; name: FUN_0023ef70
 */


void FUN_0023ef70(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  uint local_6c [3];
  
  if ((*(byte *)(param_1 + 0x10) & 3) != 0) {
    uVar7 = *(uint *)(param_1 + 0x14) & 3;
    uVar5 = *(uint *)(param_1 + 0x14) >> 4 & 3;
    if (uVar7 <= uVar5) {
      uVar5 = uVar7;
    }
    uVar7 = uVar5;
    if (2 < uVar5) {
      uVar7 = 3;
    }
    *(undefined4 *)
     (*(long *)(*(long *)(param_2 + 200) + 0x38) + (ulong)*(uint *)(param_1 + 0x34) + 0x84) = 0;
    uVar1 = *(uint *)(param_1 + 0x14) & 3;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(param_1 + 0x10);
      uVar13 = (ulong)(uVar2 << 4) & 0x30;
      uVar10 = (ulong)(uVar2 >> 2) & 3;
      lVar12 = *(long *)(param_1 + 0x18) + uVar13 + uVar10 * 0x14;
      if ((*(char *)(lVar12 + 1) == '\a') ||
         ((uVar1 != 1 &&
          ((*(char *)(lVar12 + 0x11) == '\a' || ((uVar1 != 2 && (*(char *)(lVar12 + 0x21) == '\a')))
           ))))) {
        lVar12 = *(long *)(*(long *)(param_2 + 200) + 0x38);
        if (lVar12 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)
                   (lVar12 + *(long *)(*(long *)(param_1 + 0x18) +
                                      (long)(int)((uVar2 >> 4 & 0x1c) + (uVar2 >> 8 & 0xc) +
                                                  (uVar2 >> 0xc & 8) + (uVar2 >> 0xd & 0x60) +
                                                  (uVar2 >> 0xc & 1) * 0xc +
                                                  (uVar2 >> 0x10 & 1) * 0x1c +
                                                  (uVar2 >> 0xc & 0x10) * (uVar2 >> 6 & 7) +
                                                  (uVar2 >> 0x11 & 1) * 0x74 +
                                                  ((int)uVar13 + (uVar2 & 0x30) | uVar2 >> 6 & 8) +
                                                 ((uVar2 >> 0xd & 3) + (int)uVar10) * 0x14)));
        }
        puVar8[0x16] = 0;
        puVar8[0x17] = 0;
        puVar8[0x14] = 0;
        puVar8[0x15] = 0;
        puVar8[0x12] = 0;
        puVar8[0x13] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
      }
    }
    if (uVar5 != 0) {
      uVar10 = 0;
      iVar14 = 0;
      iVar15 = 0;
      lVar12 = 1;
      do {
        uVar5 = *(uint *)(param_1 + 0x10);
        uVar9 = (ulong)(uVar5 << 4) & 0x30;
        uVar13 = (ulong)(uVar5 >> 2) & 3;
        lVar6 = *(long *)(param_1 + 0x18);
        lVar11 = (uVar13 | uVar13 << 2) * 4;
        bVar3 = *(byte *)(lVar6 + lVar11 + uVar9 + lVar12);
        uVar1 = (uint)(bVar3 == 6 || bVar3 - 3 < 3);
        local_6c[uVar10] = uVar1;
        if (uVar1 == 0) {
          if (bVar3 == 7) {
            lVar11 = (long)iVar15;
            iVar15 = iVar15 + 1;
            FUN_0023fca4(param_1,param_2,
                         lVar6 + (int)((uVar5 >> 4 & 0x1c) + (uVar5 >> 8 & 0xc) + (uVar5 >> 0xc & 8)
                                       + (uVar5 >> 0xd & 0x60) + (uVar5 >> 0xc & 1) * 0xc +
                                       (uVar5 >> 0x10 & 1) * 0x1c +
                                       (uVar5 >> 0xc & 0x10) * (uVar5 >> 6 & 7) +
                                       (uVar5 >> 0x11 & 1) * 0x74 +
                                       (uint)((uVar5 & 0x300000) != 0) * 0x10 +
                                       ((int)uVar9 + (uVar5 & 0x30) | uVar5 >> 6 & 8) +
                                      ((uVar5 >> 0xd & 3) + (int)uVar13) * 0x14) + lVar11 * 0x58,
                         uVar10 & 0xffffffff);
          }
        }
        else {
          lVar4 = (long)iVar14;
          iVar14 = iVar14 + 1;
          FUN_0023f32c(param_1,param_2,param_3,param_4,
                       lVar6 + ((ulong)(uVar5 >> 4) & 0x1c) + ((ulong)(uVar5 >> 8) & 0xc) + lVar11 +
                               ((ulong)(uVar5 >> 0xc) & 1) * 0xc +
                               (uVar9 + ((ulong)uVar5 & 0x30) | (ulong)(uVar5 >> 6) & 8) +
                       lVar4 * 0x14,uVar10 & 0xffffffff);
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x10;
      } while (uVar10 < uVar7);
    }
    if (uVar7 < 3) {
      memset(local_6c + uVar7,0,(ulong)(2 - uVar7) * 4 + 4);
    }
    lVar12 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar12 != 0) {
      lVar12 = lVar12 + (ulong)*(uint *)(param_1 + 0x30);
    }
    *(uint *)(lVar12 + 0x220) = local_6c[0];
    *(uint *)(lVar12 + 0x224) = local_6c[1];
    *(uint *)(lVar12 + 0x228) = local_6c[2];
  }
  return;
}


