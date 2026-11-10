/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422c30; name: FUN_00422c30
 */


undefined4 FUN_00422c30(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long local_28;
  
  lVar2 = FUN_00405200(param_3,&local_28);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (local_28 < 0x80000000) {
      uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,param_2,local_28,lVar2);
    }
    else {
      uVar1 = 0xffffffff;
    }
    FUN_00400420(lVar2,"external/openssl/crypto/evp/pmeth_lib.c",0x1bb);
  }
  return uVar1;
}


