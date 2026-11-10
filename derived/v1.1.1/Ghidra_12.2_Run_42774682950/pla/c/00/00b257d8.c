/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b257d8; name: FUN_00b257d8
 */


void FUN_00b257d8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  long *local_b8;
  char *local_b0;
  char acStack_a8 [128];
  long local_28;
  
  auVar4 = FUN_00b258b8();
  lVar2 = FUN_00b078ec(*(undefined8 *)(param_2 + 0x98),auVar4._0_8_,auVar4._8_8_);
  snprintf(acStack_a8,0x80,"%s",*(undefined8 *)(lVar2 + 0x68));
  pcVar3 = strrchr(acStack_a8,0x2f);
  *pcVar3 = '\0';
  local_b0 = strrchr(acStack_a8,0x2f);
  local_b0 = local_b0 + 1;
  FUN_00b25a14(&local_b8,"bin/archive/pokemon/",&local_b0,".gfpak");
  plVar1 = (long *)PTR_PTR_04379d00;
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 0xc;
  }
  local_28 = *plVar1;
  FUN_009f1b84(param_1,&local_28);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  return;
}


