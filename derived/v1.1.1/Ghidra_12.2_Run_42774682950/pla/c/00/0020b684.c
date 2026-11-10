/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b684; name: FUN_0020b684
 */


ulong FUN_0020b684(long param_1,long param_2,ulong param_3,ulong *param_4,long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint local_54;
  
  lVar4 = *(long *)(param_2 + 8);
  lVar5 = lVar4 + 8;
  if (*(code **)(param_1 + 0x850) == (code *)0x0) {
LAB_0020b740:
    local_54 = 0;
    uVar2 = (**(code **)(param_5 + 8))
                      (param_1,(int)param_4[1],*(undefined8 *)(lVar5 + 0x10),param_3,&local_54,
                       param_5,*(undefined8 *)(param_1 + 0x8b8));
    if (uVar2 + 0x20e < 0x13 && (1L << (uVar2 + 0x20e & 0x3f) & 0x40021U) != 0) {
      return uVar2 & 0xffffffff;
    }
    if ((long)uVar2 < 0) {
      return 0xfffffc7a;
    }
    if (param_3 < uVar2) {
      return 0xfffffc7a;
    }
    lVar4 = *(long *)(lVar5 + 0x10);
    *(long *)(lVar5 + 0x10) = lVar4 + -9;
    *(ulong *)(lVar5 + 0x18) = lVar4 + uVar2;
    *(undefined1 *)((long)param_4 + 0xd) = 0;
    if ((((local_54 & 1) != 0) && (*(undefined1 *)(param_5 + 0x11) = 1, (local_54 >> 1 & 1) == 0))
       && ((*(byte *)(param_5 + 0x10) & 1) != 0)) {
      *(byte *)((long)param_4 + 0xd) = *(byte *)((long)param_4 + 0xd) | 1;
    }
    if ((local_54 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x860) == 0) goto LAB_0020b880;
      *(undefined1 *)(param_5 + 0x12) = 1;
    }
    if (uVar2 + 0x100 <= param_3) {
      param_3 = uVar2 + 0x100;
    }
    *param_4 = uVar2;
    param_4[2] = 0;
    uVar3 = FUN_0020b8a8(param_1,param_4,param_3);
    if (-0x385 < (int)uVar3) {
      param_4[2] = uVar3 - uVar2;
      FUN_0020c7ac(*(undefined8 *)(lVar5 + 0x10),param_4);
      uVar3 = FUN_0020d6e8(param_2,param_4,param_4[2],*(undefined1 *)(param_5 + 0x12));
      if ((int)uVar3 == 0) {
        *(undefined8 *)(param_6 + 0xb0) = **(undefined8 **)(param_6 + 0xa8);
        FUN_00211830(param_6);
        if ((*param_4 == 0) && ((~local_54 & 3) == 0)) {
          uVar3 = 0xfffffde9;
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar2 = (**(code **)(param_1 + 0x850))
                      (param_1,*(undefined1 *)((long)param_4 + 0xc),*(undefined4 *)(param_6 + 0xb8),
                       *(undefined4 *)(param_1 + 0x94c),*(undefined4 *)(param_6 + 0xbc),
                       *(undefined4 *)(param_1 + 0x974),*(undefined8 *)(param_1 + 0x8b8));
    if ((long)*(int *)(param_6 + 0xbc) <= (long)uVar2) {
      uVar2 = (long)*(int *)(param_6 + 0xbc);
    }
    if ((long)*(int *)(param_1 + 0x94c) <= (long)uVar2) {
      uVar2 = (long)*(int *)(param_1 + 0x94c);
    }
    if ((long)*(int *)(param_1 + 0x974) <= (long)uVar2) {
      uVar2 = (long)*(int *)(param_1 + 0x974);
    }
    if (0 < (long)uVar2) {
      if ((ulong)(*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 0x20)) < uVar2) {
        iVar1 = FUN_0020c390(param_1 + 0x158,uVar2 + 10);
        if (iVar1 != 0) goto LAB_0020b740;
        lVar5 = *(long *)(param_2 + 8) + 8;
      }
      param_3 = uVar2;
      goto LAB_0020b740;
    }
LAB_0020b880:
    uVar3 = 0xfffffc7a;
  }
  return uVar3;
}


