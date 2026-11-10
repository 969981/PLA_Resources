/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091abfc; name: FUN_0091abfc
 */


void FUN_0091abfc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 auStack_130 [8];
  long local_128;
  long local_120;
  long local_118 [28];
  uint local_38;
  undefined8 local_28;
  
  *(undefined4 *)(param_2 + 0xc0) = 0;
  local_28 = 0x502000101;
  FUN_009346d8(auStack_130,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),&local_28);
  if (local_38 != 0) {
    if (local_128 == 0) {
      uVar4 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(local_128 + 0xac);
      uVar6 = *(undefined4 *)(local_128 + 0xb0);
      uVar7 = *(undefined4 *)(local_128 + 0xb4);
      uVar9 = *(undefined1 *)(local_128 + 0xb8);
      uVar8 = *(undefined4 *)(local_128 + 0xc4);
    }
    plVar3 = (long *)(param_2 + (long)*(int *)(param_2 + 0xc0) * 0x20);
    *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + 1;
    *plVar3 = local_128;
    *(undefined4 *)(plVar3 + 1) = uVar4;
    *(undefined4 *)((long)plVar3 + 0xc) = uVar6;
    *(undefined4 *)(plVar3 + 2) = uVar7;
    *(undefined1 *)((long)plVar3 + 0x14) = uVar9;
    *(undefined2 *)((long)plVar3 + 0x15) = (undefined2)local_28;
    *(undefined1 *)((long)plVar3 + 0x17) = local_28._2_1_;
    *(undefined4 *)(plVar3 + 3) = uVar8;
    if (local_38 != 1) {
      if (local_120 == 0) {
        uVar4 = 0;
        uVar6 = 0;
        uVar7 = 0;
        uVar9 = 0;
        uVar8 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(local_120 + 0xac);
        uVar6 = *(undefined4 *)(local_120 + 0xb0);
        uVar7 = *(undefined4 *)(local_120 + 0xb4);
        uVar9 = *(undefined1 *)(local_120 + 0xb8);
        uVar8 = *(undefined4 *)(local_120 + 0xc4);
      }
      plVar3 = (long *)(param_2 + (long)*(int *)(param_2 + 0xc0) * 0x20);
      *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + 1;
      *plVar3 = local_120;
      *(undefined4 *)(plVar3 + 1) = uVar4;
      *(undefined4 *)((long)plVar3 + 0xc) = uVar6;
      *(undefined4 *)(plVar3 + 2) = uVar7;
      *(undefined1 *)((long)plVar3 + 0x14) = uVar9;
      *(undefined2 *)((long)plVar3 + 0x15) = (undefined2)local_28;
      *(undefined1 *)((long)plVar3 + 0x17) = local_28._2_1_;
      *(undefined4 *)(plVar3 + 3) = uVar8;
      if (local_38 != 2) {
        plVar3 = local_118;
        lVar2 = (ulong)local_38 * 8 + -0x10;
        do {
          lVar5 = *plVar3;
          if (lVar5 == 0) {
            uVar4 = 0;
            uVar6 = 0;
            uVar7 = 0;
            uVar9 = 0;
            uVar8 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(lVar5 + 0xac);
            uVar6 = *(undefined4 *)(lVar5 + 0xb0);
            uVar7 = *(undefined4 *)(lVar5 + 0xb4);
            uVar9 = *(undefined1 *)(lVar5 + 0xb8);
            uVar8 = *(undefined4 *)(lVar5 + 0xc4);
          }
          plVar1 = (long *)(param_2 + (long)*(int *)(param_2 + 0xc0) * 0x20);
          *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + 1;
          *plVar1 = lVar5;
          *(undefined4 *)(plVar1 + 1) = uVar4;
          *(undefined4 *)((long)plVar1 + 0xc) = uVar6;
          *(undefined4 *)(plVar1 + 2) = uVar7;
          *(undefined1 *)((long)plVar1 + 0x14) = uVar9;
          plVar3 = plVar3 + 1;
          lVar2 = lVar2 + -8;
          *(undefined4 *)(plVar1 + 3) = uVar8;
          *(undefined1 *)((long)plVar1 + 0x17) = local_28._2_1_;
          *(undefined2 *)((long)plVar1 + 0x15) = (undefined2)local_28;
        } while (lVar2 != 0);
      }
    }
  }
  if (*(char *)(param_1 + 0xa0) == '\x1f') {
    uVar4 = 0;
    *(undefined1 *)(param_2 + 0xc4) = 0x1f;
  }
  else {
    *(char *)(param_2 + 0xc4) = *(char *)(param_1 + 0xa0);
    lVar2 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),
                         *(undefined1 *)(param_1 + 0xa0));
    uVar4 = *(undefined4 *)(lVar2 + 0xac);
  }
  *(undefined4 *)(param_2 + 200) = uVar4;
  return;
}


