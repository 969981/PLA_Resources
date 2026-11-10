/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094b2fc; name: FUN_0094b2fc
 */


void FUN_0094b2fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_041c2cf0;
  param_1[1] = &PTR_LAB_041c2dd8;
  puVar1 = (undefined8 *)param_1[0x23];
  while (param_1 + 0x23 != puVar1) {
    puVar3 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar3;
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  puVar3 = param_1 + 0x1e;
  puVar1 = (undefined8 *)*puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    do {
      while (puVar2 = (undefined8 *)puVar1[1], puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar1[2];
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1 = puVar2;
        if (puVar2 == (undefined8 *)0x0) goto LAB_0094b3b8;
      }
      puVar1[1] = puVar2[2];
      puVar2[2] = puVar1;
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
LAB_0094b3b8:
    param_1[0x1e] = 0;
    param_1[0x1f] = puVar3;
    param_1[0x20] = puVar3;
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *puVar3 = 0;
  FUN_00949b90(param_1 + 0xe);
  *param_1 = &PTR_LAB_041c2e00;
  param_1[1] = &PTR_LAB_041c2ee8;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x24));
  return;
}


