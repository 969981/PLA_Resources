/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029dc458; name: FUN_029dc458
 */


uint FUN_029dc458(long param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((param_2 == 8) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x11) ==
      *(char *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0xf))) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
    uVar3 = *(undefined1 *)(param_3 + 0x7d);
    uVar4 = FUN_0294143c(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 0x28),param_2,
                         uVar3);
    FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x31,uVar3,param_2 & 0xff);
    return uVar4 & 1;
  }
  if ((int)param_2 < 10) {
    lVar5 = *(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 0x28);
    lVar1 = lVar5 + (ulong)param_2 * 4;
    if (*(int *)(lVar1 + 0x1a8) != 0) {
      uVar6 = (ulong)param_2;
      *(undefined8 *)(lVar5 + uVar6 * 8 + 0x18) = 0xf8;
      lVar2 = lVar5 + uVar6 * 4;
      lVar5 = lVar5 + uVar6 * 0x18;
      *(undefined4 *)(lVar2 + 0x68) = 0;
      *(undefined4 *)(lVar2 + 0x180) = 0;
      *(undefined4 *)(lVar1 + 0x1a8) = 0;
      uVar4 = 1;
      *(undefined8 *)(lVar5 + 0x90) = 0x1f0000001f;
      *(undefined8 *)(lVar5 + 0x98) = 0x1f0000001f;
      *(undefined8 *)(lVar5 + 0xa0) = 0x1f0000001f;
      goto LAB_029dc540;
    }
  }
  uVar4 = 0;
LAB_029dc540:
  FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x32,param_2 & 0xff);
  return uVar4;
}


