/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041d030; name: FUN_0041d030
 */


undefined8
FUN_0041d030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  puVar1 = &uStack_18;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  iVar2 = FUN_0041d100(puVar1);
  if (iVar2 < 1) {
    FUN_00421a80(puVar1,param_4);
    return 0;
  }
  return *puVar1;
}


