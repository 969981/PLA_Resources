/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7d9fc; name: FUN_02e7d9fc
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02e7d9fc(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_98 [18];
  
  plVar5 = (long *)*(long *)(param_1 + 0x50);
  do {
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar8 = (long *)plVar5[2];
    local_98[0] = 0;
    plVar6 = (long *)plVar8[1];
    if ((*(short *)((long)plVar6 + 0x34) == 0x503) || (*(short *)((long)plVar6 + 0x34) == 0x403)) {
      (**(code **)(*plVar6 + 0x58))(plVar6,local_98);
    }
    plVar6 = DAT_0440a170;
    pMVar1 = (MutexType *)(DAT_0440a170 + 3);
    uVar2 = *(uint *)(plVar8 + 6);
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(plVar6 + 1);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (lVar7 = *(long *)(*plVar6 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar7 != 0;
          lVar7 = *(long *)(lVar7 + 0x68)) {
        if (*(uint *)(lVar7 + 0x4c) == uVar2) {
          *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + -1;
          FUN_02edcd9c(plVar6,uVar2);
          goto LAB_02e7dafc;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
LAB_02e7dafc:
    if ((long *)*(long *)(param_1 + 0x50) != plVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar7 = *plVar5;
    *(long *)(param_1 + 0x50) = lVar7;
    if ((long *)*(long *)(param_1 + 0x58) == plVar5) {
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    *plVar5 = *(undefined8 *)(param_1 + 0x60);
    *(long **)(param_1 + 0x60) = plVar5;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    (**(code **)(*(long *)plVar8[1] + 0x18))();
    (**(code **)(*plVar8 + 8))(plVar8);
    (*DAT_0442d150)(0,plVar8);
    plVar5 = (long *)lVar7;
  } while( true );
}


