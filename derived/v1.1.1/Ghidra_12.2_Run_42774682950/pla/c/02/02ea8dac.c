/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8dac; name: FUN_02ea8dac
 */


undefined8 FUN_02ea8dac(int *param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 == 1) {
    puVar3 = *(undefined4 **)(param_1 + 2);
    uVar1 = *(ushort *)((long)puVar3 + 6);
    if (((ulong)uVar1 != 0) && (FUN_02ea8e34(param_2,*puVar3,puVar3 + 1), uVar1 != 1)) {
      lVar4 = (ulong)uVar1 - 1;
      lVar5 = 0xc;
      do {
        FUN_02ea8e34(param_2,*(undefined4 *)(*(long *)(param_1 + 2) + lVar5),
                     (undefined4 *)(*(long *)(param_1 + 2) + lVar5) + 1);
        lVar5 = lVar5 + 0xc;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


