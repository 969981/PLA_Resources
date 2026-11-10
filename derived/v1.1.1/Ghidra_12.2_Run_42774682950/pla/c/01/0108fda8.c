/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108fda8; name: FUN_0108fda8
 */


undefined8 FUN_0108fda8(undefined8 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_02c5be58();
  if (param_2 < (uVar1 & 0xff)) {
    uVar1 = FUN_02c601d4(param_1,param_2);
    uVar2 = FUN_02c602a0(param_1,param_2);
    if (uVar1 < uVar2) {
      FUN_02c60528(param_1,param_2,param_3);
      return 1;
    }
  }
  return 0;
}


