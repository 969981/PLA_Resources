/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043a780; name: FUN_0043a780
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_0043a780(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 local_58;
  
  local_58 = 0;
  puVar5 = param_2;
  if ((param_2 == (undefined4 *)0x0) &&
     (puVar5 = (undefined4 *)FUN_00421c70(PTR_DAT_04374268), puVar5 == (undefined4 *)0x0)) {
    FUN_004014b0(0x10,0x105,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x1c4);
    goto LAB_0043aac0;
  }
  *puVar5 = 1;
  if ((param_1 == 0) || (plVar17 = *(long **)(puVar5 + 2), plVar17 == (long *)0x0)) {
LAB_0043aaa0:
    FUN_004014b0(0x10,0x105,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x1cf);
  }
  else {
    FUN_00409be0(*plVar17);
    FUN_0041cfd0(plVar17[1]);
    FUN_0042e180(param_1);
    iVar2 = FUN_0042e190();
    lVar6 = FUN_00407cb0();
    *plVar17 = lVar6;
    if (lVar6 == 0) {
      uVar14 = 0x103;
LAB_0043a9a0:
      uVar16 = 0x9a;
      uVar15 = 8;
      goto LAB_0043aa90;
    }
    if (iVar2 != 0x197) {
      if (iVar2 != 0x196) {
        uVar16 = 0x9a;
        uVar15 = 0x83;
        uVar14 = 0x163;
        goto LAB_0043aa90;
      }
      lVar6 = FUN_0040c260();
      if (lVar6 == 0) {
        uVar14 = 0x41;
        uVar16 = 0x109;
LAB_0043ab28:
        FUN_004014b0(0x10,0x9a,uVar14,"external/openssl/crypto/ec/ec_asn1.c",uVar16);
      }
      else {
        iVar2 = FUN_0042e540(param_1,lVar6,0,0,0);
        if (iVar2 != 0) {
          lVar7 = FUN_00420b80(lVar6,0);
          plVar17[1] = lVar7;
          if (lVar7 == 0) {
            uVar14 = 0xd;
            uVar16 = 0x114;
            goto LAB_0043ab28;
          }
          FUN_0040c1e0(lVar6);
          plVar17 = *(long **)(puVar5 + 4);
          goto joined_r0x0043adb8;
        }
        FUN_004014b0(0x10,0x9a,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x10e);
      }
LAB_0043aa98:
      FUN_0040c1e0(lVar6);
      goto LAB_0043aaa0;
    }
    puVar11 = (undefined4 *)FUN_00421c70(&DAT_04165608);
    plVar17[1] = (long)puVar11;
    if (puVar11 == (undefined4 *)0x0) {
      uVar16 = 0x9a;
      uVar15 = 0x41;
      uVar14 = 0x126;
LAB_0043aa90:
      FUN_004014b0(0x10,uVar16,uVar15,"external/openssl/crypto/ec/ec_asn1.c",uVar14);
      lVar6 = 0;
      goto LAB_0043aa98;
    }
    uVar4 = FUN_0042e580(param_1);
    *puVar11 = uVar4;
    FUN_0042e180(param_1);
    iVar2 = FUN_0042e190();
    if (((iVar2 != 0x197) || (*(int *)(param_1 + 0x48) == 0)) || (*(int *)(param_1 + 0x4c) == 0)) {
LAB_0043aa2c:
      uVar16 = 0x9a;
      uVar14 = 0x12f;
      uVar15 = 0x10;
      goto LAB_0043aa90;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar2 = 0x2aa;
      lVar6 = FUN_00407cb0(0x2aa);
      *(long *)(puVar11 + 2) = lVar6;
    }
    else {
      if ((*(int *)(param_1 + 0x54) == 0) || (*(int *)(param_1 + 0x58) != 0)) goto LAB_0043aa2c;
      iVar2 = 0x2ab;
      lVar6 = FUN_00407cb0(0x2ab);
      *(long *)(puVar11 + 2) = lVar6;
    }
    if (lVar6 == 0) {
      uVar14 = 0x134;
      goto LAB_0043a9a0;
    }
    FUN_0042e180(param_1);
    iVar3 = FUN_0042e190();
    if (iVar2 != 0x2ab) {
      if (((iVar3 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) &&
         ((iVar2 = *(int *)(param_1 + 0x4c), iVar2 != 0 && (*(int *)(param_1 + 0x50) == 0)))) {
        lVar6 = FUN_0041cf20();
        *(long *)(puVar11 + 4) = lVar6;
        if (lVar6 == 0) {
          uVar16 = 0x9a;
          uVar15 = 0x41;
          uVar14 = 0x140;
        }
        else {
          iVar2 = FUN_00420ad0(lVar6,iVar2);
          if (iVar2 != 0) {
            FUN_0040c1e0(0);
            plVar17 = *(long **)(puVar5 + 4);
            goto joined_r0x0043adb8;
          }
          uVar16 = 0x9a;
          uVar15 = 0xd;
          uVar14 = 0x144;
        }
      }
      else {
        uVar16 = 0xc2;
        uVar15 = 0x42;
        uVar14 = 0x34;
      }
      goto LAB_0043aa90;
    }
    if (((((iVar3 != 0x197) || (*(int *)(param_1 + 0x48) == 0)) ||
         (iVar2 = *(int *)(param_1 + 0x4c), iVar2 == 0)) ||
        ((iVar3 = *(int *)(param_1 + 0x50), iVar3 == 0 ||
         (iVar1 = *(int *)(param_1 + 0x54), iVar1 == 0)))) || (*(int *)(param_1 + 0x58) != 0)) {
      uVar16 = 0xc1;
      uVar15 = 0x42;
      uVar14 = 0x4a;
      goto LAB_0043aa90;
    }
    piVar12 = (int *)FUN_00421c70(&DAT_041655d0);
    *(int **)(puVar11 + 4) = piVar12;
    if (piVar12 == (int *)0x0) {
      uVar16 = 0x9a;
      uVar15 = 0x41;
      uVar14 = 0x14f;
      goto LAB_0043aa90;
    }
    *piVar12 = iVar1;
    *(int *)(*(long *)(puVar11 + 4) + 4) = iVar3;
    *(int *)(*(long *)(puVar11 + 4) + 8) = iVar2;
    FUN_0040c1e0(0);
    plVar17 = *(long **)(puVar5 + 4);
joined_r0x0043adb8:
    if (((plVar17 == (long *)0x0) || (*plVar17 == 0)) || (plVar17[1] == 0)) {
LAB_0043ad5c:
      FUN_004014b0(0x10,0x105,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x1d5);
    }
    else {
      lVar6 = FUN_0040c260();
      if ((lVar6 == 0) || (lVar7 = FUN_0040c260(), lVar7 == 0)) {
        FUN_004014b0(0x10,0x99,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x179);
        FUN_00400420(0,"external/openssl/crypto/ec/ec_asn1.c",0x1b1);
        FUN_00400420(0,"external/openssl/crypto/ec/ec_asn1.c",0x1b2);
        FUN_0040c1e0(lVar6);
        lVar7 = 0;
LAB_0043ad58:
        FUN_0040c1e0(lVar7);
        goto LAB_0043ad5c;
      }
      iVar2 = FUN_0042e540(param_1,0,lVar6,lVar7,0);
      if (iVar2 == 0) {
        FUN_004014b0(0x10,0x99,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x17f);
        lVar8 = 0;
LAB_0043acac:
        FUN_00400420(lVar8,"external/openssl/crypto/ec/ec_asn1.c",0x1b1);
        lVar9 = 0;
LAB_0043ad44:
        FUN_00400420(lVar9,"external/openssl/crypto/ec/ec_asn1.c",0x1b2);
        FUN_0040c1e0(lVar6);
        goto LAB_0043ad58;
      }
      iVar2 = FUN_0042e580(param_1);
      uVar18 = (long)iVar2 + 7U >> 3;
      lVar8 = FUN_00400260(uVar18,"external/openssl/crypto/ec/ec_asn1.c",0x189);
      if ((lVar8 == 0) ||
         (lVar9 = FUN_00400260(uVar18,"external/openssl/crypto/ec/ec_asn1.c",0x18a), lVar9 == 0)) {
        FUN_004014b0(0x10,0x99,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x18b);
        goto LAB_0043acac;
      }
      iVar2 = FUN_0040c940(lVar6,lVar8,uVar18 & 0xffffffff);
      if ((iVar2 < 0) || (iVar2 = FUN_0040c940(lVar7,lVar9,uVar18 & 0xffffffff), iVar2 < 0)) {
        uVar16 = 400;
        uVar14 = 3;
LAB_0043ad24:
        FUN_004014b0(0x10,0x99,uVar14,"external/openssl/crypto/ec/ec_asn1.c",uVar16);
        FUN_00400420(lVar8,"external/openssl/crypto/ec/ec_asn1.c",0x1b1);
        goto LAB_0043ad44;
      }
      iVar2 = thunk_FUN_0040a280(*plVar17,lVar8,uVar18 & 0xffffffff);
      if ((iVar2 == 0) ||
         (iVar2 = thunk_FUN_0040a280(plVar17[1],lVar9,uVar18 & 0xffffffff), iVar2 == 0)) {
        uVar14 = 0xd;
        uVar16 = 0x197;
        goto LAB_0043ad24;
      }
      lVar13 = *(long *)(param_1 + 0x30);
      lVar10 = plVar17[2];
      if (lVar13 == 0) {
        thunk_FUN_0040a4b0();
        plVar17[2] = 0;
      }
      else {
        if (lVar10 == 0) {
          lVar10 = FUN_0041cf50();
          plVar17[2] = lVar10;
          if (lVar10 == 0) {
            uVar14 = 0x41;
            uVar16 = 0x19f;
            goto LAB_0043ad24;
          }
          lVar13 = *(long *)(param_1 + 0x30);
        }
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffff0 | 8;
        iVar2 = thunk_FUN_0040a280(lVar10,lVar13,*(undefined4 *)(param_1 + 0x38));
        if (iVar2 == 0) {
          uVar14 = 0xd;
          uVar16 = 0x1a6;
          goto LAB_0043ad24;
        }
      }
      FUN_00400420(lVar8,"external/openssl/crypto/ec/ec_asn1.c",0x1b1);
      FUN_00400420(lVar9,"external/openssl/crypto/ec/ec_asn1.c",0x1b2);
      FUN_0040c1e0(lVar6);
      FUN_0040c1e0(lVar7);
      lVar6 = FUN_0042e340(param_1);
      if (lVar6 == 0) {
        FUN_004014b0(0x10,0x105,0x71,"external/openssl/crypto/ec/ec_asn1.c",0x1db);
      }
      else {
        uVar4 = FUN_0042e420(param_1);
        uVar18 = FUN_0043c550(param_1,lVar6,uVar4,&local_58,0);
        if (uVar18 == 0) {
          FUN_004014b0(0x10,0x105,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x1e3);
        }
        else {
          lVar6 = *(long *)(puVar5 + 6);
          if (lVar6 == 0) {
            lVar6 = FUN_0041cee0();
            *(long *)(puVar5 + 6) = lVar6;
            if (lVar6 == 0) {
              FUN_00400420(local_58,"external/openssl/crypto/ec/ec_asn1.c",0x1e7);
              FUN_004014b0(0x10,0x105,0x41,"external/openssl/crypto/ec/ec_asn1.c",0x1e8);
              goto joined_r0x0043af9c;
            }
          }
          FUN_0040a510(lVar6,local_58,uVar18 & 0xffffffff);
          lVar6 = FUN_0042e350(param_1);
          if (lVar6 == 0) {
            FUN_004014b0(0x10,0x105,0x10,"external/openssl/crypto/ec/ec_asn1.c",0x1f0);
          }
          else {
            lVar6 = FUN_00420b80(lVar6,*(undefined8 *)(puVar5 + 8));
            *(long *)(puVar5 + 8) = lVar6;
            if (lVar6 == 0) {
              FUN_004014b0(0x10,0x105,0xd,"external/openssl/crypto/ec/ec_asn1.c",0x1f5);
            }
            else {
              lVar6 = FUN_0042e3c0(param_1);
              if (lVar6 == 0) {
                return puVar5;
              }
              lVar6 = FUN_00420b80(lVar6,*(undefined8 *)(puVar5 + 10));
              *(long *)(puVar5 + 10) = lVar6;
              if (lVar6 != 0) {
                return puVar5;
              }
              FUN_004014b0(0x10,0x105,0xd,"external/openssl/crypto/ec/ec_asn1.c",0x1fe);
            }
          }
        }
      }
    }
  }
joined_r0x0043af9c:
  if (param_2 != (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_0043aac0:
  FUN_00421810(puVar5,PTR_DAT_04374268);
  return (undefined4 *)0x0;
}


