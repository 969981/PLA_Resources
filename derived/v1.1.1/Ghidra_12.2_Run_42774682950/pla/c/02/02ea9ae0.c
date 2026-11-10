/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9ae0; name: FUN_02ea9ae0
 */


/* WARNING: Removing unreachable block (ram,0x02ea9df4) */
/* WARNING: Removing unreachable block (ram,0x02ea9dfc) */
/* WARNING: Removing unreachable block (ram,0x02ea9e38) */

int FUN_02ea9ae0(long param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined4 local_328 [2];
  long local_320;
  undefined8 local_318;
  undefined4 *local_310;
  int *local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  int iStack_2a4;
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined2 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined4 local_1f4;
  long local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined1 auStack_1c8 [256];
  undefined1 *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined3 local_ab;
  undefined5 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    plVar4 = (long *)FUN_02e7d2ec(DAT_0440a120,param_2,0);
    if (plVar4 == (long *)0x0) {
      return 0xf;
    }
    local_58 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_60 = param_4;
    uStack_5c = param_5;
    local_80 = FUN_02ea7fc8();
    if (local_80 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      bVar2 = false;
      iVar3 = 1;
    }
    else {
      local_2f4 = *(undefined4 *)(param_1 + 0x6c);
      local_300 = *(undefined8 *)(param_1 + 0x60);
      local_2f8 = *(undefined4 *)(param_1 + 0x68);
      local_308 = *(int **)(param_1 + 0x58);
      if (local_308 != (int *)0x0) {
        *local_308 = *local_308 + 1;
      }
      auVar1 = SEXT816((long)((ulong)DAT_042ab258 * (long)param_3)) * SEXT816(0x20c49ba5e353f7cf);
      iStack_2a4 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
      local_2a0 = &local_98;
      local_318 = *(undefined8 *)(param_1 + 0x50);
      local_310 = &local_60;
      iVar3 = *(int *)(param_1 + 0xb4);
      if (iVar3 == 0 && *(int *)(param_1 + 0x74) == 0) {
        iVar3 = DAT_042aa180;
        if (DAT_042aa180 == 0) {
          iVar3 = 1;
        }
        DAT_042aa180 = iVar3 + 1;
        *(int *)(param_1 + 0xb4) = iVar3;
      }
      local_298 = CONCAT44((int)param_2,iVar3);
      local_a0 = 3;
      uStack_a8 = 0;
      local_ab = 0;
      uStack_b0 = 0;
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = (undefined1 *)0x0;
      local_1d0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      local_1e8 = 0;
      local_1f0 = 0;
      local_1f4 = 0;
      local_1fc = 0;
      local_204 = 0;
      local_20c = 0;
      local_214 = 0;
      local_218 = 0x3f800000;
      uStack_220 = 0;
      local_228 = 0;
      uStack_230 = 0;
      local_238 = 0;
      uStack_240 = 0;
      local_248 = 0;
      uStack_250 = 0;
      local_258 = 0;
      uStack_260 = 0;
      local_268 = 0;
      uStack_270 = 0;
      local_278 = 0;
      uStack_280 = 0;
      local_288 = 0;
      local_290 = 0xff00;
      local_2a8 = 0;
      local_2ac = 0;
      uStack_2f0 = 0;
      local_328[0] = 2;
      local_320 = param_1;
      iVar3 = FUN_02ed2bb4(plVar4,local_328);
      if (iVar3 == 1) {
        iVar3 = (**(code **)(*plVar4 + 0x240))(plVar4,local_328);
      }
      else if (iVar3 == 3) {
        iVar3 = 1;
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
      if (local_1f0 != 0) {
        local_1e8 = local_1e8 & 0xffffffff00000000;
        (*DAT_0442d150)(0);
        local_1e8 = local_1e8 & 0xffffffff;
      }
      local_1f0 = 0;
      if (local_c8 != (undefined1 *)0x0) {
        local_1f0 = 0;
        local_c0 = local_c0 & 0xffffffff00000000;
        if (auStack_1c8 != local_c8) {
          FUN_02f59e70(0);
        }
        local_c0 = local_c0 & 0xffffffff;
      }
      local_c8 = (undefined1 *)0x0;
      if (local_308 != (int *)0x0) {
        FUN_02e771a8();
      }
      bVar2 = true;
    }
    FUN_02ec68b8(&local_70);
    if (local_80 != 0) {
      FUN_02ea800c();
    }
    if (bVar2) {
      return iVar3;
    }
  }
  return 2;
}


