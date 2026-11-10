/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e324c; name: FUN_007e324c
 */


void FUN_007e324c(int param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 - 2U < 0x13) {
    lVar3 = *(long *)(&DAT_03a71528 + (long)(int)(param_1 - 2U) * 8);
    iVar1 = *(int *)PTR_DAT_043773f0;
  }
  else {
    lVar3 = 0x13;
    iVar1 = *(int *)PTR_DAT_043773f0;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(PTR_DAT_043773f0 + 8);
  }
  uVar2 = FUN_0081ac54(param_2,param_3,uVar2,1,0);
  *(undefined8 *)(PTR_DAT_04377408 + lVar3 * 8) = uVar2;
  return;
}


