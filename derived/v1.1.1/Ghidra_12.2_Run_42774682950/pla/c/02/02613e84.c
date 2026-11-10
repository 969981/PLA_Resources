/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02613e84; name: FUN_02613e84
 */


bool FUN_02613e84(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)FUN_02613f40(*param_2,param_2[1],*(undefined8 *)param_1[1]);
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != puVar2) {
    (**(code **)(*(long *)*puVar2 + 0x70))();
    *(undefined1 *)(lVar1 + 0x123) = 1;
  }
  return puVar3 != puVar2;
}


