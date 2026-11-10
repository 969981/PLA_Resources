/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e42f90; name: FUN_01e42f90
 */


void FUN_01e42f90(uint param_1,uint param_2,ulong param_3)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((*PTR_DAT_0437a648 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_0437a648);
    if (iVar2 != 0) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
  }
  lVar3 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar3;
  lVar3 = *(long *)(lVar3 + 0x230);
  uVar8 = (ulong)(uint)(1 << (ulong)(param_2 & 0x1f));
  pMVar1 = (MutexType *)(lVar3 + 0x128);
  uVar7 = (ulong)(uint)(1 << (ulong)(param_1 & 0x1f));
  nn::os::LockMutex(pMVar1);
  lVar3 = *(long *)(lVar3 + 0x110);
  uVar4 = 0;
  if ((param_3 & 1) == 0) {
    lVar3 = lVar3 + 0x28;
    do {
      uVar6 = 1L << (uVar4 & 0x3f);
      lVar5 = uVar4 * 8;
      if ((uVar6 & uVar7) != 0) {
        *(ulong *)(lVar3 + lVar5) = *(ulong *)(lVar3 + lVar5) & ~uVar8;
      }
      if ((uVar6 & uVar8) != 0) {
        *(ulong *)(lVar3 + lVar5) = *(ulong *)(lVar3 + lVar5) & ~uVar7;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x40);
  }
  else {
    lVar3 = lVar3 + 0x28;
    do {
      uVar6 = 1L << (uVar4 & 0x3f);
      lVar5 = uVar4 * 8;
      if ((uVar6 & uVar7) != 0) {
        *(ulong *)(lVar3 + lVar5) = *(ulong *)(lVar3 + lVar5) | uVar8;
      }
      if ((uVar6 & uVar8) != 0) {
        *(ulong *)(lVar3 + lVar5) = *(ulong *)(lVar3 + lVar5) | uVar7;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0x40);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


