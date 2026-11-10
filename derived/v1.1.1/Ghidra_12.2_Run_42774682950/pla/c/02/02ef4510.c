/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef4510; name: FUN_02ef4510
 */


undefined8 FUN_02ef4510(undefined4 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if (param_2[5] == 0) {
    if ((int)param_2[1] != 0) {
      uVar2 = FUN_02edda28(DAT_0440a170,(int)param_2[1],param_1);
      uVar2 = uVar2 & 1;
      goto joined_r0x02ef4568;
    }
    if (*param_2 == 0) {
      return 1;
    }
    lVar1 = *param_2 + 8;
    puVar3 = auStack_18;
  }
  else {
    lVar1 = param_2[5] + 0x1a8;
    puVar3 = auStack_14;
  }
  uVar2 = FUN_02eddc48(lVar1,param_1,puVar3);
joined_r0x02ef4568:
  if (uVar2 == 0) {
    return 2;
  }
  return 1;
}


