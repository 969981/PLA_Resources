/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07850; name: FUN_02f07850
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f07850(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  nn::os::LockMutex((MutexType *)&DAT_0440ab20);
  uVar3 = (ulong)DAT_0440ab18;
  plVar2 = DAT_0440ab10;
  if (DAT_0440ab18 != 0) {
    plVar8 = DAT_0440ab10;
    do {
      if (plVar8[1] == param_1) {
        FUN_02f076a0(plVar8[2]);
        FUN_02f07740(plVar8[2]);
        puVar4 = (undefined8 *)*plVar8;
        if ((puVar4 != (undefined8 *)0x0) &&
           (iVar1 = *(int *)(puVar4 + 10), *(int *)(puVar4 + 10) = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)*puVar4)(puVar4);
          FUN_02f59e60(4,puVar4);
        }
        FUN_02f07818(plVar8);
        plVar2 = DAT_0440ab10;
        plVar5 = DAT_0440ab10 + (ulong)DAT_0440ab18 * 3 + -3;
        if (plVar8 < plVar5) {
          plVar7 = plVar8;
          do {
            plVar6 = plVar7 + 3;
            plVar7[2] = plVar7[5];
            *plVar7 = *plVar6;
            plVar7[1] = plVar7[4];
            plVar7 = plVar6;
          } while (plVar6 < plVar5);
        }
        DAT_0440ab18 = DAT_0440ab18 - 1;
        uVar3 = (ulong)DAT_0440ab18;
      }
      else {
        plVar8 = plVar8 + 3;
      }
    } while (plVar2 + uVar3 * 3 != plVar8);
  }
  if ((plVar2 != (long *)0x0) && ((int)uVar3 == 0)) {
    DAT_0440ab18 = 0;
    FUN_02f59e60(0);
    DAT_0440ab10 = (long *)0x0;
    _DAT_0440ab1c = 0;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440ab20);
  return;
}


