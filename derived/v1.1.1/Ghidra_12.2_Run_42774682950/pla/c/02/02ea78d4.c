/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea78d4; name: FUN_02ea78d4
 */


undefined8 FUN_02ea78d4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 <= param_2) {
    if ((*(uint *)(param_1 + 0x24) < param_2) &&
       (uVar3 = FUN_02ea7984(param_1,param_2 - uVar2), (uVar3 & 1) == 0)) {
      return 0;
    }
    if (uVar2 < param_2) {
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      lVar5 = (ulong)uVar2 * 0x18;
      do {
        if (*(long *)(param_1 + 0x18) + lVar5 != 0) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar5);
          *puVar1 = 0xffffffffffffffff;
          *(undefined4 *)(puVar1 + 1) = 0;
          *(undefined4 *)(puVar1 + 2) = 0x3f800000;
        }
        lVar4 = lVar4 + -1;
        lVar5 = lVar5 + 0x18;
      } while (lVar4 != 0);
    }
  }
  *(uint *)(param_1 + 0x20) = param_2;
  return 1;
}


