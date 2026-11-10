/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb1f7c; name: FUN_02eb1f7c
 */


void FUN_02eb1f7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_042a9720;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  local_38 = 0;
  local_60 = param_1;
  FUN_02ef4594(param_1 + 1,&local_60);
  puVar2 = (undefined8 *)param_1[7];
  puVar1 = puVar2;
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (undefined8 *)*puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (*DAT_0442d150)(4,puVar1);
    }
    *puVar2 = 0;
    puVar1 = (undefined8 *)param_1[7];
    if (puVar2 + 1 != puVar1 + *(uint *)(param_1 + 8)) {
      puVar1 = (undefined8 *)puVar2[1];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1);
        (*DAT_0442d150)(4,puVar1);
      }
      puVar2[1] = 0;
      puVar1 = (undefined8 *)param_1[7];
      if (puVar2 + 2 != puVar1 + *(uint *)(param_1 + 8)) {
        puVar1 = (undefined8 *)puVar2[2];
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1);
          (*DAT_0442d150)(4,puVar1);
        }
        puVar2[2] = 0;
        puVar1 = (undefined8 *)param_1[7];
        if (puVar2 + 3 != puVar1 + *(uint *)(param_1 + 8)) {
          puVar1 = (undefined8 *)puVar2[3];
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1);
            (*DAT_0442d150)(4,puVar1);
          }
          puVar2[3] = 0;
          for (puVar2 = puVar2 + 4; puVar1 = (undefined8 *)param_1[7],
              puVar2 != puVar1 + *(uint *)(param_1 + 8); puVar2 = puVar2 + 1) {
            puVar1 = (undefined8 *)*puVar2;
            if (puVar1 != (undefined8 *)0x0) {
              (**(code **)*puVar1)(puVar1);
              (*DAT_0442d150)(4,puVar1);
            }
            *puVar2 = 0;
          }
        }
      }
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (param_1 + 5 != puVar1) {
      (*DAT_0442d158)(4);
    }
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  return;
}


