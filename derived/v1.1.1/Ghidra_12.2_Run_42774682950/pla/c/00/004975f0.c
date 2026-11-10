/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004975f0; name: FUN_004975f0
 */


ulong FUN_004975f0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  
  if ((((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x38) == 0)) ||
      (*(long *)(param_1 + 0x18) == 0)) ||
     ((*(long *)(param_1 + 0x20) == 0 || (*(long *)(param_1 + 0x28) == 0)))) {
    uVar12 = 0x93;
    uVar13 = 0x1c;
    goto LAB_004976a8;
  }
  if (*(int *)(param_1 + 4) == 1) {
    iVar1 = FUN_00407950(*(undefined8 *)(param_1 + 0x58));
    if (0 < iVar1) {
      FUN_0040c070(*(undefined8 *)(param_1 + 0x18));
      iVar2 = FUN_00453060();
      if (iVar1 + 2 <= iVar2) goto LAB_004976d8;
    }
    uVar12 = 0xa7;
    uVar13 = 0x25;
LAB_004976a8:
    FUN_004014b0(4,0xa0,uVar12,"external/openssl/crypto/rsa/rsa_chk.c",uVar13);
    return 0;
  }
  iVar1 = 0;
LAB_004976d8:
  lVar4 = FUN_0040c260();
  lVar5 = FUN_0040c260();
  lVar6 = FUN_0040c260();
  lVar7 = FUN_0040c260();
  lVar8 = FUN_0040c260();
  lVar9 = FUN_0040de30();
  if (((lVar4 == 0) || (lVar5 == 0)) ||
     ((lVar6 == 0 || (((lVar7 == 0 || (lVar8 == 0)) || (lVar9 == 0)))))) {
    FUN_004014b0(4,0xa0,0x41,"external/openssl/crypto/rsa/rsa_chk.c",0x33);
    uVar14 = 0xffffffff;
    goto LAB_00497bf8;
  }
  iVar2 = FUN_0040d220(*(undefined8 *)(param_1 + 0x20));
  if (iVar2 == 0) {
    iVar3 = FUN_0040d2b0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    FUN_004014b0(4,0xa0,0x65,"external/openssl/crypto/rsa/rsa_chk.c",0x39);
    iVar3 = FUN_0040d2b0(*(undefined8 *)(param_1 + 0x20));
  }
  uVar14 = (ulong)(iVar2 == 0);
  if (iVar3 == 0) {
    FUN_004014b0(4,0xa0,0x65,"external/openssl/crypto/rsa/rsa_chk.c",0x3d);
    uVar14 = 0;
  }
  iVar2 = FUN_0042aec0(*(undefined8 *)(param_1 + 0x30),0,0,param_2);
  if (iVar2 != 1) {
    FUN_004014b0(4,0xa0,0x80,"external/openssl/crypto/rsa/rsa_chk.c",0x43);
    uVar14 = 0;
  }
  iVar2 = FUN_0042aec0(*(undefined8 *)(param_1 + 0x38),0,0,param_2);
  if (iVar2 != 1) {
    FUN_004014b0(4,0xa0,0x81,"external/openssl/crypto/rsa/rsa_chk.c",0x49);
    uVar14 = 0;
  }
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      puVar10 = (undefined8 *)FUN_00407970(*(undefined8 *)(param_1 + 0x58),iVar2);
      iVar3 = FUN_0042aec0(*puVar10,0,0,param_2);
      if (iVar3 != 1) {
        FUN_004014b0(4,0xa0,0xaa,"external/openssl/crypto/rsa/rsa_chk.c",0x51);
        uVar14 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  iVar2 = FUN_004129a0(lVar4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar9);
  if (iVar2 == 0) goto LAB_00497bd4;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      puVar10 = (undefined8 *)FUN_00407970(*(undefined8 *)(param_1 + 0x58),iVar2);
      iVar3 = FUN_004129a0(lVar4,lVar4,*puVar10,lVar9);
      if (iVar3 == 0) goto LAB_00497bec;
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  iVar2 = FUN_0040cc60(lVar4,*(undefined8 *)(param_1 + 0x18));
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      uVar13 = 0x67;
      uVar12 = 0x7f;
    }
    else {
      uVar12 = 0xac;
      uVar13 = 0x65;
    }
    FUN_004014b0(4,0xa0,uVar12,"external/openssl/crypto/rsa/rsa_chk.c",uVar13);
    uVar14 = 0;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = FUN_0040bfc0();
  iVar2 = FUN_00411b00(lVar4,uVar13,uVar12);
  if (iVar2 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    uVar12 = FUN_0040bfc0();
    iVar2 = FUN_00411b00(lVar5,uVar13,uVar12);
    if (iVar2 != 0) {
      iVar2 = FUN_004129a0(lVar7,lVar4,lVar5,lVar9);
      if ((iVar2 != 0) && (iVar2 = FUN_00410c50(lVar8,lVar4,lVar5,lVar9), iVar2 != 0)) {
        if (0 < iVar1) {
          iVar2 = 0;
          do {
            puVar10 = (undefined8 *)FUN_00407970(*(undefined8 *)(param_1 + 0x58),iVar2);
            uVar13 = *puVar10;
            uVar12 = FUN_0040bfc0();
            iVar3 = FUN_00411b00(lVar6,uVar13,uVar12);
            if (((iVar3 == 0) || (iVar3 = FUN_004129a0(lVar7,lVar7,lVar6,lVar9), iVar3 == 0)) ||
               (iVar3 = FUN_00410c50(lVar8,lVar8,lVar6,lVar9), iVar3 == 0)) goto LAB_00497bec;
            iVar2 = iVar2 + 1;
          } while (iVar1 != iVar2);
        }
        iVar2 = FUN_0040e5a0(lVar6,0,lVar7,lVar8,lVar9);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_00413180(lVar4,*(undefined8 *)(param_1 + 0x28),
                                 *(undefined8 *)(param_1 + 0x20),lVar6,lVar9), iVar2 != 0)) {
          iVar2 = FUN_0040d220(lVar4);
          if (iVar2 == 0) {
            FUN_004014b0(4,0xa0,0x7b,"external/openssl/crypto/rsa/rsa_chk.c",0x97);
            uVar14 = 0;
          }
          if (((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
             (*(long *)(param_1 + 0x50) == 0)) {
joined_r0x00497c34:
            if (0 < iVar1) {
              iVar2 = 0;
              do {
                puVar10 = (undefined8 *)FUN_00407970(*(undefined8 *)(param_1 + 0x58),iVar2);
                uVar13 = *puVar10;
                uVar12 = FUN_0040bfc0();
                iVar3 = FUN_00411b00(lVar4,uVar13,uVar12);
                if ((iVar3 == 0) ||
                   (iVar3 = FUN_0040e5a0(0,lVar5,*(undefined8 *)(param_1 + 0x28),lVar4,lVar9),
                   iVar3 == 0)) goto LAB_00497bd4;
                iVar3 = FUN_0040cc60(lVar5,puVar10[1]);
                if (iVar3 != 0) {
                  FUN_004014b0(4,0xa0,0xa9,"external/openssl/crypto/rsa/rsa_chk.c",0xcf);
                  uVar14 = 0;
                }
                lVar11 = FUN_00410e10(lVar4,puVar10[3],*puVar10,lVar9);
                if (lVar11 == 0) goto LAB_00497bec;
                iVar3 = FUN_0040cc60(lVar4,puVar10[2]);
                if (iVar3 != 0) {
                  FUN_004014b0(4,0xa0,0xa8,"external/openssl/crypto/rsa/rsa_chk.c",0xd8);
                  uVar14 = 0;
                }
                iVar2 = iVar2 + 1;
              } while (iVar1 != iVar2);
            }
            goto LAB_00497bf8;
          }
          uVar13 = *(undefined8 *)(param_1 + 0x30);
          uVar12 = FUN_0040bfc0();
          iVar2 = FUN_00411b00(lVar4,uVar13,uVar12);
          if (iVar2 != 0) {
            iVar2 = FUN_0040e5a0(0,lVar5,*(undefined8 *)(param_1 + 0x28),lVar4,lVar9);
            if (iVar2 != 0) {
              iVar2 = FUN_0040cc60(lVar5,*(undefined8 *)(param_1 + 0x40));
              if (iVar2 != 0) {
                FUN_004014b0(4,0xa0,0x7c,"external/openssl/crypto/rsa/rsa_chk.c",0xa6);
                uVar14 = 0;
              }
              uVar13 = *(undefined8 *)(param_1 + 0x38);
              uVar12 = FUN_0040bfc0();
              iVar2 = FUN_00411b00(lVar4,uVar13,uVar12);
              if ((iVar2 != 0) &&
                 (iVar2 = FUN_0040e5a0(0,lVar5,*(undefined8 *)(param_1 + 0x28),lVar4,lVar9),
                 iVar2 != 0)) {
                iVar2 = FUN_0040cc60(lVar5,*(undefined8 *)(param_1 + 0x48));
                if (iVar2 != 0) {
                  FUN_004014b0(4,0xa0,0x7d,"external/openssl/crypto/rsa/rsa_chk.c",0xb4);
                  uVar14 = 0;
                }
                lVar11 = FUN_00410e10(lVar4,*(undefined8 *)(param_1 + 0x38),
                                      *(undefined8 *)(param_1 + 0x30),lVar9);
                if (lVar11 != 0) {
                  iVar2 = FUN_0040cc60(lVar4,*(undefined8 *)(param_1 + 0x50));
                  if (iVar2 != 0) {
                    FUN_004014b0(4,0xa0,0x7e,"external/openssl/crypto/rsa/rsa_chk.c",0xbe);
                    uVar14 = 0;
                  }
                  goto joined_r0x00497c34;
                }
              }
            }
LAB_00497bd4:
            uVar14 = 0xffffffff;
            goto LAB_00497bf8;
          }
          goto LAB_00497bdc;
        }
      }
      uVar14 = 0xffffffff;
      goto LAB_00497bf8;
    }
  }
LAB_00497bdc:
  uVar14 = 0xffffffff;
LAB_00497bf8:
  FUN_0040c1e0(lVar4);
  FUN_0040c1e0(lVar5);
  FUN_0040c1e0(lVar6);
  FUN_0040c1e0(lVar7);
  FUN_0040c1e0(lVar8);
  FUN_0040def0(lVar9);
  return uVar14;
LAB_00497bec:
  uVar14 = 0xffffffff;
  goto LAB_00497bf8;
}


