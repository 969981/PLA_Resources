/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00576594; name: FUN_00576594
 */


void FUN_00576594(ulong *param_1)

{
  ulong uVar1;
  ulong *__s;
  ulong uVar2;
  ulong *puVar3;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    __s = param_1 + 1;
  }
  else {
    __s = (ulong *)param_1[1];
    uVar2 = 0;
    if (__s == (ulong *)0x0) goto LAB_00576618;
  }
  if (uVar1 >> 1 != 0) {
    uVar2 = uVar1 >> 1;
    puVar3 = __s + uVar2;
    do {
      puVar3 = puVar3 + -1;
      uVar2 = uVar2 - 1;
      FUN_00576dbc(puVar3);
    } while (uVar2 != 0);
  }
  memset(__s,0xab,(uVar1 >> 1) << 3);
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar2 = param_1[1];
LAB_00576618:
  FUN_002e2ea0(PTR_LAB_04373088,uVar2);
  return;
}


