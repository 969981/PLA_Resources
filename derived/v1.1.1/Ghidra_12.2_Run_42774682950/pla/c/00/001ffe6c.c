/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ffe6c; name: FUN_001ffe6c
 */


undefined8 FUN_001ffe6c(long param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x15a4);
  }
  else {
    *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) & 0xfffff7ff;
    uVar1 = *(ushort *)(param_1 + 0x15a4);
    if (((uVar1 >> 7 & 1) != 0) && ((*(byte *)(*(long *)(param_2 + 0x420) + 0x85) >> 4 & 1) == 0)) {
      uVar1 = uVar1 & 0xff7f;
      *(ushort *)(param_1 + 0x15a4) = uVar1;
    }
  }
  *(ushort *)(param_1 + 0x15a4) = uVar1 & 0xf6ff;
  if ((*(byte *)(param_1 + 0xf43) & 1) == 0) {
    if (*(int *)(param_1 + 0xa38) != 6) goto LAB_001ffee0;
    uVar2 = 1;
  }
  else {
    uVar2 = 6;
  }
  *(undefined4 *)(param_1 + 0xa38) = uVar2;
LAB_001ffee0:
  auVar3 = FUN_001f8fb4();
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1130);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 (*) [16])(param_1 + 0x120) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x130) = auVar3;
  *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfff7 | 1;
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x1120);
  FUN_001f86e4(param_1);
  FUN_001f3068(param_1,0);
  FUN_001f3060(param_1,0);
  return 0;
}


