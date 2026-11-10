/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004de840; name: FUN_004de840
 */


undefined8 FUN_004de840(undefined8 *param_1,long *param_2,ulong *param_3)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1[1];
  if (uVar6 != 0 && (uVar6 & 1) == 0) {
    lVar3 = FUN_00400260(uVar6 & 0xfffffffffffffffe,"external/openssl/ssl/t1_lib.c",0x6f3);
    if (lVar3 != 0) {
      uVar4 = 0;
      uVar6 = uVar6 >> 1;
      if (uVar6 == 0) {
LAB_004de8c8:
        if (uVar4 != uVar6) {
          FUN_00400420(lVar3,"external/openssl/ssl/t1_lib.c",0x6fb);
          return 0;
        }
      }
      else {
        uVar5 = param_1[1];
        do {
          bVar2 = uVar5 < 2;
          uVar5 = uVar5 - 2;
          if (bVar2) goto LAB_004de8c8;
          uVar1 = *(ushort *)*param_1;
          *param_1 = (ushort *)*param_1 + 1;
          param_1[1] = uVar5;
          *(ushort *)(lVar3 + uVar4 * 2) = uVar1 >> 8 | uVar1 << 8;
          uVar4 = uVar4 + 1;
        } while (uVar6 != uVar4);
      }
      FUN_00400420(*param_2,"external/openssl/ssl/t1_lib.c",0x6ff);
      *param_2 = lVar3;
      *param_3 = uVar6;
      return 1;
    }
    FUN_004014b0(0x14,0x274,0x41,"external/openssl/ssl/t1_lib.c",0x6f4);
  }
  return 0;
}


