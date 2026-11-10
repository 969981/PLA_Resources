/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e39f0; name: FUN_004e39f0
 */


undefined8
FUN_004e39f0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00400260(0x18,"external/openssl/ssl/statem/extensions_cust.c",0x1a0);
  puVar2 = (undefined8 *)FUN_00400260(0x10,"external/openssl/ssl/statem/extensions_cust.c",0x1a2);
  if ((puVar1 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0x0)) {
    FUN_00400420(puVar1,"external/openssl/ssl/statem/extensions_cust.c",0x1a6);
    uVar3 = 0x1a7;
  }
  else {
    *puVar1 = param_6;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    *puVar2 = param_8;
    puVar2[1] = param_7;
    uVar3 = FUN_004e3b80(*(undefined8 *)(param_1 + 0x140),param_2,param_3,0x1d0,&LAB_004e3900,
                         &LAB_004e3d50,puVar1,&LAB_004e3d70,puVar2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    FUN_00400420(puVar1,"external/openssl/ssl/statem/extensions_cust.c",0x1ba);
    uVar3 = 0x1bb;
  }
  FUN_00400420(puVar2,"external/openssl/ssl/statem/extensions_cust.c",uVar3);
  return 0;
}


