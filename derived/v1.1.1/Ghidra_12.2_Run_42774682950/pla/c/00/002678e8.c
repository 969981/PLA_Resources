/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002678e8; name: FUN_002678e8
 */


undefined8 FUN_002678e8(char *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*param_1 != '\0') {
    return 1;
  }
  if (*(char *)(param_2 + 0x4c0) == '\0') {
    return 0;
  }
  if (*(char *)(param_2 + 0x508) == '\0') {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = param_2 + 0x4c0;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if ((*(long *)(lVar4 + 0x8c8) != -1) &&
     ((*(int *)(param_1 + 0x330) == 0 || (3 < *(int *)(param_1 + 0x330))))) {
    uVar1 = FUN_0027957c(param_2);
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
  }
  param_1[0x350] = '\0';
  param_1[0x351] = '\0';
  param_1[0x352] = '\0';
  param_1[0x353] = '\0';
  param_1[0x354] = '\0';
  param_1[0x355] = '\0';
  param_1[0x356] = '\0';
  param_1[0x357] = '\0';
  param_1[0x348] = '\0';
  param_1[0x349] = '\0';
  param_1[0x34a] = '\0';
  param_1[0x34b] = '\0';
  param_1[0x34c] = '\0';
  param_1[0x34d] = '\0';
  param_1[0x34e] = '\0';
  param_1[0x34f] = '\0';
  uVar1 = FUN_0027ac60(lVar2,*(undefined4 *)(lVar4 + 0x914));
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  if (*(int *)(lVar4 + 0x91c) == -1) {
LAB_0026799c:
    if (*(int *)(lVar4 + 0x920) != -1) {
      lVar2 = FUN_0027ac60(lVar2);
      *(long *)(param_1 + 0x350) = lVar2;
      if (lVar2 == 0) goto LAB_002679f0;
      lVar4 = *(long *)(param_1 + 0x10);
    }
    if (*(int *)(lVar4 + 0x918) != -1) {
      *(long *)(param_1 + 0x358) = *(long *)(param_2 + 0x520) + (long)*(int *)(lVar4 + 0x918) * 0x40
      ;
    }
    uVar3 = FUN_00266e08(param_1,uVar5);
    if ((uVar3 & 1) != 0) {
      *param_1 = '\x01';
      return 1;
    }
  }
  else {
    lVar4 = FUN_0027ac60(lVar2);
    *(long *)(param_1 + 0x348) = lVar4;
    if (lVar4 != 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      goto LAB_0026799c;
    }
LAB_002679f0:
    FUN_00271770("ShaderBinary Bind Error.\n");
  }
  return 0;
}


