/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008280b4; name: FUN_008280b4
 */


undefined8 FUN_008280b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  FUN_0083fd74(auStack_50,param_2);
  FUN_007f0fc8(auStack_30,auStack_50);
  uVar1 = FUN_00827f08(param_1,auStack_30);
  FUN_007e34a4(auStack_30);
  return uVar1;
}


