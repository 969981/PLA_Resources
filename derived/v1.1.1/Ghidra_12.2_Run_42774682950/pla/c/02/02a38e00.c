/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a38e00; name: FUN_02a38e00
 */


undefined * FUN_02a38e00(undefined4 *param_1,char param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  bVar1 = param_2 - 5;
  if (bVar1 < 3) {
    uVar3 = *(undefined4 *)(&DAT_03a80b04 + (long)(char)bVar1 * 4);
    puVar2 = (&PTR_DAT_0427d030)[(char)bVar1];
  }
  else {
    uVar3 = 1;
    puVar2 = &DAT_0427ced0;
  }
  *param_1 = uVar3;
  return puVar2;
}


