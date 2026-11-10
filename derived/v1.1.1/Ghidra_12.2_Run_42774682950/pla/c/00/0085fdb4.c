/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085fdb4; name: FUN_0085fdb4
 */


void FUN_0085fdb4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int local_d0 [4];
  undefined *local_c0 [2];
  long local_b0;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [48];
  
  uVar6 = FUN_00847434();
  uVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  local_c0[0] = (undefined *)CONCAT44(local_c0[0]._4_4_,uVar5);
  plVar7 = (long *)FUN_00844598(uVar6,local_c0);
  (**(code **)(*(long *)*plVar7 + 0x78))();
  uVar8 = (**(code **)(*(long *)*plVar7 + 0x80))();
  if ((uVar8 & 1) == 0) {
    puVar1 = PTR_DAT_043781a0 + 0x10;
    do {
      plVar2 = (long *)0x0;
      if (*(long *)(*plVar7 + 0x50) != 0) {
        plVar2 = (long *)(*plVar7 + 0x50);
      }
      bVar3 = *(byte *)(plVar2 + 5);
      uVar10 = 1;
      if ((bVar3 & 1) != 0) {
        uVar10 = 2;
      }
      if ((bVar3 & 2) != 0) {
        uVar10 = uVar10 + 2;
      }
      lVar9 = *plVar2;
      if ((bVar3 & 4) != 0) {
        uVar10 = uVar10 + 4;
      }
      uVar4 = *(undefined2 *)((long)plVar2 + 0x2a);
      if ((bVar3 & 8) != 0) {
        uVar10 = uVar10 + 8;
      }
      FUN_00862134(local_c0);
      FUN_0086235c(local_d0,local_c0,lVar9 + (ulong)uVar10,uVar4);
      if (((local_d0[0] == 0) && (local_b0 != -1)) && (param_1[0x14] != -1)) {
        FUN_00860900(param_1,local_c0);
      }
      local_c0[0] = puVar1;
      FUN_007e34a4(auStack_80);
      FUN_007e34a4(auStack_a0);
      (**(code **)(*(long *)*plVar7 + 0x88))();
      uVar8 = (**(code **)(*(long *)*plVar7 + 0x80))();
    } while ((uVar8 & 1) == 0);
  }
  return;
}


