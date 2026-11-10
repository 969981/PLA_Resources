/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e7b74; name: FUN_030e7b74
 */


void FUN_030e7b74(long *param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint local_90;
  undefined2 local_8c;
  long local_88;
  undefined1 local_80;
  
  if (param_3 == 0) {
    local_90 = 0x2000020;
    local_8c = 0x15;
    local_80 = (undefined1)param_4;
    plVar1 = (long *)param_1[0xfe];
    local_88 = param_2;
  }
  else {
    FUN_030e7c94(&local_90,param_2,param_3,param_4);
    plVar1 = (long *)param_1[0xfe];
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_90);
  }
  lVar2 = (**(code **)(*param_1 + 0x118))(param_1,param_2);
  if (param_2 < 0) {
    uVar4 = (uint)param_2;
  }
  else {
    uVar3 = FUN_032c0fa4(param_1 + 0x129,param_2,&local_90);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0xffffff;
    }
    else {
      uVar4 = local_90;
    }
  }
  FUN_030015bc(param_1 + 5,uVar4 & 0xffffff,param_3);
  if ((param_4 != 2) && ((*(uint *)(lVar2 + 0x54) & 1) == 0)) {
    (**(code **)(*param_1 + 0x278))(param_1,*(undefined4 *)(lVar2 + 0x80));
  }
  FUN_030027d8(param_1 + 0xe8,param_1,param_2);
  return;
}


