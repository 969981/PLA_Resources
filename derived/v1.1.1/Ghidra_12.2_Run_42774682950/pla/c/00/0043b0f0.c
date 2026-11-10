/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043b0f0; name: FUN_0043b0f0
 */


long FUN_0043b0f0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  
  plVar8 = *(long **)(param_1 + 8);
  if (((plVar8 == (long *)0x0) || (*plVar8 == 0)) || (plVar8[1] == 0)) {
    uVar6 = 0x242;
LAB_0043b1f0:
    FUN_004014b0(0x10,0x107,0x73,"external/openssl/crypto/ec/ec_asn1.c",uVar6);
    lVar3 = 0;
LAB_0043b204:
    lVar12 = 0;
    lVar11 = 0;
    lVar4 = 0;
LAB_0043b208:
    lVar14 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar10 == (undefined8 *)0x0) ||
        (puVar9 = (undefined4 *)*puVar10, puVar9 == (undefined4 *)0x0)) ||
       ((*(long *)(puVar9 + 2) == 0 || ((puVar10[1] == 0 || (*(long *)(puVar10[1] + 8) == 0)))))) {
      uVar6 = 0x24f;
      goto LAB_0043b1f0;
    }
    lVar3 = FUN_0040c710(*(long *)(puVar9 + 2),*puVar9,0);
    if (lVar3 == 0) {
      FUN_004014b0(0x10,0x107,3,"external/openssl/crypto/ec/ec_asn1.c",0x254);
      goto LAB_0043b204;
    }
    puVar9 = *(undefined4 **)(*(long *)(param_1 + 0x10) + 8);
    lVar4 = FUN_0040c710(*(undefined8 *)(puVar9 + 2),*puVar9,0);
    if (lVar4 == 0) {
      uVar7 = 0x259;
      uVar6 = 3;
      goto LAB_0043b3d0;
    }
    iVar1 = FUN_00407f40(**(undefined8 **)(param_1 + 8));
    if (iVar1 != 0x196) {
      if (iVar1 == 0x197) {
        piVar15 = *(int **)(*(long *)(param_1 + 8) + 8);
        iVar1 = *piVar15;
        if (iVar1 < 0x296) {
          lVar11 = FUN_0040c260();
          if (lVar11 == 0) {
            uVar6 = 0x41;
            uVar7 = 0x272;
            goto LAB_0043b674;
          }
          iVar2 = FUN_00407f40(*(undefined8 *)(piVar15 + 2));
          if (iVar2 == 0x2a9) {
            uVar7 = 0x2ad;
            uVar6 = 0x7e;
            goto LAB_0043b674;
          }
          if (iVar2 != 0x2ab) {
            if (iVar2 == 0x2aa) {
              if (*(long *)(piVar15 + 4) == 0) {
                uVar6 = 0x73;
                uVar7 = 0x27d;
              }
              else {
                uVar5 = FUN_00420b50();
                if ((0 < (long)uVar5) && ((long)uVar5 < (long)*piVar15)) {
                  iVar2 = FUN_0040cd10(lVar11);
                  if (iVar2 != 0) {
                    iVar2 = FUN_0040cd10(lVar11,uVar5 & 0xffffffff);
                    goto joined_r0x0043b36c;
                  }
                  goto LAB_0043b678;
                }
                uVar6 = 0x89;
                uVar7 = 0x285;
              }
            }
            else {
              uVar6 = 0x73;
              uVar7 = 0x2b1;
            }
            goto LAB_0043b674;
          }
          piVar13 = *(int **)(piVar15 + 4);
          if (piVar13 == (int *)0x0) {
            uVar6 = 0x73;
            uVar7 = 0x295;
            lVar12 = 0;
            goto LAB_0043b6b0;
          }
          if ((((*piVar15 <= piVar13[2]) || (piVar13[2] <= piVar13[1])) || (piVar13[1] <= *piVar13))
             || (*piVar13 < 1)) {
            uVar6 = 0x84;
            uVar7 = 0x29d;
            goto LAB_0043b674;
          }
          iVar2 = FUN_0040cd10(lVar11);
          if (((iVar2 != 0) && (iVar2 = FUN_0040cd10(lVar11,*piVar13), iVar2 != 0)) &&
             (iVar2 = FUN_0040cd10(lVar11,piVar13[1]), iVar2 != 0)) {
            iVar2 = FUN_0040cd10(lVar11,piVar13[2]);
joined_r0x0043b36c:
            if ((iVar2 != 0) && (iVar2 = FUN_0040cd10(lVar11,0), iVar2 != 0)) {
              lVar12 = FUN_00430de0(lVar11,lVar3,lVar4,0);
              goto joined_r0x0043b398;
            }
          }
          goto LAB_0043b678;
        }
        uVar6 = 0x8f;
        uVar7 = 0x26d;
      }
      else {
        uVar6 = 0x67;
        uVar7 = 0x2d4;
      }
LAB_0043b3d0:
      FUN_004014b0(0x10,0x107,uVar6,"external/openssl/crypto/ec/ec_asn1.c",uVar7);
      lVar12 = 0;
      lVar11 = 0;
      goto LAB_0043b208;
    }
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 8);
    if (lVar12 == 0) {
      uVar6 = 0x73;
      uVar7 = 0x2bd;
      goto LAB_0043b3d0;
    }
    lVar11 = FUN_00420ce0(lVar12,0);
    if (lVar11 == 0) {
      uVar6 = 0xd;
      uVar7 = 0x2c2;
LAB_0043b674:
      FUN_004014b0(0x10,0x107,uVar6,"external/openssl/crypto/ec/ec_asn1.c",uVar7);
LAB_0043b678:
      lVar12 = 0;
      goto LAB_0043b208;
    }
    iVar1 = FUN_0040d2e0(lVar11);
    if ((iVar1 != 0) || (iVar1 = FUN_0040c130(lVar11), iVar1 != 0)) {
      uVar6 = 0x67;
      uVar7 = 0x2c7;
      goto LAB_0043b674;
    }
    iVar1 = FUN_0040c070(lVar11);
    if (0x295 < iVar1) {
      uVar6 = 0x8f;
      uVar7 = 0x2cd;
      goto LAB_0043b674;
    }
    lVar12 = FUN_00430d50(lVar11,lVar3,lVar4,0);
