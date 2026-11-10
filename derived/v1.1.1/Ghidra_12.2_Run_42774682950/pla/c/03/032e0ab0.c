/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e0ab0; name: FUN_032e0ab0
 */


undefined1  [16] FUN_032e0ab0(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  if (((param_1 != 0) &&
      (puVar3 = (undefined8 *)FUN_032e2050(param_2,0x800), auVar4 = auVar1,
      puVar3 != (undefined8 *)0x0)) && (auVar4 = auVar2, (code *)*puVar3 != (code *)0x0)) {
    auVar4 = (*(code *)*puVar3)(param_1);
  }
  return auVar4;
}


