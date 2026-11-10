/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015cc60; name: FUN_0015cc60
 */


void FUN_0015cc60(long param_1,byte param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  puVar2 = (undefined8 *)FUN_00161510(param_1,0,param_2 & 0xf,param_3);
  bVar1 = *(byte *)(lVar3 + 0x54);
  *(byte *)(puVar2 + 1) = param_2;
  *(byte *)((long)puVar2 + 9) = bVar1 & 3;
  *puVar2 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 **)(lVar3 + 0x58) = puVar2;
  return;
}


