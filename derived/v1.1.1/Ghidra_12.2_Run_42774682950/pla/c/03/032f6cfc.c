/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f6cfc; name: FUN_032f6cfc
 */


undefined8 FUN_032f6cfc(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)*param_1 == *param_2) {
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_032e3dac();
    if (iVar2 == 0) {
      plVar6 = (long *)param_1[1];
      iVar5 = (int)plVar6[1];
      lVar4 = *plVar6;
      lVar7 = (long)iVar5;
      iVar2 = iVar5 + 1;
      if ((int)(*(uint *)((long)plVar6 + 0xc) & 0x3fffffff) <= iVar5) {
        lVar4 = FUN_032f6e0c(PTR_PTR_0434a090,iVar2);
        iVar5 = (int)plVar6[1];
        *plVar6 = lVar4;
      }
      puVar1 = (undefined8 *)(lVar4 + (long)iVar5 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(int *)(plVar6 + 1) = iVar2;
      plVar6 = (long *)(*plVar6 + lVar7 * 0x10);
      *plVar6 = *param_2;
      plVar6[1] = *(long *)*param_1;
      plVar6 = (long *)param_1[2];
      iVar5 = (int)plVar6[1];
      iVar2 = iVar5 + 1;
      lVar4 = *plVar6;
      if ((int)(*(uint *)((long)plVar6 + 0xc) & 0x3fffffff) <= iVar5) {
        lVar4 = FUN_032f6fbc(PTR_PTR_0434a090,iVar2);
        iVar5 = (int)plVar6[1];
        *plVar6 = lVar4;
      }
      uVar3 = 1;
      *(long **)(lVar4 + (long)iVar5 * 8) = param_2;
      *(int *)(plVar6 + 1) = iVar2;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


