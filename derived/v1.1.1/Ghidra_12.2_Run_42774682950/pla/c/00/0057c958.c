/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057c958; name: FUN_0057c958
 */


void FUN_0057c958(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_LAB_04373088;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (lVar3 == lVar2) {
    lVar3 = lVar2;
  }
  else {
    do {
      lVar4 = lVar3 + -0x50;
      FUN_0057c958(lVar3 + -0x18);
      FUN_003e9f80(lVar3 + -0x30,*(undefined8 *)(lVar3 + -0x28));
      if ((*(byte *)(lVar3 + -0x48) & 1) != 0) {
        FUN_002e2ea0(puVar1,*(undefined8 *)(lVar3 + -0x38));
      }
      lVar3 = lVar4;
    } while (lVar2 != lVar4);
    lVar3 = *param_1;
  }
  puVar1 = PTR_LAB_04373088;
  param_1[1] = lVar2;
  FUN_002e2ea0(puVar1,lVar3);
  return;
}


