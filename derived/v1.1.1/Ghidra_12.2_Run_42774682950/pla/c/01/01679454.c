/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01679454; name: FUN_01679454
 */


undefined1  [16] FUN_01679454(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  param_2 = param_2 & 0xffffffff;
  if ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3) <= param_2) {
    return ZEXT816(0);
  }
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 == 0) {
    return ZEXT816(0);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x78) + param_2 * 8);
  plVar5 = (long *)PTR_PTR_04379d00;
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar6 + 0xc;
  }
  pcVar7 = (char *)*plVar5;
  if (plVar6 == (long *)0x0) {
    if (*pcVar7 != '[') {
      lVar4 = 0;
      goto LAB_016794e4;
    }
    plVar5 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    cVar2 = *pcVar7;
    (**(code **)(*plVar6 + 0x20))(plVar6);
    if (cVar2 != '[') {
      lVar4 = *(long *)(*(long *)(param_1 + 0x78) + param_2 * 8);
LAB_016794e4:
      puVar1 = (undefined8 *)PTR_PTR_04379d00;
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + 0x60);
      }
      dVar8 = atof((char *)*puVar1);
      return ZEXT416((uint)(float)dVar8);
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x78) + param_2 * 8);
    lVar4 = *(long *)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      local_60 = plVar5[0xb];
      goto joined_r0x016795dc;
    }
  }
  local_60 = *(long *)PTR_DAT_04379c88;
joined_r0x016795dc:
  if (plVar5 == (long *)0x0) {
    lStack_58 = *(long *)PTR_PTR_04379d00;
    local_50 = 0;
  }
  else {
    lStack_58 = plVar5[0xc];
    local_50 = plVar5[0xd];
  }
  local_48 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_48 = plVar5;
  auVar9 = FUN_01660afc(lVar4,&local_60,param_1 + 0x70);
  uVar10 = auVar9._8_8_;
  if (local_48 == (long *)0x0) {
    return auVar9;
  }
  (**(code **)(*local_48 + 0x20))();
  auVar3._8_8_ = uVar10;
  auVar3._0_8_ = auVar9._0_8_;
  return auVar3;
}


