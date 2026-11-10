/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f0fb0; name: FUN_004f0fb0
 */


int FUN_004f0fb0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_004016d0();
  puVar1 = (undefined8 *)(param_1 + 0xb8);
  if (param_1 == 0) {
    puVar1 = (undefined8 *)(param_2 + 0x17b8);
  }
  uVar9 = *puVar1;
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  if (param_1 == 0) {
    puVar1 = (undefined8 *)(param_2 + 0x17b0);
  }
  uVar10 = *puVar1;
  FUN_00414680();
  lVar4 = FUN_00403d80();
  if (lVar4 == 0) {
    uVar10 = 0x262;
    uVar9 = 7;
  }
  else {
    iVar2 = FUN_00404920(lVar4,0x6c,3,param_3);
    if (0 < iVar2) {
      lVar5 = FUN_004f1f50(lVar4,0,uVar10,uVar9);
      if (lVar5 == 0) {
        FUN_004014b0(0x14,0xdc,9,"external/openssl/ssl/ssl_rsa.c",0x26e);
        goto LAB_004f10b0;
      }
      if (param_1 == 0) {
        iVar2 = FUN_004e0190(param_2,0,lVar5,0,1);
        if (iVar2 != 1) {
          uVar9 = 0xc6;
          uVar10 = 0x24;
          goto LAB_004f11e8;
        }
        uVar6 = *(undefined8 *)(param_2 + 0x488);
      }
      else {
        iVar2 = FUN_004e0190(0,param_1,lVar5,0,1);
        if (iVar2 != 1) {
          uVar9 = 0xab;
          uVar10 = 0x136;
LAB_004f11e8:
          FUN_004014b0(0x14,uVar9,iVar2,"external/openssl/ssl/ssl_rsa.c",uVar10);
          FUN_00401a50();
          iVar2 = 0;
          goto LAB_004f10b4;
        }
        uVar6 = *(undefined8 *)(param_1 + 0x140);
      }
      iVar2 = FUN_004f0930(uVar6,lVar5);
      lVar7 = FUN_00401a50();
      if (lVar7 != 0) {
        iVar2 = 0;
      }
      if (iVar2 == 0) goto LAB_004f10b4;
      if (param_1 == 0) {
        iVar3 = FUN_004c2cd0(param_2,0x58,0,0);
      }
      else {
        iVar3 = FUN_004c3c10(param_1,0x58,0,0);
      }
      if (iVar3 != 0) {
        if (param_1 == 0) {
          do {
            lVar7 = FUN_004e31f0(lVar4,0,uVar10,uVar9);
            if (lVar7 == 0) goto LAB_004f1248;
            iVar3 = FUN_004c2cd0(param_2,0x59,0,lVar7);
          } while (iVar3 != 0);
        }
        else {
          do {
            lVar7 = FUN_004e31f0(lVar4,0,uVar10,uVar9);
            if (lVar7 == 0) goto LAB_004f1248;
            iVar3 = FUN_004c3c10(param_1,0x59,0,lVar7);
          } while (iVar3 != 0);
        }
        FUN_00460a80(lVar7);
      }
      goto LAB_004f10b0;
    }
    uVar10 = 0x267;
    uVar9 = 2;
  }
  FUN_004014b0(0x14,0xdc,uVar9,"external/openssl/ssl/ssl_rsa.c",uVar10);
  lVar5 = 0;
LAB_004f10b0:
  iVar2 = 0;
LAB_004f10b4:
  FUN_00460a80(lVar5);
  FUN_00403ee0(lVar4);
  return iVar2;
LAB_004f1248:
  uVar8 = FUN_00401a70();
  if ((uVar8 & 0xff000fff) == 0x900006c) {
    FUN_004016d0();
    goto LAB_004f10b4;
  }
  goto LAB_004f10b0;
}


