/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e45aac; name: FUN_02e45aac
 */


void FUN_02e45aac(long param_1)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    do {
      puVar2 = puVar1 + 1;
      FUN_02e465cc(*puVar1,param_1,0);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}


