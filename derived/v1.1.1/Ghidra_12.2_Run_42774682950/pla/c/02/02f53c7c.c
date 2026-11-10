/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f53c7c; name: FUN_02f53c7c
 */


ulong FUN_02f53c7c(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_24;
  undefined1 auStack_18 [4];
  char local_14 [4];
  
  lVar6 = param_1[2];
  if (lVar6 == 0) {
LAB_02f53d98:
    uVar4 = FUN_02f37c08(param_1,param_3,param_2,param_4 & 1);
    if ((int)uVar4 != 1) {
      return uVar4;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
      goto LAB_02f53ce0;
    }
  }
  else {
    if (*(long *)(lVar6 + 0x30) == 0) {
      *(long **)(lVar6 + 0x30) = param_1;
      param_1[1] = 0;
    }
    else {
      param_1[1] = *(long *)(lVar6 + 0x30);
      *(long **)(lVar6 + 0x30) = param_1;
    }
    *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) goto LAB_02f53d98;
    param_1[0xc] = plVar2[0xc];
  }
  uVar3 = (**(code **)(*plVar2 + 0xa0))(plVar2,*(undefined4 *)(param_1[0x12] + 0x10));
LAB_02f53ce0:
  uVar4 = FUN_02f4c124(param_1 + 0x13,param_1[0x12],*(undefined4 *)(param_1[0xc] + 0x2c),uVar3);
  if ((int)uVar4 == 1) {
    lVar6 = FUN_02f53dd4(param_1,local_14);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
      uVar4 = 2;
    }
    else {
      if (local_14[0] == '\0') {
        local_38 = 0;
      }
      else {
        local_38 = -*(int *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x78) + 0x100) + 4);
      }
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_38,&local_24,auStack_18,0,0);
      uVar5 = 1;
      if (iVar1 == 0) {
        uVar5 = 2;
      }
      uVar4 = (ulong)uVar5;
      param_1[0xd] = (long)local_24;
    }
  }
  return uVar4;
}


