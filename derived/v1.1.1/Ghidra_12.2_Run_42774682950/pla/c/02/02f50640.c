/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f50640; name: FUN_02f50640
 */


void FUN_02f50640(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_042af288;
  param_1[3] = &PTR_LAB_042af318;
  param_1[5] = &PTR_FUN_042af340;
  param_1[0xd] = 0;
  puVar2 = (undefined8 *)param_1[0x11];
  param_1[0xe] = 0;
  while (puVar2 != (undefined8 *)0x0) {
    if (puVar2[6] == 0) {
      param_1[0x11] = 0;
    }
    else {
      param_1[0x11] = puVar2[6];
    }
    (**(code **)*puVar2)(puVar2);
    (*DAT_0442d150)(0,puVar2);
    puVar2 = (undefined8 *)param_1[0x11];
  }
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))();
  }
  param_1[0xc] = &PTR_LAB_042af3f0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_LAB_042ada68;
  param_1[3] = &PTR_LAB_042adaf8;
  puVar2 = param_1 + 5;
  *puVar2 = &PTR_FUN_042adb20;
  if (param_1[7] == 0) {
    lVar1 = param_1[8];
  }
  else {
    FUN_02f0efb8(DAT_0440a150,param_1[7],puVar2);
    lVar1 = param_1[8];
  }
  if (lVar1 != 0) {
    FUN_02f0efb8(DAT_0440a150,lVar1,puVar2);
  }
  param_1[6] = 0;
  return;
}


