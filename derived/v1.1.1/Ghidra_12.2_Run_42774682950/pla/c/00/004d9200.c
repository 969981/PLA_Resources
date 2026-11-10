/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d9200; name: FUN_004d9200
 */


undefined8 FUN_004d9200(int *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 local_108;
  undefined1 auStack_fc [164];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = 0;
  lVar5 = FUN_00444930();
  local_108 = 0;
  if (lVar5 == 0) {
    uVar8 = 0x50;
    uVar9 = 0x41;
    uVar10 = 0x163;
    goto LAB_004d948c;
  }
  lVar6 = FUN_0044e660(*(undefined8 *)(*(long *)(param_1 + 0x142) + 0x1b8));
  if (lVar6 == 0) {
    uVar8 = 0x50;
    uVar9 = 0x44;
    uVar10 = 0x16b;
    lVar6 = 0;
    goto LAB_004d92c8;
  }
  lVar7 = FUN_004e30e0(lVar6,0);
  if (lVar7 == 0) {
    uVar8 = 0x2f;
    uVar9 = 0xdc;
    uVar10 = 0x171;
    goto LAB_004d948c;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 1 & 1) == 0) {
    iVar4 = FUN_004dc8f0(param_1,lVar6);
    if (iVar4 == 0) {
      uVar8 = 0x50;
      uVar9 = 0x44;
      uVar10 = 0x183;
    }
    else {
LAB_004d9348:
      iVar4 = FUN_004dc8b0(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x308),&local_48);
      if (iVar4 == 0) {
        uVar8 = 0x50;
        uVar9 = 0x44;
        uVar10 = 0x189;
      }
      else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 1 & 1) == 0) {
        lVar7 = param_2[1];
        if (lVar7 == 0x40) {
          iVar4 = FUN_00423a50(lVar6);
          if ((iVar4 != 0x32b) && (iVar4 = FUN_00423a50(lVar6), iVar4 != 0x3d3)) {
            lVar7 = param_2[1];
            goto LAB_004d939c;
          }
        }
        else {
LAB_004d939c:
          if ((lVar7 != 0x80) || (iVar4 = FUN_00423a50(lVar6), iVar4 != 0x3d4)) goto LAB_004d93cc;
        }
        uVar14 = *(uint *)(param_2 + 1);
        iVar4 = FUN_00422d70(lVar6);
        if ((int)uVar14 <= iVar4) {
LAB_004d9438:
          uVar11 = param_2[1];
          if ((uVar11 != 0) && ((int)uVar11 <= iVar4)) {
            uVar15 = (ulong)uVar14;
            if (uVar11 < uVar15) {
              uVar8 = 0x32;
              uVar9 = 0x9f;
              uVar10 = 0x1b1;
              goto LAB_004d948c;
            }
            lVar7 = *param_2;
            *param_2 = lVar7 + uVar15;
            param_2[1] = uVar11 - uVar15;
            iVar4 = FUN_004d90a0(param_1,auStack_fc,&local_58,&local_50);
            if (iVar4 == 0) goto LAB_004d9490;
            iVar4 = FUN_00464d50(lVar5,&local_108,local_48,0,lVar6);
            if (iVar4 < 1) {
              uVar8 = 0x50;
              uVar9 = 6;
              uVar10 = 0x1c0;
              goto LAB_004d948c;
            }
            iVar4 = FUN_00423a50(lVar6);
            if ((iVar4 - 0x3d3U < 2) || (iVar4 == 0x32b)) {
              lVar6 = FUN_00400260(uVar15,"external/openssl/ssl/statem/statem_lib.c",0x1c9);
              if (lVar6 == 0) {
                uVar8 = 0x50;
                uVar9 = 0x41;
                uVar10 = 0x1cb;
                goto LAB_004d92c8;
              }
              FUN_00417780(lVar6,lVar7,uVar15);
              lVar12 = *(long *)(*(long *)(param_1 + 0x2a) + 0x308);
              lVar7 = lVar6;
              if (lVar12 != 0) goto LAB_004d95d0;
LAB_004d961c:
              if (*param_1 == 0x300) {
                iVar4 = FUN_00444ad0(lVar5,local_58,local_50);
                if ((iVar4 < 1) ||
                   (iVar4 = FUN_00444fe0(lVar5,0x1d,*(undefined4 *)(*(long *)(param_1 + 0x142) + 8),
                                         *(long *)(param_1 + 0x142) + 0x50), iVar4 == 0)) {
                  uVar10 = 0x1e3;
                  goto LAB_004d9720;
                }
                iVar4 = FUN_004650a0(lVar5,lVar7,uVar15);
                if (0 < iVar4) goto LAB_004d96a8;
                uVar8 = 0x33;
                uVar9 = 0x7b;
                uVar10 = 0x1e8;
              }
              else {
                iVar4 = FUN_004651d0(lVar5,lVar7,uVar15,local_58,local_50);
                if (0 < iVar4) {
LAB_004d96a8:
                  if ((((param_1[0xe] == 0) &&
                       ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0))
                      && (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) &&
                     ((iVar4 != 0x10000 && (*(int *)(*(long *)(param_1 + 0x2a) + 0x248) == 1)))) {
                    uVar8 = 2;
                  }
                  else {
                    uVar8 = 3;
                  }
                  goto LAB_004d9498;
                }
                uVar8 = 0x33;
                uVar9 = 0x7b;
                uVar10 = 0x1ef;
              }
            }
            else {
              lVar6 = 0;
              lVar12 = *(long *)(*(long *)(param_1 + 0x2a) + 0x308);
              if (lVar12 == 0) goto LAB_004d961c;
LAB_004d95d0:
              if ((*(int *)(lVar12 + 0x14) != 0x390) ||
                 ((iVar4 = FUN_00452510(local_108,0xffffffff,0x1001,6,0), 0 < iVar4 &&
                  (iVar4 = FUN_00452510(local_108,0x18,0x1002,0xffffffff,0), 0 < iVar4))))
              goto LAB_004d961c;
              uVar10 = 0x1d9;
LAB_004d9720:
              uVar8 = 0x50;
              uVar9 = 6;
            }
LAB_004d92c8:
            FUN_004c99a0(param_1,uVar8,0x17b,uVar9,"external/openssl/ssl/statem/statem_lib.c",uVar10
                        );
            uVar8 = 0;
            goto LAB_004d9498;
          }
        }
LAB_004d9470:
        uVar8 = 0x32;
        uVar9 = 0x109;
        uVar10 = 0x1ac;
      }
      else {
LAB_004d93cc:
        if (1 < (ulong)param_2[1]) {
          puVar13 = (undefined1 *)*param_2;
          uVar1 = *puVar13;
          uVar2 = puVar13[1];
          *param_2 = (long)(puVar13 + 2);
          param_2[1] = param_2[1] - 2;
          uVar14 = (uint)CONCAT11(uVar1,uVar2);
          iVar4 = FUN_00422d70(lVar6);
          if ((int)uVar14 <= iVar4) goto LAB_004d9438;
          goto LAB_004d9470;
        }
        uVar8 = 0x32;
        uVar9 = 0x9f;
        uVar10 = 0x1a4;
      }
    }
LAB_004d948c:
    FUN_004c99a0(param_1,uVar8,0x17b,uVar9,"external/openssl/ssl/statem/statem_lib.c",uVar10);
  }
  else {
    if ((ulong)param_2[1] < 2) {
      uVar8 = 0x32;
      uVar10 = 0x17a;
      uVar9 = 0xf0;
      goto LAB_004d948c;
    }
    uVar3 = *(ushort *)*param_2;
    *param_2 = (long)((ushort *)*param_2 + 1);
    param_2[1] = param_2[1] - 2;
    iVar4 = FUN_004dce10(param_1,uVar3 >> 8 | uVar3 << 8,lVar6);
    if (0 < iVar4) goto LAB_004d9348;
  }
LAB_004d9490:
  uVar8 = 0;
  lVar6 = 0;
LAB_004d9498:
  FUN_00403ee0(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0xe0));
  *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0xe0) = 0;
  FUN_00444950(lVar5);
  FUN_00400420(lVar6,"external/openssl/ssl/statem/statem_lib.c",0x205);
  return uVar8;
}


