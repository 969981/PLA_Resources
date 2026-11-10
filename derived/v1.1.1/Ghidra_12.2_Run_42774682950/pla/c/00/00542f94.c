/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00542f94; name: FUN_00542f94
 */


undefined8 FUN_00542f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  undefined8 *puVar4;
  
  if (DAT_0439ecd0 == (long *)0x0) {
    DAT_0439ecd0 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (DAT_0439ecd0 != (long *)0x0) {
      *DAT_0439ecd0 = 0;
      DAT_0439ecd0[1] = 0;
      DAT_0439ecd0[2] = 0;
    }
    puVar2 = (undefined8 *)*DAT_0439ecd0;
    puVar4 = (undefined8 *)DAT_0439ecd0[1];
    if (puVar2 == puVar4) {
      return 0;
    }
  }
  else {
    puVar4 = (undefined8 *)DAT_0439ecd0[1];
    puVar2 = (undefined8 *)*DAT_0439ecd0;
    if ((undefined8 *)*DAT_0439ecd0 == puVar4) {
      return 0;
    }
  }
  do {
    puVar3 = puVar2 + 1;
    uVar1 = (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    puVar2 = puVar3;
  } while (puVar4 != puVar3);
  return 0;
}


