/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dac2fc; name: FUN_00dac2fc
 */


undefined8 FUN_00dac2fc(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  FUN_00dafbe8(param_1,"trainerid",*(undefined8 *)(lVar1 + 0x368));
  FUN_00dafb54(param_1,"result",*(undefined4 *)(lVar2 + 0x54));
  if (*(long *)(lVar1 + 0x58) != 0) {
    FUN_00dac3c4(param_1,1);
  }
  if (*(long *)(lVar1 + 0x60) != 0) {
    FUN_00dac3c4(param_1,2);
  }
  if (*(long *)(lVar1 + 0x68) != 0) {
    FUN_00dac3c4(param_1,3);
  }
  if (*(long *)(lVar1 + 0x70) != 0) {
    FUN_00dac3c4(param_1,4);
  }
  if (*(long *)(lVar1 + 0x78) != 0) {
    FUN_00dac3c4(param_1,5);
  }
  if (*(long *)(lVar1 + 0x80) != 0) {
    FUN_00dac3c4(param_1,6);
  }
  return param_1;
}


