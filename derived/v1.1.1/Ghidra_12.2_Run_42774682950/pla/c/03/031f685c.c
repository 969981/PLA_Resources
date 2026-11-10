/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f685c; name: FUN_031f685c
 */


void FUN_031f685c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  byte local_18;
  
  uStack_28 = param_2[1];
  local_30 = *param_2;
  if (*(byte *)(param_2 + 3) == 0xff) {
    local_20 = param_2[2];
    local_18 = *(byte *)(param_2 + 3);
  }
  else {
    local_18 = *(byte *)(param_2 + 3) ^ 1;
    local_20 = CONCAT44(*(undefined4 *)(param_2 + 2),*(undefined4 *)((long)param_2 + 0x14));
  }
  FUN_031f64bc(param_1,&local_30);
  return;
}


