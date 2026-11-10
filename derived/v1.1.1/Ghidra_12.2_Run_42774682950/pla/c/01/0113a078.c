/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113a078; name: FUN_0113a078
 */


void FUN_0113a078(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  long local_a0;
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
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    puVar3 = *(uint **)(param_1 + 0x10);
    uVar9 = (long)puVar3 - (long)*(uint **)(param_1 + 8);
    if (0 < (long)uVar9) {
      puVar7 = *(uint **)(param_1 + 8);
      puVar8 = puVar3;
      do {
        puVar11 = puVar7 + (uVar9 / 0x60) * 0xc;
        if (*puVar11 == *param_2) goto LAB_0113a114;
        puVar2 = puVar11 + 0xc;
        if (*param_2 <= *puVar11) {
          puVar2 = puVar7;
          puVar8 = puVar11;
        }
        uVar9 = (long)puVar8 - (long)puVar2;
        puVar7 = puVar2;
      } while (0 < (long)uVar9);
    }
    puVar11 = puVar3;
LAB_0113a114:
    if ((puVar11 == (uint *)0x0) || (puVar3 == puVar11)) {
      FUN_0113aea8(param_1,param_2,param_3,param_4);
    }
    else {
      uVar9 = FUN_010d7974(param_1,puVar11);
      if (((uVar9 & 1) == 0) && (plVar5 = *(long **)(param_1 + 0x60), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x58))(plVar5,param_2);
        plVar5 = *(long **)(param_1 + 0x60);
      }
      else {
        plVar5 = *(long **)(param_1 + 0x60);
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,puVar11);
      }
      uVar9 = *param_4 + 5;
      if (*(ulong *)(puVar11 + 8) == uVar9) {
        lVar10 = *(long *)(puVar11 + 2);
      }
      else {
        nn::os::LockMutex((MutexType *)(param_1 + 0x80));
        plVar5 = *(long **)(param_1 + 0x60);
        if (plVar5 != (long *)0x0) {
          if (*(ulong *)(puVar11 + 6) < uVar9) {
            pcVar6 = *(code **)(*plVar5 + 0x18);
          }
          else {
            pcVar6 = *(code **)(*plVar5 + 0x20);
          }
          (*pcVar6)(plVar5,puVar11);
        }
        FUN_010d4780(puVar11,*(undefined8 *)(param_1 + 0x40),uVar9);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
        lVar10 = *(long *)(puVar11 + 2);
      }
      if ((lVar10 != 0) && (*(long *)(puVar11 + 4) != 0)) {
        *(undefined1 *)(puVar11 + 10) = 1;
        uVar12 = *(undefined8 *)(puVar11 + 8);
        local_c0 = PTR_DAT_0437e458 + 0x10;
        uStack_54 = *puVar11;
        puVar1 = PTR_DAT_0437e440 + 0x10;
        local_58 = 0;
        local_60 = 0;
        local_68 = puVar1;
        if (uStack_54 != 0) {
          uVar9 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
          uStack_54 = uStack_54 ^ uStack_54 << 2;
          uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
          uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
          uStack_54 = uStack_54 ^ uStack_54 << 0xd;
          uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (((uVar9 != 1) &&
              (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
              uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar9 != 2)) &&
             (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
             uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar9 != 3)) {
            FUN_010d3e10(&local_68);
            for (lVar4 = uVar9 - 4; lVar4 != 0; lVar4 = lVar4 + -1) {
              (**(code **)(local_68 + 0x10))(&local_68);
            }
          }
        }
        puStack_a8 = PTR_DAT_0437e448 + 0x10;
        local_90 = 0;
        local_b0 = 0;
        local_78 = CONCAT44(uStack_54,uStack_54);
        local_b8 = PTR_DAT_0437e450 + 0x10;
        uStack_70 = 0;
        local_a0 = lVar10;
        uStack_98 = uVar12;
        local_88 = puVar1;
        uStack_80 = local_60;
        local_58 = uStack_54;
        FUN_010d80b4(&local_c0,*param_3,*param_4);
      }
    }
  }
  else if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return;
}


