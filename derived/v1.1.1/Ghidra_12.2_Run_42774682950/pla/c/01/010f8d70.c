/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f8d70; name: FUN_010f8d70
 */


bool FUN_010f8d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6,param_2);
  }
  local_c0 = (undefined *)0x5;
  nn::os::LockMutex(pMVar1);
  if ((*(long **)(param_1 + 0x60) != (long *)0x0) &&
     (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18))) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  }
  FUN_010f801c(param_1 + 8,param_2,*(undefined8 *)(param_1 + 0x40),&local_c0);
  lVar8 = *(long *)(param_1 + 0x10);
  nn::os::UnlockMutex(pMVar1);
  puVar5 = PTR_DAT_0437e440;
  uVar9 = *(undefined8 *)(lVar8 + -0x28);
  uVar10 = *(undefined8 *)(lVar8 + -0x10);
  *(undefined1 *)(lVar8 + -8) = 1;
  puVar2 = puVar5 + 0x10;
  local_c0 = PTR_DAT_0437e458 + 0x10;
  uStack_54 = *(uint *)(lVar8 + -0x30);
  local_58 = 0;
  local_60 = 0;
  local_68 = puVar2;
  if (uStack_54 != 0) {
    uVar7 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
    uStack_54 = uStack_54 ^ uStack_54 << 2;
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
    uStack_54 = uStack_54 ^ uStack_54 << 0xd;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar7 != 1) &&
        (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
        uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar7 != 2)) &&
       (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
       uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar7 != 3)) {
      (**(code **)(puVar5 + 0x20))(&local_68);
      for (lVar4 = uVar7 - 4; lVar4 != 0; lVar4 = lVar4 + -1) {
        (**(code **)(local_68 + 0x10))(&local_68);
      }
    }
  }
  puStack_a8 = PTR_DAT_0437e448 + 0x10;
  local_90 = 0;
  local_b0 = 0;
  local_78 = CONCAT44(uStack_54,uStack_54);
  uStack_70 = 0;
  local_b8 = PTR_DAT_0437e450 + 0x10;
  local_a0 = uVar9;
  uStack_98 = uVar10;
  local_88 = puVar2;
  uStack_80 = local_60;
  local_58 = uStack_54;
  uVar7 = FUN_010d9a3c(&local_c0,param_3);
  bVar3 = (uVar7 & 1) == 0;
  if (bVar3) {
    FUN_010d099c((uint *)(lVar8 + -0x30),*(undefined8 *)(param_1 + 0x40));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
  }
  else {
    nn::os::LockMutex(pMVar1);
    FUN_010d48f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_68);
    nn::os::UnlockMutex(pMVar1);
  }
  nn::os::UnlockMutex(pMVar1);
  return !bVar3;
}


