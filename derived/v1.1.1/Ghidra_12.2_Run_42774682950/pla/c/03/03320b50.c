/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03320b50; name: FUN_03320b50
 */


void FUN_03320b50(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_10d8 [19];
  undefined1 local_1040 [4096];
  
  if (*param_5 == 0) {
    FUN_03320bf0(param_1,param_2,param_3,param_4);
  }
  local_1040[0] = 0;
  FUN_032c4d3c(local_10d8);
  lVar2 = FUN_032c680c(local_10d8);
  *(undefined1 **)lVar2 = local_1040;
  *(undefined8 *)(lVar2 + 8) = 0x8000100000000001;
  FUN_032c68cc(local_10d8,param_4,param_5);
  FUN_03320bf0(param_1,param_2,param_3,local_10d8[0]);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x3320be4);
  (*pcVar1)();
}


