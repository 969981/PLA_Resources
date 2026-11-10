/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042c9d0; name: FUN_0042c9d0
 */


undefined1 * FUN_0042c9d0(long *param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  ulong uVar12;
  uint uVar13;
  
  iVar3 = FUN_0040c130();
  if (iVar3 == 0) {
    if (param_2 - 1 < 7) {
      iVar3 = FUN_0040d2e0(param_1);
      cVar11 = -1;
      if (iVar3 == 0) {
        cVar11 = '\x01';
      }
      if ((*param_1 != 0) && ((int)param_1[1] != 0)) {
        iVar3 = FUN_0040c070(param_1);
        uVar12 = (ulong)iVar3;
        puVar4 = (undefined1 *)
                 FUN_00400260(uVar12 + 1,"external/openssl/crypto/bn/bn_intern.c",0x3c);
        if (puVar4 == (undefined1 *)0x0) {
          uVar5 = 0x41;
          uVar6 = 0x42;
        }
        else {
          uVar1 = 1 << (ulong)(param_2 & 0x1f);
          uVar2 = uVar1 * 2;
          uVar7 = 0;
          uVar13 = *(uint *)*param_1 & uVar2 - 1;
          if (uVar13 != 0) goto LAB_0042cb3c;
LAB_0042cb98:
          if ((long)(int)param_2 + 1 + uVar7 < uVar12) {
            uVar13 = 0;
            do {
              uVar9 = 0;
              uVar8 = uVar7;
              while( true ) {
                puVar4[uVar8] = (char)uVar9 * cVar11;
                uVar7 = uVar8 + 1;
                iVar3 = FUN_0040cdc0(param_1,param_2 + (int)uVar8 + 1);
                uVar13 = (iVar3 << (ulong)(param_2 & 0x1f)) + ((int)uVar13 >> 1);
                if ((int)uVar2 < (int)uVar13) {
                  uVar5 = 0x44;
                  uVar6 = 0x7c;
                  goto LAB_0042ca68;
                }
                if (uVar13 == 0) goto LAB_0042cb98;
LAB_0042cb3c:
                if ((uVar13 & 1) == 0) break;
                if ((uVar13 & uVar1) == 0) {
                  uVar10 = 1;
                  uVar9 = uVar13;
                  if ((int)uVar13 < (int)uVar1) goto LAB_0042cb6c;
LAB_0042cbbc:
                  uVar5 = 0x44;
                  uVar6 = 0x65;
                  goto LAB_0042ca68;
                }
                uVar9 = uVar13 + uVar1 * -2;
                if (uVar12 <= (long)(int)param_2 + 1 + uVar7) {
                  uVar9 = uVar13 & uVar2 - 1 >> 1;
                }
                uVar10 = uVar9 & 1;
                if ((int)uVar1 <= (int)uVar9) goto LAB_0042cbbc;
LAB_0042cb6c:
                if (((int)uVar9 <= (int)-uVar1) || (uVar10 == 0)) goto LAB_0042cbbc;
                uVar13 = uVar13 - uVar9;
                uVar8 = uVar7;
                if (((uVar13 != 0) && (uVar13 != uVar2)) && (uVar13 != uVar1)) {
                  uVar5 = 0x44;
                  uVar6 = 0x71;
                  goto LAB_0042ca68;
                }
              }
            } while( true );
          }
          if (uVar7 <= uVar12 + 1) goto LAB_0042ca24;
          uVar5 = 0x44;
          uVar6 = 0x82;
        }
        goto LAB_0042ca68;
      }
      uVar5 = 0x37;
    }
    else {
      uVar5 = 0x2b;
    }
    FUN_004014b0(3,0x8e,0x44,"external/openssl/crypto/bn/bn_intern.c",uVar5);
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = (undefined1 *)FUN_00400260(1,"external/openssl/crypto/bn/bn_intern.c",0x1f);
    if (puVar4 != (undefined1 *)0x0) {
      uVar7 = 1;
      *puVar4 = 0;
LAB_0042ca24:
      *param_3 = uVar7;
      return puVar4;
    }
    uVar5 = 0x41;
    uVar6 = 0x21;
    puVar4 = (undefined1 *)0x0;
LAB_0042ca68:
    FUN_004014b0(3,0x8e,uVar5,"external/openssl/crypto/bn/bn_intern.c",uVar6);
  }
  FUN_00400420(puVar4,"external/openssl/crypto/bn/bn_intern.c",0x89);
  return (undefined1 *)0x0;
}


