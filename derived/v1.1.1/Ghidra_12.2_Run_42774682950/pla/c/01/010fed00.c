/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010fed00; name: FUN_010fed00
 */


bool FUN_010fed00(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

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
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6,param_2);
  }
  local_d0 = (undefined *)(*param_4 + 5);
  nn::os::LockMutex(pMVar1);
  if ((*(long **)(param_1 + 0x60) != (long *)0x0) &&
     (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18))) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  }
  FUN_010fccb8(param_1 + 8,param_2,*(undefined8 *)(param_1 + 0x40),&local_d0);
  lVar8 = *(long *)(param_1 + 0x10);
  nn::os::UnlockMutex(pMVar1);
  puVar5 = PTR_DAT_0437e440;
  uVar9 = *(undefined8 *)(lVar8 + -0x28);
  uVar10 = *(undefined8 *)(lVar8 + -0x10);
  *(undefined1 *)(lVar8 + -8) = 1;
  puVar2 = puVar5 + 0x10;
  local_d0 = PTR_DAT_0437e458 + 0x10;
  uStack_64 = *(uint *)(lVar8 + -0x30);
  local_68 = 0;
  local_70 = 0;
  local_78 = puVar2;
  if (uStack_64 != 0) {
    uVar7 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
    uStack_64 = uStack_64 ^ uStack_64 << 2;
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
    uStack_64 = uStack_64 ^ uStack_64 << 0xd;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar7 != 1) &&
        (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
        uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar7 != 2)) &&
       (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
       uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar7 != 3)) {
      (**(code **)(puVar5 + 0x20))(&local_78);
      for (lVar4 = uVar7 - 4; lVar4 != 0; lVar4 = lVar4 + -1) {
        (**(code **)(local_78 + 0x10))(&local_78);
      }
    }
  }
  puStack_b8 = PTR_DAT_0437e448 + 0x10;
  local_a0 = 0;
  local_c0 = 0;
  local_88 = CONCAT44(uStack_64,uStack_64);
  local_c8 = PTR_DAT_0437e450 + 0x10;
  uStack_80 = 0;
  local_b0 = uVar9;
  uStack_a8 = uVar10;
  local_98 = puVar2;
  uStack_90 = local_70;
  local_68 = uStack_64;
  uVar7 = FUN_010d80b4(&local_d0,*param_3,*param_4);
  bVar3 = (uVar7 & 1) == 0;
  if (bVar3) {
    FUN_010d099c((uint *)(lVar8 + -0x30),*(undefined8 *)(param_1 + 0x40));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
  }
  else {
    nn::os::LockMutex(pMVar1);
    FUN_010d48f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_78);
    nn::os::UnlockMutex(pMVar1);
  }
  nn::os::UnlockMutex(pMVar1);
  return !bVar3;
}


