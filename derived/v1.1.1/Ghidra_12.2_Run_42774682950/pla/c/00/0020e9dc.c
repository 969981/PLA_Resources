/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020e9dc; name: FUN_0020e9dc
 */


undefined8 FUN_0020e9dc(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined2 local_4c;
  undefined1 local_4a;
  long local_48;
  long local_40;
  undefined4 local_38;
  undefined1 uStack_34;
  undefined2 uStack_33;
  undefined1 uStack_31;
  
  uVar3 = param_1[0x18];
  if (uVar3 < 0x3d) {
    lVar5 = uVar3 * 0x80 + 0x411d870;
    local_38 = *(undefined4 *)(&DAT_0411d8e8 + uVar3 * 0x80);
  }
  else {
    plVar4 = *(long **)(*param_1 + ((uVar3 + param_1[2]) - 0x3d & param_1[1]) * 8);
    lVar5 = *plVar4;
    local_38 = (undefined4)plVar4[2];
    local_4c = *(undefined2 *)((long)plVar4 + 0x15);
    local_4a = *(undefined1 *)((long)plVar4 + 0x17);
  }
  uStack_33 = local_4c;
  uStack_31 = local_4a;
  uStack_34 = *(char *)((long)param_1 + 0xea) != '\0';
  local_48 = lVar5;
  FUN_00210460(lVar5);
  lVar6 = param_1[0x14];
  local_40 = lVar6;
  if ((*(char *)((long)param_1 + 0xe9) == '\0') ||
     (iVar1 = FUN_0020fb80(param_1,&local_48,0,0), iVar1 == 0)) {
    uVar2 = 0;
    param_2[1] = local_40;
    param_2[2] = CONCAT17(uStack_31,CONCAT25(uStack_33,CONCAT14(uStack_34,local_38)));
    *param_2 = local_48;
    param_1[0x14] = 0;
    param_1[0x15] = lVar5;
    param_1[0x16] = lVar6;
  }
  else {
    FUN_00210478(lVar5);
    uVar2 = 0xfffffc7b;
  }
  return uVar2;
}


