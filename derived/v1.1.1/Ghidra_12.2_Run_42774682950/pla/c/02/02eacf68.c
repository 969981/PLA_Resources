/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eacf68; name: FUN_02eacf68
 */


undefined8
FUN_02eacf68(long param_1,ulong param_2,uint param_3,int param_4,void *param_5,int param_6)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  
  plVar5 = (long *)(param_1 + (param_2 & 0xffffffff) * 0x48 + (ulong)param_3 * 0x18 + 8);
  if (*plVar5 != 0) {
    FUN_02f59e60(0);
    *plVar5 = 0;
  }
  lVar6 = param_1 + (param_2 & 0xffffffff) * 0x48 + (ulong)param_3 * 0x18;
  uVar2 = 0x1f;
  puVar7 = (uint *)(lVar6 + 0x10);
  puVar7[0] = 0;
  puVar7[1] = 0;
  if ((param_4 != 0) && (param_5 != (void *)0x0)) {
    *(undefined4 *)(param_1 + (param_2 & 0xffffffff) * 0x48 + (ulong)param_3 * 0x18 + 0x18) = 1;
    *puVar7 = param_4 + 2U;
    lVar3 = FUN_02f59e30(0,(param_4 + 2U) * 0x14);
    *plVar5 = lVar3;
    if (lVar3 == 0) {
      *puVar7 = 0;
      uVar2 = 0x34;
    }
    else {
      piVar1 = (int *)(lVar6 + 0x14);
      *piVar1 = param_6;
      memcpy((void *)(lVar3 + 0xc),param_5,(ulong)(uint)(param_4 * 0xc));
      *(undefined4 *)(*plVar5 + 8) = 9;
      *(undefined4 *)*plVar5 = 0xff7fffff;
      *(undefined4 *)(*plVar5 + 4) = *(undefined4 *)(*plVar5 + 0x10);
      *(undefined4 *)(*plVar5 + (ulong)(*puVar7 - 1) * 0xc + 8) = 9;
      *(undefined4 *)(*plVar5 + (ulong)(*puVar7 - 1) * 0xc) = 0x7f7fffff;
      *(undefined4 *)(*plVar5 + (ulong)(*puVar7 - 1) * 0xc + 4) =
           *(undefined4 *)(*plVar5 + (ulong)(*puVar7 - 2) * 0xc + 4);
      FUN_02e9b180(plVar5);
      if (param_3 == 0) {
        if (*piVar1 == 2) {
          if ((((*puVar7 != 0) &&
               (*(float *)(*plVar5 + 4) = *(float *)(*plVar5 + 4) + 1.0, 1 < *puVar7)) &&
              (*(float *)(*plVar5 + 0x10) = *(float *)(*plVar5 + 0x10) + 1.0, 2 < *puVar7)) &&
             (((*(float *)(*plVar5 + 0x1c) = *(float *)(*plVar5 + 0x1c) + 1.0, 3 < *puVar7 &&
               (*(float *)(*plVar5 + 0x28) = *(float *)(*plVar5 + 0x28) + 1.0, 4 < *puVar7)) &&
              (*(float *)(*plVar5 + 0x34) = *(float *)(*plVar5 + 0x34) + 1.0, 5 < *puVar7)))) {
            uVar4 = 5;
            lVar6 = 0x40;
            do {
              uVar4 = uVar4 + 1;
              *(float *)(*plVar5 + lVar6) = *(float *)(*plVar5 + lVar6) + 1.0;
              lVar6 = lVar6 + 0xc;
            } while (uVar4 < *puVar7);
          }
          *piVar1 = 0;
          FUN_02e9b180(plVar5);
        }
        else if (*piVar1 == 0) {
          *piVar1 = 4;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


