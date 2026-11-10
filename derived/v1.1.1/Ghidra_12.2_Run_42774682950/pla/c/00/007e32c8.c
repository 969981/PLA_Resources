/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e32c8; name: FUN_007e32c8
 */


void FUN_007e32c8(int param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04377408;
  if (param_1 - 2U < 0x13) {
    lVar3 = *(long *)(&DAT_03a71528 + (long)(int)(param_1 - 2U) * 8);
  }
  else {
    lVar3 = 0x13;
  }
  plVar2 = *(long **)(PTR_DAT_04377408 + lVar3 * 8);
  if ((int)plVar2[0x20] != 0) {
    (**(code **)(*plVar2 + 0xb0))();
    plVar2 = *(long **)(puVar1 + lVar3 * 8);
  }
  (**(code **)(*plVar2 + 0x20))();
  *(undefined8 *)(puVar1 + lVar3 * 8) = 0;
  return;
}


