/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0b8ec; name: FUN_02f0b8ec
 */


/* WARNING: Removing unreachable block (ram,0x02f0bbb8) */
/* WARNING: Removing unreachable block (ram,0x02f0bbc0) */
/* WARNING: Removing unreachable block (ram,0x02f0bc0c) */
/* WARNING: Removing unreachable block (ram,0x02f0bbd4) */
/* WARNING: Removing unreachable block (ram,0x02f0bc14) */
/* WARNING: Removing unreachable block (ram,0x02f0bbd8) */
/* WARNING: Removing unreachable block (ram,0x02f0bbf4) */

int FUN_02f0b8ec(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  MutexType *pMVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  undefined4 local_2f0 [2];
  long *local_2e8;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  int *local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined2 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined4 local_1bc;
  long local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined1 auStack_190 [256];
  undefined1 *local_90;
  ulong local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  pMVar3 = DAT_0440a120;
  nn::os::LockMutex(DAT_0440a120);
  uVar1 = *(uint *)(pMVar3 + 0x28);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (plVar7 = *(long **)(*(long *)(pMVar3 + 0x20) + (ulong)(param_2 - uVar2 * uVar1) * 8);
        plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
      if (*(uint *)(plVar7 + 2) == param_2) {
        *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar3);
        plVar6 = *(long **)(param_1 + 0x148);
        uVar5 = 0;
        if (plVar6 != (long *)0x0) goto LAB_02f0b990;
        goto LAB_02f0b9ac;
      }
    }
  }
  nn::os::UnlockMutex(pMVar3);
  return 2;
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
LAB_02f0b990:
    if (*(uint *)(plVar6 + 1) == param_2) {
      uVar5 = (undefined4)plVar6[2];
      goto LAB_02f0b9ac;
    }
  }
  uVar5 = 0;
LAB_02f0b9ac:
  local_60 = CONCAT44(4,uVar5);
  local_2b8 = *(undefined8 *)(param_3 + 0x28);
  local_2b0 = *(undefined8 *)(param_3 + 0x30);
  uStack_2a8 = *(undefined8 *)(param_3 + 0x38);
  local_2a0 = *(undefined8 *)(param_3 + 0x40);
  uStack_298 = *(undefined8 *)(param_3 + 0x48);
  local_290 = *(undefined8 *)(param_3 + 0x50);
  uStack_288 = *(undefined8 *)(param_3 + 0x58);
  local_280 = *(undefined8 *)(param_3 + 0x60);
  uStack_278 = *(undefined8 *)(param_3 + 0x68);
  local_2d8 = &local_60;
  local_2e0 = *(undefined8 *)(param_3 + 0x20);
  local_2bc = *(undefined4 *)(param_3 + 0x1c);
  local_2d0 = *(int **)(param_3 + 8);
  local_2c8 = *(undefined8 *)(param_3 + 0x10);
  local_2c0 = *(undefined4 *)(param_3 + 0x18);
  if (local_2d0 != (int *)0x0) {
    *local_2d0 = *local_2d0 + 1;
  }
  local_270 = *(undefined4 *)(param_3 + 0x70);
  local_58 = 0;
  local_68 = 3;
  uStack_70 = 0;
  local_73 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = (undefined1 *)0x0;
  local_198 = 0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c4 = 0;
  local_1cc = 0;
  local_1d4 = 0;
  local_1dc = 0;
  local_1e0 = 0x3f800000;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_248 = 0;
  local_250 = 0;
  local_258 = 0xff00;
  uStack_25c = 0;
  local_260 = 0;
  uStack_264 = 0;
  local_26c = 0;
  local_2f0[0] = 0;
  local_2e8 = plVar7;
  iVar4 = FUN_02ed2bb4(plVar7,local_2f0);
  if (iVar4 == 1) {
    iVar4 = (**(code **)(*plVar7 + 0x240))(plVar7,local_2f0);
  }
  else if (iVar4 == 3) {
    iVar4 = 1;
  }
  (**(code **)(*plVar7 + 0x18))(plVar7);
  if (local_1b8 != 0) {
    local_1b0 = local_1b0 & 0xffffffff00000000;
    (*DAT_0442d150)(0);
    local_1b0 = local_1b0 & 0xffffffff;
  }
  local_1b8 = 0;
  if (local_90 != (undefined1 *)0x0) {
    local_1b8 = 0;
    local_88 = local_88 & 0xffffffff00000000;
    if (auStack_190 != local_90) {
      (*DAT_0442d158)(0);
    }
    local_88 = local_88 & 0xffffffff;
  }
  local_90 = (undefined1 *)0x0;
  if (local_2d0 != (int *)0x0) {
    FUN_02e771a8();
  }
  return iVar4;
}


