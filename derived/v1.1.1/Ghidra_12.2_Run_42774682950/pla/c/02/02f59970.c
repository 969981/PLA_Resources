/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59970; name: FUN_02f59970
 */


long FUN_02f59970(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (long)(int)param_1 * 0x820;
  uVar2 = param_3 + 0x60U >> (*(ulong *)(&DAT_0442c140 + lVar1) & 0x3f);
  if ((*(long *)(&DAT_0442c138 + lVar1) - 1U & param_3 + 0x60U) != 0) {
    uVar2 = uVar2 + 1;
  }
  lVar1 = FUN_02f59660(param_1,param_2,uVar2);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x14) = (int)uVar2 + 0x7d;
    *(undefined8 *)(lVar1 + 0x40) = param_2;
    lVar1 = lVar1 + 0x60;
  }
  return lVar1;
}


