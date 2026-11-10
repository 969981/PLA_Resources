/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f9b98; name: FUN_010f9b98
 */


void FUN_010f9b98(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  for (plVar2 = *(long **)(param_1 + 0x5688); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    puVar1 = (undefined8 *)plVar2[3];
    puVar3 = puVar1 + 1;
    FUN_010fdc48(puVar1,*puVar3);
    puVar1[6] = 0;
    *puVar1 = puVar3;
    *puVar3 = 0;
  }
  memset((void *)(param_1 + 0x68),0,0x2d50);
  return;
}


