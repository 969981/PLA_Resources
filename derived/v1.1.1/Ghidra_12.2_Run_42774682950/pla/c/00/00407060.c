/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407060; name: FUN_00407060
 */


int * FUN_00407060(uint *param_1,code *param_2,code *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  piVar1 = (int *)FUN_00400260(0x20,"external/openssl/crypto/stack/stack.c",0x50);
  if (piVar1 == (int *)0x0) {
    FUN_004014b0(0xf,0x7f,0x41,"external/openssl/crypto/stack/stack.c",0x51);
  }
  else {
    uVar4 = *(undefined8 *)param_1;
    uVar8 = *(undefined8 *)(param_1 + 6);
    uVar7 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)piVar1 = uVar4;
    *(undefined8 *)(piVar1 + 6) = uVar8;
    *(undefined8 *)(piVar1 + 4) = uVar7;
    uVar6 = *param_1;
    if (uVar6 == 0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[5] = 0;
    }
    else {
      if ((int)uVar6 < 5) {
        uVar6 = 4;
      }
      piVar1[5] = uVar6;
      lVar2 = FUN_004002a0((ulong)uVar6 << 3,"external/openssl/crypto/stack/stack.c",0x60);
      *(long *)(piVar1 + 2) = lVar2;
      if (lVar2 == 0) {
        uVar4 = 0x62;
      }
      else {
        iVar5 = *piVar1;
        if (iVar5 < 1) {
          return piVar1;
        }
        lVar2 = 0;
        lVar3 = **(long **)(param_1 + 2);
        while (lVar3 == 0) {
          if ((long)iVar5 <= lVar2 + 1) {
            return piVar1;
          }
LAB_004070f8:
          lVar2 = lVar2 + 1;
          lVar3 = *(long *)(*(long *)(param_1 + 2) + lVar2 * 8);
        }
        lVar3 = (*param_2)();
        *(long *)(*(long *)(piVar1 + 2) + lVar2 * 8) = lVar3;
        if (lVar3 != 0) {
          iVar5 = *piVar1;
          if ((long)iVar5 <= lVar2 + 1) {
            return piVar1;
          }
          goto LAB_004070f8;
        }
        if ((int)lVar2 != 0) {
          do {
            lVar3 = lVar2 * 8;
            lVar2 = lVar2 + -1;
            if (*(long *)(*(long *)(piVar1 + 2) + lVar3 + -8) != 0) {
              (*param_3)();
            }
          } while (0 < lVar2);
        }
        FUN_00400420(*(undefined8 *)(piVar1 + 2),"external/openssl/crypto/stack/stack.c",0x178);
        uVar4 = 0x179;
      }
      FUN_00400420(piVar1,"external/openssl/crypto/stack/stack.c",uVar4);
      piVar1 = (int *)0x0;
    }
  }
  return piVar1;
}


