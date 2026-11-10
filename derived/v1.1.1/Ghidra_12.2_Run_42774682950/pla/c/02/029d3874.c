/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d3874; name: FUN_029d3874
 */


void FUN_029d3874(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined1 local_40;
  long *local_38;
  
  lVar2 = param_3[3];
  lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x2a0);
  uVar1 = FUN_0298121c(*(undefined8 *)(lVar3 + 0x38),lVar2,param_3[1]);
  if ((uVar1 & 1) != 0) {
    local_40 = 1;
    local_38 = (long *)0x0;
    local_48 = lVar2;
    FUN_029d6ea4(*(undefined8 *)(*(long *)(lVar3 + 0x60) + 0x440),&local_58,&local_48);
  }
  if ((char)param_3[4] != '\0') {
    uVar1 = 0;
    do {
      local_58 = param_3[3];
      local_48 = *(long *)(*param_3 + uVar1 * 8);
      local_50 = *(undefined4 *)(param_3[1] + 4);
      local_40 = *(undefined1 *)(param_3[2] + 8);
      local_38 = &local_58;
      FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),auStack_60,&local_48);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_3 + 4));
  }
  local_48 = param_3[3];
  local_40 = 1;
  local_38 = (long *)0x0;
  FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),&local_58,&local_48);
  return;
}


