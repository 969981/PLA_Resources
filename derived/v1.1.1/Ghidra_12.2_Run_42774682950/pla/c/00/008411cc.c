/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008411cc; name: FUN_008411cc
 */


void FUN_008411cc(long param_1,int *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
  FUN_00847370();
  plVar2 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_2 + 2));
  cVar1 = FUN_008473d0(param_1);
  if (cVar1 != -3) {
    lVar4 = FUN_00847388(param_1);
    lVar5 = *(long *)(lVar3 + 0x30);
    if (lVar4 != lVar5) {
      if (*param_2 == 1) {
        FUN_0084b528(auStack_30,*(undefined8 *)(param_1 + 0x70),lVar5,*(undefined1 *)(lVar3 + 0x28),
                     1);
        return;
      }
      if (*param_2 == 0) {
        FUN_0084b358(auStack_30,*(undefined8 *)(param_1 + 0x70),lVar5,*(undefined1 *)(lVar3 + 0x28),
                     *(undefined2 *)(lVar3 + 0x38));
      }
    }
  }
  return;
}


