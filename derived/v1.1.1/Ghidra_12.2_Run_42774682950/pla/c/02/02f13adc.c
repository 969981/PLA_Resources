/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f13adc; name: FUN_02f13adc
 */


void FUN_02f13adc(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = DAT_0440ae08;
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    puVar4 = *(undefined8 **)(DAT_0440ae00 + (ulong)uVar1 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      if (((puVar4[5] == 0) &&
          (((puVar4[0xd] == 0 || (*(long *)(puVar4[0xd] + 0x88) == 0)) &&
           (lVar3 = FUN_02eca560(puVar4 + 0xd), lVar3 != 0)))) &&
         (*(undefined8 **)(lVar3 + 0x158) == puVar4 ||
          *(undefined8 **)(lVar3 + 0x158) == (undefined8 *)0x0)) {
        *(undefined1 *)(lVar3 + 0x164) = 0;
        *(undefined8 *)(lVar3 + 0x158) = 0;
      }
      *puVar4 = &PTR_FUN_042ac6b8;
      puVar4[0x15] = &PTR_FUN_042ac808;
      FUN_02f24810(puVar4);
      FUN_02f26970(puVar4);
      plVar2 = (long *)puVar4[1];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x40))(plVar2,0);
        puVar5 = (undefined8 *)puVar4[1];
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5);
          (*DAT_0442d150)(5,puVar5);
        }
        puVar4[1] = 0;
      }
      if (puVar4[0xf] != 0) {
        (*DAT_0442d158)(5);
        puVar4[0xf] = 0;
      }
      FUN_02f267e4(puVar4);
      (*DAT_0442d150)(5,puVar4);
    }
  }
  DAT_0440ae08 = 0;
  return;
}


