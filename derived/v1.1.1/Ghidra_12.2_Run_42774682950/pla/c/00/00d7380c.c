/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7380c; name: FUN_00d7380c
 */


uint FUN_00d7380c(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_2 - 1U < 5) {
    puVar3 = (undefined8 *)(&PTR_DAT_041ec1b8)[(int)(param_2 - 1U)];
    lVar2 = *(long *)(param_1 + 0x2c8);
  }
  else {
    puVar3 = &DAT_043acdb8;
    lVar2 = *(long *)(param_1 + 0x2c8);
  }
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0283b5c4(lVar2,puVar3);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


