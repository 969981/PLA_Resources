/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043e880; name: FUN_0043e880
 */


undefined8 FUN_0043e880(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 == 0xffffffff) {
    param_3 = (uint)(*(long *)(param_2 + 0x40) != 0);
    lVar3 = *(long *)(param_2 + 8);
  }
  else {
    lVar3 = *(long *)(param_2 + 8);
  }
  if ((lVar3 == 0) ||
     (((iVar1 = FUN_0040c1d0(lVar3,2), iVar1 != 0 && (iVar1 = FUN_0040c1d0(lVar3,1), iVar1 == 0)) ||
      (lVar3 = FUN_0040c480(lVar3), lVar3 != 0)))) {
    FUN_0040c140(*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar3;
    lVar3 = *(long *)(param_2 + 0x10);
    if ((lVar3 != 0) &&
       (((iVar1 = FUN_0040c1d0(lVar3,2), iVar1 == 0 || (iVar1 = FUN_0040c1d0(lVar3,1), iVar1 != 0))
        && (lVar3 = FUN_0040c480(lVar3), lVar3 == 0)))) {
      return 0;
    }
    FUN_0040c140(*(undefined8 *)(param_1 + 0x10));
    *(long *)(param_1 + 0x10) = lVar3;
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    }
    else {
      lVar3 = *(long *)(param_2 + 0x40);
      if (((lVar3 != 0) &&
          ((iVar1 = FUN_0040c1d0(lVar3,2), iVar1 == 0 || (iVar1 = FUN_0040c1d0(lVar3,1), iVar1 != 0)
           ))) && (lVar3 = FUN_0040c480(lVar3), lVar3 == 0)) {
        return 0;
      }
      FUN_0040c140(*(undefined8 *)(param_1 + 0x40));
      *(long *)(param_1 + 0x40) = lVar3;
      lVar3 = *(long *)(param_2 + 0x48);
      if ((lVar3 != 0) &&
         (((iVar1 = FUN_0040c1d0(lVar3,2), iVar1 == 0 || (iVar1 = FUN_0040c1d0(lVar3,1), iVar1 != 0)
           ) && (lVar3 = FUN_0040c480(lVar3), lVar3 == 0)))) {
        return 0;
      }
      FUN_0040c140(*(undefined8 *)(param_1 + 0x48));
      *(long *)(param_1 + 0x48) = lVar3;
      FUN_00400420(*(undefined8 *)(param_1 + 0x50),"external/openssl/crypto/dh/dh_ameth.c",0x197);
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(long *)(param_2 + 0x50) != 0) {
        lVar3 = FUN_00405020(*(long *)(param_2 + 0x50),(long)*(int *)(param_2 + 0x58),
                             "external/openssl/crypto/dh/dh_ameth.c",0x19b);
        *(long *)(param_1 + 0x50) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


