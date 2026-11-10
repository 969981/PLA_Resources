/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01673270; name: FUN_01673270
 */


undefined1 * FUN_01673270(long param_1,ulong param_2)

{
  char cVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  
  param_2 = param_2 & 0xffffffff;
  if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3) <= param_2) {
    return &DAT_cbf29ce484222645;
  }
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    return &DAT_cbf29ce484222645;
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x78) + param_2 * 8);
  plVar5 = (long *)PTR_PTR_04379d00;
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 0xc;
  }
  pcVar7 = (char *)*plVar5;
  if (plVar6 == (long *)0x0) {
    if (*pcVar7 == '[') {
      plVar5 = (long *)0x0;
      goto LAB_016733e8;
    }
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    cVar1 = *pcVar7;
    (**(code **)(*plVar6 + 0x20))(plVar6);
    if (cVar1 == '[') {
      plVar5 = *(long **)(*(long *)(param_1 + 0x78) + param_2 * 8);
      lVar3 = *(long *)(param_1 + 0x68);
      if (plVar5 != (long *)0x0) {
        local_50 = plVar5[0xb];
        goto joined_r0x016733f4;
      }
LAB_016733e8:
      local_50 = *(long *)PTR_DAT_04379c88;
joined_r0x016733f4:
      if (plVar5 == (long *)0x0) {
        lStack_48 = *(long *)PTR_PTR_04379d00;
        local_40 = 0;
      }
      else {
        lStack_48 = plVar5[0xc];
        local_40 = plVar5[0xd];
      }
      local_38 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      local_38 = plVar5;
      puVar2 = (undefined1 *)FUN_01660e64(lVar3,&local_50,param_1 + 0x70);
      if (local_38 == (long *)0x0) {
        return puVar2;
      }
      (**(code **)(*local_38 + 0x20))();
      return puVar2;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x78) + param_2 * 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x58);
      goto LAB_01673310;
    }
  }
  puVar4 = (undefined8 *)PTR_DAT_04379c88;
LAB_01673310:
  return (undefined1 *)*puVar4;
}


