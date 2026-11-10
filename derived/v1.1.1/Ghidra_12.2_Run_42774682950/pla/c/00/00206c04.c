/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00206c04; name: FUN_00206c04
 */


undefined8 FUN_00206c04(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = FUN_00205cf4();
  if (lVar2 == 0) {
    return 0xfffffe0b;
  }
  lVar6 = *(long *)(lVar2 + 0xa8);
  if (lVar6 != 0) {
    uVar3 = FUN_002119e8(lVar2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    if ((*(char *)(lVar6 + 0x90) == '\0') && (lVar6 != *(long *)(param_1 + 0x150))) {
      FUN_00211348(lVar6,param_1 + 0x890);
      FUN_0020c748(param_1 + 0x890,lVar6);
    }
  }
  if ((*(code **)(param_1 + 0x818) != (code *)0x0) &&
     (iVar1 = (**(code **)(param_1 + 0x818))
                        (param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x8b8)), iVar1 != 0)) {
    return 0xfffffc7a;
  }
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_2 & 1 ^ (uint)(*(char *)(param_1 + 0x9aa) != '\0');
  }
  if ((*(byte *)(lVar2 + 0xe4) & 1) == 0) {
    if (uVar4 == 0) {
      plVar5 = (long *)(param_1 + 0x8f0);
    }
    else {
      plVar5 = (long *)(param_1 + 0x8e8);
    }
  }
  else {
    if (uVar4 != 0) goto LAB_00206cf4;
    plVar5 = (long *)(param_1 + 0x8f8);
  }
  *plVar5 = *plVar5 + -1;
LAB_00206cf4:
  *(byte *)(lVar2 + 0xe4) = *(byte *)(lVar2 + 0xe4) | 2;
  if ((((*(byte *)(param_1 + 0x99c) >> 4 & 1) == 0) &&
      (uVar4 == 0 && *(char *)(param_1 + 0x9aa) != '\0')) &&
     (iVar1 = FUN_002120d8(lVar2), iVar1 != 0)) {
    if (*(long *)(param_1 + 0x8c8) == 0) {
      *(long *)(param_1 + 0x8c0) = lVar2;
    }
    else {
      *(long *)(*(long *)(param_1 + 0x8c8) + 0x98) = lVar2;
      *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_1 + 0x8c8);
    }
    *(long *)(param_1 + 0x8c8) = lVar2;
    *(long *)(param_1 + 0x908) = *(long *)(param_1 + 0x908) + 1;
  }
  else {
    uVar3 = FUN_00206d80(param_1,lVar2);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}


