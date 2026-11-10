/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00445410; name: FUN_00445410
 */


int FUN_00445410(long param_1,long param_2,int param_3,long param_4,int param_5,int param_6,
                undefined8 param_7)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if (param_2 == 0) {
    uVar4 = 0x43;
    uVar5 = 0x69;
  }
  else {
    if (param_4 != 0) {
      piVar2 = (int *)FUN_00400260(0x48,"external/openssl/crypto/ui/ui_lib.c",0x6d);
      if (piVar2 == (int *)0x0) {
        return -1;
      }
      *(long *)(piVar2 + 2) = param_2;
      piVar2[0x10] = 0;
      piVar2[4] = param_3;
      *piVar2 = 2;
      *(long *)(piVar2 + 6) = param_4;
      plVar6 = (long *)(param_1 + 8);
      if (*plVar6 == 0) {
        lVar3 = FUN_004071e0();
        *plVar6 = lVar3;
        if (lVar3 == 0) {
          if (((*(byte *)(piVar2 + 0x10) & 1) != 0) &&
             (FUN_00400420(*(undefined8 *)(piVar2 + 2),"external/openssl/crypto/ui/ui_lib.c",0x37),
             *piVar2 == 3)) {
            FUN_00400420(*(undefined8 *)(piVar2 + 10),"external/openssl/crypto/ui/ui_lib.c",0x3a);
            FUN_00400420(*(undefined8 *)(piVar2 + 0xc),"external/openssl/crypto/ui/ui_lib.c",0x3b);
            FUN_00400420(*(undefined8 *)(piVar2 + 0xe),"external/openssl/crypto/ui/ui_lib.c",0x3c);
          }
          FUN_00400420(piVar2,"external/openssl/crypto/ui/ui_lib.c",0x46);
          return -1;
        }
      }
      piVar2[10] = param_5;
      piVar2[0xb] = param_6;
      *(undefined8 *)(piVar2 + 0xc) = param_7;
      iVar1 = FUN_00407800(*plVar6,piVar2);
      if (0 < iVar1) {
        return iVar1;
      }
      if (((*(byte *)(piVar2 + 0x10) & 1) != 0) &&
         (FUN_00400420(*(undefined8 *)(piVar2 + 2),"external/openssl/crypto/ui/ui_lib.c",0x37),
         *piVar2 == 3)) {
        FUN_00400420(*(undefined8 *)(piVar2 + 10),"external/openssl/crypto/ui/ui_lib.c",0x3a);
        FUN_00400420(*(undefined8 *)(piVar2 + 0xc),"external/openssl/crypto/ui/ui_lib.c",0x3b);
        FUN_00400420(*(undefined8 *)(piVar2 + 0xe),"external/openssl/crypto/ui/ui_lib.c",0x3c);
      }
      FUN_00400420(piVar2,"external/openssl/crypto/ui/ui_lib.c",0x46);
      return iVar1 + -1;
    }
    uVar4 = 0x69;
    uVar5 = 0x6c;
  }
  FUN_004014b0(0x28,0x6d,uVar4,"external/openssl/crypto/ui/ui_lib.c",uVar5);
  return -1;
}


