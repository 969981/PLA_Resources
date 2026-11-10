/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004de720; name: FUN_004de720
 */


int FUN_004de720(long param_1,undefined8 param_2,undefined2 *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (param_4 != 0) {
    iVar3 = 0;
    do {
      while( true ) {
        lVar2 = FUN_004dcbd0(*param_3);
        iVar1 = FUN_004de470(param_1,0x5000b,lVar2);
        if (iVar1 != 0) break;
LAB_004de758:
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
        if (param_4 == 0) goto LAB_004de7fc;
      }
      iVar1 = FUN_004cb590(param_2,*param_3,2);
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar3 != 0) goto LAB_004de758;
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) ||
          (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
LAB_004de754:
        iVar3 = 1;
        goto LAB_004de758;
      }
      if (*(int *)(lVar2 + 0x14) != 6) {
        iVar3 = 0;
        if ((*(int *)(lVar2 + 0xc) == 0x40) || (*(int *)(lVar2 + 0xc) == 0x2a3)) goto LAB_004de758;
        goto LAB_004de754;
      }
      iVar3 = 0;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
LAB_004de7fc:
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  FUN_004014b0(0x14,0x215,0x76,"external/openssl/ssl/t1_lib.c",0x698);
  return 0;
}


