/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ba298; name: FUN_031ba298
 */


void FUN_031ba298(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  if (plVar7 != (long *)0x0) {
    iVar4 = (int)plVar7[1];
    lVar3 = *plVar7;
    iVar1 = iVar4 + 1;
    if ((int)(*(uint *)((long)plVar7 + 0xc) & 0x3fffffff) <= iVar4) {
      lVar3 = FUN_0318a008(PTR_PTR_0434a080,iVar1);
      iVar4 = (int)plVar7[1];
      *plVar7 = lVar3;
    }
    uVar6 = param_2[3];
    puVar5 = (undefined8 *)(lVar3 + (long)iVar4 * 0x30);
    uVar2 = *(undefined4 *)(param_2 + 4);
    puVar5[1] = param_2[1];
    puVar5[3] = uVar6;
    *puVar5 = *param_2;
    uVar6 = param_2[2];
    *(undefined4 *)(puVar5 + 4) = uVar2;
    puVar5[2] = uVar6;
    *(undefined4 *)((long)puVar5 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
    *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(param_2 + 5);
    *(int *)(plVar7 + 1) = iVar1;
  }
  return;
}


