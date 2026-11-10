/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00850280; name: FUN_00850280
 */


void FUN_00850280(long param_1,int *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  FUN_00847370();
  plVar2 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_2 + 2));
  cVar1 = FUN_008473d0(param_1);
  if (((cVar1 != -3) && (lVar4 = FUN_00847388(param_1), lVar4 != *(long *)(lVar3 + 0x30))) &&
     ((*param_2 == 1 || (*param_2 == 0)))) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)*(byte *)(lVar3 + 0x28) * 0x34);
    *(undefined8 *)((long)puVar5 + 0x2c) = 0;
    *puVar5 = 0;
  }
  return;
}


