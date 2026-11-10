/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f19a7c; name: FUN_02f19a7c
 */


undefined8 FUN_02f19a7c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar1 = param_1;
    lVar4 = lVar3;
    do {
      if (*(long *)(lVar4 + 0x18) == param_2) {
        uVar2 = FUN_02f19998(lVar1,lVar4 + 8,param_3);
        if ((uVar2 & 1) == 0) {
          return 1;
        }
        lVar3 = *(long *)(param_1 + 0x10);
        uVar2 = (ulong)*(uint *)(param_1 + 0x18);
      }
      lVar4 = lVar4 + 0x20;
      lVar1 = 0;
    } while (lVar4 != lVar3 + uVar2 * 0x20);
  }
  return 0;
}


