/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028628f0; name: FUN_028628f0
 */


void FUN_028628f0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  do {
    lVar5 = param_1 + lVar4 * 0x120;
    plVar2 = *(long **)(lVar5 + 0x108);
    if ((plVar2 != (long *)0x0) &&
       (lVar3 = param_1 + lVar4 * 0x120, *(int *)(lVar3 + 0x100) - 1U < 2)) {
      iVar1 = (**(code **)(*plVar2 + 0x40))();
      if (iVar1 != 1) {
        do {
          nn::os::SleepThread(16000000);
          iVar1 = (**(code **)(**(long **)(lVar5 + 0x108) + 0x40))();
        } while (iVar1 != 1);
      }
      *(undefined4 *)(lVar3 + 0x100) = 3;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x27);
  return;
}


