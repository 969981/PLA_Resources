/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc3a0; name: FUN_004dc3a0
 */


undefined8 FUN_004dc3a0(long *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  
  if (param_4 == 0) {
    uVar3 = 0x10f;
    uVar4 = 0x15b;
  }
  else {
    lVar2 = FUN_00400260(param_4 << 1,"external/openssl/ssl/t1_lib.c",0x15e);
    if (lVar2 != 0) {
      lVar5 = 0;
      uVar6 = 0;
      while( true ) {
        uVar7 = 0;
        piVar9 = &DAT_03a27f60;
        do {
          if (uVar7 == 0x1e) goto LAB_004dc46c;
          iVar1 = *piVar9;
          uVar7 = uVar7 + 1;
          piVar9 = piVar9 + 3;
        } while (iVar1 != *(int *)(param_3 + lVar5 * 4));
        if (((uVar7 & 0xffff) == 0) || (uVar8 = 1L << (uVar7 & 0x3f), (uVar8 & uVar6) != 0)) break;
        *(short *)(lVar2 + lVar5 * 2) = (short)uVar7;
        lVar5 = lVar5 + 1;
        uVar6 = uVar8 | uVar6;
        if (lVar5 == param_4) {
          FUN_00400420(*param_1,"external/openssl/ssl/t1_lib.c",0x16f);
          *param_1 = lVar2;
          *param_2 = param_4;
          return 1;
        }
      }
LAB_004dc46c:
      FUN_00400420(lVar2,"external/openssl/ssl/t1_lib.c",0x169);
      return 0;
    }
    uVar3 = 0x41;
    uVar4 = 0x15f;
  }
  FUN_004014b0(0x14,0x275,uVar3,"external/openssl/ssl/t1_lib.c",uVar4);
  return 0;
}


