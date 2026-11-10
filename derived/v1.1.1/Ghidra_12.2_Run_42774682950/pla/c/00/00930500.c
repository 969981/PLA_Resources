/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00930500; name: FUN_00930500
 */


void FUN_00930500(undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_a0 [128];
  undefined1 *local_18;
  
  puVar1 = auStack_a0 +
           (0x80 - (*(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10) + 0x10U &
                   0xfffffffffffffff0));
  local_18 = puVar1;
  *puVar1 = 0;
  FUN_009313c0(puVar1,param_2);
  FUN_009313e8(param_1,&local_18);
  return;
}


