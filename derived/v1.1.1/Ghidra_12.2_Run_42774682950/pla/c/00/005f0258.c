/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f0258; name: FUN_005f0258
 */


void FUN_005f0258(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__s;
  ulong uVar3;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    __s = param_1 + 1;
  }
  else {
    __s = (ulong *)param_1[1];
    uVar3 = 0;
    if (__s == (ulong *)0x0) goto LAB_005f02ec;
  }
  if (uVar1 >> 1 != 0) {
    uVar3 = uVar1 >> 1;
    puVar2 = __s + uVar3 * 5;
    do {
      puVar2 = puVar2 + -5;
      uVar3 = uVar3 - 1;
      (**(code **)*puVar2)(puVar2);
    } while (uVar3 != 0);
  }
  memset(__s,0xab,(uVar1 >> 1) * 0x28);
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar3 = param_1[1];
LAB_005f02ec:
  FUN_002e2ea0(PTR_LAB_04373088,uVar3);
  return;
}


