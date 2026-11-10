/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010de084; name: FUN_010de084
 */


ulong FUN_010de084(long param_1,uint *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
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
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar8 = (long)puVar3 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar8) {
    puVar7 = *(uint **)(param_1 + 8);
    puVar10 = puVar3;
    do {
      puVar9 = puVar7 + (uVar8 / 0x60) * 0xc;
      if (*puVar9 == *param_2) goto LAB_010de110;
      puVar2 = puVar9 + 0xc;
      if (*param_2 <= *puVar9) {
        puVar2 = puVar7;
        puVar10 = puVar9;
      }
      uVar8 = (long)puVar10 - (long)puVar2;
      puVar7 = puVar2;
    } while (0 < (long)uVar8);
  }
  puVar9 = puVar3;
LAB_010de110:
  uVar8 = 0;
  if (puVar9 == (uint *)0x0) {
    uVar12 = 0;
    goto LAB_010de2cc;
  }
  uVar12 = 0;
  if (puVar3 == puVar9) goto LAB_010de2cc;
  uVar11 = *(undefined8 *)(puVar9 + 2);
  uVar13 = *(undefined8 *)(puVar9 + 8);
  local_b0 = PTR_DAT_0437e438 + 0x10;
  uStack_44 = *puVar9;
  puVar1 = PTR_DAT_0437e440 + 0x10;
  local_50 = 0;
  local_48 = 0;
  local_58 = puVar1;
  if (uStack_44 != 0) {
    uVar8 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
    uStack_44 = uStack_44 ^ uStack_44 << 2;
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
    uStack_44 = uStack_44 ^ uStack_44 << 0xd;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar8 != 1) &&
        (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
        uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar8 != 2)) &&
       (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
       uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar8 != 3)) {
      (**(code **)(PTR_DAT_0437e440 + 0x20))(&local_58);
      for (lVar6 = uVar8 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
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
  local_90 = uVar11;
  uStack_88 = uVar13;
  local_78 = puVar1;
  uStack_70 = local_50;
  local_48 = uStack_44;
  plVar4 = (long *)(**(code **)(local_b0 + 0x18))(&local_b0);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x28))();
  uVar8 = (**(code **)(*plVar5 + 0x10))(plVar5,1,plVar4[1]);
  if ((uVar8 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar4 + 0x10))(plVar4,&local_58,1,0);
    uVar8 = uVar8 & 0xffffffff;
  }
  lVar6 = (**(code **)(local_b0 + 0x10))(&local_b0);
  *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  if ((uVar8 & 1) == 0) {
LAB_010de308:
    uVar8 = 0;
    uVar12 = 0;
  }
  else {
    if ((char)local_58 == '\x01') {
      uVar12 = 0;
    }
    else {
      if ((char)local_58 != '\x02') goto LAB_010de308;
      uVar12 = 0x100;
    }
    uVar8 = 1;
  }
LAB_010de2cc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return uVar12 | uVar8;
}


