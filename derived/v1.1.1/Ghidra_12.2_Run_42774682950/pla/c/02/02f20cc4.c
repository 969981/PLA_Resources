/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f20cc4; name: FUN_02f20cc4
 */


undefined8 FUN_02f20cc4(long *param_1)

{
  undefined8 uVar1;
  int local_34;
  undefined1 auStack_30 [13];
  undefined1 local_23;
  undefined8 local_18;
  
  param_1[0xc] = 0;
  (**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],auStack_30);
  local_23 = (undefined1)(int)*(float *)(param_1[3] + 0x2a8);
  (**(code **)(*(long *)param_1[0xb] + 0x30))((long *)param_1[0xb],auStack_30);
  local_18 = 0;
  local_34 = 0;
  uVar1 = (**(code **)(*(long *)param_1[0xb] + 0x88))((long *)param_1[0xb],&local_18,&local_34,0);
  if ((int)uVar1 == 0x2d || (int)uVar1 == 0x11) {
    *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xbf;
    if (local_34 == 0) {
      uVar1 = 2;
    }
    else {
      *(int *)(param_1 + 0xd) = local_34;
      uVar1 = (**(code **)(*param_1 + 0x138))(param_1,local_18,0);
      if ((int)uVar1 == 1) {
        uVar1 = 0x2d;
      }
    }
  }
  return uVar1;
}


