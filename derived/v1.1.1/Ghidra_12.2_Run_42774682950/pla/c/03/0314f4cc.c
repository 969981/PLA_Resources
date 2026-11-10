/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314f4cc; name: FUN_0314f4cc
 */


void FUN_0314f4cc(long param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar3;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar3 != 0) {
    FUN_032d5af0(lVar3,"TtUpdateBeforeCD",0x10);
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x80))
                    (*(long **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  if ('\0' < *(char *)(*(long *)(param_1 + 0x38) + 0x30)) {
    lVar6 = 0;
    lVar7 = 0;
    lVar3 = 0;
    lVar8 = 0x20;
    do {
      lVar1 = *(long *)(param_1 + 0x90) + lVar7;
      FUN_032cc384(lVar1 + 0x70,uVar4,*(long *)(*(long *)(param_1 + 0x68) + 0x18) + lVar8 + -0x10);
      FUN_032cc3fc(lVar1 + 0x40,uVar4,*(long *)(*(long *)(param_1 + 0x68) + 0x18) + lVar8 + -0x20);
      lVar3 = lVar3 + 1;
      lVar7 = lVar7 + 0xd0;
      pfVar2 = (float *)(*(long *)(*(long *)(param_1 + 0x38) + 0xa0) + lVar6);
      lVar6 = lVar6 + 0x28;
      fVar9 = *(float *)(*(long *)(*(long *)(param_1 + 0x68) + 0x18) + lVar8) + *pfVar2;
      lVar8 = lVar8 + 0x30;
      *(ulong *)(lVar1 + 0x58) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20) * fVar9,
                    (float)*(undefined8 *)(lVar1 + 0x48) +
                    (float)*(undefined8 *)(lVar1 + 0x78) * fVar9);
      *(ulong *)(lVar1 + 0x50) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20) * fVar9,
                    (float)*(undefined8 *)(lVar1 + 0x40) +
                    (float)*(undefined8 *)(lVar1 + 0x70) * fVar9);
    } while (lVar3 < *(char *)(*(long *)(param_1 + 0x38) + 0x30));
  }
  (**(code **)(**(long **)(param_1 + 0x78) + 0x30))(*(long **)(param_1 + 0x78),param_1);
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar3;
    lVar5 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar5 == 0) {
    return;
  }
  FUN_032d5b34(lVar5,&DAT_0390f40e);
  return;
}


