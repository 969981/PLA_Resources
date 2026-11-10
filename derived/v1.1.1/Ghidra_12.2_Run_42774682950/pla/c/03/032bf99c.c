/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bf99c; name: FUN_032bf99c
 */


void FUN_032bf99c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)**(undefined8 **)(param_2 + 0x10);
  *param_1 = puVar2;
  param_1[1] = puVar2 + 8;
  uVar1 = *puVar2;
  *(undefined4 *)(param_1 + 2) = 0x7fffffff;
  *(uint *)((long)param_1 + 0x14) = uVar1 & 0xffff;
  if ((uVar1 & 0xffff) == 0) {
    param_1[1] = 0;
  }
  return;
}


