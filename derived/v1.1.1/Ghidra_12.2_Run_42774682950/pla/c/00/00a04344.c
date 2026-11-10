/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a04344; name: FUN_00a04344
 */


void FUN_00a04344(int *param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (ushort *)((long)param_1 - (long)*param_1);
  if (*puVar1 < 5) {
    local_18 = 0;
    local_14 = 0;
  }
  else {
    local_14 = 0;
    if ((ulong)puVar1[2] != 0) {
      local_14 = *(undefined4 *)((long)param_1 + (ulong)puVar1[2]);
    }
    if (*puVar1 < 7) {
      local_18 = 0;
    }
    else {
      local_18 = 0;
      if ((ulong)puVar1[3] != 0) {
        local_18 = *(undefined4 *)((long)param_1 + (ulong)puVar1[3]);
      }
    }
  }
  FUN_00a043c0(param_2,&local_14,&local_18);
  return;
}


