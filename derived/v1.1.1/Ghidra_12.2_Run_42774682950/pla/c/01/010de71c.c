/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010de71c; name: FUN_010de71c
 */


undefined8 FUN_010de71c(long param_1,undefined8 param_2,char *param_3)

{
  MutexType *pMVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
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
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
  }
  local_c0 = (undefined *)0x1;
  nn::os::LockMutex(pMVar1);
  if ((*(long **)(param_1 + 0x60) != (long *)0x0) &&
     (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18))) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
  }
  FUN_010de9f8(param_1 + 8,param_2,*(undefined8 *)(param_1 + 0x40),&local_c0);
  lVar8 = *(long *)(param_1 + 0x10);
  nn::os::UnlockMutex(pMVar1);
  *(undefined1 *)(lVar8 + -8) = 1;
  uVar9 = *(undefined8 *)(lVar8 + -0x28);
  uVar10 = *(undefined8 *)(lVar8 + -0x10);
  puVar2 = PTR_DAT_0437e440 + 0x10;
  local_c0 = PTR_DAT_0437e458 + 0x10;
  uStack_54 = *(uint *)(lVar8 + -0x30);
  local_60 = 0;
  local_58 = 0;
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
      (**(code **)(PTR_DAT_0437e440 + 0x20))(&local_68);
      for (lVar5 = uVar7 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
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
  uVar6 = 1;
  if (*param_3 != '\0') {
    uVar6 = 2;
  }
  local_68 = (undefined *)CONCAT71(local_68._1_7_,uVar6);
  local_a0 = uVar9;
  uStack_98 = uVar10;
  local_88 = puVar2;
  uStack_80 = local_60;
  local_58 = uStack_54;
  plVar3 = (long *)(**(code **)(local_c0 + 0x10))(&local_c0);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar7 = (**(code **)(*plVar4 + 0x18))(plVar4,1,plVar3[1]);
  if ((uVar7 & 1) == 0) {
    lVar5 = (**(code **)(local_c0 + 0x10))(&local_c0);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  else {
    uVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,&local_68,1,0);
    lVar5 = (**(code **)(local_c0 + 0x10))(&local_c0);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    if ((uVar7 & 1) != 0) {
      nn::os::LockMutex(pMVar1);
      FUN_010d48f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_68);
      nn::os::UnlockMutex(pMVar1);
      uVar9 = 1;
      goto LAB_010de95c;
    }
  }
  FUN_010d099c((uint *)(lVar8 + -0x30),*(undefined8 *)(param_1 + 0x40));
  uVar9 = 0;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
LAB_010de95c:
  nn::os::UnlockMutex(pMVar1);
  return uVar9;
}


