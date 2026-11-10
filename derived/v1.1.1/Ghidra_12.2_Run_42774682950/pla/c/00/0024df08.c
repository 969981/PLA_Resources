/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024df08; name: FUN_0024df08
 */


void FUN_0024df08(long *param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [48];
  long local_58;
  undefined8 local_30;
  byte local_28;
  
  FUN_0024319c();
  if (((*(short *)((long)param_1 + 0x112) == 0) || (param_1[0x1e] == 0)) || (param_1[0x28] == 0)) {
    *(byte *)((long)param_1 + 0x5c) = *(byte *)((long)param_1 + 0x5c) & 0xef;
  }
  else {
    uVar2 = FUN_00244604(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_0021c1ac(param_1[0x29],*(undefined8 *)(param_2 + 0xd0));
      FUN_0023d078(param_1[0x28],param_2);
      if ((*(ushort *)((long)param_1 + 0x114) >> 2 & 1) == 0) {
        FUN_0024dc00(param_1,param_2);
        return;
      }
      *(ushort *)((long)param_1 + 0x114) = *(ushort *)((long)param_1 + 0x114) & 0xfffb;
      if (*(char *)((long)param_1 + 0x117) == '\0') {
        FUN_002256a8(auStack_88);
        local_28 = *(byte *)((long)param_1 + 0x115) & 1;
        (**(code **)(*param_1 + 0x148))(param_1,auStack_88);
        local_58 = param_1[0x29];
        FUN_0021c018(auStack_88);
        puVar3 = (undefined8 *)param_1[0x27];
        if (puVar3 == (undefined8 *)0x0) {
          FUN_00225fa8(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112));
          FUN_0021c024(auStack_88);
          cVar1 = *(char *)((long)param_1 + 0x114);
        }
        else {
          FUN_00226038(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112),0x10,
                       puVar3[1],*puVar3);
          FUN_0021c024(auStack_88);
          cVar1 = *(char *)((long)param_1 + 0x114);
        }
        if (cVar1 < '\0') {
          FUN_0024e46c(param_1,local_30);
        }
        thunk_FUN_0021bc4c(auStack_88);
      }
      else {
        FUN_00223eac(auStack_88);
        local_28 = *(byte *)((long)param_1 + 0x115) & 1;
        (**(code **)(*param_1 + 0x150))(param_1,auStack_88);
        local_58 = param_1[0x29];
        FUN_0021c018(auStack_88);
        puVar3 = (undefined8 *)param_1[0x27];
        if (puVar3 == (undefined8 *)0x0) {
          FUN_0022479c(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112));
          FUN_0021c024(auStack_88);
          cVar1 = *(char *)((long)param_1 + 0x114);
        }
        else {
          FUN_0022482c(auStack_88,param_1[0x1b],*(undefined2 *)((long)param_1 + 0x112),0x10,
                       puVar3[1],*puVar3);
          FUN_0021c024(auStack_88);
          cVar1 = *(char *)((long)param_1 + 0x114);
        }
        if (cVar1 < '\0') {
          FUN_0024e100(param_1,local_30);
        }
        thunk_FUN_0021bc4c(auStack_88);
      }
      FUN_0024dc00(param_1,param_2);
      return;
    }
  }
  return;
}


