/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9cd78; name: FUN_02e9cd78
 */


undefined8 FUN_02e9cd78(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = **(long **)(*(long *)(param_1 + 0x10) + 0x38);
  if (param_2 < *(ushort *)(lVar3 + 0x38)) {
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x20) + (ulong)param_2 * 0x28);
    *param_3 = *puVar4;
    uVar5 = puVar4[3];
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar4 + 4);
    param_3[1] = uVar1;
    param_3[2] = uVar2;
    param_3[3] = uVar5;
    return 1;
  }
  return 2;
}


