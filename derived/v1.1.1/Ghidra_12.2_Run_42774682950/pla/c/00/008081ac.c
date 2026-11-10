/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008081ac; name: FUN_008081ac
 */


undefined8 FUN_008081ac(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if ((*(int *)param_1[0xf] == 1) ||
     (uVar2 = FUN_007e5f0c(*(undefined8 *)(param_1[0xb] + 0x180)), (uVar2 & 1) != 0)) {
    if ((int)param_1[0xc] != 0) {
      FUN_007e5da4(param_1[0xf]);
    }
    return 5;
  }
  if (*(int *)param_1[0xf] == 2) {
    (**(code **)(*param_1 + 0x38))(param_1);
    return 0;
  }
  plVar1 = (long *)((int *)param_1[0xf] + 1);
  if ((int)param_1[0xc] != 0) {
    plVar1 = param_1 + 0xc;
  }
  FUN_007ee578(auStack_30,plVar1);
  lVar3 = param_1[0xe];
  FUN_007ee578(auStack_40,auStack_30);
  FUN_007e5cac(lVar3,auStack_40);
  param_1[0xe] = 0;
  FUN_0080828c(param_1);
  return 1;
}


