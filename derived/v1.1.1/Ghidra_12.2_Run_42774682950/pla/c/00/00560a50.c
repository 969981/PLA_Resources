/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00560a50; name: FUN_00560a50
 */


undefined8 FUN_00560a50(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar3) {
    lVar2 = *(long *)(param_1 + 8);
    do {
      uVar1 = uVar3 >> 1;
      if (*(int *)(lVar2 + (ulong)uVar1 * 8 + 4) < param_2) {
        lVar2 = lVar2 + (ulong)(uVar1 + 1) * 8;
        uVar3 = uVar3 - (uVar1 + 1);
      }
      else {
        uVar3 = uVar1;
        if (*(int *)(lVar2 + (ulong)uVar1 * 8) <= param_2) {
          return 1;
        }
      }
    } while (0 < (int)uVar3);
  }
  return 0;
}


