/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0168f20c; name: FUN_0168f20c
 */


undefined8 FUN_0168f20c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long local_a0 [2];
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  undefined1 *local_68;
  long *local_60;
  long *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 *local_38;
  
  lVar5 = *(long *)(param_2 + 0x68);
  if (lVar5 != 0) {
    FUN_01668fcc(&local_70,param_2,0);
    FUN_0166059c(lVar5,0,&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  puVar4 = (undefined1 *)FUN_01673270(param_2,2);
  local_48 = (long *)0x0;
  local_68 = &DAT_cbf29ce484222645;
  local_40 = 0;
  local_3e = 1;
  local_38 = puVar4;
  FUN_00947cf8(&local_90,"SimpleTalkNPC");
  local_70 = local_90;
  FUN_01668fcc(&local_90,param_2,1);
  plVar2 = local_78;
  local_60 = local_90;
  local_58 = (long *)uStack_88;
  uStack_50 = local_80;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))(local_78);
    plVar3 = local_48;
    local_48 = plVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
      goto joined_r0x0168f38c;
    }
  }
  local_48 = plVar2;
joined_r0x0168f38c:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  ppuVar1 = (undefined1 **)(param_2 + 0x60);
  if (puVar4 != &DAT_cbf29ce484222645) {
    ppuVar1 = &local_38;
  }
  local_68 = *ppuVar1;
  local_3e = 0;
  FUN_016b14c0(local_a0,&local_70);
  if (local_a0[0] != 0) {
    FUN_02a43934();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return 2;
}


