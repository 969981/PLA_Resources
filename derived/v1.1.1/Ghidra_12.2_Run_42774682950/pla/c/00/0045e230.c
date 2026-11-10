/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045e230; name: FUN_0045e230
 */


undefined8 FUN_0045e230(long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == 1) {
    param_1 = param_1 + 1;
    piVar6 = (int *)*param_1;
    if (piVar6 == (int *)0x0) goto LAB_0045e2d0;
LAB_0045e260:
    if (*piVar6 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_00421c70(PTR_DAT_043743a0);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    piVar6 = (int *)*param_1;
    if (piVar6 != (int *)0x0) goto LAB_0045e260;
LAB_0045e2d0:
    lVar4 = FUN_00421c70(PTR_DAT_043743b0);
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    uVar5 = FUN_00407340(&LAB_0045e380);
    *(undefined8 *)(*param_1 + 8) = uVar5;
    if (*(long *)((undefined4 *)*param_1 + 2) == 0) {
      return 0;
    }
    *(undefined4 *)*param_1 = 1;
    puVar2 = (undefined4 *)FUN_00421c70(PTR_DAT_043743a0);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if (param_4 == 0) {
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 2) = param_3;
  }
  else {
    *puVar2 = 1;
    puVar3 = (undefined8 *)FUN_00421c70(PTR_DAT_043743a8);
    *(undefined8 **)(puVar2 + 2) = puVar3;
    if (puVar3 == (undefined8 *)0x0) goto LAB_0045e350;
    thunk_FUN_0040a4b0(*puVar3);
    **(undefined8 **)(puVar2 + 2) = param_3;
    thunk_FUN_0040a4b0(*(undefined8 *)(*(long *)(puVar2 + 2) + 8));
    *(long *)(*(long *)(puVar2 + 2) + 8) = param_4;
  }
  iVar1 = FUN_00407800(*(undefined8 *)(*param_1 + 8),puVar2);
  if (iVar1 != 0) {
    return 1;
  }
LAB_0045e350:
  FUN_00421810(puVar2,PTR_DAT_043743a0);
  return 0;
}


