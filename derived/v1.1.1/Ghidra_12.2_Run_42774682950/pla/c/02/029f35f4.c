/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f35f4; name: FUN_029f35f4
 */


void FUN_029f35f4(long param_1,char *param_2)

{
  char cVar1;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined3 local_54;
  undefined5 uStack_51;
  undefined8 local_4c;
  undefined7 local_44;
  undefined1 uStack_3d;
  undefined7 uStack_3c;
  undefined8 *local_28;
  
  **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
  FUN_029ce3f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  FUN_029f3774(param_1);
  cVar1 = *(char *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0xf);
  if (cVar1 != '\0') {
    local_78 = (undefined **)CONCAT71(local_78._1_7_,0x1f);
    local_60 = 0xa7;
    local_78 = (undefined **)CONCAT44(8,(undefined4)local_78);
    local_5c = 0;
    uStack_58 = 0;
    local_54 = 0;
    uStack_51 = 0;
    local_4c = 0;
    local_44 = 0;
    uStack_3d = 0;
    uStack_3c = 0;
    local_70._0_2_ = CONCAT11(1,cVar1);
    local_68 = 0xf9;
    FUN_029dba1c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xc40),&local_28,&local_78);
  }
  local_78 = &PTR_LAB_04277240;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_5e = 0;
  local_5c = 0;
  uStack_58 = 0;
  local_54 = 0;
  FUN_029f3894(param_1,&local_78,0);
  FUN_029f3894(param_1,&local_78,1);
  FUN_029f3894(param_1,&local_78,2);
  FUN_029f3894(param_1,&local_78,3);
  FUN_029f3894(param_1,&local_78,4);
  local_28 = &local_78;
  FUN_029d07c4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x80),auStack_80,&local_28);
  cVar1 = **(char **)(*(long *)(param_1 + 0x40) + 0x28);
  if (cVar1 == '\0') {
    FUN_029797ec(*(undefined8 *)(param_1 + 0x38));
    cVar1 = **(char **)(*(long *)(param_1 + 0x40) + 0x28);
    if (cVar1 == '\0') {
      FUN_029e0320(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x980),&local_28,&local_78);
      cVar1 = **(char **)(*(long *)(param_1 + 0x40) + 0x28);
    }
  }
  *param_2 = cVar1;
  return;
}


