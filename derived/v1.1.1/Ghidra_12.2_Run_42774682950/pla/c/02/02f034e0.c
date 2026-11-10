/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f034e0; name: FUN_02f034e0
 */


undefined8 FUN_02f034e0(undefined8 *param_1)

{
  undefined8 uVar1;
  int local_34;
  undefined1 auStack_30 [13];
  undefined1 local_23;
  long local_18;
  
  local_18 = 0;
  local_34 = 0;
  if ((*(byte *)((long)param_1 + 0x42) & 0x38) == 8) {
    local_18 = param_1[2] + (ulong)*(uint *)((long)param_1 + 0x2c);
    local_34 = *(int *)((long)param_1 + 0x24) - *(uint *)((long)param_1 + 0x2c);
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) & 199 | 0x10;
  }
  else {
    param_1[3] = 0;
    (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,auStack_30);
    local_23 = *(undefined1 *)(param_1 + 1);
    (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,auStack_30);
    uVar1 = (**(code **)(*(long *)*param_1 + 0x88))((long *)*param_1,&local_18,&local_34,0);
    if ((int)uVar1 != 0x2d && (int)uVar1 != 0x11) {
      return uVar1;
    }
  }
  *(byte *)((long)param_1 + 0x42) = *(byte *)((long)param_1 + 0x42) & 0xfb;
  if (local_34 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = FUN_02f035e0(param_1,local_18);
    if ((int)uVar1 == 1) {
      uVar1 = 0x2d;
    }
  }
  return uVar1;
}


