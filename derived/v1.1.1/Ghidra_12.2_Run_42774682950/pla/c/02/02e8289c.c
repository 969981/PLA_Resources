/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8289c; name: FUN_02e8289c
 */


/* WARNING: Removing unreachable block (ram,0x02e82b00) */
/* WARNING: Removing unreachable block (ram,0x02e82b08) */
/* WARNING: Removing unreachable block (ram,0x02e82b40) */

void FUN_02e8289c(uint param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  MutexType *pMVar3;
  int iVar4;
  long *plVar5;
  undefined4 local_2e0 [2];
  long *local_2d8;
  undefined8 local_2d0;
  undefined8 *puStack_2c8;
  int *local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined4 local_264;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined2 local_248;
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
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined4 local_1ac;
  long local_1a8;
  ulong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined1 auStack_180 [256];
  undefined1 *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined5 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  pMVar3 = DAT_0440a120;
  nn::os::LockMutex(DAT_0440a120);
  uVar1 = *(uint *)(pMVar3 + 0x28);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_1 / uVar1;
    }
    for (plVar5 = *(long **)(*(long *)(pMVar3 + 0x20) + (ulong)(param_1 - uVar2 * uVar1) * 8);
        plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
      if (*(uint *)(plVar5 + 2) == param_1) {
        *(int *)((long)plVar5 + 0x14) = *(int *)((long)plVar5 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar3);
        local_2ac = *(undefined4 *)((long)param_3 + 0x14);
        local_2b8 = param_3[1];
        local_2b0 = *(undefined4 *)(param_3 + 2);
        local_2c0 = (int *)*param_3;
        if (local_2c0 != (int *)0x0) {
          *local_2c0 = *local_2c0 + 1;
        }
        puStack_2c8 = &local_50;
        local_48 = 0;
        local_50 = 0x400000000;
        local_58 = 3;
        uStack_60 = 0;
        local_63 = 0;
        uStack_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = (undefined1 *)0x0;
        local_188 = 0;
        uStack_190 = 0;
        local_198 = 0;
        local_1a0 = 0;
        local_1a8 = 0;
        local_1ac = 0;
        local_1b4 = 0;
        local_1bc = 0;
        local_1c4 = 0;
        local_1cc = 0;
        local_1d0 = 0x3f800000;
        uStack_1d8 = 0;
        local_1e0 = 0;
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
        local_248 = 0xff00;
        local_250 = 0;
        uStack_258 = 0;
        local_260 = 0;
        local_264 = 0;
        uStack_2a8 = 0;
        local_2e0[0] = 0;
        local_2d8 = plVar5;
        local_2d0 = param_2;
        iVar4 = FUN_02ed2bb4(plVar5,local_2e0);
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 0x240))(plVar5,local_2e0);
        }
        (**(code **)(*plVar5 + 0x18))(plVar5);
        if (local_1a8 != 0) {
          local_1a0 = local_1a0 & 0xffffffff00000000;
          (*DAT_0442d150)(0);
          local_1a0 = local_1a0 & 0xffffffff;
        }
        local_1a8 = 0;
        if (local_80 != (undefined1 *)0x0) {
          local_1a8 = 0;
          local_78 = local_78 & 0xffffffff00000000;
          if (auStack_180 != local_80) {
            (*DAT_0442d158)(0);
          }
          local_78 = local_78 & 0xffffffff;
        }
        local_80 = (undefined1 *)0x0;
        if (local_2c0 != (int *)0x0) {
          FUN_02e771a8();
        }
        return;
      }
    }
  }
  nn::os::UnlockMutex(pMVar3);
  return;
}


