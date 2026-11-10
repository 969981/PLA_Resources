/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d9f90; name: FUN_004d9f90
 */


undefined8 FUN_004d9f90(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = FUN_004cac70(param_2,3);
  if (iVar1 == 0) {
    uVar4 = 0x93;
    iVar1 = 0x44;
    uVar6 = 0x3ea;
    goto LAB_004da17c;
  }
  if ((param_3 != (long *)0x0) && (lVar8 = *param_3, lVar8 != 0)) {
    lVar7 = param_3[2];
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x598) + 0x100);
      if ((lVar7 == 0) && ((*(uint *)(param_1 + 0x5d0) >> 3 & 1) == 0)) {
        lVar7 = *(long *)(*(long *)(param_1 + 0x488) + 0x1d8);
        if ((lVar7 != 0) || (lVar7 = *(long *)(*(long *)(param_1 + 0x598) + 0x20), lVar7 != 0)) {
          lVar5 = FUN_00468a30();
          if (lVar5 == 0) {
            uVar4 = 0x13c;
            iVar1 = 0x41;
            uVar6 = 0x3a7;
            goto LAB_004da17c;
          }
          iVar1 = FUN_00468b10(lVar5,lVar7,lVar8,0);
          if (iVar1 == 0) {
            FUN_00468a80(lVar5);
            uVar4 = 0x13c;
            iVar1 = 0xb;
            uVar6 = 0x3ad;
            goto LAB_004da17c;
          }
          FUN_00467130(lVar5);
          FUN_004016d0();
          uVar4 = FUN_00468a10(lVar5);
          iVar1 = FUN_004e0340(param_1,uVar4,0,0);
          if (iVar1 != 1) {
            FUN_00468a80(lVar5);
            uVar4 = 0x13c;
            uVar6 = 0x3c3;
            goto LAB_004da17c;
          }
          iVar1 = FUN_00407950(uVar4);
          if (0 < iVar1) {
            iVar2 = 0;
            do {
              uVar6 = FUN_00407970(uVar4,iVar2);
              iVar3 = FUN_004dbd50(param_1,param_2,uVar6,iVar2);
              if (iVar3 == 0) {
                FUN_00468a80(lVar5);
                return 0;
              }
              iVar2 = iVar2 + 1;
            } while (iVar1 != iVar2);
          }
          FUN_00468a80(lVar5);
          goto LAB_004da14c;
        }
        lVar7 = 0;
      }
    }
    iVar1 = FUN_004e0340(param_1,lVar7,lVar8,0);
    if (iVar1 != 1) {
      uVar4 = 0x13c;
      uVar6 = 0x3d4;
      goto LAB_004da17c;
    }
    iVar1 = FUN_004dbd50(param_1,param_2,lVar8,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = 1;
    while( true ) {
      iVar2 = FUN_00407950(lVar7);
      if (iVar2 <= iVar1 + -1) break;
      uVar4 = FUN_00407970(lVar7,iVar1 + -1);
      iVar2 = FUN_004dbd50(param_1,param_2,uVar4,iVar1);
      iVar1 = iVar1 + 1;
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
LAB_004da14c:
  iVar1 = FUN_004cade0(param_2);
  if (iVar1 != 0) {
    return 1;
  }
  uVar4 = 0x93;
  iVar1 = 0x44;
  uVar6 = 0x3f3;
LAB_004da17c:
  FUN_004c99a0(param_1,0x50,uVar4,iVar1,"external/openssl/ssl/statem/statem_lib.c",uVar6);
  return 0;
}


