/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00434750; name: FUN_00434750
 */


int FUN_00434750(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  
  iVar4 = FUN_0040c070(param_4);
  uVar1 = iVar4 + 1;
  lVar6 = FUN_00400260(-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2,
                       "external/openssl/crypto/bn/bn_gf2m.c",0x1da);
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_0040c130(param_4);
    if (iVar5 == 0) {
      iVar9 = (int)param_4[1];
      if (iVar9 < 1) {
        iVar5 = 0;
      }
      else {
        lVar8 = *param_4;
        iVar5 = 0;
        iVar3 = iVar9 * 0x20 + -1;
        lVar7 = (long)iVar9 + -1;
        uVar2 = *(uint *)(lVar8 + lVar7 * 4);
        while( true ) {
          if (uVar2 != 0) {
            iVar9 = 0;
            uVar10 = 0x80000000;
            uVar2 = uVar2 & 0x80000000;
            while( true ) {
              if (uVar2 != 0) {
                if (iVar5 <= iVar4) {
                  *(int *)(lVar6 + (long)iVar5 * 4) = iVar3 + iVar9;
                }
                iVar5 = iVar5 + 1;
              }
              if (iVar9 == -0x1f) break;
              uVar10 = uVar10 >> 1;
              iVar9 = iVar9 + -1;
              uVar2 = (uint)uVar10 & *(uint *)(lVar8 + lVar7 * 4);
            }
          }
          iVar3 = iVar3 + -0x20;
          if (lVar7 < 1) break;
          lVar7 = lVar7 + -1;
          uVar2 = *(uint *)(lVar8 + lVar7 * 4);
        }
      }
      if (iVar5 <= iVar4) {
        *(undefined4 *)(lVar6 + (long)iVar5 * 4) = 0xffffffff;
        iVar5 = iVar5 + 1;
      }
      if ((iVar5 != 0) && (iVar5 <= (int)uVar1)) {
        iVar5 = FUN_004340a0(param_1,param_2,param_3,lVar6,param_5);
        goto LAB_004348a0;
      }
    }
    else {
      iVar5 = 0;
    }
    FUN_004014b0(3,0x85,0x6a,"external/openssl/crypto/bn/bn_gf2m.c",0x1de);
  }
LAB_004348a0:
  FUN_00400420(lVar6,"external/openssl/crypto/bn/bn_gf2m.c",0x1e4);
  return iVar5;
}


