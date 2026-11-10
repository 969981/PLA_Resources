/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042ea00; name: FUN_0042ea00
 */


undefined8
FUN_0042ea00(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(*param_1 + 0x88);
  if (pcVar4 == (code *)0x0) {
    uVar2 = 0x42;
    uVar3 = 0x2c8;
    goto LAB_0042ea50;
  }
  if ((*param_1 != *param_2) ||
     ((((int)param_1[4] != 0 && ((int)param_2[1] != 0)) && ((int)param_1[4] != (int)param_2[1])))) {
    uVar2 = 0x65;
    uVar3 = 0x2cc;
    goto LAB_0042ea50;
  }
  uVar2 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  pcVar4 = *(code **)(*param_1 + 0xd0);
  if (pcVar4 == (code *)0x0) {
    uVar2 = 0x42;
    uVar3 = 0x354;
LAB_0042eae0:
    FUN_004014b0(0x10,0x77,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
  }
  else {
    if ((*param_1 != *param_2) ||
       ((((int)param_1[4] != 0 && ((int)param_2[1] != 0)) && ((int)param_1[4] != (int)param_2[1]))))
    {
      uVar2 = 0x65;
      uVar3 = 0x358;
      goto LAB_0042eae0;
    }
    iVar1 = (*pcVar4)(param_1,param_2,param_5);
    if (0 < iVar1) {
      return 1;
    }
  }
  uVar2 = 0x6b;
  uVar3 = 0x2d3;
LAB_0042ea50:
  FUN_004014b0(0x10,0x126,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
  return 0;
}


