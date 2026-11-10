/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec4ed8; name: FUN_02ec4ed8
 */


undefined4 FUN_02ec4ed8(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined8 *)FUN_02f59e30(0,0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  uVar2 = 0x34;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 1;
  }
  return uVar2;
}


