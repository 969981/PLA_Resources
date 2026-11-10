/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec5364; name: FUN_02ec5364
 */


undefined8 FUN_02ec5364(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = FUN_02ec649c();
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    uVar1 = *(uint *)(param_1 + 1);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(param_2 + 0x10) / uVar1;
    }
    lVar5 = (ulong)(*(uint *)(param_2 + 0x10) - uVar2 * uVar1) * 8;
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(*param_1 + lVar5);
    *(long *)(*param_1 + lVar5) = param_2;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return uVar4;
}


