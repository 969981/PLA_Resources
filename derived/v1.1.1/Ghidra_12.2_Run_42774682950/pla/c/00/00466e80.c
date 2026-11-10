/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00466e80; name: FUN_00466e80
 */


long FUN_00466e80(undefined4 param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  
  local_38 = *param_3;
  if (((param_2 == (long *)0x0) || (lVar6 = *param_2, lVar6 == 0)) &&
     (lVar6 = FUN_004230e0(), lVar6 == 0)) {
    FUN_004014b0(0xd,0x9a,6,"external/openssl/crypto/asn1/d2i_pr.c",0x1d);
    return 0;
  }
  iVar1 = FUN_00422f40(lVar6,param_1);
  if (iVar1 == 0) {
    uVar3 = 0xa3;
    uVar4 = 0x29;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x10);
    if (*(code **)(lVar5 + 0xb8) != (code *)0x0) {
      iVar1 = (**(code **)(lVar5 + 0xb8))(lVar6,&local_38,param_4 & 0xffffffff);
      if (iVar1 != 0) {
        *param_3 = local_38;
        lVar5 = lVar6;
        goto joined_r0x00466ef8;
      }
      lVar5 = *(long *)(lVar6 + 0x10);
    }
    if (*(long *)(lVar5 + 0x40) != 0) {
      lVar2 = FUN_00466240(0,&local_38,param_4);
      if (lVar2 != 0) {
        lVar5 = FUN_00466110();
        FUN_00466250(lVar2);
        if (lVar5 != 0) {
          FUN_00423420(lVar6);
          *param_3 = local_38;
joined_r0x00466ef8:
          if (param_2 == (long *)0x0) {
            return lVar5;
          }
          *param_2 = lVar5;
          return lVar5;
        }
      }
      goto LAB_00466fb0;
    }
    uVar3 = 0xd;
    uVar4 = 0x3c;
  }
  FUN_004014b0(0xd,0x9a,uVar3,"external/openssl/crypto/asn1/d2i_pr.c",uVar4);
LAB_00466fb0:
  if ((param_2 == (long *)0x0) || (*param_2 != lVar6)) {
    FUN_00423420(lVar6);
  }
  return 0;
}


