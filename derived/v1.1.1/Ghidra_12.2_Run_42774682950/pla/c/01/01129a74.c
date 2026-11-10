/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01129a74; name: FUN_01129a74
 */


uint FUN_01129a74(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  uVar6 = *param_4 + 5;
  if (*(ulong *)(param_2 + 8) == uVar6) {
    lVar7 = *(long *)(param_2 + 2);
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x80));
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      if (*(ulong *)(param_2 + 6) < uVar6) {
        pcVar5 = *(code **)(*plVar4 + 0x18);
      }
      else {
        pcVar5 = *(code **)(*plVar4 + 0x20);
      }
      (*pcVar5)(plVar4,param_2);
    }
    FUN_010d4780(param_2,*(undefined8 *)(param_1 + 0x40),uVar6);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
    lVar7 = *(long *)(param_2 + 2);
  }
  if ((lVar7 == 0) || (*(long *)(param_2 + 4) == 0)) {
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 10) = 1;
    uVar8 = *(undefined8 *)(param_2 + 8);
    local_b0 = PTR_DAT_0437e458 + 0x10;
    uStack_44 = *param_2;
    puVar1 = PTR_DAT_0437e440 + 0x10;
    local_48 = 0;
    local_50 = 0;
    local_58 = puVar1;
    if (uStack_44 != 0) {
      uVar6 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
      uStack_44 = uStack_44 ^ uStack_44 << 2;
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
      uStack_44 = uStack_44 ^ uStack_44 << 0xd;
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar6 != 1) &&
          (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
          uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar6 != 2)) &&
         (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
         uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar6 != 3)) {
        (**(code **)(PTR_DAT_0437e440 + 0x20))(&local_58);
        for (lVar2 = uVar6 - 4; lVar2 != 0; lVar2 = lVar2 + -1) {
          (**(code **)(local_58 + 0x10))(&local_58);
        }
      }
    }
    puStack_98 = PTR_DAT_0437e448 + 0x10;
    local_80 = 0;
    local_a0 = 0;
    local_68 = CONCAT44(uStack_44,uStack_44);
    local_a8 = PTR_DAT_0437e450 + 0x10;
    uStack_60 = 0;
    local_90 = lVar7;
    uStack_88 = uVar8;
    local_78 = puVar1;
    uStack_70 = local_50;
    local_48 = uStack_44;
    uVar3 = FUN_010d80b4(&local_b0,*param_3,*param_4);
  }
  return uVar3 & 1;
}


