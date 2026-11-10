/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec8b50; name: FUN_02ec8b50
 */


int FUN_02ec8b50(long param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  
  if ((param_2 == 0) && (*(int *)(param_1 + 0x160) == 0)) {
    iVar1 = 1;
  }
  else {
    plVar2 = (long *)FUN_02f59e30(6,0x28);
    if (plVar2 == (long *)0x0) {
      iVar1 = 0x34;
    }
    else {
      plVar2[3] = 0;
      plVar2[4] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
      FUN_02ef4950();
      *plVar2 = (long)&PTR_LAB_042ab310;
      *(undefined4 *)(plVar2 + 3) = 0;
      plVar2[2] = 0;
      *(undefined8 *)((long)plVar2 + 0x1c) = 0x2b;
      local_3c = *(undefined4 *)(param_1 + 100);
      iVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,0,0,0,auStack_40);
      if (iVar1 == 1) {
        FUN_02eb04a0(param_1 + 0xd8);
        *(long **)(param_1 + 0x138) = plVar2;
        *(undefined4 *)(param_1 + 0x3c) = local_3c;
        *(int *)(param_1 + 0x160) = param_2;
        *(undefined4 *)(param_1 + 0x18) = 0xb5;
      }
    }
  }
  return iVar1;
}


