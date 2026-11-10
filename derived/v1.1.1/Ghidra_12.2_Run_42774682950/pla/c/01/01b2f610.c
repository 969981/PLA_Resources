/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b2f610; name: FUN_01b2f610
 */


void FUN_01b2f610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 *local_38;
  
  lVar1 = FUN_01b369dc();
  puVar2 = auStack_40 + -(lVar1 + 0x10U & 0xfffffffffffffff0);
  local_38 = puVar2;
  *puVar2 = 0;
  FUN_01b36a24(puVar2,param_2,param_3,param_4);
  FUN_009313e8(param_1,&local_38);
  return;
}


