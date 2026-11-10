/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054ee04; name: FUN_0054ee04
 */


void FUN_0054ee04(undefined8 *param_1,byte *param_2)

{
  bool bVar1;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined8 local_40;
  undefined8 local_38;
  byte *pbStack_30;
  ulong local_28;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e) = 1;
  param_1[4] = 0x800000;
  param_1[5] = 0x100000000;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x18] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  pbStack_30 = *(byte **)(param_2 + 0x10);
  bVar1 = (*param_2 & 1) == 0;
  if (bVar1) {
    pbStack_30 = param_2 + 1;
  }
  local_38 = 0x100000000;
  local_28 = (ulong)(*param_2 >> 1);
  if (!bVar1) {
    local_28 = *(ulong *)(param_2 + 8);
  }
  local_48 = 1;
  local_44 = 0;
  local_42 = 1;
  local_40 = 0x800000;
                    /* try { // try from 0054ee88 to 0054ee93 has its CatchHandler @ 0054eea4 */
  FUN_0054e750(param_1,&pbStack_30,&local_48);
  return;
}


