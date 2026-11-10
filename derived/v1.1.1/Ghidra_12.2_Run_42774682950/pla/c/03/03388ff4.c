/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03388ff4; name: FUN_03388ff4
 */


long FUN_03388ff4(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*(long *)*param_1 + 0x30))();
  if ((lVar2 == 0) || (iVar1 = FUN_032e8598(param_1 + 1,lVar2), iVar1 != param_3)) {
    lVar2 = 0;
  }
  return lVar2;
}


