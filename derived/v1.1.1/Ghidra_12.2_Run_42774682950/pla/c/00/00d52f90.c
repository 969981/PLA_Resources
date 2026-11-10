/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d52f90; name: FUN_00d52f90
 */


void FUN_00d52f90(long param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  if (param_4 != 2) {
    iVar1 = param_4;
  }
  lVar2 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  *(undefined1 *)(lVar2 + 0x9f7) = 0;
  FUN_0282ef20((float)param_3,*(undefined8 *)(lVar2 + 0x7f8));
  FUN_02819878(lVar2,param_2,param_3);
  if ((param_5 & 1) == 0) {
    return;
  }
  FUN_00d4ba88(param_1,param_4,1);
  return;
}


