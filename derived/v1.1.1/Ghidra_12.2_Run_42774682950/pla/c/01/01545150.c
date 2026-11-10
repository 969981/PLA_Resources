/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01545150; name: FUN_01545150
 */


void FUN_01545150(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_02ad8108();
  local_28 = FUN_02b1f8b0(*puVar1,param_1);
  uVar2 = FUN_02b21278(*puVar1,&local_28);
  if ((uVar2 & 1) != 0) {
    FUN_02b21d38(*puVar1,&local_28,param_2);
  }
  return;
}


