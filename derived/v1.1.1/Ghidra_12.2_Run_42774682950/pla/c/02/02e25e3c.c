/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e25e3c; name: FUN_02e25e3c
 */


undefined8 FUN_02e25e3c(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  float fVar9;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar3 = *(long *)(param_1 + 0x48);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
    lVar3 = *(long *)(param_1 + 0x48);
  }
  if (lVar3 != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x30) & 0xff;
  lVar3 = *(long *)(param_1 + 0x18);
  *(int *)(param_1 + 0x38) = (int)uVar7;
  if (((*(uint *)(param_1 + 0x30) >> 0xf & 1) == 0) || (*(char *)(lVar3 + 0x20) != '\0')) {
    cVar1 = *(char *)(lVar3 + 0x21);
    uVar6 = uVar7;
  }
  else {
    uVar8 = (int)uVar7 - 1;
    uVar6 = (ulong)uVar8;
    *(uint *)(param_1 + 0x38) = uVar8;
    cVar1 = *(char *)(lVar3 + 0x21);
  }
  uVar4 = (undefined4)uVar6;
  if (cVar1 != '\0') {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c));
  fVar9 = *(float *)(lVar3 + 0x1c) * fVar9;
  uVar8 = (uint)fVar9;
  *(uint *)(param_1 + 0x40) = uVar8;
  fVar9 = expf(-4.4 / (float)(int)fVar9);
  *(float *)(param_1 + 0x68) = fVar9;
  lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                    (*(long **)(param_1 + 0x20),uVar7 * uVar8 * 4);
  *(long *)(param_1 + 0x50) = lVar3;
  if (lVar3 == 0) {
LAB_02e25f60:
    uVar2 = 0x34;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((*(char *)(lVar3 + 0x21) == '\0') || (*(int *)(param_1 + 0x38) == 1)) {
      pcVar5 = FUN_02e26470;
    }
    else {
      pcVar5 = FUN_02e269b8;
      if ((*(char *)(param_1 + 0x31) < '\0') &&
         (pcVar5 = FUN_02e27060, *(char *)(lVar3 + 0x20) != '\0')) {
        pcVar5 = FUN_02e269b8;
      }
    }
    *(code **)(param_1 + 8) = pcVar5;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(uint *)(param_1 + 0x3c) != 0) {
      lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                        (*(long **)(param_1 + 0x20),(ulong)*(uint *)(param_1 + 0x3c) << 4);
      *(long *)(param_1 + 0x48) = lVar3;
      if (lVar3 == 0) goto LAB_02e25f60;
      lVar3 = *(long *)(param_1 + 0x18);
    }
    uVar2 = 1;
    *(undefined1 *)(lVar3 + 0x22) = 0;
  }
  return uVar2;
}


