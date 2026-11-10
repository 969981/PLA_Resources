/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00459f10; name: FUN_00459f10
 */


undefined8 FUN_00459f10(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      return 1;
    }
    if (*(long *)(param_1 + 4) == 0) {
      if (*(long *)(param_1 + 6) == 0) goto LAB_0045a054;
      uVar3 = FUN_004648d0();
    }
    else {
      uVar3 = FUN_0044e530(*(long *)(param_1 + 4));
    }
    iVar2 = -1;
    if (param_3 == 0) {
      do {
        iVar2 = FUN_0044a140(uVar3,0x30,iVar2);
        if (iVar2 < 0) {
          return 1;
        }
        FUN_0044a0e0(uVar3,iVar2);
        FUN_0044a0d0();
        lVar5 = FUN_0040a380();
        if ((lVar5 == 0) || (puVar6 = (undefined4 *)FUN_0044e110(), puVar6 == (undefined4 *)0x0))
        goto LAB_0045a078;
        *(long *)(puVar6 + 2) = lVar5;
        *puVar6 = 1;
        iVar1 = FUN_00407800(param_2,puVar6);
      } while (iVar1 != 0);
    }
    else {
      do {
        iVar2 = FUN_0044a140(uVar3,0x30,iVar2);
        if (iVar2 < 0) {
          return 1;
        }
        uVar4 = FUN_0044a0e0(uVar3,iVar2);
        FUN_0044a0d0();
        lVar5 = FUN_0040a380();
        FUN_0044a1e0(uVar3,iVar2);
        FUN_0044ab90(uVar4);
        if ((lVar5 == 0) || (puVar6 = (undefined4 *)FUN_0044e110(), puVar6 == (undefined4 *)0x0))
        goto LAB_0045a078;
        *(long *)(puVar6 + 2) = lVar5;
        *puVar6 = 1;
        iVar2 = iVar2 + -1;
        iVar1 = FUN_00407800(param_2,puVar6);
      } while (iVar1 != 0);
    }
    FUN_004014b0(0x22,0x7a,0x41,"external/openssl/crypto/x509v3/v3_alt.c",0x168);
    lVar5 = 0;
    goto LAB_0045a098;
  }
LAB_0045a054:
  FUN_004014b0(0x22,0x7a,0x7d,"external/openssl/crypto/x509v3/v3_alt.c",0x14d);
  lVar5 = 0;
  goto LAB_0045a094;
LAB_0045a078:
  FUN_004014b0(0x22,0x7a,0x41,"external/openssl/crypto/x509v3/v3_alt.c",0x161);
LAB_0045a094:
  puVar6 = (undefined4 *)0x0;
LAB_0045a098:
  FUN_0044e120(puVar6);
  thunk_FUN_0040a4b0(lVar5);
  return 0;
}


