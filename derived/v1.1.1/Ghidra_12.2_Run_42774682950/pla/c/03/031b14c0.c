/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b14c0; name: FUN_031b14c0
 */


void FUN_031b14c0(long *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  int iStack_24;
  
  lVar2 = *param_1;
  iVar3 = 0x20000;
  if (param_4 != 0) {
    iVar3 = 0x8000;
  }
  local_38 = 0;
  uStack_30 = 0;
  iVar1 = 0x90200;
  if (param_4 != 0) {
    iVar1 = 0x24200;
  }
  local_28 = (int)lVar2;
  if ((int)lVar2 < 1) {
    local_28 = iVar3;
  }
  iStack_24 = (int)((ulong)lVar2 >> 0x20);
  if (iStack_24 == 0 || lVar2 < 0) {
    iStack_24 = iVar1;
  }
  FUN_031b1548(param_2,&local_38,&local_28);
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  return;
}


