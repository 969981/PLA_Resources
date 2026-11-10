/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042ebc0; name: FUN_0042ebc0
 */


undefined8
FUN_0042ebc0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 0x90) == 0) {
    uVar2 = 0x42;
    uVar3 = 0x2f1;
  }
  else {
    if (lVar4 == *param_2) {
      iVar1 = (int)param_1[4];
      if (((iVar1 == 0) || ((int)param_2[1] == 0)) || (iVar1 == (int)param_2[1])) {
        if (*(code **)(lVar4 + 200) == (code *)0x0) {
          uVar2 = 0x42;
          uVar3 = 0x33f;
        }
        else {
          if (((iVar1 == 0) || ((int)param_2[1] == 0)) || (iVar1 == (int)param_2[1])) {
            iVar1 = (**(code **)(lVar4 + 200))(param_1,param_2);
            if (iVar1 != 0) {
              uVar2 = 0x6a;
              uVar3 = 0x2f9;
              goto LAB_0042ec14;
            }
            goto LAB_0042ecd0;
          }
          uVar2 = 0x65;
          uVar3 = 0x343;
        }
        FUN_004014b0(0x10,0x76,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
LAB_0042ecd0:
                    /* WARNING: Could not recover jumptable at 0x0042ecf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4,param_5);
        return uVar2;
      }
    }
    uVar2 = 0x65;
    uVar3 = 0x2f5;
  }
LAB_0042ec14:
  FUN_004014b0(0x10,0x125,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
  return 0;
}


