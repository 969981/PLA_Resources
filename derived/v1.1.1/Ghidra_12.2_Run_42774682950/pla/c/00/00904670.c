/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00904670; name: FUN_00904670
 */


undefined8 FUN_00904670(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = lVar2 + ((ulong)(uint)-(int)lVar2 & 7) + 8;
  puVar1 = (undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  puVar3 = puVar1 + 1;
  (*(code *)*puVar1)((long)puVar3 + ((ulong)(uint)-(int)puVar3 & 7) + 8);
  return 0;
}


