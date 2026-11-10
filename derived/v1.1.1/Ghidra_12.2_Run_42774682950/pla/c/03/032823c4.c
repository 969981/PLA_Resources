/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032823c4; name: FUN_032823c4
 */


void FUN_032823c4(long *param_1,uint param_2)

{
  uint *puVar1;
  long *plVar2;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  
  plVar2 = *(long **)(*param_1 + (long)(int)param_2 * 8);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_50);
  puVar1 = (uint *)(param_1[2] + (long)(int)param_2 * 0x20);
  *puVar1 = (((int)local_50 >> 0x1f | 0x80000000U) ^ local_50) >> 1;
  puVar1[1] = (((int)local_4c >> 0x1f | 0x80000000U) ^ local_4c) >> 1;
  puVar1[2] = (((int)local_48 >> 0x1f | 0x80000000U) ^ local_48) >> 1;
  puVar1[3] = param_2;
  puVar1[4] = ((((int)local_40 >> 0x1f | 0x80000000U) ^ local_40) >> 1) + 1;
  puVar1[5] = ((((int)local_3c >> 0x1f | 0x80000000U) ^ local_3c) >> 1) + 1;
  puVar1[6] = ((((int)local_38 >> 0x1f | 0x80000000U) ^ local_38) >> 1) + 1;
  return;
}


