/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aced8; name: FUN_005aced8
 */


void FUN_005aced8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_0439eff0 != (code *)0x0 && DAT_0439eff8 != 0) {
    puVar1 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    uVar2 = (*DAT_0439eff0)(*param_2);
    *puVar1 = uVar2;
    puVar1[2] = param_2[0x169];
    puVar1[1] = *param_1;
    *param_1 = puVar1;
  }
  return;
}


