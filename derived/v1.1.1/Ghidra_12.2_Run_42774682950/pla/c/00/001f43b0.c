/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f43b0; name: FUN_001f43b0
 */


undefined8 FUN_001f43b0(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0xe8);
  if (puVar2 == (uint *)0x0) {
    uVar1 = 3;
  }
  else {
    if (((*puVar2 & 1 << (ulong)(param_2 & 0x1f)) != 0) && (*(code **)(puVar2 + 2) != (code *)0x0))
    {
      (**(code **)(puVar2 + 2))();
    }
    uVar1 = 0;
  }
  return uVar1;
}


