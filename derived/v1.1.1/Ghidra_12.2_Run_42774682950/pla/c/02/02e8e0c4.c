/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8e0c4; name: FUN_02e8e0c4
 */


undefined8 FUN_02e8e0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long local_60;
  undefined2 local_58 [2];
  undefined1 auStack_54 [4];
  
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 != (long *)0x0) {
    uVar4 = *(uint *)(plVar7 + 1);
    if (uVar4 == 0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else {
      do {
        lVar6 = *plVar7 + (ulong)uVar4 * 0x28;
        if (*(long *)(lVar6 + -0x10) == 0) {
          uVar3 = FUN_02ed2b48(*(undefined8 *)(lVar6 + -0x28),param_2,0);
          if ((uVar3 & 1) == 0) {
            plVar7 = (long *)FUN_02eec0d0(*(undefined8 *)(lVar6 + -0x28),param_3,local_58,auStack_54
                                          ,lVar6 + -0x20,lVar6 + -0x18);
            if (plVar7 != (long *)0x0) {
              *(undefined2 *)(param_1 + 0x68 + (ulong)(*(int *)(param_1 + 0x68) - 1) * 2 + 4) =
                   local_58[0];
              *(int *)(param_1 + 0x30) = (int)plVar7[2];
              (**(code **)(*plVar7 + 0x18))();
              return 0;
            }
            plVar7 = *(long **)(param_1 + 0x60);
            if ((int)plVar7[1] != 0) {
              return 1;
            }
            break;
          }
          iVar1 = *(int *)(param_1 + 0x68);
          iVar5 = iVar1 + -1;
          *(int *)(param_1 + 0x68) = iVar5;
          if (iVar5 != 0) {
            uVar3 = (ulong)(iVar1 - 2);
            do {
              if (((uint)uVar3 < 0x20) &&
                 ((1L << (uVar3 & 0x3f) & (ulong)*(uint *)(param_1 + 0xac)) != 0)) break;
              *(uint *)(param_1 + 0x68) = (uint)uVar3;
              uVar3 = uVar3 - 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          plVar7 = *(long **)(param_1 + 0x60);
          FUN_02ea7df0(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x28 + -0x28);
          *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
        }
        else {
          local_60 = 0;
          FUN_02ec761c(*(undefined8 *)(lVar6 + -0x10),*(undefined8 *)(lVar6 + -8),&local_60);
          plVar7 = *(long **)(param_1 + 0x60);
          FUN_02ea7df0(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x28 + -0x28);
          *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
          if (local_60 == 0) {
            lVar6 = *(long *)(param_1 + 0x60);
            *(undefined8 *)(param_1 + 0x60) = 0;
            if ((lVar6 != 0) &&
               (iVar1 = *(int *)(lVar6 + 0x10) + -1, *(int *)(lVar6 + 0x10) = iVar1, iVar1 == 0)) {
              FUN_02ea7e60(lVar6);
              (*DAT_0442d150)(0,lVar6);
            }
            bVar2 = true;
            lVar6 = local_60;
          }
          else {
            *(int *)(local_60 + 0x10) = *(int *)(local_60 + 0x10) + 1;
            lVar6 = *(long *)(param_1 + 0x60);
            *(long *)(param_1 + 0x60) = local_60;
            if ((lVar6 != 0) &&
               (iVar1 = *(int *)(lVar6 + 0x10) + -1, *(int *)(lVar6 + 0x10) = iVar1, iVar1 == 0)) {
              FUN_02ea7e60(lVar6);
              (*DAT_0442d150)(0,lVar6);
            }
            bVar2 = false;
            lVar6 = local_60;
          }
          if ((lVar6 != 0) &&
             (iVar1 = *(int *)(lVar6 + 0x10) + -1, *(int *)(lVar6 + 0x10) = iVar1, iVar1 == 0)) {
            local_60 = lVar6;
            FUN_02ea7e60(lVar6);
            (*DAT_0442d150)(0,lVar6);
          }
          local_60 = 0;
          if (bVar2) {
            return 1;
          }
        }
        plVar7 = *(long **)(param_1 + 0x60);
        uVar4 = *(uint *)(plVar7 + 1);
      } while (uVar4 != 0);
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (plVar7 == (long *)0x0) {
        return 1;
      }
    }
    iVar1 = (int)plVar7[2] + -1;
    *(int *)(plVar7 + 2) = iVar1;
    if (iVar1 == 0) {
      FUN_02ea7e60(plVar7);
      (*DAT_0442d150)(0,plVar7);
    }
  }
  return 1;
}


