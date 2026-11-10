/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee25f4; name: FUN_02ee25f4
 */


uint FUN_02ee25f4(long *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (puVar3 = *(uint **)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8);
        (puVar3 != (uint *)0x0 && (*puVar3 != param_2)); puVar3 = *(uint **)(puVar3 + 2)) {
    }
  }
  if (param_3 != 0) {
    *(bool *)param_3 = puVar3 != (uint *)0x0;
  }
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  return puVar3[4];
}


