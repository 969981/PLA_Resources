/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413c40; name: FUN_00413c40
 */


undefined2 * FUN_00413c40(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  
  iVar2 = FUN_0040c070();
  iVar2 = (iVar2 * 3) / 10 + (iVar2 * 3) / 1000;
  uVar1 = (iVar2 + 2) / 9 + 1;
  piVar3 = (int *)FUN_00400260(-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2,
                               "external/openssl/crypto/bn/bn_print.c",0x48);
  lVar6 = (long)(iVar2 + 5);
  puVar4 = (undefined2 *)FUN_00400260(lVar6,"external/openssl/crypto/bn/bn_print.c",0x49);
  if (piVar3 == (int *)0x0 || puVar4 == (undefined2 *)0x0) {
    FUN_004014b0(3,0x68,0x41,"external/openssl/crypto/bn/bn_print.c",0x4b);
  }
  else {
    lVar5 = FUN_0040c480(param_1);
    if (lVar5 != 0) {
      iVar2 = FUN_0040c130();
      if (iVar2 != 0) {
        *puVar4 = 0x30;
LAB_00413d48:
        FUN_00400420(piVar3,"external/openssl/crypto/bn/bn_print.c",0x76);
        FUN_0040c1e0(lVar5);
        return puVar4;
      }
      iVar2 = FUN_0040d2e0(lVar5);
      puVar8 = puVar4;
      if (iVar2 != 0) {
        puVar8 = (undefined2 *)((long)puVar4 + 1);
        *(undefined1 *)puVar4 = 0x2d;
      }
      iVar2 = FUN_0040c130(lVar5);
      piVar9 = piVar3;
      if (iVar2 == 0) {
        do {
          if ((long)(int)uVar1 <= (long)piVar9 - (long)piVar3 >> 2) goto LAB_00413e88;
          iVar2 = FUN_0040bc10(lVar5,1000000000);
          *piVar9 = iVar2;
          if (iVar2 == -1) goto LAB_00413e88;
          piVar9 = piVar9 + 1;
          iVar2 = FUN_0040c130(lVar5);
        } while (iVar2 == 0);
      }
      piVar9 = piVar9 + -1;
      iVar2 = FUN_00403120(puVar8,(undefined1 *)((long)puVar4 + (lVar6 - (long)puVar8)),
                           &DAT_038aa9b2,*piVar9);
      if (-1 < iVar2) {
        if (piVar9 != piVar3) {
          puVar7 = (undefined1 *)((long)puVar8 + (long)iVar2);
          do {
            piVar9 = piVar9 + -1;
            iVar2 = FUN_00403120(puVar7,(undefined1 *)((long)puVar4 + (lVar6 - (long)puVar7)),
                                 &DAT_03953efc,*piVar9);
            if (iVar2 < 0) goto LAB_00413e88;
            puVar7 = puVar7 + iVar2;
          } while (piVar3 != piVar9);
        }
        goto LAB_00413d48;
      }
LAB_00413e88:
      FUN_00400420(piVar3,"external/openssl/crypto/bn/bn_print.c",0x76);
      goto LAB_00413d80;
    }
  }
  FUN_00400420(piVar3,"external/openssl/crypto/bn/bn_print.c",0x76);
  lVar5 = 0;
LAB_00413d80:
  FUN_0040c1e0(lVar5);
  FUN_00400420(puVar4,"external/openssl/crypto/bn/bn_print.c",0x7a);
  return (undefined2 *)0x0;
}


