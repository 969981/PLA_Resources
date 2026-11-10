/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fb8fc; name: FUN_004fb8fc
 */


void FUN_004fb8fc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *__s;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *param_1;
  if ((uVar5 & 1) == 0) {
    __s = param_1 + 1;
    uVar1 = 2;
    if (param_2 < 3) {
      return;
    }
  }
  else {
    __s = (ulong *)param_1[1];
    uVar1 = param_1[2];
    if (param_2 <= uVar1) {
      return;
    }
  }
  if (param_2 <= uVar1 << 1) {
    param_2 = uVar1 << 1;
  }
  uVar6 = uVar5 >> 1;
  uVar1 = FUN_002e2e80(PTR_FUN_04373078,param_2 << 3);
  if (uVar6 != 0) {
    uVar5 = uVar5 >> 1 & 1;
    puVar3 = __s;
    if (uVar6 == 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      puVar4 = (ulong *)(uVar1 + 8);
      do {
        puVar4[-1] = 0;
        puVar4[-1] = *puVar3;
        *puVar3 = 0;
        *puVar4 = 0;
        lVar2 = lVar2 + 2;
        *puVar4 = puVar3[1];
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 2;
      } while (uVar6 - uVar5 != lVar2);
    }
    if (uVar5 != 0) {
      *(undefined8 *)(uVar1 + lVar2 * 8) = 0;
      *(ulong *)(uVar1 + lVar2 * 8) = *puVar3;
      *puVar3 = 0;
    }
  }
  if (__s != (ulong *)0x0) {
    if (uVar6 != 0) {
      puVar3 = __s + uVar6;
      uVar5 = uVar6;
      do {
        puVar3 = puVar3 + -1;
        uVar5 = uVar5 - 1;
        FUN_003f4f54(puVar3);
      } while (uVar5 != 0);
    }
    memset(__s,0xab,uVar6 << 3);
  }
  uVar5 = *param_1;
  if ((uVar5 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
    uVar5 = *param_1;
  }
  *param_1 = uVar5 | 1;
  param_1[1] = uVar1;
  param_1[2] = param_2;
  return;
}


