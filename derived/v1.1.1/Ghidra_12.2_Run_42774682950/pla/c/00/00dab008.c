/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dab008; name: FUN_00dab008
 */


undefined8 FUN_00dab008(undefined8 param_1,undefined8 *param_2)

{
  FUN_00dafb54(param_1,"questid",*param_2);
  FUN_00dafb54(param_1,"quest_class",*(byte *)(param_2 + 1) ^ 1);
  return param_1;
}


