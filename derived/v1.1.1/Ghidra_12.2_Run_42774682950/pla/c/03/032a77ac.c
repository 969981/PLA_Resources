/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a77ac; name: FUN_032a77ac
 */


void FUN_032a77ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_032ada28();
  if (DAT_044402f0 == uVar4) {
    uVar5 = uVar4;
    if ((int)(DAT_044402f4 & 0x3fffffff) <= (int)uVar4) {
      DAT_044402e8 = FUN_032adb50(PTR_PTR_0434a080,uVar4 + 1);
      uVar5 = DAT_044402f0;
    }
    puVar1 = (undefined8 *)(DAT_044402e8 + (long)(int)uVar5 * 0x20);
    *puVar1 = *param_1;
    uVar3 = *param_2;
    uVar6 = param_2[2];
    puVar1[2] = param_2[1];
    puVar1[3] = uVar6;
    puVar1[1] = uVar3;
    DAT_044402f0 = uVar4 + 1;
  }
  else {
    lVar2 = DAT_044402e8 + ((long)((ulong)uVar4 << 0x20) >> 0x1b);
    uVar3 = *param_2;
    uVar6 = param_2[2];
    *(undefined8 *)(lVar2 + 0x10) = param_2[1];
    *(undefined8 *)(lVar2 + 0x18) = uVar6;
    *(undefined8 *)(lVar2 + 8) = uVar3;
  }
  return;
}


