/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044d3b0; name: FUN_0044d3b0
 */


undefined8 FUN_0044d3b0(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  
  uVar4 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00407950(param_2);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar3 = FUN_00407970(param_2,iVar1);
        pbVar5 = *(byte **)(lVar3 + 8);
        pbVar7 = pbVar5 + 1;
        bVar8 = *pbVar5;
        if (0x2d < bVar8) goto LAB_0044d428;
        while (bVar8 != 0) {
          pbVar6 = pbVar7;
          if (bVar8 == 0x2c) {
LAB_0044d438:
            if (*pbVar7 != 0) {
              pbVar5 = pbVar7;
            }
            break;
          }
          while( true ) {
            pbVar7 = pbVar6 + 1;
            bVar8 = *pbVar6;
            if (bVar8 < 0x2e) break;
LAB_0044d428:
            if ((bVar8 == 0x2e) || (pbVar6 = pbVar7, bVar8 == 0x3a)) goto LAB_0044d438;
          }
        }
        pbVar7 = pbVar5 + 1;
        if (*pbVar5 != 0x2b) {
          pbVar7 = pbVar5;
        }
        uVar4 = FUN_0044a460(param_1,pbVar7,param_3,*(undefined8 *)(lVar3 + 0x10),0xffffffff,
                             0xffffffff,-(uint)(*pbVar5 == 0x2b));
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_00407950(param_2);
      } while (iVar1 < iVar2);
    }
    uVar4 = 1;
  }
  return uVar4;
}


