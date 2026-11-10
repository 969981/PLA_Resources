/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00873714; name: FUN_00873714
 */


void FUN_00873714(long *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_30;
  undefined4 local_28;
  
  plVar4 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined8 *)(param_2 + 2));
  cVar2 = FUN_008473d0(param_1);
  if (cVar2 != -3) {
    lVar6 = FUN_00847388(param_1);
    if (lVar6 != *(long *)(lVar5 + 0x30)) {
      iVar1 = *param_2;
      if ((iVar1 != 0) && (iVar1 != 2)) {
        if (iVar1 == 1) {
          uVar3 = FUN_00873808(param_1);
          if (*(ushort *)(param_1 + 0xc) != uVar3) {
            FUN_0087088c(param_1 + (ulong)uVar3 * 0x16 + 0x10b);
          }
        }
        else {
          local_28 = 0;
          local_30 = 0x1000;
          (**(code **)(*param_1 + 0x10))(param_1,&local_30);
        }
      }
      local_28 = 0;
      local_30 = 0x1000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_30);
    }
  }
  return;
}


