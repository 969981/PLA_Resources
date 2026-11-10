/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033256cc; name: FUN_033256cc
 */


void FUN_033256cc(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_043504e8;
  iVar3 = *(int *)(param_1 + 7);
  if (iVar3 == 2) {
    plVar1 = (long *)param_1[3];
    uVar2 = param_1[4];
    *(undefined4 *)(plVar1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)plVar1 + 0xc)) && (*plVar1 != 0)) {
      FUN_032cf244(uVar2,*plVar1,1,*(uint *)((long)plVar1 + 0xc) & 0x3fffffff);
    }
    *plVar1 = 0;
    *(undefined4 *)((long)plVar1 + 0xc) = 0x80000000;
    if (param_1[3] != 0) {
      FUN_032cf640(param_1[3],0x10);
    }
    iVar3 = *(int *)(param_1 + 7);
  }
  if ((iVar3 == 0) && (param_1[3] != 0)) {
    FUN_032cf640(param_1[3],0x10);
  }
  FUN_03325dd8(param_1);
  return;
}


