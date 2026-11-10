/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00250fb0; name: FUN_00250fb0
 */


long FUN_00250fb0(long param_1,uint param_2)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((int)param_2 < 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    uVar3 = (ulong)param_2;
    puVar4 = (undefined8 *)(param_1 + 0x50);
    do {
      sVar1 = strlen((char *)*puVar4);
      lVar2 = lVar2 + sVar1 + 1;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  return lVar2;
}


