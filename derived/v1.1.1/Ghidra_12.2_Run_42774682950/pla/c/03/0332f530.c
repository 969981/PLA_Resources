/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332f530; name: FUN_0332f530
 */


void FUN_0332f530(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*param_1 != 0) {
    lVar2 = tpidr_el0;
    lVar4 = *param_1;
    do {
      lVar6 = *(long *)(lVar4 + 0xfc0);
      lVar5 = 0xfc0;
      do {
        lVar1 = lVar4 + lVar5;
        *(undefined4 *)(lVar1 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -0x14)) && (*(long *)(lVar1 + -0x20) != 0)) {
          FUN_032cf244(PTR_PTR_0434a080,*(long *)(lVar1 + -0x20),8,
                       *(uint *)(lVar1 + -0x14) & 0x3fffffff);
        }
        *(undefined8 *)(lVar1 + -0x20) = 0;
        *(undefined4 *)(lVar1 + -0x14) = 0x80000000;
        *(undefined4 *)(lVar1 + -0x38) = 0;
        if ((-1 < (int)*(uint *)(lVar1 + -0x34)) && (*(long *)(lVar1 + -0x40) != 0)) {
          FUN_032cf244(PTR_PTR_0434a080,*(long *)(lVar1 + -0x40),8,
                       *(uint *)(lVar1 + -0x34) & 0x3fffffff);
        }
        lVar5 = lVar5 + -0x60;
        *(undefined8 *)(lVar1 + -0x40) = 0;
        *(undefined4 *)(lVar1 + -0x34) = 0x80000000;
      } while (lVar5 != 0);
      lVar5 = *(long *)(lVar2 + 0x38d490);
      if (lVar5 == 0) {
        lVar5 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar5;
      }
      plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,0xfc8);
      *param_1 = lVar6;
      lVar4 = lVar6;
    } while (lVar6 != 0);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 2));
  return;
}