joined_r0x0043b398:
    if (lVar12 == 0) {
      uVar7 = 0x2d9;
      uVar6 = 0x10;
LAB_0043b6b0:
      FUN_004014b0(0x10,0x107,uVar6,"external/openssl/crypto/ec/ec_asn1.c",uVar7);
      goto LAB_0043b208;
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
      FUN_00400420(*(undefined8 *)(lVar12 + 0x30),"external/openssl/crypto/ec/ec_asn1.c",0x2df);
      __dest = (void *)FUN_00400260((long)**(int **)(*(long *)(param_1 + 0x10) + 0x10),
                                    "external/openssl/crypto/ec/ec_asn1.c",0x2e0);
      *(void **)(lVar12 + 0x30) = __dest;
      if (__dest == (void *)0x0) {
        uVar6 = 0x41;
        uVar7 = 0x2e1;
        goto LAB_0043b6b0;
      }
      piVar15 = *(int **)(*(long *)(param_1 + 0x10) + 0x10);
      memcpy(__dest,*(void **)(piVar15 + 2),(long)*piVar15);
      *(long *)(lVar12 + 0x38) = (long)**(int **)(*(long *)(param_1 + 0x10) + 0x10);
    }
    if (((*(long *)(param_1 + 0x20) == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
       (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0)) {
      uVar6 = 0x73;
      uVar7 = 0x2ea;
      goto LAB_0043b6b0;
    }
    lVar14 = FUN_0042df90(lVar12);
    if (lVar14 == 0) goto LAB_0043b208;
    FUN_0042e410(lVar12,**(byte **)(*(long *)(param_1 + 0x18) + 8) & 0xfe);
    iVar2 = FUN_0043c4a0(lVar12,lVar14,*(undefined8 *)(*(int **)(param_1 + 0x18) + 2),
                         (long)**(int **)(param_1 + 0x18),0);
    if (iVar2 == 0) {
      uVar6 = 0x2f8;
LAB_0043b6c8:
      uVar7 = 0x10;
    }
    else {
      lVar3 = FUN_00420ce0(*(undefined8 *)(param_1 + 0x20),lVar3);
      if (lVar3 == 0) {
        uVar7 = 0xd;
        uVar6 = 0x2fe;
      }
      else {
        iVar2 = FUN_0040d2e0(lVar3);
        if ((iVar2 == 0) && (iVar2 = FUN_0040c130(lVar3), iVar2 == 0)) {
          iVar2 = FUN_0040c070(lVar3);
          if (iVar2 <= iVar1 + 1) {
            if (*(long *)(param_1 + 0x28) == 0) {
              FUN_0040c1e0(lVar4);
              lVar4 = 0;
            }
            else {
              lVar4 = FUN_00420ce0(*(long *)(param_1 + 0x28),lVar4);
              if (lVar4 == 0) {
                uVar7 = 0xd;
                uVar6 = 0x30f;
                goto LAB_0043b6ec;
              }
            }
            iVar1 = FUN_0042e1a0(lVar12,lVar14,lVar3,lVar4);
            if (iVar1 != 0) goto LAB_0043b218;
            uVar6 = 0x314;
            goto LAB_0043b6c8;
          }
          uVar7 = 0x7a;
          uVar6 = 0x306;
        }
        else {
          uVar7 = 0x7a;
          uVar6 = 0x302;
        }
      }
    }
LAB_0043b6ec:
    FUN_004014b0(0x10,0x107,uVar7,"external/openssl/crypto/ec/ec_asn1.c",uVar6);
  }
  FUN_0042dbc0(lVar12);
  lVar12 = 0;
LAB_0043b218:
  FUN_0040c1e0(lVar11);
  FUN_0040c1e0(lVar3);
  FUN_0040c1e0(lVar4);
  FUN_0042db80(lVar14);
  return lVar12;
}


