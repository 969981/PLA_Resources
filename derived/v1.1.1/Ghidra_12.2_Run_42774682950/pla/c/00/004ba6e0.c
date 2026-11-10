/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ba6e0; name: FUN_004ba6e0
 */


undefined8 FUN_004ba6e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = param_2[0x17];
  uVar3 = (ulong)uVar2;
  puVar1 = param_2 + 7;
  *(undefined1 *)((long)puVar1 + uVar3) = 0x80;
  lVar4 = uVar3 + 1;
  if (0x37 < uVar2) {
    memset((void *)((long)puVar1 + lVar4),0,0x3f - uVar3);
    FUN_004b9070(param_2,puVar1,1);
    lVar4 = 0;
  }
  memset((void *)((long)puVar1 + lVar4),0,0x38 - lVar4);
  param_2[0x15] = param_2[5];
  param_2[0x16] = param_2[6];
  FUN_004b9070(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_004006a0(puVar1,0x40);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return 1;
}


