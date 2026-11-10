/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0264b430; name: FUN_0264b430
 */


void FUN_0264b430(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 1) {
    FUN_01a51334(param_1,&DAT_03a7dbe8,1);
    FUN_01a4f4d4(param_1,&DAT_03a7dbf0,1);
    puVar1 = &DAT_03a7dbf8;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    FUN_01a51334(param_1,&DAT_03a7dbd0,1);
    FUN_01a4f4d4(param_1,&DAT_03a7dbd8,1);
    puVar1 = &DAT_03a7dbe0;
  }
  FUN_01a4f4d4(param_1,puVar1,0);
  return;
}


