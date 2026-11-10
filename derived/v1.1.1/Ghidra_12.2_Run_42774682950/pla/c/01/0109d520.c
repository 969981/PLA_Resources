/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109d520; name: FUN_0109d520
 */


undefined8 FUN_0109d520(long param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  sVar1 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 < 0x225) {
    if (iVar2 == 0x3b) {
      if (sVar1 != 2) goto LAB_0109d588;
      lVar4 = 2;
    }
    else {
      if ((iVar2 != 0x65) || (sVar1 != 2)) {
LAB_0109d588:
        uVar3 = FUN_02c637c4(param_1);
        return uVar3;
      }
      lVar4 = 3;
    }
  }
  else if (iVar2 == 900) {
    if (sVar1 != 1) goto LAB_0109d588;
    lVar4 = 0;
  }
  else if (iVar2 == 0x225) {
    if (sVar1 != 2) goto LAB_0109d588;
    lVar4 = 1;
  }
  else {
    if ((iVar2 != 0x2c9) || (sVar1 != 2)) goto LAB_0109d588;
    lVar4 = 4;
  }
  FUN_02c62fcc(param_1,(&DAT_03a789ae)[lVar4 * 4],0);
  return 1;
}


