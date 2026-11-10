/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850728; name: FUN_00850728
 */


undefined8 FUN_00850728(long param_1,short param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  sVar2 = *(short *)(param_1 + 8);
  if (sVar2 == 0) {
    sVar2 = param_2 + -1;
    *(short *)(param_1 + 8) = sVar2;
  }
  uVar3 = (uint)(short)(param_2 - sVar2);
  if ((int)uVar3 < 1) {
    return 0;
  }
  if (sVar2 != 0) {
    uVar3 = (int)(short)((param_2 - sVar2) - (ushort)((int)(uint)(ushort)-sVar2 < (int)uVar3));
  }
  if (*(char *)(param_1 + 0xe) != '\0') {
    uVar1 = uVar3 + *(ushort *)(param_1 + 10);
    if (uVar1 >> 0x10 != 0) {
      *(ushort *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + ~*(ushort *)(param_1 + 10);
      *(undefined2 *)(param_1 + 10) = 0xffff;
      *(undefined1 *)(param_1 + 0xe) = 0;
      uVar1 = *(uint *)(param_1 + 0x10);
      goto joined_r0x00850798;
    }
    *(short *)(param_1 + 10) = (short)uVar1;
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + (short)(uVar3 - 1);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
joined_r0x00850798:
  if (uVar1 != 0xffffffff) {
    if (CARRY4(uVar1,uVar3)) {
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + ~uVar1;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    else {
      *(uint *)(param_1 + 0x10) = uVar1 + uVar3;
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (uVar3 - 1);
    }
  }
  *(short *)(param_1 + 8) = param_2;
  return 1;
}


