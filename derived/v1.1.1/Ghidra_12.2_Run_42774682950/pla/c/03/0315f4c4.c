/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315f4c4; name: FUN_0315f4c4
 */


void FUN_0315f4c4(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[2];
  if (iVar1 < 0) {
    FUN_0315fec8(param_1);
    iVar1 = (int)param_1[2];
  }
  puVar2 = (undefined8 *)(*param_1 + (long)iVar1 * 0x18);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)puVar2 + 0xc);
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  return;
}


