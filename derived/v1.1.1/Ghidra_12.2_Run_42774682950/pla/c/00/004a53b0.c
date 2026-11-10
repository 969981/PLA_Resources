/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004a53b0; name: FUN_004a53b0
 */


bool FUN_004a53b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar4 = FUN_0042d4f0();
  uVar5 = FUN_0042e350();
  local_60 = 0;
  local_58 = 0;
  lVar6 = FUN_0040de30();
  lVar7 = FUN_0042df90(uVar4);
  if ((lVar6 == 0) || (lVar7 == 0)) {
    uVar4 = 0x41;
    uVar5 = 0x12e;
  }
  else {
    FUN_0040e090(lVar6);
    uVar8 = FUN_0040e240(lVar6);
    lVar9 = FUN_0040e240(lVar6);
    if (lVar9 == 0) {
      uVar4 = 0x41;
      uVar5 = 0x136;
    }
    else {
      FUN_0043c250(param_2,&local_58,&local_60);
      uVar1 = local_58;
      uVar10 = FUN_0040bfc0();
      iVar3 = FUN_0040cc60(uVar1,uVar10);
      uVar1 = local_60;
      if (-1 < iVar3) {
        uVar10 = FUN_0040bfc0();
        iVar3 = FUN_0040cc60(uVar1,uVar10);
        if (((-1 < iVar3) && (iVar3 = FUN_0040cc60(uVar5,local_58), 0 < iVar3)) &&
           (iVar3 = FUN_0040cc60(uVar5,local_60), 0 < iVar3)) {
          iVar3 = FUN_00412cb0(uVar8,local_58,local_60,uVar5,lVar6);
          if (iVar3 == 0) {
            uVar5 = 0x14f;
LAB_004a556c:
            uVar4 = 3;
          }
          else {
            iVar3 = FUN_0040c130(uVar8);
            uVar1 = local_60;
            if (iVar3 == 0) {
              uVar10 = FUN_0042d570(param_1);
              iVar3 = FUN_0042f280(uVar4,lVar7,uVar1,uVar10,uVar8,lVar6);
              if ((iVar3 != 0) && (iVar3 = FUN_0042ebc0(uVar4,lVar7,lVar9,0,lVar6), iVar3 != 0)) {
                iVar3 = FUN_00412cb0(uVar8,param_3,lVar9,uVar5,lVar6);
                if (iVar3 != 0) {
                  iVar3 = FUN_0040cc60(local_58,uVar8);
                  bVar2 = iVar3 == 0;
                  goto LAB_004a5528;
                }
                uVar5 = 0x15f;
                goto LAB_004a556c;
              }
              uVar5 = 0x15a;
              uVar4 = 0x10;
            }
            else {
              uVar4 = 0x65;
              uVar5 = 0x154;
            }
          }
          goto LAB_004a5520;
        }
      }
      uVar4 = 0x65;
      uVar5 = 0x14a;
    }
  }
LAB_004a5520:
  FUN_004014b0(0x35,0x6b,uVar4,"external/openssl/crypto/sm2/sm2_sign.c",uVar5);
  bVar2 = false;
LAB_004a5528:
  FUN_0042db80(lVar7);
  FUN_0040def0(lVar6);
  return bVar2;
}


