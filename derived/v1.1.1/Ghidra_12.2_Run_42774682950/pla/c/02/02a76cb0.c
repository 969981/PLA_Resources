/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a76cb0; name: FUN_02a76cb0
 */


undefined1  [16] FUN_02a76cb0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  if (((*(long *)(param_1 + 0x1c8) != 0) && (lVar3 = *(long *)(param_1 + 0x1b0), lVar3 != 0)) &&
     (uVar1 = *(uint *)(lVar3 + 0x10), uVar1 != 0)) {
    lVar4 = 0;
    plVar5 = *(long **)(lVar3 + 0x20);
    do {
      if (*plVar5 == *(long *)(param_1 + 0x70)) {
        if (*(int *)(*(long *)(lVar3 + 0x18) + lVar4 + 4) != 0) {
          uVar2 = 0;
          goto LAB_02a76d34;
        }
        break;
      }
      lVar4 = lVar4 + 0x18;
      plVar5 = plVar5 + 1;
    } while ((ulong)uVar1 * 0x18 != lVar4);
  }
  if ((*(long *)(param_1 + 0x1d0) != 0) &&
     (uVar2 = FUN_02a78e30(param_1 + 0x1d0,*(undefined8 *)(param_1 + 200),param_2,
                           *(undefined8 *)(param_1 + 8)), (uVar2 & 1) != 0)) {
    uVar2 = 0;
    goto LAB_02a76dac;
  }
  uVar1 = nn::fs::ReadFile(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xd8),param_2,
                           param_3);
  lVar3 = *(long *)(param_1 + 0xd8);
  if (uVar1 == 0) {
    param_3 = lVar3 + param_3;
    lVar3 = *(long *)(param_1 + 0xd0);
    if (param_3 <= *(long *)(param_1 + 0xd0)) {
      lVar3 = param_3;
    }
    *(long *)(param_1 + 0xd8) = lVar3;
  }
  uVar2 = (ulong)uVar1;
  goto LAB_02a76da8;
  while (uVar2 = uVar2 + 1, uVar1 != uVar2) {
LAB_02a76d34:
    if ((*(long **)(lVar3 + 0x20))[uVar2] == *(long *)(param_1 + 0x70)) {
      if ((int)uVar2 != -1) {
        FUN_02a75d5c(param_1 + 0x1b0,uVar2,param_2);
      }
      break;
    }
  }
  param_3 = *(long *)(param_1 + 0x248) + param_3;
  uVar2 = 0;
  lVar3 = *(long *)(param_1 + 0x240);
  if (param_3 <= *(long *)(param_1 + 0x240)) {
    lVar3 = param_3;
  }
LAB_02a76da8:
  *(long *)(param_1 + 0x248) = lVar3;
LAB_02a76dac:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = 0x100000003;
  return auVar6;
}


