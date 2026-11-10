/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060a3d0; name: FUN_0060a3d0
 */


void FUN_0060a3d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_006071cc(puVar2);
    *puVar2 = &PTR_FUN_04190008;
  }
  *param_1 = puVar2;
  plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  puVar1 = PTR_DAT_04375288 + 0x10;
  plVar3[2] = 0;
  plVar3[3] = (long)puVar2;
  *plVar3 = (long)puVar1;
  plVar3[1] = 0;
  param_1[1] = plVar3;
  return;
}


