/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042e880; name: FUN_0042e880
 */


undefined8 FUN_0042e880(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (*(code **)(lVar4 + 0xd8) == (code *)0x0) {
    uVar2 = 0x42;
    uVar3 = 0x362;
  }
  else {
    if (lVar4 == *param_2) {
      iVar1 = (int)param_1[4];
      if ((((iVar1 == 0) || ((int)param_2[1] == 0)) || (iVar1 == (int)param_2[1])) &&
         ((lVar4 == *param_3 &&
          (((iVar1 == 0 || ((int)param_3[1] == 0)) || (iVar1 == (int)param_3[1])))))) {
                    /* WARNING: Could not recover jumptable at 0x0042e918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0xd8))();
        return uVar2;
      }
    }
    uVar2 = 0x65;
    uVar3 = 0x366;
  }
  FUN_004014b0(0x10,0x71,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
  return 0xffffffff;
}


