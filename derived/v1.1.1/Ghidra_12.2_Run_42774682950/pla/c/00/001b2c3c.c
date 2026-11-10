/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b2c3c; name: FUN_001b2c3c
 */


void FUN_001b2c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uVar2 = *param_4;
  *(undefined8 *)((long)puVar1 + 7) = *(undefined8 *)((long)param_4 + 7);
  *puVar1 = uVar2;
  uVar2 = param_4[2];
  puVar1[3] = param_4[3];
  puVar1[2] = uVar2;
  uVar2 = param_4[4];
  puVar1[5] = param_4[5];
  puVar1[4] = uVar2;
  FUN_001c3964(*(undefined8 *)(param_1 + 0x18),param_2,param_3,0,0);
  return;
}


