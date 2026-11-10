/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332e27c; name: FUN_0332e27c
 */


void FUN_0332e27c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined1 auStack_a8 [8];
  undefined8 *local_a0;
  long *local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  ulong local_38;
  
  plVar4 = (long *)FUN_032cf5b0(0x60);
  *plVar4 = 0;
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  *(undefined1 *)(plVar4 + 2) = 0;
  *(undefined1 *)(plVar4 + 3) = 0;
  FUN_0332b928(plVar4 + 4,0,1,0);
  plVar4[0xb] = 0;
  iVar7 = *(int *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x18);
  iVar1 = iVar7 + 1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) <= iVar7) {
    lVar6 = FUN_0332e9a4(PTR_PTR_0434a080,iVar1);
    iVar7 = *(int *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = lVar6;
  }
  *(long **)(lVar6 + (long)iVar7 * 8) = plVar4;
  *(int *)(param_1 + 0x20) = iVar1;
  *plVar4 = param_1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)(plVar4 + 3) = 0;
  *(undefined1 *)(plVar4 + 2) = 1;
  *(undefined4 *)(plVar4 + 1) = uVar2;
  *(undefined4 *)((long)plVar4 + 0xc) = uVar2;
  plVar4[9] = 0;
  plVar4[10] = 0;
  FUN_0333d158(&local_50);
  local_50 = *(undefined8 *)(param_1 + 0x178);
  local_48 = (long)*(int *)(param_1 + 0x180);
  local_40 = *(undefined4 *)(param_1 + 0x184);
  if ((char)plVar4[2] == '\x02') {
    local_38 = (ulong)*(uint *)((long)plVar4 + 0xc);
  }
  FUN_0333de70(auStack_a8,0,8,&LAB_0332ea58,&LAB_0332ea6c);
  *local_a0 = plVar4;
  FUN_032ba248(&local_58,&local_50,auStack_a8);
  plVar3 = local_58;
  local_58 = (long *)0x0;
  plVar5 = (long *)plVar4[0xb];
  plVar4[0xb] = (long)plVar3;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 8))();
    }
  }
  FUN_0333ddd4(auStack_a8);
  if ((char)plVar4[2] != '\x02') {
    FUN_032ba1b0(plVar4[0xb],*(undefined4 *)((long)plVar4 + 0xc));
  }
  return;
}


