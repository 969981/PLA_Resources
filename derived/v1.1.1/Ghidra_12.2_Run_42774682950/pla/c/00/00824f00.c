/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00824f00; name: FUN_00824f00
 */


undefined8 * FUN_00824f00(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_043773f8;
  puVar2 = *(undefined8 **)PTR_DAT_043773f8;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_0081a750(0x90,param_1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
    }
    FUN_0081e820(puVar2 + 1,param_1,3);
    puVar2[1] = PTR_DAT_04377c88 + 0x10;
    *(undefined8 **)PTR_DAT_04377c90 = puVar2 + 1;
    FUN_008254e4(puVar2);
    *(undefined8 **)puVar1 = puVar2;
  }
  return puVar2;
}


