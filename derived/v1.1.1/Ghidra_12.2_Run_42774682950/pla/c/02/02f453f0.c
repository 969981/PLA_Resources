/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f453f0; name: FUN_02f453f0
 */


long * FUN_02f453f0(long param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  MutexType *pMVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  pMVar4 = DAT_0440a120;
  if (param_2 != 0) {
    nn::os::LockMutex(DAT_0440a120);
    uVar1 = *(uint *)(pMVar4 + 0x28);
    if (uVar1 != 0) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = param_2 / uVar1;
      }
      for (plVar10 = *(long **)(*(long *)(pMVar4 + 0x20) + (ulong)(param_2 - uVar3 * uVar1) * 8);
          plVar10 != (long *)0x0; plVar10 = (long *)plVar10[1]) {
        if (*(uint *)(plVar10 + 2) == param_2) {
          *(int *)((long)plVar10 + 0x14) = *(int *)((long)plVar10 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar4);
          lVar9 = *(long *)(param_1 + 0x60);
          plVar8 = (long *)(**(code **)(*plVar10 + 0x268))
                                     (plVar10,param_1,*(undefined8 *)(lVar9 + 0x30),lVar9 + 0x18,
                                      *(undefined1 *)(lVar9 + 0x38));
          (**(code **)(*plVar10 + 0x18))(plVar10);
          if (plVar8 != (long *)0x0) {
            return plVar8;
          }
          goto LAB_02f45454;
        }
      }
    }
    nn::os::UnlockMutex(pMVar4);
  }
LAB_02f45454:
  plVar10 = (long *)(*DAT_0442d138)(0,0x90);
  if (plVar10 == (long *)0x0) {
    return (long *)0x0;
  }
  *(undefined2 *)(plVar10 + 0xb) = 0;
  plVar10[10] = -0xc0800000;
  plVar10[0xd] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  *(byte *)((long)plVar10 + 0x5a) = *(byte *)((long)plVar10 + 0x5a) & 0xe0;
  plVar10[2] = param_1;
  *(undefined4 *)(plVar10 + 4) = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[0xc] = 0;
  plVar10[0xf] = 0;
  *plVar10 = (long)&PTR_LAB_042ae6a8;
  plVar10[0x10] = 0;
  *(undefined4 *)(plVar10 + 0x11) = 0;
  plVar10[3] = (long)&PTR_LAB_042ae7f8;
  plVar10[5] = (long)&PTR_FUN_042ae820;
  *(undefined1 *)((long)plVar10 + 0x8c) = 0;
  *(undefined4 *)(plVar10 + 9) = 1;
  lVar9 = *(long *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(lVar9 + 0x30);
  cVar2 = *(char *)(lVar9 + 0x38);
  if (param_1 == 0) {
LAB_02f45630:
    iVar5 = FUN_02f37c08(plVar10,lVar9 + 0x18,uVar7,cVar2 != '\0');
    if (iVar5 != 1) goto LAB_02f4564c;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      *(long **)(param_1 + 0x30) = plVar10;
      plVar10[1] = 0;
    }
    else {
      plVar10[1] = *(long *)(param_1 + 0x30);
      *(long **)(param_1 + 0x30) = plVar10;
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    if (plVar10[2] == 0) goto LAB_02f45630;
    plVar10[0xc] = *(long *)(plVar10[2] + 0x60);
  }
  puVar6 = (undefined8 *)(*DAT_0442d138)(0,0x48);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar6 + 0x3c) = 4;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined1 *)(puVar6 + 8) = 0;
    puVar6[4] = 0;
    *(byte *)((long)puVar6 + 0x44) = *(byte *)((long)puVar6 + 0x44) & 0xf8;
    puVar6[2] = 0;
    puVar6[3] = 0;
    plVar8 = plVar10 + 0x10;
    if (*plVar8 != 0) {
      plVar8 = (long *)plVar10[0xf];
    }
    *plVar8 = (long)puVar6;
    plVar10[0xf] = (long)puVar6;
    *(undefined1 *)((long)plVar10 + 0x8c) = 1;
    if ((int)plVar10[9] != 0) {
      return plVar10;
    }
    if (plVar10[2] == 0) {
      FUN_02f37eb4(plVar10);
    }
    else {
      FUN_02f3b8c0(plVar10[2],plVar10);
      plVar10[2] = 0;
    }
    (**(code **)(*plVar10 + 0x50))(plVar10);
    (*DAT_0442d150)(0,plVar10);
    return plVar10;
  }
LAB_02f4564c:
  (**(code **)(*plVar10 + 0x10))(plVar10,0);
  iVar5 = (int)plVar10[9] + -1;
  *(int *)(plVar10 + 9) = iVar5;
  if (iVar5 == 0) {
    if (plVar10[2] == 0) {
      FUN_02f37eb4(plVar10);
    }
    else {
      FUN_02f3b8c0(plVar10[2],plVar10);
      plVar10[2] = 0;
    }
    (**(code **)(*plVar10 + 0x50))(plVar10);
    (*DAT_0442d150)(0,plVar10);
  }
  return (long *)0x0;
}


