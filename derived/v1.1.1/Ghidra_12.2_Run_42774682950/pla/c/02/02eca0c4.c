/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca0c4; name: FUN_02eca0c4
 */


undefined8 FUN_02eca0c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (DAT_0440a7e0 == (undefined8 *)0x0) {
LAB_02eca19c:
    uVar2 = 2;
  }
  else {
    puVar3 = DAT_0440a7e0;
    if (DAT_0440a7e0[2] == param_1) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      do {
        puVar4 = puVar3;
        puVar3 = (undefined8 *)puVar4[1];
        if (puVar3 == (undefined8 *)0x0) goto LAB_02eca19c;
      } while (puVar3[2] != param_1);
    }
    FUN_02eca30c();
    puVar1 = &DAT_0440a7e0;
    if (DAT_0440a7e0 != puVar3) {
      puVar1 = puVar4 + 1;
    }
    *puVar1 = puVar3[1];
    if (DAT_0440a7d8 == puVar3) {
      DAT_0440a7d8 = puVar4;
    }
    DAT_0440a7d0 = DAT_0440a7d0 + -1;
    (**(code **)*puVar3)(puVar3);
    FUN_02f59e60(0,puVar3);
    FUN_02f14074(0);
    uVar2 = 1;
    if ((DAT_0440a5a8 != 0) && (DAT_0440a7e0 == (undefined8 *)0x0)) {
      FUN_02f59e60(0);
      DAT_0440a5a8 = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}


