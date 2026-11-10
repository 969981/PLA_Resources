/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c75b8; name: FUN_032c75b8
 */


void FUN_032c75b8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 local_24 [4];
  
  local_24[0] = param_3;
  lVar2 = FUN_032c40c8();
  if (lVar2 == 0) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_032c7954(param_1,param_2,lVar2,local_24,param_4);
  }
  return;
}


