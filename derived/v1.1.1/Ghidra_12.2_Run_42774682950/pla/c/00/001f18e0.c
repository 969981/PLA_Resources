/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f18e0; name: FUN_001f18e0
 */


void FUN_001f18e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    FUN_001ec82c(param_1 + 0x220);
    FUN_001ec82c(param_1 + 0x230);
    lVar2 = *(long *)(param_1 + 0x290);
    lVar1 = *(long *)(param_1 + 0x288);
    while (lVar2 != 0) {
      FUN_002044d4(*(undefined8 *)(lVar1 + lVar2 * 8 + -8));
      lVar2 = *(long *)(param_1 + 0x290) + -1;
      lVar1 = *(long *)(param_1 + 0x288);
      *(long *)(param_1 + 0x290) = lVar2;
    }
    FUN_002044d4();
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  return;
}


