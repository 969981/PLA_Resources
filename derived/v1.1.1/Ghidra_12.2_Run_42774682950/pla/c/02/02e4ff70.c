/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4ff70; name: FUN_02e4ff70
 */


undefined8 * FUN_02e4ff70(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 *local_58;
  ulong local_50;
  undefined1 auStack_44 [4];
  
  puVar2 = (undefined8 *)FUN_02ef21f4(DAT_0440a140,param_1);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_02ef2244(DAT_0440a140,param_1,0);
    puVar2 = (undefined8 *)FUN_02ef21f4(DAT_0440a140,param_1);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  uVar3 = FUN_02ef37b4(DAT_0440a140,param_3);
  if ((uVar3 & 1) != 0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    FUN_02e44d58(auStack_60,param_3,auStack_44);
    FUN_02ef2914(DAT_0440a140,puVar2[9],auStack_60,0);
    if (local_58 != (undefined1 *)0x0) {
      local_50 = local_50 & 0xffffffff00000000;
      if (auStack_60 != local_58) {
        (*DAT_0442d158)(4);
      }
      local_58 = (undefined1 *)0x0;
      local_50 = local_50 & 0xffffffff;
    }
  }
  lVar4 = FUN_02e500dc(puVar2);
  lVar5 = FUN_02e42e10(puVar2);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    FUN_02ef20d0(DAT_0440a140,param_1);
    iVar1 = *(int *)(puVar2 + 10);
    *(int *)(puVar2 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(puVar2);
      FUN_02f59e60(4,puVar2);
    }
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if ((6 < *(uint *)(puVar2 + 8)) && (*(long *)(puVar2[7] + 0x30) != 0)) {
      FUN_02eb1f30();
    }
    *(undefined4 *)(lVar4 + 0x20) = param_2;
  }
  return puVar2;
}


