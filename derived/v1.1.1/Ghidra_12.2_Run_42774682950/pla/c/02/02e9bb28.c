/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9bb28; name: FUN_02e9bb28
 */


void FUN_02e9bb28(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_042a8830;
  if (param_1[0x28] != 0) {
    *(undefined4 *)(param_1 + 0x29) = 0;
    (*DAT_0442d150)(0);
    param_1[0x28] = 0;
    *(undefined4 *)((long)param_1 + 0x14c) = 0;
  }
  if (param_1[0x2a] == 0) {
    plVar2 = (long *)param_1[0x27];
  }
  else {
    *(undefined4 *)(param_1 + 0x2b) = 0;
    (*DAT_0442d150)(0);
    param_1[0x2a] = 0;
    *(undefined4 *)((long)param_1 + 0x15c) = 0;
    plVar2 = (long *)param_1[0x27];
  }
  if (plVar2 == (long *)0x0) {
    lVar3 = param_1[10];
  }
  else {
    (**(code **)(*plVar2 + 0x18))();
    param_1[0x27] = 0;
    lVar3 = param_1[10];
  }
  if (lVar3 != 0) {
    FUN_02ec7038();
    lVar3 = param_1[10];
    iVar1 = *(int *)(lVar3 + 0x28) + -1;
    *(int *)(lVar3 + 0x28) = iVar1;
    if ((lVar3 != 0) && (iVar1 == 0)) {
      FUN_02ec69c0(lVar3);
      (*DAT_0442d150)(0,lVar3);
    }
    param_1[10] = 0;
  }
  *param_1 = &PTR_FUN_042aac10;
  local_28 = 0xffffffffffffffff;
  FUN_02ee8f80(param_1,&local_28,1);
  return;
}


