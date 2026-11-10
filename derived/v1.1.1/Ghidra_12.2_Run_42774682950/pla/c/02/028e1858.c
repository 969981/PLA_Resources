/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e1858; name: FUN_028e1858
 */


void FUN_028e1858(undefined4 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  code *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 auStack_80 [12];
  
  auStack_80[0] = *(undefined8 *)(param_1 + 2);
  local_a0 = FUN_028e18e4;
  local_98 = FUN_028e1988;
  local_90 = &LAB_028e198c;
  local_88 = &LAB_028e1998;
  (**(code **)(*(long *)*param_2 + 0x68))(*param_1,(long *)*param_2,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    local_88 = (undefined1 *)0x0;
    local_a0 = (code *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  return;
}


