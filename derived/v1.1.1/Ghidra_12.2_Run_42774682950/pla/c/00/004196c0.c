/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004196c0; name: FUN_004196c0
 */


undefined8 FUN_004196c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0x38a) {
    lVar4 = 0x20;
    uVar2 = FUN_00470810();
  }
  else if (iVar1 == 0x389) {
    lVar4 = 0x18;
    uVar2 = FUN_004707a0();
  }
  else {
    if (iVar1 != 0x388) {
      return 0;
    }
    lVar4 = 0x10;
    uVar2 = FUN_00470730();
  }
  *(undefined ***)(param_1 + 0x140) = &PTR_FUN_041638a8;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(long *)(param_1 + 0xc0) = lVar4;
  if (*(long *)(param_1 + 0xa8) == 0) {
    lVar3 = FUN_0041b530();
    *(long *)(param_1 + 0xa8) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 0x30) = (int)lVar4 << 3;
  lVar4 = lVar4 + 0x10;
  *(long *)(param_1 + 0x90) = lVar4;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_0041b530();
      *(long *)(param_1 + 0xb0) = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
    }
    uVar2 = FUN_0041b5e0(lVar4,*(undefined8 *)(param_1 + 0xb8),0,&DAT_03a04554,0,1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar4 = 0x7fffffff;
    *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x48) = 0x7fffffff;
    *(ulong *)(param_1 + 0x50) = *(ulong *)(param_1 + 0xc0) >> 1;
    *(undefined8 *)(param_1 + 0x60) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x58) = 0x7fffffff;
  }
  else {
    *(long *)(param_1 + 0x40) = lVar4;
    *(long *)(param_1 + 0x48) = lVar4;
    *(long *)(param_1 + 0x60) = lVar4;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(long *)(param_1 + 0x68) = lVar4;
  *(undefined8 *)(param_1 + 0x38) = 0x10000;
  return 1;
}


