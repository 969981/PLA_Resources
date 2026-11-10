/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00433e90; name: FUN_00433e90
 */


undefined8 FUN_00433e90(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int local_38 [6];
  
  iVar4 = FUN_0040c130(param_3);
  if (iVar4 != 0) goto LAB_00433eb4;
  iVar4 = (int)param_3[1];
  if (iVar4 < 1) {
    iVar6 = 0;
LAB_00433f78:
    local_38[iVar6] = -1;
    iVar6 = iVar6 + 1;
  }
  else {
    lVar8 = *param_3;
    iVar6 = 0;
    iVar2 = iVar4 * 0x20 + -1;
    lVar7 = (long)iVar4 + -1;
    uVar1 = *(uint *)(lVar8 + lVar7 * 4);
    while( true ) {
      if (uVar1 != 0) {
        iVar4 = 0;
        uVar9 = 0x80000000;
        uVar3 = uVar1 & 0x80000000;
        while( true ) {
          if (uVar3 != 0) {
            if (iVar6 < 6) {
              local_38[iVar6] = iVar2 + iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          if (iVar4 == -0x1f) break;
          uVar9 = uVar9 >> 1;
          iVar4 = iVar4 + -1;
          uVar3 = (uint)uVar9 & uVar1;
        }
      }
      iVar2 = iVar2 + -0x20;
      if (lVar7 < 1) break;
      lVar7 = lVar7 + -1;
      uVar1 = *(uint *)(lVar8 + lVar7 * 4);
    }
    if (iVar6 < 6) goto LAB_00433f78;
  }
  if ((iVar6 != 0) && (iVar6 < 7)) {
    uVar5 = FUN_00433be0(param_1,param_2,local_38);
    return uVar5;
  }
LAB_00433eb4:
  FUN_004014b0(3,0x83,0x6a,"external/openssl/crypto/bn/bn_gf2m.c",0x18e);
  return 0;
}


