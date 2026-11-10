/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284ce70; name: FUN_0284ce70
 */


void FUN_0284ce70(undefined8 param_1,uint param_2)

{
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  long *local_100 [4];
  long *local_e0;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0 [4];
  long *local_90;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60 [4];
  long *local_40;
  
  local_80 = 0x9d48769e1959b26a;
  pcStack_78 = "monsname_initial_index.dat";
  local_70 = 0x1a;
  local_68 = (long *)0x0;
  FUN_0284c678(local_60,param_1,&local_80,10);
  local_d0 = 0x5d9d54fe6cba821a;
  pcStack_c8 = "monsname_sort_table.dat";
  local_c0 = 0x17;
  local_b8 = (long *)0x0;
  FUN_0284c678(local_b0,param_1,&local_d0,10);
  local_120 = 0x19c5bb6ad5561c80;
  pcStack_118 = "monsname_initial_to_sort.dat";
  local_110 = 0x1c;
  local_108 = (long *)0x0;
  FUN_0284c678(local_100,param_1,&local_120,10);
  FUN_0284ca70(param_1,local_60,local_b0,local_100,param_2 & 1,0);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100[0] != (long *)0x0) {
    (**(code **)(*local_100[0] + 0x20))();
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_b0[0] != (long *)0x0) {
    (**(code **)(*local_b0[0] + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


