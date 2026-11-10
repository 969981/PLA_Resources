/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e80dec; name: FUN_02e80dec
 */


undefined8 FUN_02e80dec(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  ulong local_a8 [9];
  long local_58;
  
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar8 == (undefined8 *)0x0) || (*(uint *)(param_1 + 0x78) < *(uint *)(puVar8 + 1))) {
    uVar5 = 0;
  }
  else {
    do {
      plVar10 = (long *)puVar8[2];
      *(undefined8 *)(param_1 + 0x28) = *puVar8;
      if (*(undefined8 **)(param_1 + 0x30) == puVar8) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *puVar8 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar8;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      local_a8[0] = local_a8[0] & 0xffffffff00000000;
      plVar6 = (long *)plVar10[1];
      if (*(short *)((long)plVar6 + 0x34) == 0x503) {
        if (*(char *)((long)plVar6 + 0xc4) != '\0') {
LAB_02e80eac:
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
        }
      }
      else if (*(short *)((long)plVar6 + 0x34) == 0x403) goto LAB_02e80eac;
      lVar9 = plVar10[8];
      if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x40) != 0)) &&
          (lVar9 = **(long **)(lVar9 + 0x38), lVar9 != 0)) && ((*(byte *)(lVar9 + 0x54) & 1) != 0))
      {
        local_a8[0] = 0;
        local_58 = 0;
        if (((*(uint *)(*(long *)(lVar9 + 8) + 0x40) < 2) ||
            (lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 0x38) + 8), lVar7 == 0)) &&
           (lVar7 = DAT_0440a410, DAT_0440a410 == 0)) {
          FUN_02e43d1c();
          lVar7 = DAT_0440a410;
        }
        *(undefined4 *)(lVar9 + 0x48) = 0;
        FUN_02ef013c(lVar9,lVar9 + 0x40,lVar7 + 0xa0,lVar7,&local_58,local_a8);
        if ((local_a8[0] != 0) && (local_58 != 0)) {
          FUN_02ef0870(lVar9);
        }
        *(byte *)(lVar9 + 0x54) = *(byte *)(lVar9 + 0x54) & 0xfe;
      }
      (**(code **)(*(long *)plVar10[1] + 0x40))((long *)plVar10[1],plVar10);
      plVar6 = DAT_0440a170;
      uVar2 = *(uint *)(plVar10 + 6);
      if (uVar2 != 0) {
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(plVar6 + 1);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (lVar9 = *(long *)(*plVar6 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar9 != 0;
              lVar9 = *(long *)(lVar9 + 0x68)) {
            if (*(uint *)(lVar9 + 0x4c) == uVar2) {
              *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + -1;
              FUN_02edcd9c(plVar6,uVar2);
              goto LAB_02e80f4c;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
      }
LAB_02e80f4c:
      (**(code **)(*(long *)plVar10[1] + 0x18))();
      (**(code **)(*plVar10 + 8))(plVar10);
      (*DAT_0442d150)(0,plVar10);
      DAT_0440a468 = DAT_0440a468 + 1;
      puVar8 = *(undefined8 **)(param_1 + 0x28);
      if (puVar8 == (undefined8 *)0x0) {
        return 1;
      }
      uVar5 = 1;
    } while (*(uint *)(puVar8 + 1) <= *(uint *)(param_1 + 0x78));
  }
  return uVar5;
}


