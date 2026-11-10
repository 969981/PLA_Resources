/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03038ea4; name: FUN_03038ea4
 */


void FUN_03038ea4(long param_1,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_58;
  undefined2 uStack_54;
  ulong local_50;
  undefined1 local_48;
  
  local_58 = 0x2000020;
  uStack_54 = 0x2f;
  local_48 = (undefined1)param_3;
  plVar1 = *(long **)(param_1 + 0x7f0);
  local_50 = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_58);
  }
  uVar3 = param_2;
  if (-1 < (long)param_2) {
    uVar2 = FUN_032c0fa4(param_1 + 0x968,param_2,&local_58);
    uVar3 = (ulong)CONCAT24(uStack_54,local_58);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0x7fffffff;
    }
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x488) + 8);
  if ((*(byte *)(lVar4 + (long)(int)uVar3 * 0x68 + 0x42) >> 2 & 1) == 0) {
    FUN_03004f5c(*(long *)(param_1 + 0x488),uVar3 & 0xffffffff);
    lVar4 = lVar4 + (long)(int)uVar3 * 0x68;
    FUN_03038c8c(param_1,*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0x18),param_3);
    FUN_03005698(param_1 + 0x788,param_1,param_2);
  }
  return;
}


