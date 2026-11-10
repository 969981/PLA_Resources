/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b7500; name: FUN_005b7500
 */


undefined8 FUN_005b7500(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (1 < uVar2) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar5 = param_1 + 0x20;
      if ((uVar2 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x20);
      }
      uVar1 = rand();
      if (uVar1 % 1000000 < *(uint *)(lVar5 + lVar3 + 0x18)) {
        *param_2 = lVar5 + lVar3;
        return 1;
      }
      uVar2 = *(ulong *)(param_1 + 0x18);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < uVar2 >> 1);
  }
  return 0;
}


