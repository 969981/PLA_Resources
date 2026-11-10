/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03398734; name: FUN_03398734
 */


void FUN_03398734(long param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x288) + 0x30))();
    uVar3 = *param_4;
    uVar5 = param_4[1];
    uVar10 = param_4[2];
    if ((uVar10 & 1) != 0) {
      FUN_032e0c28(uVar10 & 0xfffffffffffffffe);
    }
    iVar8 = *(int *)(param_1 + 0x298);
    iVar1 = iVar8 + 1;
    lVar7 = *(long *)(param_1 + 0x290);
    if ((int)(*(uint *)(param_1 + 0x29c) & 0x3fffffff) <= iVar8) {
      lVar7 = FUN_03398570(PTR_PTR_0434a080,iVar1);
      iVar8 = *(int *)(param_1 + 0x298);
      *(long *)(param_1 + 0x290) = lVar7;
    }
    puVar2 = (undefined8 *)(lVar7 + (long)iVar8 * 0x20);
    puVar2[2] = uVar10;
    *puVar2 = uVar3;
    puVar2[1] = uVar5;
    *(undefined4 *)(puVar2 + 3) = uVar4;
    *(int *)(param_1 + 0x298) = iVar1;
    if (*(char *)(param_1 + 0x2a8) != '\0') {
      uVar3 = *param_3;
      plVar9 = *(long **)(param_1 + 0x2a0);
      uVar5 = FUN_03398860(param_3[1]);
      uVar6 = FUN_03398860(param_4[1]);
      (**(code **)(*plVar9 + 0x10))(plVar9,uVar3,uVar5,uVar6);
    }
  }
  *(undefined4 *)*param_3 = 0;
                    /* WARNING: Could not recover jumptable at 0x03398848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
            (*(long **)(param_1 + 0x2a0),*param_3,uVar4,param_4[1]);
  return;
}


