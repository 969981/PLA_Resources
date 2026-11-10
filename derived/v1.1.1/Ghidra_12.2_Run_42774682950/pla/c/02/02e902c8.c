/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e902c8; name: FUN_02e902c8
 */


undefined4 FUN_02e902c8(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  uVar6 = *(uint *)(param_1 + 0x98);
  if (uVar6 != 0) {
    uVar3 = param_2[0xc];
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = uVar3 / uVar6;
    }
    for (plVar8 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)(uVar3 - uVar4 * uVar6) * 8);
        plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (*(uint *)(plVar8 + 1) == uVar3) {
        iVar5 = FUN_02e95054(param_1,plVar8 + 2);
        uVar7 = 1;
        if (iVar5 != 0) {
          uVar7 = 2;
        }
        goto LAB_02e90340;
      }
    }
  }
  uVar7 = 1;
LAB_02e90340:
  uVar6 = *param_2;
  if (1 < uVar6) {
    if (uVar6 - 2 < 2) {
      uVar6 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar6 = 0;
      }
      goto LAB_02e90350;
    }
    if (1 < uVar6 - 6) {
      uVar6 = 0;
      goto LAB_02e90350;
    }
  }
  uVar6 = param_2[1];
LAB_02e90350:
  uVar3 = param_2[10];
  uVar9 = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xf4) = uVar7;
  if (uVar3 != 2) {
    uVar9 = 0;
  }
  FUN_02e9823c(param_1 + 0xf8,uVar1,uVar6,uVar9,uVar7,uVar2);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return uVar7;
}


