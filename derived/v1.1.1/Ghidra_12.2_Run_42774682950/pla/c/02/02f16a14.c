/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f16a14; name: FUN_02f16a14
 */


void FUN_02f16a14(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = DAT_0440ae08;
  do {
    while( true ) {
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) {
        return;
      }
      puVar6 = (undefined8 *)(DAT_0440ae00 + (ulong)uVar1 * 8);
      puVar5 = (undefined8 *)*puVar6;
      if (((*(int *)(puVar5 + 0x68) != 1) && (puVar5[4] == 0)) &&
         ((*(byte *)((long)puVar5 + 0x34c) >> 1 & 1) == 0)) break;
      *(byte *)((long)puVar5 + 0x34c) = *(byte *)((long)puVar5 + 0x34c) & 0xfd;
    }
    puVar4 = (undefined8 *)(DAT_0440ae00 + (ulong)DAT_0440ae08 * 8 + -8);
    if (puVar6 < puVar4) {
      *puVar6 = puVar6[1];
      puVar6 = puVar6 + 1;
      while (puVar6 < puVar4) {
        *puVar6 = puVar6[1];
        puVar6 = puVar6 + 1;
      }
      DAT_0440ae08 = DAT_0440ae08 - 1;
      if (puVar5 != (undefined8 *)0x0) {
        lVar3 = puVar5[5];
        goto joined_r0x02f16ba4;
      }
    }
    else {
      DAT_0440ae08 = DAT_0440ae08 - 1;
      lVar3 = puVar5[5];
joined_r0x02f16ba4:
      if ((((lVar3 == 0) && ((puVar5[0xd] == 0 || (*(long *)(puVar5[0xd] + 0x88) == 0)))) &&
          (lVar3 = FUN_02eca560(puVar5 + 0xd), lVar3 != 0)) &&
         ((*(undefined8 **)(lVar3 + 0x158) == puVar5 ||
          (*(undefined8 **)(lVar3 + 0x158) == (undefined8 *)0x0)))) {
        *(undefined1 *)(lVar3 + 0x164) = 0;
        *(undefined8 *)(lVar3 + 0x158) = 0;
      }
      *puVar5 = &PTR_FUN_042ac6b8;
      puVar5[0x15] = &PTR_FUN_042ac808;
      FUN_02f24810(puVar5);
      FUN_02f26970(puVar5);
      plVar2 = (long *)puVar5[1];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x40))(plVar2,0);
        puVar6 = (undefined8 *)puVar5[1];
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6);
          (*DAT_0442d150)(5,puVar6);
        }
        puVar5[1] = 0;
      }
      if (puVar5[0xf] != 0) {
        (*DAT_0442d158)(5);
        puVar5[0xf] = 0;
      }
      FUN_02f267e4(puVar5);
      (*DAT_0442d150)(5,puVar5);
    }
    DAT_0440ae44 = 1;
  } while( true );
}


