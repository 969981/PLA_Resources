/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e784a0; name: FUN_02e784a0
 */


undefined8 FUN_02e784a0(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a210);
  if (param_2 < 0x800) {
    if (param_2 != 0) {
      uVar2 = 0;
      uVar9 = 1;
      uVar6 = param_2 & 1;
      do {
        if (uVar6 != 0) {
          plVar4 = (long *)(&DAT_0440a230)[(ulong)uVar2 * 2];
          puVar3 = (uint *)(&DAT_0440a238 + (ulong)uVar2 * 2);
          uVar6 = *puVar3;
          plVar7 = plVar4 + (ulong)uVar6 * 3;
          if ((uVar6 != 0) && (*plVar4 != param_1)) {
            lVar8 = (ulong)uVar6 * 0x18;
            plVar5 = plVar4;
            do {
              lVar8 = lVar8 + -0x18;
              if (lVar8 == 0) goto LAB_02e785bc;
              plVar4 = plVar5 + 3;
              plVar1 = plVar5 + 3;
              plVar5 = plVar4;
            } while (*plVar1 != param_1);
          }
          if (plVar7 == plVar4) {
LAB_02e785bc:
            uVar9 = 0x1f;
          }
          else {
            if (plVar4 < plVar7 + -3) {
              do {
                plVar5 = plVar4 + 3;
                *plVar4 = *plVar5;
                plVar4[1] = plVar4[4];
                *(int *)(plVar4 + 2) = (int)plVar4[5];
                plVar4 = plVar5;
              } while (plVar5 < plVar7 + -3);
              uVar6 = *puVar3;
            }
            *puVar3 = uVar6 - 1;
          }
        }
        uVar2 = uVar2 + 1;
        uVar6 = 1 << (ulong)(uVar2 & 0x1f);
        if (param_2 < uVar6) goto LAB_02e785c8;
        uVar6 = uVar6 & param_2;
      } while( true );
    }
    uVar9 = 1;
  }
  else {
    uVar9 = 0x1f;
  }
LAB_02e785c8:
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  return uVar9;
}


