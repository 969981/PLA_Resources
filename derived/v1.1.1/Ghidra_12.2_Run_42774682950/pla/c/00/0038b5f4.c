/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038b5f4; name: FUN_0038b5f4
 */


undefined8 * FUN_0038b5f4(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  
  uVar3 = FUN_0038fe58(param_1 + 8,param_3);
  plVar1 = (long *)(param_2 + (uVar3 & 0xffffffff));
  piVar5 = (int *)plVar1[2];
  if (piVar5 == (int *)0x0) {
    iVar6 = *(int *)((long)plVar1 + 0xc);
  }
  else {
    iVar2 = (int)plVar1[1];
    iVar6 = *piVar5;
    if (iVar2 < iVar6) {
      *(int *)(plVar1 + 1) = iVar2 + 1;
      return *(undefined8 **)(piVar5 + (long)iVar2 * 2 + 2);
    }
    if (iVar6 != *(int *)((long)plVar1 + 0xc)) goto LAB_0038b66c;
  }
  FUN_0032bcac(plVar1,iVar6 + 1);
  piVar5 = (int *)plVar1[2];
  iVar6 = *piVar5;
LAB_0038b66c:
  *piVar5 = iVar6 + 1;
  lVar7 = *plVar1;
  if (lVar7 == 0) {
    puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
  }
  else {
    if (*(long *)(lVar7 + 0x70) != 0) {
      FUN_0032cf88(lVar7,0,0x18);
    }
    puVar4 = (undefined8 *)FUN_0032c850(lVar7,0x18,PTR_LAB_043730d0);
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
  }
  lVar7 = plVar1[1];
  *(int *)(plVar1 + 1) = (int)lVar7 + 1;
  *(undefined8 **)(plVar1[2] + (long)(int)lVar7 * 8 + 8) = puVar4;
  return puVar4;
}


