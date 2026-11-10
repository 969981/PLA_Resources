/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030392f0; name: FUN_030392f0
 */


void FUN_030392f0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  
  *(undefined4 *)(param_1 + 0x808) = 8;
  lVar10 = tpidr_el0;
  if (*(long *)(lVar10 + 0x38d490) == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar4;
    lVar10 = *(long *)(lVar4 + 0x10);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar10 + 0x38d490) + 0x10);
  }
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)(lVar10 + 8);
    uVar5 = *(ulong *)(lVar10 + 0x10);
    uVar6 = (ulong)((long)puVar11 + 0x17) & 0xfffffffffffffff8;
    if (uVar6 <= uVar5) {
      *(ulong *)(lVar10 + 8) = uVar6;
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar11 = "TtPostCollide";
        uVar3 = nn::os::GetSystemTick();
        puVar11[1] = uVar3;
        puVar11 = *(undefined8 **)(lVar10 + 8);
        uVar5 = *(ulong *)(lVar10 + 0x10);
      }
    }
    uVar6 = (ulong)((long)puVar11 + 0x17) & 0xfffffffffffffff8;
    if ((uVar6 <= uVar5) && (*(ulong *)(lVar10 + 8) = uVar6, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = "TtDispatchCommands";
      uVar3 = nn::os::GetSystemTick();
      puVar11[1] = uVar3;
    }
  }
  lVar4 = *(long *)(param_1 + 0x8f8);
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x4a8) + 0x10);
  *(undefined8 *)(lVar4 + 0x30) = param_2;
  FUN_0301d134(*(undefined8 *)(param_1 + 0x908),param_2,*(undefined8 *)(param_1 + 0x8f8));
  lVar4 = *(long *)(param_1 + 0x8f8);
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)(lVar10 + 8);
    uVar5 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar5, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_0390f40e;
      uVar3 = nn::os::GetSystemTick();
      puVar11[1] = uVar3;
    }
  }
  if (0 < *(int *)(*(undefined8 **)(param_1 + 0x908) + 1)) {
    lVar4 = *(long *)**(undefined8 **)(param_1 + 0x908);
    puVar7 = *(undefined4 **)(*(long *)(lVar4 + 0x530) + (long)*(int *)(lVar4 + 0x538) * 8 + -8);
    uVar1 = *puVar7;
    uVar2 = *puVar7;
    *(undefined4 **)(lVar4 + 0x730) = puVar7;
    *(short *)(lVar4 + 0x738) = (short)((uint)uVar1 >> 0x10);
    *(short *)(lVar4 + 0x73a) = (short)uVar2;
    *(int *)(lVar4 + 0x73c) = -*(int *)(lVar4 + 0x528);
    if (1 < (int)(*(long **)(param_1 + 0x908))[1]) {
      lVar4 = *(long *)(**(long **)(param_1 + 0x908) + 8);
      puVar7 = *(undefined4 **)(*(long *)(lVar4 + 0x530) + (long)*(int *)(lVar4 + 0x538) * 8 + -8);
      uVar1 = *puVar7;
      uVar2 = *puVar7;
      *(undefined4 **)(lVar4 + 0x730) = puVar7;
      *(short *)(lVar4 + 0x738) = (short)((uint)uVar1 >> 0x10);
      *(short *)(lVar4 + 0x73a) = (short)uVar2;
      *(int *)(lVar4 + 0x73c) = -*(int *)(lVar4 + 0x528);
      plVar8 = *(long **)(param_1 + 0x908);
      if (2 < (int)plVar8[1]) {
        lVar4 = 2;
        do {
          lVar9 = *(long *)(*plVar8 + lVar4 * 8);
          lVar4 = lVar4 + 1;
          puVar7 = *(undefined4 **)
                    (*(long *)(lVar9 + 0x530) + (long)*(int *)(lVar9 + 0x538) * 8 + -8);
          uVar1 = *puVar7;
          uVar2 = *puVar7;
          *(undefined4 **)(lVar9 + 0x730) = puVar7;
          *(short *)(lVar9 + 0x738) = (short)((uint)uVar1 >> 0x10);
          *(short *)(lVar9 + 0x73a) = (short)uVar2;
          *(int *)(lVar9 + 0x73c) = -*(int *)(lVar9 + 0x528);
          plVar8 = *(long **)(param_1 + 0x908);
        } while (lVar4 < (int)plVar8[1]);
      }
    }
  }
  if (*(ulong *)(param_1 + 2000) < 4) {
    if (lVar10 == 0) {
      return;
    }
  }
  else {
    if (lVar10 == 0) {
      FUN_0302d690(param_1 + 2000,param_1);
      return;
    }
    puVar11 = *(undefined8 **)(lVar10 + 8);
    uVar5 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar5, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = "TtPostCollideSignal";
      uVar3 = nn::os::GetSystemTick();
      puVar11[1] = uVar3;
    }
    FUN_0302d690(param_1 + 2000,param_1);
    puVar11 = *(undefined8 **)(lVar10 + 8);
    uVar5 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar5, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_0390f40e;
      uVar3 = nn::os::GetSystemTick();
      puVar11[1] = uVar3;
    }
  }
  puVar11 = *(undefined8 **)(lVar10 + 8);
  uVar5 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
  if ((uVar5 <= *(ulong *)(lVar10 + 0x10)) &&
     (*(ulong *)(lVar10 + 8) = uVar5, puVar11 != (undefined8 *)0x0)) {
    *puVar11 = "EtPostCollide";
    uVar3 = nn::os::GetSystemTick();
    puVar11[1] = uVar3;
  }
  return;
}


