/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00812960; name: FUN_00812960
 */


void FUN_00812960(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[0x230];
  *param_1 = (long)(PTR_DAT_04377a40 + 0x10);
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x230] = 0;
  }
  lVar3 = param_1[0x231];
  if (lVar3 != 0) {
    FUN_0081a840(lVar3);
    FUN_0081a800(lVar3);
    param_1[0x231] = 0;
  }
  puVar1 = PTR_DAT_043773c0;
  lVar3 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
  if (lVar3 != 0) {
    lVar3 = FUN_008551bc(*(undefined8 *)puVar1);
    if (*(long *)(lVar3 + 0x10) != 0) {
      FUN_00808b5c();
    }
    lVar3 = FUN_008551bc(*(undefined8 *)puVar1);
    if (*(long *)(lVar3 + 8) != 0) {
      FUN_007ff6a0();
    }
  }
  plVar2 = (long *)FUN_00819484();
  (**(code **)(*plVar2 + 0x18))();
  FUN_00819484();
  FUN_007f3f44();
  FUN_007e34a4(param_1 + 0x247);
  FUN_007e34a4(param_1 + 0x243);
  FUN_007eb6e8((long)param_1 + 0x11f4);
  FUN_007eb6e8(param_1 + 0x23c);
  FUN_007eb6e8((long)param_1 + 0x11cc);
  FUN_007f4abc(param_1);
  return;
}


