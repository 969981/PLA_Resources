/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9560; name: FUN_02eb9560
 */


undefined8 * FUN_02eb9560(undefined4 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  
  if (param_2 == 2) {
    uVar2 = 2;
    puVar1 = (undefined8 *)FUN_02f59e30(2,0x78);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    ppuVar3 = &PTR_FUN_042a9dd8;
  }
  else if (param_2 == 1) {
    puVar1 = (undefined8 *)FUN_02f59e30(2,0x78);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar2 = 1;
    ppuVar3 = &PTR_FUN_042a9d70;
  }
  else {
    if (param_2 != 0) {
      return (undefined8 *)0x0;
    }
    puVar1 = (undefined8 *)FUN_02f59e30(2,0x78);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar2 = 0;
    ppuVar3 = &PTR_FUN_042a9d08;
  }
  FUN_02eb2758(puVar1,param_1);
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[7] = &PTR_LAB_042a9e78;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  *puVar1 = ppuVar3;
  *(undefined4 *)(puVar1 + 3) = uVar2;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  FUN_02eb9700(DAT_0440a120 + 0x188,puVar1);
  return puVar1;
}


