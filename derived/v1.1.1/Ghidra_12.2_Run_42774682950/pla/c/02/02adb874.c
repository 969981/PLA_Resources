/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02adb874; name: FUN_02adb874
 */


uint FUN_02adb874(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    if ((param_3 & 0x7f) == 0) {
      return param_3;
    }
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
    lVar6 = *plVar5;
  }
  else {
    if ((param_3 & 1) != 0) {
      plVar2 = (long *)param_2[1];
      for (plVar5 = (long *)*param_2; plVar5 != plVar2; plVar5 = plVar5 + 1) {
        plVar3 = *(long **)(*plVar5 + 0xe8);
        for (plVar1 = *(long **)(*plVar5 + 0xe0); plVar1 != plVar3; plVar1 = plVar1 + 1) {
          lVar6 = *(long *)(param_1 + 0x78);
          uVar8 = (*(long *)(param_1 + 0x80) - lVar6 >> 3) * 0x38e38e39;
          lVar7 = *plVar1;
          if ((int)uVar8 != 0) {
            uVar9 = 0;
            lVar10 = lVar6 + 0x38;
            do {
              FUN_02bb7a60(*(undefined8 *)(lVar7 + 0x60),uVar9 & 0xffffffff,lVar10);
              uVar9 = uVar9 + 1;
              lVar10 = lVar10 + 0x48;
            } while ((uVar8 & 0xffffffff) != uVar9);
          }
          if ((param_3 >> 1 & 1) != 0) {
            FUN_02b58d1c(lVar7,lVar6,uVar8 & 0xffffffff);
          }
        }
      }
    }
    if ((param_3 & 0x7c) == 0) {
      return param_3 & 0xfffffffc;
    }
    plVar5 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
    lVar6 = *plVar5;
  }
  uVar4 = (**(code **)(lVar6 + 0x30))(plVar5,param_2);
  return uVar4;
}


