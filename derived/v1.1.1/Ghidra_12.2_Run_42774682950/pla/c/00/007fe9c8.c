/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fe9c8; name: FUN_007fe9c8
 */


void FUN_007fe9c8(long *param_1,long param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = param_4;
  *(undefined1 *)((long)param_1 + 0x25) = param_5;
  *param_1 = (long)(PTR_DAT_04377650 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x26) = param_6;
  *(undefined1 *)((long)param_1 + 0x14) = 0x32;
  param_1[3] = 0x17;
  FUN_007fc598(auStack_20,param_7,(long)param_1 + 0x27,0x10);
  return;
}


