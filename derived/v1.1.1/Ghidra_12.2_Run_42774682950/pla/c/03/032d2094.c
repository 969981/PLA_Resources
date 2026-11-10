/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d2094; name: FUN_032d2094
 */


void FUN_032d2094(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if (puVar1 < *(undefined8 **)(param_1 + 0x50)) {
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
      *(long *)(param_1 + 0x48) = (long)puVar1 + *(long *)(param_1 + 0x10);
    }
    else {
      puVar1 = (undefined8 *)FUN_032ce020((ulong *)(param_1 + 8));
    }
  }
  else {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
    *(undefined8 *)(param_1 + 8) = *puVar1;
  }
  if (param_3 != (undefined8 *)0x0) {
    if (puVar1 == (undefined8 *)0x0) {
      param_2 = 0;
    }
    *param_3 = param_2;
  }
  return;
}


