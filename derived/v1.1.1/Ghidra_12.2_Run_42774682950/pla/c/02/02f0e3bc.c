/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0e3bc; name: FUN_02f0e3bc
 */


int FUN_02f0e3bc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  if ((param_2[3] != 0) && (iVar6 = FUN_02e97f7c(param_1 + 0xf8,param_2[4]), iVar6 != 1)) {
    cVar5 = *(char *)(param_2 + 2);
joined_r0x02f0e4c8:
    if (cVar5 != '\0') {
      FUN_02f59e60(0,param_2[1]);
    }
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    goto LAB_02f0e468;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x1b0);
  puVar1 = (undefined8 *)(param_1 + 0x1b0);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_02f59e30(0,0x50);
    if (puVar7 == (undefined8 *)0x0) {
      if (param_2[3] != 0) {
        FUN_02e980d4(param_1 + 0xf8,param_2[4]);
      }
      iVar6 = 2;
      cVar5 = *(char *)(param_2 + 2);
      goto joined_r0x02f0e4c8;
    }
    puVar7[1] = 0xffffffff;
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *puVar7 = *puVar1;
    *puVar1 = puVar7;
    puVar8 = *(undefined8 **)(param_1 + 0x1a8);
    if (puVar8 == (undefined8 *)0x0) goto LAB_02f0e410;
LAB_02f0e4b4:
    *puVar8 = puVar7;
    puVar7 = (undefined8 *)*puVar1;
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x1a8);
    if (puVar8 != (undefined8 *)0x0) goto LAB_02f0e4b4;
LAB_02f0e410:
    *(undefined8 **)(param_1 + 0x1a0) = puVar7;
  }
  *(undefined8 **)(param_1 + 0x1a8) = puVar7;
  *(undefined8 *)(param_1 + 0x1b0) = *puVar7;
  *puVar7 = 0;
  *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
  lVar9 = *(long *)(param_1 + 0x1a8);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[4];
  *(undefined8 *)(lVar9 + 0x20) = param_2[3];
  *(undefined8 *)(lVar9 + 0x28) = uVar4;
  *(undefined8 *)(lVar9 + 0x10) = uVar2;
  *(undefined8 *)(lVar9 + 0x18) = uVar3;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[8];
  *(undefined8 *)(lVar9 + 0x40) = param_2[7];
  *(undefined8 *)(lVar9 + 0x48) = uVar4;
  *(undefined8 *)(lVar9 + 0x30) = uVar2;
  *(undefined8 *)(lVar9 + 0x38) = uVar3;
  *(undefined8 *)(lVar9 + 8) = *param_2;
  nn::os::SignalEvent((EventType *)(param_1 + 0x150));
  iVar6 = 1;
LAB_02f0e468:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
  return iVar6;
}


