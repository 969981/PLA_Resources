/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00250f00; name: FUN_00250f00
 */


ulong FUN_00250f00(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = 0;
  FUN_00876ba8(&local_40);
  local_40 = CONCAT44(param_2,(int)param_3);
  lVar1 = FUN_00877190(param_1,&local_40);
  return (param_3 + lVar1) - 1U & -lVar1;
}


