/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f49030; name: FUN_02f49030
 */


void FUN_02f49030(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_042ae9b8;
  param_1[3] = &PTR_LAB_042aec20;
  param_1[6] = &PTR_FUN_042aecb8;
  param_1[0x24] = 0;
  FUN_02f49144();
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    FUN_02f59e60(0);
    param_1[0x19] = 0;
    *(undefined4 *)((long)param_1 + 0xd4) = 0;
  }
  if (param_1[0x1e] != 0) {
    *(undefined4 *)(param_1 + 0x1f) = 0;
    FUN_02f59e60(0);
    param_1[0x1e] = 0;
    *(undefined4 *)((long)param_1 + 0xfc) = 0;
  }
  plVar4 = param_1 + 0x1b;
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    lVar2 = param_1[0x22];
  }
  else {
    if (*(uint *)(param_1 + 0x1c) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x1c) << 5;
      lVar3 = *(long *)(lVar2 + 8);
      puVar1 = (undefined8 *)(lVar2 + 0x10);
      while( true ) {
        if (lVar3 != 0) {
          FUN_02f59e60(0);
          puVar1[-1] = 0;
        }
        lVar5 = lVar5 + -0x20;
        *puVar1 = 0;
        if (lVar5 == 0) break;
        lVar3 = puVar1[3];
        puVar1 = puVar1 + 4;
      }
      lVar2 = *plVar4;
    }
    FUN_02f59e60(0,lVar2);
    *plVar4 = 0;
    param_1[0x1c] = 0;
    lVar2 = param_1[0x22];
  }
  if (lVar2 != 0) {
    FUN_02f491a0();
  }
  thunk_FUN_02ecfe78(param_1);
  return;
}


