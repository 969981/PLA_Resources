/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ea300; name: FUN_003ea300
 */


void FUN_003ea300(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *__s;
  ulong uVar6;
  
  if ((*param_1 & 1) == 0) {
    __s = param_1 + 1;
    uVar3 = 1;
    if (param_2 < 2) {
      return;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar3 = param_1[2];
    if (param_2 <= uVar3) {
      return;
    }
  }
  uVar6 = *param_1 >> 1;
  if (param_2 <= uVar3 << 1) {
    param_2 = uVar3 << 1;
  }
  uVar3 = FUN_002e2e80(PTR_FUN_04373078,param_2 << 6);
  if (uVar6 != 0) {
    puVar2 = (ulong *)(uVar3 + 0x10);
    uVar4 = uVar6;
    puVar5 = __s;
    do {
      puVar2[-2] = *puVar5;
      puVar2[-1] = puVar5[1];
      *puVar2 = puVar5[2];
      puVar1 = puVar5 + 3;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 8;
      puVar2[1] = *puVar1;
      puVar2 = puVar2 + 8;
    } while (uVar4 != 0);
  }
  if (__s != (ulong *)0x0) {
    memset(__s,0xab,uVar6 << 6);
  }
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
    uVar6 = *param_1;
  }
  *param_1 = uVar6 | 1;
  param_1[1] = uVar3;
  param_1[2] = param_2;
  return;
}


