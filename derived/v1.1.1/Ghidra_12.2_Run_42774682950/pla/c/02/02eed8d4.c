/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eed8d4; name: FUN_02eed8d4
 */


ulong FUN_02eed8d4(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 local_34 [2];
  undefined1 auStack_28 [4];
  byte local_24 [4];
  
  lVar3 = FUN_02eeda78();
  if (lVar3 == 0) {
LAB_02eed9e4:
    uVar5 = FUN_02ed184c(param_1,param_2);
    return uVar5;
  }
  plVar4 = (long *)FUN_02eec0d0(param_1,*(undefined8 *)(param_2 + 0x10),local_34,auStack_28,
                                lVar3 + 8,lVar3 + 0x10);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
    FUN_02ea7df0(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x28 + -0x28);
    *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
    goto LAB_02eed9e4;
  }
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 < 0x20) {
    *(int *)(param_2 + 0x38) = uVar1 + 1;
    *(uint *)(param_2 + 0x7c) = *(uint *)(param_2 + 0x7c) | (uint)(1L << ((ulong)uVar1 & 0x3f));
    *(undefined2 *)(param_2 + 0x38 + (ulong)uVar1 * 2 + 4) = local_34[0];
  }
  else {
    *(uint *)(param_2 + 0x38) = uVar1 + 1;
  }
  if ((*(char *)(param_2 + 0x98) == -0x70) && (*(char *)(param_2 + 0x9b) != '\0')) {
    local_24[0] = *(byte *)(param_2 + 0x288) & 1;
    uVar2 = FUN_02ecf10c(param_2);
    uVar1 = FUN_02ed13fc(plVar4,(char *)(param_2 + 0x98),uVar2,local_24,
                         *(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x34));
    if (uVar1 == 1) {
      *(byte *)(param_2 + 0x288) = *(byte *)(param_2 + 0x288) & 0xfe | local_24[0];
      goto LAB_02eed964;
    }
  }
  else {
LAB_02eed964:
    uVar1 = FUN_02ed2bb4(plVar4,param_2);
    if (uVar1 != 1) {
      uVar5 = (ulong)uVar1;
      if (uVar1 == 3) {
        uVar5 = 1;
      }
      goto LAB_02eed990;
    }
    uVar1 = (**(code **)(*plVar4 + 0x240))(plVar4,param_2);
  }
  uVar5 = (ulong)uVar1;
LAB_02eed990:
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return uVar5;
}


