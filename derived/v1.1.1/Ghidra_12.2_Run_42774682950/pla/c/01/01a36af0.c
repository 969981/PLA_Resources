/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a36af0; name: FUN_01a36af0
 */


void FUN_01a36af0(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 local_30 [16];
  
  FUN_01a36bac();
  FUN_01a37040(param_1);
  lVar1 = param_1[0x1c5a];
  if (*(char *)(lVar1 + 8) != '\0') {
    local_30 = FUN_01a4b7e0(param_1);
    FUN_0190296c(lVar1,local_30);
  }
  FUN_01a37958(param_1);
  FUN_01a3863c(param_1);
  (**(code **)(*param_1 + 0x130))(param_1);
  auVar2 = FUN_01a4b7e0(param_1);
  param_1[0xb4] = param_1[0x6e];
  *(undefined1 (*) [16])(param_1 + 0xaa) = auVar2;
  param_1[0xb2] = param_1[0x6c];
  param_1[0xb1] = param_1[0x6b];
  param_1[0xb3] = param_1[0x6d];
  param_1[0xb0] = param_1[0x6a];
  param_1[0xae] = param_1[0x68];
  param_1[0xaf] = param_1[0x69];
  return;
}


