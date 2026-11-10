/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c35bdc; name: FUN_02c35bdc
 */


int FUN_02c35bdc(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  uVar3 = FUN_02c35a14();
  if (param_3 != (byte *)0x0) {
    *param_3 = (byte)(uVar3 >> 9) & 1;
  }
  plVar5 = (long *)FUN_00d1603c();
  lVar6 = *plVar5;
  *(long *)PTR_DAT_0437b198 = lVar6;
  iVar4 = *(int *)(lVar6 + 0x238);
  if (iVar4 - 2U < 5) {
    uVar2 = uVar3 >> 0x12 & 7;
    uVar1 = uVar3 & 3;
    uVar3 = uVar3 >> 2 & 7;
    switch(iVar4) {
    case 2:
      iVar4 = uVar3 + uVar2 * 2;
      break;
    case 3:
      iVar4 = uVar3 + uVar1 * 2 + uVar2 * 4;
      break;
    case 4:
      iVar4 = (uVar1 | uVar1 << 2) + uVar3 + uVar2 * 10;
      break;
    case 5:
      iVar4 = uVar2 * 3 + uVar1;
      break;
    case 6:
      iVar4 = uVar3 + uVar1 * 4 + uVar2 * 8;
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


