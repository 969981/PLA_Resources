/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f25e8c; name: FUN_02f25e8c
 */


void FUN_02f25e8c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  puVar8 = (undefined8 *)*puVar1;
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  if (puVar8[0xb] == param_2) {
    puVar2 = (undefined8 *)0x0;
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    do {
      puVar2 = puVar8;
      puVar8 = (undefined8 *)puVar2[9];
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
    } while (puVar8[0xb] != param_2);
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x110) = 0x42ca0000;
  }
  if ((*(byte *)(param_1 + 0x50) >> 2 & 1) != 0) {
    DAT_0440ae44 = 1;
  }
  lVar3 = puVar8[0xb];
  puVar4 = (undefined8 *)0x0;
  puVar7 = *(undefined8 **)(lVar3 + 0x20);
  puVar6 = puVar7 + 8;
  puVar5 = puVar7;
  if ((puVar7 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
    puVar5 = (undefined8 *)*puVar6;
    puVar6 = puVar5 + 8;
    puVar4 = puVar7;
    if ((puVar5 != (undefined8 *)0x0) && (puVar8 != puVar5)) {
      do {
        puVar4 = puVar5;
        puVar5 = (undefined8 *)*puVar6;
        puVar6 = puVar5 + 8;
      } while (puVar5 != (undefined8 *)0x0 && puVar8 != puVar5);
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(lVar3 + 0x20);
    if (*(undefined8 **)(lVar3 + 0x20) != puVar5) {
      puVar7 = puVar4 + 8;
    }
    *puVar7 = *puVar6;
    if (*(undefined8 **)(lVar3 + 0x18) == puVar5) {
      *(undefined8 **)(lVar3 + 0x18) = puVar4;
    }
  }
  if ((undefined8 *)*puVar1 != puVar8) {
    puVar1 = puVar2 + 9;
  }
  *puVar1 = puVar8[9];
  (**(code **)*puVar8)(puVar8);
                    /* WARNING: Could not recover jumptable at 0x02f25fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d158)(5,puVar8);
  return;
}


