/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9ee48; name: FUN_02e9ee48
 */


void FUN_02e9ee48(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  
  *param_1 = &PTR_FUN_042a88b0;
  param_1[3] = &PTR_LAB_042a8b50;
  param_1[6] = &PTR_LAB_042a8be8;
  FUN_02e9f048();
  for (plVar8 = (long *)param_1[0x24]; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    FUN_02ea9578(plVar8 + 2);
  }
  FUN_02e9f0d8(param_1 + 0x24);
  for (plVar8 = (long *)param_1[0x29]; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    FUN_02ea9578(plVar8 + 2);
  }
  FUN_02e9f0d8(param_1 + 0x29);
  FUN_02e9f184(param_1 + 0x1f);
  nn::os::LockMutex((MutexType *)&DAT_0440a210);
  uVar5 = (ulong)DAT_0440a388;
  if (DAT_0440a388 != 0) {
    lVar2 = uVar5 * 8;
    puVar4 = DAT_0440a380;
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        puVar3 = DAT_0440a380 + (uVar5 - 1);
        if (puVar3 <= puVar4) goto LAB_02e9effc;
        uVar7 = (long)DAT_0440a380 + ~(ulong)puVar4 + uVar5 * 8 + -8;
        uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
        uVar5 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) == 0) {
          if (0x17 < uVar7) goto LAB_02e9efd0;
        }
        else {
          puVar6 = puVar4;
          do {
            puVar4 = puVar6 + 1;
            *puVar6 = *puVar4;
            uVar5 = uVar5 - 1;
            puVar6 = puVar4;
          } while (uVar5 != 0);
          if (0x17 < uVar7) {
LAB_02e9efd0:
            do {
              *puVar4 = puVar4[1];
              puVar4[1] = puVar4[2];
              puVar4[2] = puVar4[3];
              puVar6 = puVar4 + 4;
              puVar4[3] = *puVar6;
              puVar4 = puVar6;
            } while (puVar6 < puVar3);
          }
        }
LAB_02e9effc:
        DAT_0440a388 = DAT_0440a388 - 1;
        if (DAT_0440a388 == 0) {
          if (DAT_0440a380 != (undefined8 *)0x0) {
            DAT_0440a388 = 0;
            (*DAT_0442d150)(0);
            DAT_0440a380 = (undefined8 *)0x0;
            DAT_0440a38c = 0;
          }
          FUN_02e96c80();
        }
        break;
      }
      puVar4 = puVar4 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  if ((undefined8 *)param_1[0x1b] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (param_1 + 0x1a != (undefined8 *)param_1[0x1b]) {
      (*DAT_0442d158)(0);
    }
    param_1[0x1b] = 0;
    *(undefined4 *)((long)param_1 + 0xe4) = 0;
  }
  if (param_1[0x19] != 0) {
    (*DAT_0442d150)(2);
  }
  FUN_02ee90c8(param_1 + 0x2e);
  FUN_02ea4c7c(param_1);
  return;
}


