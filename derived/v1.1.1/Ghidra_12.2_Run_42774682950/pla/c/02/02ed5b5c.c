/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed5b5c; name: FUN_02ed5b5c
 */


void FUN_02ed5b5c(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_28;
  
  plVar3 = param_2 + 3;
  local_28 = (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
  FUN_02ee8f80(plVar3,&local_28,uVar2 & 1);
  if (param_2[0xc] != 0) {
    *(undefined4 *)(param_2 + 0xd) = 0;
    (*DAT_0442d150)(0);
    param_2[0xc] = 0;
    *(undefined4 *)((long)param_2 + 0x6c) = 0;
  }
  param_2[2] = 0;
  if (*param_2 != 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    (*DAT_0442d150)(0);
    *param_2 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
  }
  *plVar3 = (long)&PTR_FUN_042aac10;
  local_28 = 0xffffffffffffffff;
  FUN_02ee8f80(plVar3,&local_28,1);
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)0x0;
    lVar5 = lRam0000000000005010;
  }
  else {
    if ((param_2 < plVar3) || (plVar3 + 0xa00 <= param_2)) {
      do {
        plVar4 = plVar3;
        plVar3 = (long *)plVar4[0xa00];
        if (plVar3 == (long *)0x0) break;
      } while ((param_2 < plVar3) || (plVar3 + 0xa00 <= param_2));
    }
    else {
      plVar4 = (long *)0x0;
    }
    lVar5 = plVar3[0xa02];
  }
  if (lVar5 == 0) {
    plVar3[0xa02] = (long)param_2;
    *param_2 = 0;
  }
  else {
    *param_2 = lVar5;
    plVar3[0xa02] = (long)param_2;
  }
  iVar1 = (int)plVar3[0xa01] + 1;
  *(int *)(plVar3 + 0xa01) = iVar1;
  if (iVar1 == 0x80) {
    if ((long *)*param_1 != plVar3) {
      param_1 = plVar4 + 0xa00;
    }
    *param_1 = plVar3[0xa00];
    (*DAT_0442d150)(0);
  }
  return;
}


