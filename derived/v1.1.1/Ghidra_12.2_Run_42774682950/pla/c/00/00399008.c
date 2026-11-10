/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00399008; name: FUN_00399008
 */


void FUN_00399008(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    puVar1 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (puVar1 == (undefined8 *)0x0) goto LAB_00399080;
    *puVar1 = 0;
    puVar1[2] = puVar1;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  else {
    if (*(long *)(lVar3 + 0x70) != 0) {
      FUN_0032cf88(lVar3,0,0x30);
    }
    puVar1 = (undefined8 *)FUN_0032cea0(lVar3,0x30);
    *puVar1 = 0;
    puVar1[2] = puVar1;
    puVar1[4] = 0;
    puVar1[5] = lVar3;
  }
  uVar2 = FUN_003990a4(puVar1,8);
  puVar1[3] = 8;
  puVar1[4] = uVar2;
  puVar1[1] = 8;
LAB_00399080:
  param_1[2] = (long)puVar1;
  return;
}


