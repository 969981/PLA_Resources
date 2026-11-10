/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079bd44; name: FUN_0079bd44
 */


void FUN_0079bd44(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long local_60 [6];
  undefined1 auStack_28 [8];
  
  lVar2 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar2 + param_3 * 8) != *(long *)(lVar2 + (param_3 ^ 1) * 8)) {
    FUN_0030f640(local_60,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x2fe);
                    /* try { // try from 0079bd94 to 0079bda7 has its CatchHandler @ 0079bdfc */
    uVar1 = FUN_0030f3ac(local_60,"CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
                    /* try { // try from 0079bda8 to 0079bdaf has its CatchHandler @ 0079bdf8 */
    FUN_0030f41c(auStack_28,uVar1);
    FUN_0030f658(local_60);
    lVar2 = *(long *)(param_2 + 0x20);
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  local_60[0] = param_4;
  lVar2 = FUN_0079be10(*(undefined8 *)(lVar2 + param_3 * 8),local_60,local_60);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  param_1[2] = param_3 & 0xfffffffffffffffe;
  *param_1 = uVar1;
  param_1[1] = param_2;
  return;
}


