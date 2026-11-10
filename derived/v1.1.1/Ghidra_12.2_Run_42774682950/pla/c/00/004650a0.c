/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004650a0; name: FUN_004650a0
 */


int FUN_004650a0(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_80 [64];
  undefined4 local_34;
  
  local_34 = 0;
  pcVar3 = *(code **)(**(long **)(param_1 + 0x20) + 0x88);
  if ((*(byte *)(param_1 + 0x11) >> 1 & 1) == 0) {
    lVar2 = FUN_00444930();
    if (lVar2 == 0) {
      return -1;
    }
    iVar1 = FUN_00444d20(lVar2,param_1);
    if (iVar1 == 0) {
      FUN_00444950(lVar2);
      return -1;
    }
    if (pcVar3 == (code *)0x0) {
      iVar1 = FUN_00444b90(lVar2,auStack_80,&local_34);
    }
    else {
      iVar1 = (**(code **)(**(long **)(lVar2 + 0x20) + 0x88))
                        (*(long **)(lVar2 + 0x20),param_2,param_3 & 0xffffffff,lVar2);
    }
    FUN_00444950(lVar2);
    if (pcVar3 != (code *)0x0 || iVar1 == 0) {
      return iVar1;
    }
  }
  else {
    if (pcVar3 != (code *)0x0) {
      iVar1 = (*pcVar3)(*(long **)(param_1 + 0x20),param_2,param_3 & 0xffffffff,param_1);
      return iVar1;
    }
    iVar1 = FUN_00444b90(param_1,auStack_80,&local_34);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_00465500(*(undefined8 *)(param_1 + 0x20),param_2,param_3,auStack_80,local_34);
  return iVar1;
}


