/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb0b00; name: FUN_02eb0b00
 */


void FUN_02eb0b00(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_042a92a8;
  param_1[3] = &PTR_LAB_042a92e8;
  lVar4 = param_1[10];
  if (*(int *)(param_1 + 0xb) != 0) {
    lVar3 = *(long *)(lVar4 + 0x10);
    lVar1 = lVar4;
    while( true ) {
      if (lVar3 != 0) {
        (*DAT_0442d150)(0);
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      *(undefined8 *)(lVar1 + 0x18) = 0;
      lVar4 = param_1[10];
      if (lVar1 + 0x28 == lVar4 + (ulong)*(uint *)(param_1 + 0xb) * 0x28) break;
      lVar3 = *(long *)(lVar1 + 0x38);
      lVar1 = lVar1 + 0x28;
    }
  }
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    (*DAT_0442d150)(0,lVar4);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (*DAT_0442d150)(0);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    (*DAT_0442d150)(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  plVar2 = (long *)param_1[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,&PTR_PTR_042a9240);
  }
  FUN_02eb1b60(param_1 + 3);
  FUN_02eb2770(param_1);
  return;
}


