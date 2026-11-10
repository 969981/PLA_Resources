/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055ea20; name: FUN_0055ea20
 */


void FUN_0055ea20(undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (puVar1 != (undefined2 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = 0xb;
    puVar1[2] = 1;
    puVar1[0x13] = 0;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 0xf) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0;
  }
  puVar1[3] = 1;
  *(undefined8 *)(puVar1 + 4) = param_1;
  *(undefined4 *)(puVar1 + 0xc) = param_3;
  return;
}


