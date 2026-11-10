/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9aac; name: FUN_02eb9aac
 */


void FUN_02eb9aac(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ulong param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined4 param_9)

{
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined1 local_20;
  undefined8 local_18;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | (uint)(1L << (param_5 & 0x3f));
  local_30 = 0;
  local_38 = 0;
  local_18 = 0;
  local_40 = 0;
  local_28 = 0xff;
  local_20 = 0xff;
  FUN_02edff20(DAT_0440a160,param_1,param_2,param_3,param_4,param_5 & 0xffffffff,param_6,param_7,
               param_8,param_9,&local_40,3,1);
  return;
}


