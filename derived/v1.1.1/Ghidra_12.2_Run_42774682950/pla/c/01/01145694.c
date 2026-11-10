/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01145694; name: FUN_01145694
 */


void FUN_01145694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_b0 [128];
  undefined1 *local_28;
  
  lVar1 = FUN_011456fc();
  puVar2 = auStack_b0 + (0x80 - (lVar1 + 0x10U & 0xfffffffffffffff0));
  local_28 = puVar2;
  *puVar2 = 0;
  FUN_01145734(puVar2,param_2,param_3);
  FUN_009313e8(param_1,&local_28);
  return;
}


