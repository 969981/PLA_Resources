/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065ccf0; name: FUN_0065ccf0
 */


void FUN_0065ccf0(long param_1,uint param_2)

{
  MutexType *pMVar1;
  ulong uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte local_a8;
  undefined7 uStack_a7;
  ulong local_98;
  long *plStack_90;
  byte local_88;
  undefined7 uStack_87;
  ulong local_78;
  long *plStack_70;
  undefined1 auStack_68 [8];
  ulong local_60;
  undefined8 local_50;
  int local_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f0));
  lVar7 = *(long *)(param_1 + 0x1d8);
  if (lVar7 != 0) {
    lVar6 = param_1 + 0x1d8;
    do {
      bVar4 = *(uint *)(lVar7 + 0x20) < param_2;
      if (!bVar4) {
        lVar6 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + (ulong)bVar4 * 8);
    } while (lVar7 != 0);
    if ((lVar6 != param_1 + 0x1d8) && (*(uint *)(lVar6 + 0x20) <= param_2)) {
                    /* try { // try from 0065cd58 to 0065cd5b has its CatchHandler @ 0065cf30 */
      FUN_006643fc(param_1 + 0x1d0);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f0));
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
                    /* try { // try from 0065cd70 to 0065cd7b has its CatchHandler @ 0065cfb0 */
  FUN_006885cc(auStack_68,0);
  uVar8 = *(undefined8 *)PTR_PTR_04375850;
                    /* try { // try from 0065cd88 to 0065cd97 has its CatchHandler @ 0065cfac */
  FUN_00682760(&local_88,uVar8);
  uVar2 = (ulong)&local_88 | 1;
  if ((local_88 & 1) != 0) {
    uVar2 = local_78;
  }
                    /* try { // try from 0065cdac to 0065cdb3 has its CatchHandler @ 0065cf80 */
  FUN_0065c500(auStack_68,uVar2);
  if ((local_88 & 1) != 0) {
    (**(code **)(*plStack_70 + 0x18))
              (plStack_70,local_78,CONCAT71(uStack_87,local_88) & 0xfffffffffffffffe,1);
  }
  if (local_44 != 4) {
                    /* try { // try from 0065cdec to 0065ce0b has its CatchHandler @ 0065cfc4 */
    FUN_006884d0(auStack_68);
    local_44 = 4;
    puVar5 = (ulong *)(local_60 & 0xfffffffffffffffe);
    if ((local_60 & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    local_50 = FUN_0068bde0(puVar5);
  }
  uVar3 = local_50;
  FUN_0061c880(&local_a8,param_2);
  uVar2 = (ulong)&local_a8 | 1;
  if ((local_a8 & 1) != 0) {
    uVar2 = local_98;
  }
                    /* try { // try from 0065ce38 to 0065ce47 has its CatchHandler @ 0065cf68 */
  FUN_00682e10(&local_88,uVar8,uVar2);
  uVar2 = (ulong)&local_88 | 1;
  if ((local_88 & 1) != 0) {
    uVar2 = local_78;
  }
                    /* try { // try from 0065ce5c to 0065ce63 has its CatchHandler @ 0065cf34 */
  FUN_0065cfe0(uVar3,uVar2);
  if ((local_88 & 1) != 0) {
    (**(code **)(*plStack_70 + 0x18))
              (plStack_70,local_78,CONCAT71(uStack_87,local_88) & 0xfffffffffffffffe,1);
  }
  if ((local_a8 & 1) != 0) {
    (**(code **)(*plStack_90 + 0x18))
              (plStack_90,local_98,CONCAT71(uStack_a7,local_a8) & 0xfffffffffffffffe,1);
  }
                    /* try { // try from 0065ceb0 to 0065ceb7 has its CatchHandler @ 0065cfc4 */
  FUN_0065cb6c(param_1 + 0x218,auStack_68);
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    lVar7 = *(long *)(param_1 + 0x150);
    pMVar1 = (MutexType *)(lVar7 + 0x38);
    nn::os::LockMutex(pMVar1);
    nn::os::SignalEvent((EventType *)(lVar7 + 0x10));
    nn::os::UnlockMutex(pMVar1);
    *(undefined1 *)(param_1 + 0x1a0) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
  FUN_006888c8(auStack_68);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  return;
}


