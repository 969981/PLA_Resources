/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005cc220; name: FUN_005cc220
 */


void FUN_005cc220(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *__s;
  ulong uVar3;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    __s = param_1 + 1;
  }
  else {
    __s = (ulong *)param_1[1];
    if (__s == (ulong *)0x0) {
      uVar2 = 0;
      goto LAB_005cc2b8;
    }
  }
  if (uVar2 >> 1 != 0) {
    uVar3 = uVar2 >> 1;
    puVar1 = __s + uVar3 * 3;
    do {
      uVar3 = uVar3 - 1;
      FUN_0051f624(puVar1 + -3,puVar1[-2]);
      puVar1 = puVar1 + -3;
    } while (uVar3 != 0);
  }
  memset(__s,0xab,(uVar2 >> 1) * 0x18);
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar2 = param_1[1];
LAB_005cc2b8:
  FUN_002e2ea0(PTR_LAB_04373088,uVar2);
  return;
}


