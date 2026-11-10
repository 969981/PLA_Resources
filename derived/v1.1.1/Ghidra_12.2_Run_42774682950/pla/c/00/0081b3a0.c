/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081b3a0; name: FUN_0081b3a0
 */


long FUN_0081b3a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  FUN_0081ab18((ulong *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0x104),PTR_LAB_04377b48);
  if (*(int *)(param_1 + 0xe8) < 1) {
    uVar2 = 0;
    if (0 < *(int *)(param_1 + 0x100)) goto LAB_0081b3ec;
LAB_0081b418:
    if (uVar2 == 0) goto LAB_0081b474;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0xd8);
    if (uVar2 != 0) {
      uVar2 = uVar2 - (long)*(int *)(param_1 + 0xec);
    }
    if (*(int *)(param_1 + 0x100) < 1) goto LAB_0081b418;
LAB_0081b3ec:
    uVar3 = *(ulong *)(param_1 + 0xf0);
    if (uVar3 != 0) {
      uVar3 = uVar3 - (long)*(int *)(param_1 + 0x104);
    }
    if (uVar2 <= uVar3) goto LAB_0081b474;
  }
  lVar4 = uVar2 - *(long *)(param_1 + 0x30);
  FUN_0081aac8((long)*(int *)(param_1 + 0xec) + uVar2);
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
  lVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x48))
                    (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),lVar4);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x38) = lVar4;
    return lVar4;
  }
LAB_0081b474:
  return *(long *)(param_1 + 0x38);
}


