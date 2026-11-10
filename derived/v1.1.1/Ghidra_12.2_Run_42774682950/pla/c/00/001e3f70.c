/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e3f70; name: FUN_001e3f70
 */


undefined8 * FUN_001e3f70(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_002044c4(0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = 0x2d2d2d2d2d2d2d2d;
    *puVar2 = param_1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0x2d2d2d2d2d2d2d2d;
    puVar2[5] = 0x2d2d2d2d2d2d2d2d;
    iVar1 = FUN_001f3400(param_1,puVar2 + 7,0x11);
    if (iVar1 == 0) {
      *(undefined4 *)(puVar2 + 10) = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
    }
    else {
      FUN_002044d4(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


