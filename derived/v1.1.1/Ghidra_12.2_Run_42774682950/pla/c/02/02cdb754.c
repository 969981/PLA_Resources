/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cdb754; name: FUN_02cdb754
 */


void FUN_02cdb754(ushort *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_0120bd20(param_1 + 4);
  bVar5 = DAT_043f17ac;
  plVar6 = DAT_043f1798;
  uVar3 = *param_1;
  if ((double)uVar3 <= (double)*(long *)(param_1 + 8) / 1000000.0) {
    lVar7 = *(long *)(param_1 + 0xc);
    local_60 = 0;
    lVar4 = tpidr_el0;
    cVar2 = *(char *)(lVar4 + 0x28);
    DAT_043f17ac = 0;
    if (*(long *)(lVar4 + 0x20) == 0) {
      *(long **)(lVar4 + 0x20) = DAT_043f1798;
    }
    puVar1 = (undefined8 *)(lVar4 + 0x20);
    local_50 = *puVar1;
    local_48 = *(undefined8 *)(lVar4 + 0x28);
    *puVar1 = plVar6;
    *(undefined2 *)(lVar4 + 0x28) = 0x101;
    local_58 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
    *local_58 = &PTR_LAB_04297588;
    *(uint *)(local_58 + 1) = (uint)uVar3;
    *(undefined2 *)(lVar4 + 0x28) = (undefined2)local_48;
    DAT_043f17ac = bVar5 & cVar2 == '\0';
    *puVar1 = local_50;
    if (*(long *)(lVar7 + 0x68) != 0) {
      FUN_013b7e5c(*(long *)(lVar7 + 0x68),&local_60);
    }
    FUN_013b348c(&local_60);
    if ((*(long *)(param_1 + 0x10) != 0) && (plVar6 = (long *)FUN_013b36b8(), plVar6 != (long *)0x0)
       ) {
      (**(code **)(*plVar6 + 0x50))();
    }
  }
  return;
}


