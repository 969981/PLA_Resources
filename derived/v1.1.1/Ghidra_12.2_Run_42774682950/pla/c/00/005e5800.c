/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e5800; name: FUN_005e5800
 */


undefined8 FUN_005e5800(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *local_28;
  
  lVar1 = FUN_004fcc40(param_2);
  if (lVar1 == 0) {
    uVar2 = FUN_00595070(param_1,param_2,0);
    return uVar2;
  }
  local_28 = "grpc.channel_credentials";
  uVar2 = FUN_002e45c0(param_2,&local_28,1);
  uVar3 = FUN_005b5a40(lVar1,param_1,uVar2,0);
  FUN_002e4a10(uVar2);
  return uVar3;
}


