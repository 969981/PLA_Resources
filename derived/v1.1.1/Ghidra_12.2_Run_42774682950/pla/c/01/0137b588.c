/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137b588; name: FUN_0137b588
 */


void FUN_0137b588(long param_1,int param_2,byte param_3,byte param_4,byte param_5)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  byte local_470 [1024];
  undefined1 *local_70;
  undefined1 *puStack_68;
  size_t local_60;
  long *local_58;
  
  puVar7 = &DAT_cbf29ce484222645;
  memset(local_470,0,0x400);
  snprintf((char *)local_470,0x400,"list_button_%02d",param_2);
  local_60 = strlen((char *)local_470);
  if (local_470[0] != 0) {
    pbVar4 = (byte *)((ulong)local_470 | 1);
    do {
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)local_470[0]) * 0x100000001b3);
      local_470[0] = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (local_470[0] != 0);
  }
  local_58 = (long *)0x0;
  local_70 = puVar7;
  puStack_68 = local_470;
  plVar3 = (long *)FUN_00d2e944(param_1 + 0x180,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  *(byte *)((long)plVar3 + 0x2aa) = ~(param_4 & param_5) & 1;
  bVar1 = (param_3 ^ 1) & 1;
  if (*(byte *)((long)plVar3 + 0xa2) != bVar1) {
    *(byte *)((long)plVar3 + 0xa2) = bVar1;
    (**(code **)(*plVar3 + 0x98))(plVar3);
  }
  if ((param_4 & 1) == 0) {
    plVar5 = &DAT_04207e20;
  }
  else {
    plVar5 = &DAT_04207e08;
  }
  lVar2 = plVar5[1];
  lVar6 = plVar5[2];
  plVar3[0x4d] = *plVar5;
  plVar5 = (long *)plVar3[0x50];
  plVar3[0x4e] = lVar2;
  plVar3[0x4f] = lVar6;
  plVar3[0x50] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  return;
}


