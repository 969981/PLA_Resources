/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043c620; name: FUN_0043c620
 */


bool FUN_0043c620(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  FUN_004016d0();
  if (param_5 == 0) {
    param_5 = FUN_0040de30();
    lVar10 = param_5;
    if (param_5 == 0) {
      return false;
    }
  }
  else {
    lVar10 = 0;
  }
  FUN_0040e090(param_5);
  uVar5 = FUN_0040e240(param_5);
  uVar6 = FUN_0040e240(param_5);
  uVar7 = FUN_0040e240(param_5);
  lVar8 = FUN_0040e240(param_5);
  if (lVar8 != 0) {
    plVar1 = param_1 + 9;
    iVar3 = FUN_00433be0(uVar6,param_3,plVar1);
    if (iVar3 != 0) {
      iVar3 = FUN_0040c130(uVar6);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*param_1 + 0x110))(param_1,uVar5,uVar6,param_5);
        if ((((iVar3 != 0) &&
             (iVar3 = (**(code **)(*param_1 + 0x118))(param_1,uVar5,param_1[0xd],uVar5,param_5),
             iVar3 != 0)) && (iVar3 = FUN_00433b10(uVar5,param_1[0xc],uVar5), iVar3 != 0)) &&
           (iVar3 = FUN_00433b10(uVar5,uVar6,uVar5), iVar3 != 0)) {
          iVar3 = FUN_004352f0(lVar8,uVar5,plVar1,param_5);
          if (iVar3 == 0) {
            uVar9 = FUN_00401a70();
            if ((uVar9 & 0xff000fff) == 0x3000074) {
              FUN_004016d0();
              uVar5 = 0x6e;
              uVar6 = 0x52;
            }
            else {
              uVar6 = 0x55;
              uVar5 = 3;
            }
            FUN_004014b0(0x10,0xa4,uVar5,"external/openssl/crypto/ec/ec2_oct.c",uVar6);
          }
          else {
            iVar3 = FUN_0040d2b0(lVar8);
            iVar4 = (**(code **)(*param_1 + 0x108))(param_1,uVar7,uVar6,lVar8,param_5);
            if (iVar4 != 0) {
              if ((param_4 != 0) != (iVar3 != 0)) {
                iVar3 = FUN_00433b10(uVar7,uVar7,uVar6);
                goto joined_r0x0043c7ec;
              }
              goto LAB_0043c6e4;
            }
          }
        }
      }
      else {
        iVar3 = FUN_00435250(uVar7,param_1[0xd],plVar1,param_5);
joined_r0x0043c7ec:
        if (iVar3 != 0) {
LAB_0043c6e4:
          iVar3 = FUN_0042ea00(param_1,param_2,uVar6,uVar7,param_5);
          bVar2 = iVar3 != 0;
          goto LAB_0043c850;
        }
      }
    }
  }
  bVar2 = false;
LAB_0043c850:
  FUN_0040e1b0(param_5);
  FUN_0040def0(lVar10);
  return bVar2;
}


