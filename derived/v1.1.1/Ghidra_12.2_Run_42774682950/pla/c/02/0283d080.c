/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283d080; name: FUN_0283d080
 */


void FUN_0283d080(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  lVar2 = *(long *)(param_1 + 0x1c8);
  lVar3 = *(long *)(param_1 + 0x1b8);
  *(undefined4 *)(lVar3 + 0x124) = 0;
  *(undefined2 *)(lVar3 + 0x128) = 0;
  *(undefined4 *)(lVar3 + 300) = 0;
  *(undefined4 *)(lVar3 + 0x134) = 0;
  FUN_02c33414(lVar3,uVar1);
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    **(undefined2 **)(lVar2 + 0x58) = 0;
    *(undefined2 *)(lVar2 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar3,lVar2,uVar1,0,0);
  FUN_0283ce7c(param_1,param_2,*(undefined8 *)(param_1 + 0x1c8),param_3);
  return;
}


