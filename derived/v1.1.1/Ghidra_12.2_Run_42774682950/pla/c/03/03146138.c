/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03146138; name: FUN_03146138
 */


void FUN_03146138(long *param_1,long param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x54) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 100) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x74) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x7c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x84) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x8c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x94) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x9c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x24) = 0xffffffffffffffff;
  *param_1 = (long)(PTR_DAT_043888a8 + 0x10);
  *(undefined1 *)(param_1 + 3) = 2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_032c4a00((undefined8 *)((long)param_1 + 0x24),param_2 + 0x24,0x80);
  return;
}


