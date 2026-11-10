/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284d128; name: FUN_0284d128
 */


void FUN_0284d128(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  long *local_110 [4];
  long *local_f0;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0 [4];
  long *local_a0;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70 [4];
  long *local_50;
  
  local_90 = 0x6ce6bb3071641b3;
  pcStack_88 = "waza_initial_index.dat";
  local_80 = 0x16;
  local_78 = (long *)0x0;
  FUN_0284c678(local_70,param_1,&local_90,10);
  local_e0 = 0xbc1bc8ea3bc06aad;
  pcStack_d8 = "waza_sort_table.dat";
  local_d0 = 0x13;
  local_c8 = (long *)0x0;
  FUN_0284c678(local_c0,param_1,&local_e0,10);
  local_130 = 0xbc61001d4b8114e5;
  pcStack_128 = "waza_initial_to_sort.dat";
  local_120 = 0x18;
  local_118 = (long *)0x0;
  FUN_0284c678(local_110,param_1,&local_130,10);
  FUN_0284ca70(param_1,local_70,local_c0,local_110,param_2 & 1,param_3);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (local_110[0] != (long *)0x0) {
    (**(code **)(*local_110[0] + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_c0[0] != (long *)0x0) {
    (**(code **)(*local_c0[0] + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


