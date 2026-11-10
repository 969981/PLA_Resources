/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d505b8; name: FUN_02d505b8
 */


void FUN_02d505b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  plVar4 = (long *)FUN_013b2b18();
  lVar5 = *plVar4;
  *(long *)PTR_DAT_0437b480 = lVar5;
  bVar3 = DAT_043f17ac;
  plVar4 = DAT_043f1798;
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  local_60[0] = 1;
  local_58 = 0x2000;
  local_70 = 0;
  lVar5 = tpidr_el0;
  cVar2 = *(char *)(lVar5 + 0x28);
  DAT_043f17ac = 0;
  if (*(long *)(lVar5 + 0x20) == 0) {
    *(long **)(lVar5 + 0x20) = DAT_043f1798;
  }
  puVar1 = (undefined8 *)(lVar5 + 0x20);
  local_50 = *puVar1;
  local_48 = *(undefined8 *)(lVar5 + 0x28);
  *puVar1 = plVar4;
  *(undefined2 *)(lVar5 + 0x28) = 0x101;
  local_68 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x10,8);
  *local_68 = &PTR_LAB_04298960;
  *(undefined2 *)(lVar5 + 0x28) = (undefined2)local_48;
  *puVar1 = local_50;
  DAT_043f17ac = bVar3 & cVar2 == '\0';
  FUN_02738f98(param_1,uVar6,param_2,local_60,&local_70);
  FUN_013b348c(&local_70);
  FUN_013b22f8(*param_1);
  return;
}


