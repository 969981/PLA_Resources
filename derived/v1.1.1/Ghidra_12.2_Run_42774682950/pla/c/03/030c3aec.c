/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c3aec; name: FUN_030c3aec
 */


void FUN_030c3aec(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,undefined2 param_8,
                 undefined2 param_9)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = tpidr_el0;
  if (*(long *)(lVar7 + 0x38d490) == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
    lVar7 = *(long *)(lVar6 + 0x10);
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x38d490) + 0x10);
  }
  if (lVar7 != 0) {
    puVar3 = *(undefined8 **)(lVar7 + 8);
    uVar5 = (long)puVar3 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar5, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "LtCreateSolverTask";
      puVar3[2] = "StBuildGraph";
      uVar4 = nn::os::GetSystemTick();
      puVar3[1] = uVar4;
    }
  }
  lVar8 = *(long *)(param_3 + 8);
  lVar6 = *(long *)(lVar8 + 0x4b0);
  iVar2 = *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x20) * 2;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar2) {
    uVar4 = FUN_030c420c(PTR_PTR_0434a080,iVar2,*param_1,*(undefined4 *)(param_1 + 1));
    *param_1 = uVar4;
  }
  lVar1 = *(long *)(param_6 + 0x48) + 0x78;
  if (*(char *)(lVar8 + 0x5b4) == '\0') {
    FUN_030c44ac(param_2,param_1,*(undefined4 *)(lVar8 + 0x5a0),*(undefined4 *)(lVar8 + 0x5a8),lVar6
                 ,param_5,lVar1,3,param_8,param_9,param_7);
  }
  else {
    FUN_030c57cc(param_2,param_1,*(undefined4 *)(lVar8 + 0x5a0),*(undefined4 *)(lVar8 + 0x5a8),lVar6
                 ,lVar1,3,param_5,param_8,param_9,param_7);
  }
  if (lVar7 != 0) {
    puVar3 = *(undefined8 **)(lVar7 + 8);
    uVar5 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar5, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03922da5;
      uVar4 = nn::os::GetSystemTick();
      puVar3[1] = uVar4;
    }
  }
  return;
}


