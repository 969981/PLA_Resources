/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec71c4; name: FUN_02ec71c4
 */


undefined8 FUN_02ec71c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_02f59e30(0,0x30);
  if (puVar1 == (undefined8 *)0x0) {
    *param_1 = 0;
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 5) = 1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *param_1 = puVar1;
    FUN_02ec6a2c();
  }
  return uVar2;
}


