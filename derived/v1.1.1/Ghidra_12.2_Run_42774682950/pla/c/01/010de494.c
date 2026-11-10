/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010de494; name: FUN_010de494
 */


uint FUN_010de494(long param_1,uint *param_2,char *param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
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
  if (*(long *)(param_2 + 8) == 1) {
    lVar9 = *(long *)(param_2 + 2);
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x80));
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_2 + 6) == 0) {
        pcVar6 = *(code **)(*plVar4 + 0x18);
      }
      else {
        pcVar6 = *(code **)(*plVar4 + 0x20);
      }
      (*pcVar6)(plVar4,param_2);
    }
    FUN_010d4780(param_2,*(undefined8 *)(param_1 + 0x40),1);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
    lVar9 = *(long *)(param_2 + 2);
  }
  if ((lVar9 == 0) || (*(long *)(param_2 + 4) == 0)) {
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(param_2 + 10) = 1;
    uVar10 = *(undefined8 *)(param_2 + 8);
    local_b0 = PTR_DAT_0437e458 + 0x10;
    uStack_44 = *param_2;
    puVar1 = PTR_DAT_0437e440 + 0x10;
    local_48 = 0;
    local_50 = 0;
    local_58 = puVar1;
    if (uStack_44 != 0) {
      uVar7 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
      uStack_44 = uStack_44 ^ uStack_44 << 2;
      uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
      uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
      uStack_44 = uStack_44 ^ uStack_44 << 0xd;
      uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar7 != 1) &&
          (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
          uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar7 != 2)) &&
         (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
         uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar7 != 3)) {
        (**(code **)(PTR_DAT_0437e440 + 0x20))(&local_58);
        for (lVar2 = uVar7 - 4; lVar2 != 0; lVar2 = lVar2 + -1) {
          (**(code **)(local_58 + 0x10))(&local_58);
        }
      }
    }
    puStack_98 = PTR_DAT_0437e448 + 0x10;
    local_80 = 0;
    local_a0 = 0;
    local_68 = CONCAT44(uStack_44,uStack_44);
    uStack_60 = 0;
    local_a8 = PTR_DAT_0437e450 + 0x10;
    uVar8 = 1;
    if (*param_3 != '\0') {
      uVar8 = 2;
    }
    local_58 = (undefined *)CONCAT71(local_58._1_7_,uVar8);
    local_90 = lVar9;
    uStack_88 = uVar10;
    local_78 = puVar1;
    uStack_70 = local_50;
    local_48 = uStack_44;
    plVar4 = (long *)(**(code **)(local_b0 + 0x10))(&local_b0);
    plVar5 = (long *)(**(code **)(*plVar4 + 0x28))();
    uVar7 = (**(code **)(*plVar5 + 0x18))(plVar5,1,plVar4[1]);
    if ((uVar7 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,1,0);
    }
    lVar9 = (**(code **)(local_b0 + 0x10))(&local_b0);
    *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
  }
  return uVar3 & 1;
}


