/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4a1f8; name: FUN_02e4a1f8
 */


bool FUN_02e4a1f8(long param_1,long param_2,undefined8 param_3,long *param_4,int *param_5)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_460 [1056];
  
  FUN_02e4a2ac();
  FUN_02e4a7bc(param_1,auStack_460);
  lVar2 = FUN_02e4a118(param_1 + 0x18);
  if (lVar2 == 0) {
    *param_5 = 0x34;
  }
  else {
    *(undefined8 *)(lVar2 + 0x280) = 0xffffffff00000000;
  }
  *param_4 = lVar2;
  iVar1 = *param_5;
  if (iVar1 == 1) {
    *(undefined4 *)(lVar2 + 0x284) = *(undefined4 *)(param_2 + 0x284);
    *(undefined4 *)(param_2 + 0x280) = 0;
    FUN_02e4aa0c(param_1,param_2,*param_4,auStack_460,param_5);
  }
  return iVar1 == 1;
}


