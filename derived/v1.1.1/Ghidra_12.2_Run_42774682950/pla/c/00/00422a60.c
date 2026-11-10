/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422a60; name: FUN_00422a60
 */


undefined8
FUN_00422a60(undefined8 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) ||
     (*(code **)(piVar3 + 0x30) == (code *)0x0)) {
    uVar1 = 0x174;
  }
  else {
    if ((param_2 != -1) && (*piVar3 != param_2)) {
      return 0xffffffff;
    }
    if (*(long *)(piVar3 + 0x3e) == 0) {
      if (*(uint *)(param_1 + 4) == 0) {
        uVar1 = 0x95;
        uVar2 = 0x17f;
LAB_00422b3c:
        FUN_004014b0(6,0x89,uVar1,"external/openssl/crypto/evp/pmeth_lib.c",uVar2);
        return 0xffffffff;
      }
      if ((param_3 != 0xffffffff) && ((*(uint *)(param_1 + 4) & param_3) == 0)) {
        uVar1 = 0x94;
        uVar2 = 0x184;
        goto LAB_00422b3c;
      }
    }
    uVar1 = (**(code **)(piVar3 + 0x30))(param_1,param_4,param_5,param_6);
    if ((int)uVar1 != -2) {
      return uVar1;
    }
    uVar1 = 0x18c;
  }
  FUN_004014b0(6,0x89,0x93,"external/openssl/crypto/evp/pmeth_lib.c",uVar1);
  return 0xfffffffe;
}


